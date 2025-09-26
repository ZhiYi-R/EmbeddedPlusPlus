/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H563_SEC_SAI1_HPP
#define EMBEDDED_PP_STM32H563_SEC_SAI1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Serial audio interface */
namespace STM32H563::SEC_SAI1 {

    /** @brief SAI global configuration register */
    using SAI_GCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization inputs These bits are set and cleared by software. Refer to for information on how to program this field. These bits must be set when both audio blocks (A and B) are disabled. They are meaningful if one of the two audio blocks is defined to operate in synchronous mode with an external SAI (SYNCEN[1:0] = 10 in SAI_ACR1 or in SAI_BCR1 registers). */
    using SAI_GCR_SYNCIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization outputs These bits are set and cleared by software. */
    using SAI_GCR_SYNCOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization output signals. SYNCOUT[1:0] should be configured as 'No synchronization output signals' when audio block is configured as SPDIF (value: 0)
     *          - B_0x1: Block A used for further synchronization for others SAI (value: 1)
     *          - B_0x2: Block B used for further synchronization for others SAI (value: 2)
     *          - B_0x3: Reserved. These bits must be set when both audio block (A and B) are disabled. (value: 3)
     */
        /** @brief No synchronization output signals. SYNCOUT[1:0] should be configured as 'No synchronization output signals' when audio block is configured as SPDIF */
    constexpr std::uint32_t SAI_GCR_SYNCOUT_B_0x0 = 0;
        /** @brief Block A used for further synchronization for others SAI */
    constexpr std::uint32_t SAI_GCR_SYNCOUT_B_0x1 = 1;
        /** @brief Block B used for further synchronization for others SAI */
    constexpr std::uint32_t SAI_GCR_SYNCOUT_B_0x2 = 2;
        /** @brief Reserved. These bits must be set when both audio block (A and B) are disabled. */
    constexpr std::uint32_t SAI_GCR_SYNCOUT_B_0x3 = 3;

    /** @brief SAI configuration register 1 */
    using SAI_ACR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAIx audio block mode These bits are set and cleared by software. They must be configured when SAIx audio block is disabled. Note: When the audio block is configured in SPDIF mode, the master transmitter mode is forced (MODE[1:0] = 00). */
    using SAI_ACR1_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master transmitter (value: 0)
     *          - B_0x1: Master receiver (value: 1)
     *          - B_0x2: Slave transmitter (value: 2)
     *          - B_0x3: Slave receiver (value: 3)
     */
        /** @brief Master transmitter */
    constexpr std::uint32_t SAI_ACR1_MODE_B_0x0 = 0;
        /** @brief Master receiver */
    constexpr std::uint32_t SAI_ACR1_MODE_B_0x1 = 1;
        /** @brief Slave transmitter */
    constexpr std::uint32_t SAI_ACR1_MODE_B_0x2 = 2;
        /** @brief Slave receiver */
    constexpr std::uint32_t SAI_ACR1_MODE_B_0x3 = 3;

    /** @brief Protocol configuration These bits are set and cleared by software. These bits have to be configured when the audio block is disabled. */
    using SAI_ACR1_PRTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Free protocol. Free protocol allows to use the powerful configuration of the audio block to address a specific audio protocol (such as I2S, LSB/MSB justified, TDM, PCM/DSP...) by setting most of the configuration register bits as well as frame configuration register. (value: 0)
     *          - B_0x1: SPDIF protocol (value: 1)
     *          - B_0x2: AC'97 protocol (value: 2)
     */
        /** @brief Free protocol. Free protocol allows to use the powerful configuration of the audio block to address a specific audio protocol (such as I2S, LSB/MSB justified, TDM, PCM/DSP...) by setting most of the configuration register bits as well as frame configuration register. */
    constexpr std::uint32_t SAI_ACR1_PRTCFG_B_0x0 = 0;
        /** @brief SPDIF protocol */
    constexpr std::uint32_t SAI_ACR1_PRTCFG_B_0x1 = 1;
        /** @brief AC'97 protocol */
    constexpr std::uint32_t SAI_ACR1_PRTCFG_B_0x2 = 2;

    /** @brief Data size These bits are set and cleared by software. These bits are ignored when the SPDIF protocols are selected (bit PRTCFG[1:0]), because the frame and the data size are fixed in such case. When the companding mode is selected through COMP[1:0] bits, DS[1:0] are ignored since the data size is fixed to 8 bits by the algorithm. These bits must be configured when the audio block is disabled. */
    using SAI_ACR1_DS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: 8 bits (value: 2)
     *          - B_0x3: 10 bits (value: 3)
     *          - B_0x4: 16 bits (value: 4)
     *          - B_0x5: 20 bits (value: 5)
     *          - B_0x6: 24 bits (value: 6)
     *          - B_0x7: 32 bits (value: 7)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t SAI_ACR1_DS_B_0x2 = 2;
        /** @brief 10 bits */
    constexpr std::uint32_t SAI_ACR1_DS_B_0x3 = 3;
        /** @brief 16 bits */
    constexpr std::uint32_t SAI_ACR1_DS_B_0x4 = 4;
        /** @brief 20 bits */
    constexpr std::uint32_t SAI_ACR1_DS_B_0x5 = 5;
        /** @brief 24 bits */
    constexpr std::uint32_t SAI_ACR1_DS_B_0x6 = 6;
        /** @brief 32 bits */
    constexpr std::uint32_t SAI_ACR1_DS_B_0x7 = 7;

    /** @brief Least significant bit first This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in AC'97 audio protocol since AC'97 data are always transferred with the MSB first. This bit has no meaning in SPDIF audio protocol since in SPDIF data are always transferred with LSB first. */
    using SAI_ACR1_LSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data are transferred with MSB first (value: 0)
     *          - B_0x1: Data are transferred with LSB first (value: 1)
     */
        /** @brief Data are transferred with MSB first */
    constexpr std::uint32_t SAI_ACR1_LSBFIRST_B_0x0 = 0;
        /** @brief Data are transferred with LSB first */
    constexpr std::uint32_t SAI_ACR1_LSBFIRST_B_0x1 = 1;

    /** @brief Clock strobing edge This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in SPDIF audio protocol. */
    using SAI_ACR1_CKSTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signals generated by the SAI change on SCK rising edge, while signals received by the SAI are sampled on the SCK falling edge. (value: 0)
     *          - B_0x1: Signals generated by the SAI change on SCK falling edge, while signals received by the SAI are sampled on the SCK rising edge. (value: 1)
     */
        /** @brief Signals generated by the SAI change on SCK rising edge, while signals received by the SAI are sampled on the SCK falling edge. */
    constexpr std::uint32_t SAI_ACR1_CKSTR_B_0x0 = 0;
        /** @brief Signals generated by the SAI change on SCK falling edge, while signals received by the SAI are sampled on the SCK rising edge. */
    constexpr std::uint32_t SAI_ACR1_CKSTR_B_0x1 = 1;

    /** @brief Synchronization enable These bits are set and cleared by software. They must be configured when the audio subblock is disabled. Note: The audio subblock should be configured as asynchronous when SPDIF mode is enabled. */
    using SAI_ACR1_SYNCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: audio subblock in asynchronous mode. (value: 0)
     *          - B_0x1: audio subblock is synchronous with the other internal audio subblock. In this case, the audio subblock must be configured in slave mode (value: 1)
     *          - B_0x2: audio subblock is synchronous with an external SAI embedded peripheral. In this case the audio subblock should be configured in Slave mode. (value: 2)
     */
        /** @brief audio subblock in asynchronous mode. */
    constexpr std::uint32_t SAI_ACR1_SYNCEN_B_0x0 = 0;
        /** @brief audio subblock is synchronous with the other internal audio subblock. In this case, the audio subblock must be configured in slave mode */
    constexpr std::uint32_t SAI_ACR1_SYNCEN_B_0x1 = 1;
        /** @brief audio subblock is synchronous with an external SAI embedded peripheral. In this case the audio subblock should be configured in Slave mode. */
    constexpr std::uint32_t SAI_ACR1_SYNCEN_B_0x2 = 2;

    /** @brief Mono mode This bit is set and cleared by software. It is meaningful only when the number of slots is equal to 2. When the mono mode is selected, slot 0 data are duplicated on slot 1 when the audio block operates as a transmitter. In reception mode, the slot1 is discarded and only the data received from slot 0 are stored. Refer to for more details. */
    using SAI_ACR1_MONO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stereo mode (value: 0)
     *          - B_0x1: Mono mode. (value: 1)
     */
        /** @brief Stereo mode */
    constexpr std::uint32_t SAI_ACR1_MONO_B_0x0 = 0;
        /** @brief Mono mode. */
    constexpr std::uint32_t SAI_ACR1_MONO_B_0x1 = 1;

    /** @brief Output drive This bit is set and cleared by software. Note: This bit has to be set before enabling the audio block and after the audio block configuration. */
    using SAI_ACR1_OUTDRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Audio block output driven when SAIEN is set (value: 0)
     *          - B_0x1: Audio block output driven immediately after the setting of this bit. (value: 1)
     */
        /** @brief Audio block output driven when SAIEN is set */
    constexpr std::uint32_t SAI_ACR1_OUTDRIV_B_0x0 = 0;
        /** @brief Audio block output driven immediately after the setting of this bit. */
    constexpr std::uint32_t SAI_ACR1_OUTDRIV_B_0x1 = 1;

    /** @brief Audio block enable This bit is set by software. To switch off the audio block, the application software must program this bit to 0 and poll the bit till it reads back 0, meaning that the block is completely disabled. Before setting this bit to 1, check that it is set to 0, otherwise the enable command is not taken into account. This bit allows controlling the state of the SAI audio block. If it is disabled when an audio frame transfer is ongoing, the ongoing transfer completes and the cell is fully disabled at the end of this audio frame transfer. Note: When the SAI block (A or B) is configured in master mode, the clock must be present on the SAI block input before setting SAIEN bit. */
    using SAI_ACR1_SAIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI audio block disabled (value: 0)
     *          - B_0x1: SAI audio block enabled. (value: 1)
     */
        /** @brief SAI audio block disabled */
    constexpr std::uint32_t SAI_ACR1_SAIEN_B_0x0 = 0;
        /** @brief SAI audio block enabled. */
    constexpr std::uint32_t SAI_ACR1_SAIEN_B_0x1 = 1;

    /** @brief DMA enable This bit is set and cleared by software. Note: Since the audio block defaults to operate as a transmitter after reset, the MODE[1:0] bits must be configured before setting DMAEN to avoid a DMA request in receiver mode. */
    using SAI_ACR1_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled (value: 0)
     *          - B_0x1: DMA enabled (value: 1)
     */
        /** @brief DMA disabled */
    constexpr std::uint32_t SAI_ACR1_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled */
    constexpr std::uint32_t SAI_ACR1_DMAEN_B_0x1 = 1;

    /** @brief No divider This bit is set and cleared by software. */
    using SAI_ACR1_NODIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the ratio between the Master clock generator and frame synchronization is fixed to 256 or 512 (value: 0)
     *          - B_0x1: the ratio between the Master clock generator and frame synchronization depends on FRL[7:0] (value: 1)
     */
        /** @brief the ratio between the Master clock generator and frame synchronization is fixed to 256 or 512 */
    constexpr std::uint32_t SAI_ACR1_NODIV_B_0x0 = 0;
        /** @brief the ratio between the Master clock generator and frame synchronization depends on FRL[7:0] */
    constexpr std::uint32_t SAI_ACR1_NODIV_B_0x1 = 1;

    /** @brief Master clock divider These bits are set and cleared by software. Otherwise, The master clock frequency is calculated according to the formula given in . These bits have no meaning when the audio block is slave. They have to be configured when the audio block is disabled. */
    using SAI_ACR1_MCKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Divides by 1 the kernel clock input (sai_x_ker_ck). (value: 0)
     */
        /** @brief Divides by 1 the kernel clock input (sai_x_ker_ck). */
    constexpr std::uint32_t SAI_ACR1_MCKDIV_B_0x0 = 0;

    /** @brief Oversampling ratio for master clock This bit is meaningful only when NODIV bit is set to 0. */
    using SAI_ACR1_OSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master clock frequency = FFS x 256 (value: 0)
     *          - B_0x1: Master clock frequency = FFS x 512 (value: 1)
     */
        /** @brief Master clock frequency = FFS x 256 */
    constexpr std::uint32_t SAI_ACR1_OSR_B_0x0 = 0;
        /** @brief Master clock frequency = FFS x 512 */
    constexpr std::uint32_t SAI_ACR1_OSR_B_0x1 = 1;

    /** @brief Master clock generation enable */
    using SAI_ACR1_MCKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The master clock is not generated (value: 0)
     *          - B_0x1: The master clock is generated independently of SAIEN bit (value: 1)
     */
        /** @brief The master clock is not generated */
    constexpr std::uint32_t SAI_ACR1_MCKEN_B_0x0 = 0;
        /** @brief The master clock is generated independently of SAIEN bit */
    constexpr std::uint32_t SAI_ACR1_MCKEN_B_0x1 = 1;

    /** @brief SAI configuration register 2 */
    using SAI_ACR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO threshold. This bit is set and cleared by software. */
    using SAI_ACR2_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO empty (value: 0)
     *          - B_0x1: FIFO (value: 1)
     *          - B_0x2: FIFO (value: 2)
     *          - B_0x3: FIFO (value: 3)
     *          - B_0x4: FIFO full (value: 4)
     */
        /** @brief FIFO empty */
    constexpr std::uint32_t SAI_ACR2_FTH_B_0x0 = 0;
        /** @brief FIFO */
    constexpr std::uint32_t SAI_ACR2_FTH_B_0x1 = 1;
        /** @brief FIFO */
    constexpr std::uint32_t SAI_ACR2_FTH_B_0x2 = 2;
        /** @brief FIFO */
    constexpr std::uint32_t SAI_ACR2_FTH_B_0x3 = 3;
        /** @brief FIFO full */
    constexpr std::uint32_t SAI_ACR2_FTH_B_0x4 = 4;

    /** @brief FIFO flush. This bit is set by software. It is always read as 0. This bit should be configured when the SAI is disabled. */
    using SAI_ACR2_FFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO flush. (value: 0)
     *          - B_0x1: FIFO flush. Programming this bit to 1 triggers the FIFO Flush. All the internal FIFO pointers (read and write) are cleared. In this case data still present in the FIFO are lost (no more transmission or received data lost). Before flushing, SAI DMA stream/interrupt must be disabled (value: 1)
     */
        /** @brief No FIFO flush. */
    constexpr std::uint32_t SAI_ACR2_FFLUSH_B_0x0 = 0;
        /** @brief FIFO flush. Programming this bit to 1 triggers the FIFO Flush. All the internal FIFO pointers (read and write) are cleared. In this case data still present in the FIFO are lost (no more transmission or received data lost). Before flushing, SAI DMA stream/interrupt must be disabled */
    constexpr std::uint32_t SAI_ACR2_FFLUSH_B_0x1 = 1;

    /** @brief Tristate management on data line. This bit is set and cleared by software. It is meaningful only if the audio block is configured as a transmitter. This bit is not used when the audio block is configured in SPDIF mode. It should be configured when SAI is disabled. Refer to for more details. */
    using SAI_ACR2_TRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SD output line is still driven by the SAI when a slot is inactive. (value: 0)
     *          - B_0x1: SD output line is released (HI-Z) at the end of the last data bit of the last active slot if the next one is inactive. (value: 1)
     */
        /** @brief SD output line is still driven by the SAI when a slot is inactive. */
    constexpr std::uint32_t SAI_ACR2_TRIS_B_0x0 = 0;
        /** @brief SD output line is released (HI-Z) at the end of the last data bit of the last active slot if the next one is inactive. */
    constexpr std::uint32_t SAI_ACR2_TRIS_B_0x1 = 1;

    /** @brief Mute. This bit is set and cleared by software. It is meaningful only when the audio block operates as a transmitter. The MUTE value is linked to value of MUTEVAL if the number of slots is lower or equal to 2, or equal to 0 if it is greater than 2. Refer to for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks. */
    using SAI_ACR2_MUTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No mute mode. (value: 0)
     *          - B_0x1: Mute mode enabled. (value: 1)
     */
        /** @brief No mute mode. */
    constexpr std::uint32_t SAI_ACR2_MUTE_B_0x0 = 0;
        /** @brief Mute mode enabled. */
    constexpr std::uint32_t SAI_ACR2_MUTE_B_0x1 = 1;

    /** @brief Mute value. This bit is set and cleared by software.It must be written before enabling the audio block: SAIEN. This bit is meaningful only when the audio block operates as a transmitter, the number of slots is lower or equal to 2 and the MUTE bit is set. If more slots are declared, the bit value sent during the transmission in mute mode is equal to 0, whatever the value of MUTEVAL. if the number of slot is lower or equal to 2 and MUTEVAL = 1, the MUTE value transmitted for each slot is the one sent during the previous frame. Refer to for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks. */
    using SAI_ACR2_MUTEVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bit value 0 is sent during the mute mode. (value: 0)
     *          - B_0x1: Last values are sent during the mute mode. (value: 1)
     */
        /** @brief Bit value 0 is sent during the mute mode. */
    constexpr std::uint32_t SAI_ACR2_MUTEVAL_B_0x0 = 0;
        /** @brief Last values are sent during the mute mode. */
    constexpr std::uint32_t SAI_ACR2_MUTEVAL_B_0x1 = 1;

    /** @brief Mute counter. These bits are set and cleared by software. They are used only in reception mode. The value set in these bits is compared to the number of consecutive mute frames detected in reception. When the number of mute frames is equal to this value, the flag MUTEDET is set and an interrupt is generated if bit MUTEDETIE is set. Refer to for more details. */
    using SAI_ACR2_MUTECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Complement bit. This bit is set and cleared by software. It defines the type of complement to be used for companding mode Note: This bit has effect only when the companding mode is -Law algorithm or A-Law algorithm. */
    using SAI_ACR2_CPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1's complement representation. (value: 0)
     *          - B_0x1: 2's complement representation. (value: 1)
     */
        /** @brief 1's complement representation. */
    constexpr std::uint32_t SAI_ACR2_CPL_B_0x0 = 0;
        /** @brief 2's complement representation. */
    constexpr std::uint32_t SAI_ACR2_CPL_B_0x1 = 1;

    /** @brief Companding mode. These bits are set and cleared by software. The -Law and the A-Law log are a part of the CCITT G.711 recommendation, the type of complement that is used depends on CPL bit. The data expansion or data compression are determined by the state of bit MODE[0]. The data compression is applied if the audio block is configured as a transmitter. The data expansion is automatically applied when the audio block is configured as a receiver. Refer to for more details. Note: Companding mode is applicable only when Free protocol mode is selected. */
    using SAI_ACR2_COMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No companding algorithm (value: 0)
     *          - B_0x2: -Law algorithm (value: 2)
     *          - B_0x3: A-Law algorithm (value: 3)
     */
        /** @brief No companding algorithm */
    constexpr std::uint32_t SAI_ACR2_COMP_B_0x0 = 0;
        /** @brief -Law algorithm */
    constexpr std::uint32_t SAI_ACR2_COMP_B_0x2 = 2;
        /** @brief A-Law algorithm */
    constexpr std::uint32_t SAI_ACR2_COMP_B_0x3 = 3;

    /** @brief SAI frame configuration register */
    using SAI_AFRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame length. These bits are set and cleared by software. They define the audio frame length expressed in number of SCK clock cycles: the number of bits in the frame is equal to FRL[7:0] + 1. The minimum number of bits to transfer in an audio frame must be equal to 8, otherwise the audio block behaves in an unexpected way. This is the case when the data size is 8 bits and only one slot 0 is defined in NBSLOT[4:0] of SAI_xSLOTR register (NBSLOT[3:0] = 0000). In master mode, if the master clock (available on MCLK_x pin) is used, the frame length should be aligned with a number equal to a power of 2, ranging from 8 to 256. When the master clock is not used (NODIV = 1), it is recommended to program the frame length to an value ranging from 8 to 256. These bits are meaningless and are not used in AC'97 or SPDIF audio block configuration. They must be configured when the audio block is disabled. */
    using SAI_AFRCR_FRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame synchronization active level length. These bits are set and cleared by software. They specify the length in number of bit clock (SCK) + 1 (FSALL[6:0] + 1) of the active level of the FS signal in the audio frame These bits are meaningless and are not used in AC'97 or SPDIF audio block configuration. They must be configured when the audio block is disabled. */
    using SAI_AFRCR_FSALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame synchronization definition. This bit is set and cleared by software. When the bit is set, the number of slots defined in the SAI_xSLOTR register has to be even. It means that half of this number of slots are dedicated to the left channel and the other slots for the right channel (e.g: this bit has to be set for I2S or MSB/LSB-justified protocols...). This bit is meaningless and is not used in AC'97 or SPDIF audio block configuration. It must be configured when the audio block is disabled. */
    using SAI_AFRCR_FSDEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS signal is a start frame signal (value: 0)
     *          - B_0x1: FS signal is a start of frame signal + channel side identification (value: 1)
     */
        /** @brief FS signal is a start frame signal */
    constexpr std::uint32_t SAI_AFRCR_FSDEF_B_0x0 = 0;
        /** @brief FS signal is a start of frame signal + channel side identification */
    constexpr std::uint32_t SAI_AFRCR_FSDEF_B_0x1 = 1;

    /** @brief Frame synchronization polarity. This bit is set and cleared by software. It is used to configure the level of the start of frame on the FS signal. It is meaningless and is not used in AC'97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled. */
    using SAI_AFRCR_FSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS is active low (falling edge) (value: 0)
     *          - B_0x1: FS is active high (rising edge) (value: 1)
     */
        /** @brief FS is active low (falling edge) */
    constexpr std::uint32_t SAI_AFRCR_FSPOL_B_0x0 = 0;
        /** @brief FS is active high (rising edge) */
    constexpr std::uint32_t SAI_AFRCR_FSPOL_B_0x1 = 1;

    /** @brief Frame synchronization offset. This bit is set and cleared by software. It is meaningless and is not used in AC'97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled. */
    using SAI_AFRCR_FSOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS is asserted on the first bit of the slot 0. (value: 0)
     *          - B_0x1: FS is asserted one bit before the first bit of the slot 0. (value: 1)
     */
        /** @brief FS is asserted on the first bit of the slot 0. */
    constexpr std::uint32_t SAI_AFRCR_FSOFF_B_0x0 = 0;
        /** @brief FS is asserted one bit before the first bit of the slot 0. */
    constexpr std::uint32_t SAI_AFRCR_FSOFF_B_0x1 = 1;

    /** @brief SAI slot register */
    using SAI_ASLOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief First bit offset These bits are set and cleared by software. The value set in this bitfield defines the position of the first data transfer bit in the slot. It represents an offset value. In transmission mode, the bits outside the data field are forced to 0. In reception mode, the extra received bits are discarded. These bits must be set when the audio block is disabled. They are ignored in AC'97 or SPDIF mode. */
    using SAI_ASLOTR_FBOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot size This bits is set and cleared by software. The slot size must be higher or equal to the data size. If this condition is not respected, the behavior of the SAI is undetermined. Refer to for information on how to drive SD line. These bits must be set when the audio block is disabled. They are ignored in AC'97 or SPDIF mode. */
    using SAI_ASLOTR_SLOTSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The slot size is equivalent to the data size (specified in DS[3:0] in the SAI_xCR1 register). (value: 0)
     *          - B_0x1: 16-bit (value: 1)
     *          - B_0x2: 32-bit (value: 2)
     */
        /** @brief The slot size is equivalent to the data size (specified in DS[3:0] in the SAI_xCR1 register). */
    constexpr std::uint32_t SAI_ASLOTR_SLOTSZ_B_0x0 = 0;
        /** @brief 16-bit */
    constexpr std::uint32_t SAI_ASLOTR_SLOTSZ_B_0x1 = 1;
        /** @brief 32-bit */
    constexpr std::uint32_t SAI_ASLOTR_SLOTSZ_B_0x2 = 2;

    /** @brief Number of slots in an audio frame. These bits are set and cleared by software. The value set in this bitfield represents the number of slots + 1 in the audio frame (including the number of inactive slots). The maximum number of slots is 16. The number of slots should be even if FSDEF bit in the SAI_xFRCR register is set. The number of slots must be configured when the audio block is disabled. They are ignored in AC'97 or SPDIF mode. */
    using SAI_ASLOTR_NBSLOT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot enable. These bits are set and cleared by software. Each SLOTEN bit corresponds to a slot position from 0 to 15 (maximum 16 slots). The slot must be enabled when the audio block is disabled. They are ignored in AC'97 or SPDIF mode. */
    using SAI_ASLOTR_SLOTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Inactive slot. (value: 0)
     *          - B_0x1: Active slot. (value: 1)
     */
        /** @brief Inactive slot. */
    constexpr std::uint32_t SAI_ASLOTR_SLOTEN_B_0x0 = 0;
        /** @brief Active slot. */
    constexpr std::uint32_t SAI_ASLOTR_SLOTEN_B_0x1 = 1;

    /** @brief SAI interrupt mask register */
    using SAI_AIM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun/underrun interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the OVRUDR bit in the SAI_xSR register is set. */
    using SAI_AIM_OVRUDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_OVRUDRIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_OVRUDRIE_B_0x1 = 1;

    /** @brief Mute detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the MUTEDET bit in the SAI_xSR register is set. This bit has a meaning only if the audio block is configured in receiver mode. */
    using SAI_AIM_MUTEDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_MUTEDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_MUTEDETIE_B_0x1 = 1;

    /** @brief Wrong clock configuration interrupt enable. This bit is set and cleared by software. This bit is taken into account only if the audio block is configured as a master (MODE[1] = 0) and NODIV = 0. It generates an interrupt if the WCKCFG flag in the SAI_xSR register is set. Note: This bit is used only in Free protocol mode and is meaningless in other modes. */
    using SAI_AIM_WCKCFGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_WCKCFGIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_WCKCFGIE_B_0x1 = 1;

    /** @brief FIFO request interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the FREQ bit in the SAI_xSR register is set. Since the audio block defaults to operate as a transmitter after reset, the MODE bit must be configured before setting FREQIE to avoid a parasitic interrupt in receiver mode, */
    using SAI_AIM_FREQIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_FREQIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_FREQIE_B_0x1 = 1;

    /** @brief Codec not ready interrupt enable (AC'97). This bit is set and cleared by software. When the interrupt is enabled, the audio block detects in the slot 0 (tag0) of the AC'97 frame if the Codec connected to this line is ready or not. If it is not ready, the CNRDY flag in the SAI_xSR register is set and an interrupt is generated. This bit has a meaning only if the AC'97 mode is selected through PRTCFG[1:0] bits and the audio block is operates as a receiver. */
    using SAI_AIM_CNRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_CNRDYIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_CNRDYIE_B_0x1 = 1;

    /** @brief Anticipated frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the AFSDET bit in the SAI_xSR register is set. This bit is meaningless in AC'97, SPDIF mode or when the audio block operates as a master. */
    using SAI_AIM_AFSDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_AFSDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_AFSDETIE_B_0x1 = 1;

    /** @brief Late frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the LFSDET bit is set in the SAI_xSR register. This bit is meaningless in AC'97, SPDIF mode or when the audio block operates as a master. */
    using SAI_AIM_LFSDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_LFSDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_LFSDETIE_B_0x1 = 1;

    /** @brief SAI status register */
    using SAI_ASR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun / underrun. This bit is read only. The overrun and underrun conditions can occur only when the audio block is configured as a receiver and a transmitter, respectively. It can generate an interrupt if OVRUDRIE bit is set in SAI_xIM register. This flag is cleared when the software sets COVRUDR bit in SAI_xCLRFR register. */
    using SAI_ASR_OVRUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun/underrun error. (value: 0)
     *          - B_0x1: Overrun/underrun error detection. (value: 1)
     */
        /** @brief No overrun/underrun error. */
    constexpr std::uint32_t SAI_ASR_OVRUDR_B_0x0 = 0;
        /** @brief Overrun/underrun error detection. */
    constexpr std::uint32_t SAI_ASR_OVRUDR_B_0x1 = 1;

    /** @brief Mute detection. This bit is read only. This flag is set if consecutive 0 values are received in each slot of a given audio frame and for a consecutive number of audio frames (set in the MUTECNT bit in the SAI_xCR2 register). It can generate an interrupt if MUTEDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets bit CMUTEDET in the SAI_xCLRFR register. */
    using SAI_ASR_MUTEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MUTE detection on the SD input line (value: 0)
     *          - B_0x1: MUTE value detected on the SD input line (0 value) for a specified number of consecutive audio frame (value: 1)
     */
        /** @brief No MUTE detection on the SD input line */
    constexpr std::uint32_t SAI_ASR_MUTEDET_B_0x0 = 0;
        /** @brief MUTE value detected on the SD input line (0 value) for a specified number of consecutive audio frame */
    constexpr std::uint32_t SAI_ASR_MUTEDET_B_0x1 = 1;

    /** @brief Wrong clock configuration flag. This bit is read only. This bit is used only when the audio block operates in master mode (MODE[1] = 0) and NODIV = 0. It can generate an interrupt if WCKCFGIE bit is set in SAI_xIM register. This flag is cleared when the software sets CWCKCFG bit in SAI_xCLRFR register. */
    using SAI_ASR_WCKCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock configuration is correct (value: 0)
     *          - B_0x1: Clock configuration does not respect the rule concerning the frame length specification defined in (configuration of FRL[7:0] bit in the SAI_xFRCR register) (value: 1)
     */
        /** @brief Clock configuration is correct */
    constexpr std::uint32_t SAI_ASR_WCKCFG_B_0x0 = 0;
        /** @brief Clock configuration does not respect the rule concerning the frame length specification defined in (configuration of FRL[7:0] bit in the SAI_xFRCR register) */
    constexpr std::uint32_t SAI_ASR_WCKCFG_B_0x1 = 1;

    /** @brief FIFO request. This bit is read only. The request depends on the audio block configuration: If the block is configured in transmission mode, the FIFO request is related to a write request operation in the SAI_xDR. If the block configured in reception, the FIFO request related to a read request operation from the SAI_xDR. This flag can generate an interrupt if FREQIE bit is set in SAI_xIM register. */
    using SAI_ASR_FREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO request. (value: 0)
     *          - B_0x1: FIFO request to read or to write the SAI_xDR. (value: 1)
     */
        /** @brief No FIFO request. */
    constexpr std::uint32_t SAI_ASR_FREQ_B_0x0 = 0;
        /** @brief FIFO request to read or to write the SAI_xDR. */
    constexpr std::uint32_t SAI_ASR_FREQ_B_0x1 = 1;

    /** @brief Codec not ready. This bit is read only. This bit is used only when the AC'97 audio protocol is selected in the SAI_xCR1 register and configured in receiver mode. It can generate an interrupt if CNRDYIE bit is set in SAI_xIM register. This flag is cleared when the software sets CCNRDY bit in SAI_xCLRFR register. */
    using SAI_ASR_CNRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External AC'97 Codec is ready (value: 0)
     *          - B_0x1: External AC'97 Codec is not ready (value: 1)
     */
        /** @brief External AC'97 Codec is ready */
    constexpr std::uint32_t SAI_ASR_CNRDY_B_0x0 = 0;
        /** @brief External AC'97 Codec is not ready */
    constexpr std::uint32_t SAI_ASR_CNRDY_B_0x1 = 1;

    /** @brief Anticipated frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC'97 or SPDIF mode. It can generate an interrupt if AFSDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets CAFSDET bit in SAI_xCLRFR register. */
    using SAI_ASR_AFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error. (value: 0)
     *          - B_0x1: Frame synchronization signal is detected earlier than expected. (value: 1)
     */
        /** @brief No error. */
    constexpr std::uint32_t SAI_ASR_AFSDET_B_0x0 = 0;
        /** @brief Frame synchronization signal is detected earlier than expected. */
    constexpr std::uint32_t SAI_ASR_AFSDET_B_0x1 = 1;

    /** @brief Late frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC'97 or SPDIF mode. It can generate an interrupt if LFSDETIE bit is set in the SAI_xIM register. This flag is cleared when the software sets bit CLFSDET in SAI_xCLRFR register */
    using SAI_ASR_LFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error. (value: 0)
     *          - B_0x1: Frame synchronization signal is not present at the right time. (value: 1)
     */
        /** @brief No error. */
    constexpr std::uint32_t SAI_ASR_LFSDET_B_0x0 = 0;
        /** @brief Frame synchronization signal is not present at the right time. */
    constexpr std::uint32_t SAI_ASR_LFSDET_B_0x1 = 1;

    /** @brief FIFO level threshold. This bit is read only. The FIFO level threshold flag is managed only by hardware and its setting depends on SAI block configuration (transmitter or receiver mode). Others: Reserved */
    using SAI_ASR_FLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO empty (transmitter and receiver modes) (value: 0)
     *          - B_0x1: FIFO less than or equal 1/4 but not empty (transmitter mode), FIFO 1/4 but not empty (receiver mode) (value: 1)
     *          - B_0x2: 1/4 FIFO less than or equal 1/2 (transmitter mode), 1/4 less than or equal FIFO 1/2 (receiver mode) (value: 2)
     *          - B_0x3: 1/2 FIFO less than or equal 3/4 (transmitter mode), 1/2 less than or equal FIFO 3/4 (receiver mode) (value: 3)
     *          - B_0x4: 3/4 FIFO but not full (transmitter mode), 3/4 less than or equal FIFO but not full (receiver mode) (value: 4)
     *          - B_0x5: FIFO full (transmitter and receiver modes) (value: 5)
     */
        /** @brief FIFO empty (transmitter and receiver modes) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x0 = 0;
        /** @brief FIFO less than or equal 1/4 but not empty (transmitter mode), FIFO 1/4 but not empty (receiver mode) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x1 = 1;
        /** @brief 1/4 FIFO less than or equal 1/2 (transmitter mode), 1/4 less than or equal FIFO 1/2 (receiver mode) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x2 = 2;
        /** @brief 1/2 FIFO less than or equal 3/4 (transmitter mode), 1/2 less than or equal FIFO 3/4 (receiver mode) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x3 = 3;
        /** @brief 3/4 FIFO but not full (transmitter mode), 3/4 less than or equal FIFO but not full (receiver mode) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x4 = 4;
        /** @brief FIFO full (transmitter and receiver modes) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x5 = 5;

    /** @brief SAI clear flag register */
    using SAI_ACLRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear overrun / underrun. This bit is write only. Programming this bit to 1 clears the OVRUDR flag in the SAI_xSR register. Reading this bit always returns the value 0. */
    using SAI_ACLRFR_COVRUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute detection flag. This bit is write only. Programming this bit to 1 clears the MUTEDET flag in the SAI_xSR register. Reading this bit always returns the value 0. */
    using SAI_ACLRFR_CMUTEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wrong clock configuration flag. This bit is write only. Programming this bit to 1 clears the WCKCFG flag in the SAI_xSR register. This bit is used only when the audio block is set as master (MODE[1] = 0) and NODIV = 0 in the SAI_xCR1 register. Reading this bit always returns the value 0. */
    using SAI_ACLRFR_CWCKCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Codec not ready flag. This bit is write only. Programming this bit to 1 clears the CNRDY flag in the SAI_xSR register. This bit is used only when the AC'97 audio protocol is selected in the SAI_xCR1 register. Reading this bit always returns the value 0. */
    using SAI_ACLRFR_CCNRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear anticipated frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the AFSDET flag in the SAI_xSR register. It is not used in AC'97 or SPDIF mode. Reading this bit always returns the value 0. */
    using SAI_ACLRFR_CAFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear late frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the LFSDET flag in the SAI_xSR register. This bit is not used in AC'97 or SPDIF mode Reading this bit always returns the value 0. */
    using SAI_ACLRFR_CLFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI data register */
    using SAI_ADR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data A write to this register loads the FIFO provided the FIFO is not full. A read from this register empties the FIFO if the FIFO is not empty. */
    using SAI_ADR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI configuration register 1 */
    using SAI_BCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAIx audio block mode These bits are set and cleared by software. They must be configured when SAIx audio block is disabled. Note: When the audio block is configured in SPDIF mode, the master transmitter mode is forced (MODE[1:0] = 00). In Master transmitter mode, the audio block starts generating the FS and the clocks immediately. */
    using SAI_BCR1_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master transmitter (value: 0)
     *          - B_0x1: Master receiver (value: 1)
     *          - B_0x2: Slave transmitter (value: 2)
     *          - B_0x3: Slave receiver (value: 3)
     */
        /** @brief Master transmitter */
    constexpr std::uint32_t SAI_BCR1_MODE_B_0x0 = 0;
        /** @brief Master receiver */
    constexpr std::uint32_t SAI_BCR1_MODE_B_0x1 = 1;
        /** @brief Slave transmitter */
    constexpr std::uint32_t SAI_BCR1_MODE_B_0x2 = 2;
        /** @brief Slave receiver */
    constexpr std::uint32_t SAI_BCR1_MODE_B_0x3 = 3;

    /** @brief Protocol configuration These bits are set and cleared by software. These bits have to be configured when the audio block is disabled. */
    using SAI_BCR1_PRTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Free protocol. Free protocol allows to use the powerful config uration of the audio block to address a specific audio protocol (such as I2S, LSB/MSB justified, TDM, PCM/DSP...) by setting most of the configuration register bits as well as frame configuration register. (value: 0)
     *          - B_0x1: SPDIF protocol (value: 1)
     *          - B_0x2: AC'97 protocol (value: 2)
     */
        /** @brief Free protocol. Free protocol allows to use the powerful config uration of the audio block to address a specific audio protocol (such as I2S, LSB/MSB justified, TDM, PCM/DSP...) by setting most of the configuration register bits as well as frame configuration register. */
    constexpr std::uint32_t SAI_BCR1_PRTCFG_B_0x0 = 0;
        /** @brief SPDIF protocol */
    constexpr std::uint32_t SAI_BCR1_PRTCFG_B_0x1 = 1;
        /** @brief AC'97 protocol */
    constexpr std::uint32_t SAI_BCR1_PRTCFG_B_0x2 = 2;

    /** @brief Data size These bits are set and cleared by software. These bits are ignored when the SPDIF protocols are selected (bit PRTCFG[1:0]), because the frame and the data size are fixed in such case. When the companding mode is selected through COMP[1:0] bits, DS[1:0] are ignored since the data size is fixed to 8 bits by the algorithm. These bits must be configured when the audio block is disabled. */
    using SAI_BCR1_DS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: 8 bits (value: 2)
     *          - B_0x3: 10 bits (value: 3)
     *          - B_0x4: 16 bits (value: 4)
     *          - B_0x5: 20 bits (value: 5)
     *          - B_0x6: 24 bits (value: 6)
     *          - B_0x7: 32 bits (value: 7)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t SAI_BCR1_DS_B_0x2 = 2;
        /** @brief 10 bits */
    constexpr std::uint32_t SAI_BCR1_DS_B_0x3 = 3;
        /** @brief 16 bits */
    constexpr std::uint32_t SAI_BCR1_DS_B_0x4 = 4;
        /** @brief 20 bits */
    constexpr std::uint32_t SAI_BCR1_DS_B_0x5 = 5;
        /** @brief 24 bits */
    constexpr std::uint32_t SAI_BCR1_DS_B_0x6 = 6;
        /** @brief 32 bits */
    constexpr std::uint32_t SAI_BCR1_DS_B_0x7 = 7;

    /** @brief Least significant bit first This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in AC'97 audio protocol since AC'97 data are always transferred with the MSB first. This bit has no meaning in SPDIF audio protocol since in SPDIF data are always transferred with LSB first. */
    using SAI_BCR1_LSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data are transferred with MSB first (value: 0)
     *          - B_0x1: Data are transferred with LSB first (value: 1)
     */
        /** @brief Data are transferred with MSB first */
    constexpr std::uint32_t SAI_BCR1_LSBFIRST_B_0x0 = 0;
        /** @brief Data are transferred with LSB first */
    constexpr std::uint32_t SAI_BCR1_LSBFIRST_B_0x1 = 1;

    /** @brief Clock strobing edge This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in SPDIF audio protocol. */
    using SAI_BCR1_CKSTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signals generated by the SAI change on SCK rising edge, while signals received by the SAI are sampled on the SCK falling edge. (value: 0)
     *          - B_0x1: Signals generated by the SAI change on SCK falling edge, while signals received by the SAI are sampled on the SCK rising edge. (value: 1)
     */
        /** @brief Signals generated by the SAI change on SCK rising edge, while signals received by the SAI are sampled on the SCK falling edge. */
    constexpr std::uint32_t SAI_BCR1_CKSTR_B_0x0 = 0;
        /** @brief Signals generated by the SAI change on SCK falling edge, while signals received by the SAI are sampled on the SCK rising edge. */
    constexpr std::uint32_t SAI_BCR1_CKSTR_B_0x1 = 1;

    /** @brief Synchronization enable These bits are set and cleared by software. They must be configured when the audio subblock is disabled. Note: The audio subblock should be configured as asynchronous when SPDIF mode is enabled. */
    using SAI_BCR1_SYNCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: audio subblock in asynchronous mode. (value: 0)
     *          - B_0x1: audio subblock is synchronous with the other internal audio subblock. In this case, the audio subblock must be configured in slave mode (value: 1)
     *          - B_0x2: audio subblock is synchronous with an external SAI embedded peripheral. In this case the audio subblock should be configured in Slave mode. (value: 2)
     */
        /** @brief audio subblock in asynchronous mode. */
    constexpr std::uint32_t SAI_BCR1_SYNCEN_B_0x0 = 0;
        /** @brief audio subblock is synchronous with the other internal audio subblock. In this case, the audio subblock must be configured in slave mode */
    constexpr std::uint32_t SAI_BCR1_SYNCEN_B_0x1 = 1;
        /** @brief audio subblock is synchronous with an external SAI embedded peripheral. In this case the audio subblock should be configured in Slave mode. */
    constexpr std::uint32_t SAI_BCR1_SYNCEN_B_0x2 = 2;

    /** @brief Mono mode This bit is set and cleared by software. It is meaningful only when the number of slots is equal to 2. When the mono mode is selected, slot 0 data are duplicated on slot 1 when the audio block operates as a transmitter. In reception mode, the slot1 is discarded and only the data received from slot 0 are stored. Refer to for more details. */
    using SAI_BCR1_MONO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stereo mode (value: 0)
     *          - B_0x1: Mono mode. (value: 1)
     */
        /** @brief Stereo mode */
    constexpr std::uint32_t SAI_BCR1_MONO_B_0x0 = 0;
        /** @brief Mono mode. */
    constexpr std::uint32_t SAI_BCR1_MONO_B_0x1 = 1;

    /** @brief Output drive This bit is set and cleared by software. Note: This bit has to be set before enabling the audio block and after the audio block configuration. */
    using SAI_BCR1_OUTDRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Audio block output driven when SAIEN is set (value: 0)
     *          - B_0x1: Audio block output driven immediately after the setting of this bit. (value: 1)
     */
        /** @brief Audio block output driven when SAIEN is set */
    constexpr std::uint32_t SAI_BCR1_OUTDRIV_B_0x0 = 0;
        /** @brief Audio block output driven immediately after the setting of this bit. */
    constexpr std::uint32_t SAI_BCR1_OUTDRIV_B_0x1 = 1;

    /** @brief Audio block enable This bit is set by software. To switch off the audio block, the application software must program this bit to 0 and poll the bit till it reads back 0, meaning that the block is completely disabled. Before setting this bit to 1, check that it is set to 0, otherwise the enable command is not taken into account. This bit allows controlling the state of the SAI audio block. If it is disabled when an audio frame transfer is ongoing, the ongoing transfer completes and the cell is fully disabled at the end of this audio frame transfer. Note: When the SAI block (A or B) is configured in master mode, the clock must be present on the SAI block input before setting SAIEN bit. */
    using SAI_BCR1_SAIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI audio block disabled (value: 0)
     *          - B_0x1: SAI audio block enabled. (value: 1)
     */
        /** @brief SAI audio block disabled */
    constexpr std::uint32_t SAI_BCR1_SAIEN_B_0x0 = 0;
        /** @brief SAI audio block enabled. */
    constexpr std::uint32_t SAI_BCR1_SAIEN_B_0x1 = 1;

    /** @brief DMA enable This bit is set and cleared by software. Note: Since the audio block defaults to operate as a transmitter after reset, the MODE[1:0] bits must be configured before setting DMAEN to avoid a DMA request in receiver mode. */
    using SAI_BCR1_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled (value: 0)
     *          - B_0x1: DMA enabled (value: 1)
     */
        /** @brief DMA disabled */
    constexpr std::uint32_t SAI_BCR1_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled */
    constexpr std::uint32_t SAI_BCR1_DMAEN_B_0x1 = 1;

    /** @brief No divider This bit is set and cleared by software. */
    using SAI_BCR1_NODIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the ratio between the Master clock generator and frame synchronization is fixed to 256 or 512 (value: 0)
     *          - B_0x1: the ratio between the Master clock generator and frame synchronization depends on FRL[7:0] (value: 1)
     */
        /** @brief the ratio between the Master clock generator and frame synchronization is fixed to 256 or 512 */
    constexpr std::uint32_t SAI_BCR1_NODIV_B_0x0 = 0;
        /** @brief the ratio between the Master clock generator and frame synchronization depends on FRL[7:0] */
    constexpr std::uint32_t SAI_BCR1_NODIV_B_0x1 = 1;

    /** @brief Master clock divider These bits are set and cleared by software. Otherwise, The master clock frequency is calculated according to the formula given in . These bits have no meaning when the audio block is slave. They have to be configured when the audio block is disabled. */
    using SAI_BCR1_MCKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Divides by 1 the kernel clock input (sai_x_ker_ck). (value: 0)
     */
        /** @brief Divides by 1 the kernel clock input (sai_x_ker_ck). */
    constexpr std::uint32_t SAI_BCR1_MCKDIV_B_0x0 = 0;

    /** @brief Oversampling ratio for master clock This bit is meaningful only when NODIV bit is set to 0. */
    using SAI_BCR1_OSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master clock frequency = FFS x 256 (value: 0)
     *          - B_0x1: Master clock frequency = FFS x 512 (value: 1)
     */
        /** @brief Master clock frequency = FFS x 256 */
    constexpr std::uint32_t SAI_BCR1_OSR_B_0x0 = 0;
        /** @brief Master clock frequency = FFS x 512 */
    constexpr std::uint32_t SAI_BCR1_OSR_B_0x1 = 1;

    /** @brief Master clock generation enable */
    using SAI_BCR1_MCKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The master clock is not generated (value: 0)
     *          - B_0x1: The master clock is generated independently of SAIEN bit (value: 1)
     */
        /** @brief The master clock is not generated */
    constexpr std::uint32_t SAI_BCR1_MCKEN_B_0x0 = 0;
        /** @brief The master clock is generated independently of SAIEN bit */
    constexpr std::uint32_t SAI_BCR1_MCKEN_B_0x1 = 1;

    /** @brief SAI configuration register 2 */
    using SAI_BCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO threshold. This bit is set and cleared by software. */
    using SAI_BCR2_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO empty (value: 0)
     *          - B_0x1: FIFO (value: 1)
     *          - B_0x2: FIFO (value: 2)
     *          - B_0x3: FIFO (value: 3)
     *          - B_0x4: FIFO full (value: 4)
     */
        /** @brief FIFO empty */
    constexpr std::uint32_t SAI_BCR2_FTH_B_0x0 = 0;
        /** @brief FIFO */
    constexpr std::uint32_t SAI_BCR2_FTH_B_0x1 = 1;
        /** @brief FIFO */
    constexpr std::uint32_t SAI_BCR2_FTH_B_0x2 = 2;
        /** @brief FIFO */
    constexpr std::uint32_t SAI_BCR2_FTH_B_0x3 = 3;
        /** @brief FIFO full */
    constexpr std::uint32_t SAI_BCR2_FTH_B_0x4 = 4;

    /** @brief FIFO flush. This bit is set by software. It is always read as 0. This bit should be configured when the SAI is disabled. */
    using SAI_BCR2_FFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO flush. (value: 0)
     *          - B_0x1: FIFO flush. Programming this bit to 1 triggers the FIFO Flush. All the internal FIFO pointers (read and write) are cleared. In this case data still present in the FIFO are lost (no more transmission or received data lost). Before flushing, SAI DMA stream/interrupt must be disabled (value: 1)
     */
        /** @brief No FIFO flush. */
    constexpr std::uint32_t SAI_BCR2_FFLUSH_B_0x0 = 0;
        /** @brief FIFO flush. Programming this bit to 1 triggers the FIFO Flush. All the internal FIFO pointers (read and write) are cleared. In this case data still present in the FIFO are lost (no more transmission or received data lost). Before flushing, SAI DMA stream/interrupt must be disabled */
    constexpr std::uint32_t SAI_BCR2_FFLUSH_B_0x1 = 1;

    /** @brief Tristate management on data line. This bit is set and cleared by software. It is meaningful only if the audio block is configured as a transmitter. This bit is not used when the audio block is configured in SPDIF mode. It should be configured when SAI is disabled. Refer to for more details. */
    using SAI_BCR2_TRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SD output line is still driven by the SAI when a slot is inactive. (value: 0)
     *          - B_0x1: SD output line is released (HI-Z) at the end of the last data bit of the last active slot if the next one is inactive. (value: 1)
     */
        /** @brief SD output line is still driven by the SAI when a slot is inactive. */
    constexpr std::uint32_t SAI_BCR2_TRIS_B_0x0 = 0;
        /** @brief SD output line is released (HI-Z) at the end of the last data bit of the last active slot if the next one is inactive. */
    constexpr std::uint32_t SAI_BCR2_TRIS_B_0x1 = 1;

    /** @brief Mute. This bit is set and cleared by software. It is meaningful only when the audio block operates as a transmitter. The MUTE value is linked to value of MUTEVAL if the number of slots is lower or equal to 2, or equal to 0 if it is greater than 2. Refer to for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks. */
    using SAI_BCR2_MUTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No mute mode. (value: 0)
     *          - B_0x1: Mute mode enabled. (value: 1)
     */
        /** @brief No mute mode. */
    constexpr std::uint32_t SAI_BCR2_MUTE_B_0x0 = 0;
        /** @brief Mute mode enabled. */
    constexpr std::uint32_t SAI_BCR2_MUTE_B_0x1 = 1;

    /** @brief Mute value. This bit is set and cleared by software.It must be written before enabling the audio block: SAIEN. This bit is meaningful only when the audio block operates as a transmitter, the number of slots is lower or equal to 2 and the MUTE bit is set. If more slots are declared, the bit value sent during the transmission in mute mode is equal to 0, whatever the value of MUTEVAL. if the number of slot is lower or equal to 2 and MUTEVAL = 1, the MUTE value transmitted for each slot is the one sent during the previous frame. Refer to for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks. */
    using SAI_BCR2_MUTEVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bit value 0 is sent during the mute mode. (value: 0)
     *          - B_0x1: Last values are sent during the mute mode. (value: 1)
     */
        /** @brief Bit value 0 is sent during the mute mode. */
    constexpr std::uint32_t SAI_BCR2_MUTEVAL_B_0x0 = 0;
        /** @brief Last values are sent during the mute mode. */
    constexpr std::uint32_t SAI_BCR2_MUTEVAL_B_0x1 = 1;

    /** @brief Mute counter. These bits are set and cleared by software. They are used only in reception mode. The value set in these bits is compared to the number of consecutive mute frames detected in reception. When the number of mute frames is equal to this value, the flag MUTEDET is set and an interrupt is generated if bit MUTEDETIE is set. Refer to for more details. */
    using SAI_BCR2_MUTECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Complement bit. This bit is set and cleared by software. It defines the type of complement to be used for companding mode Note: This bit has effect only when the companding mode is -Law algorithm or A-Law algorithm. */
    using SAI_BCR2_CPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1's complement representation. (value: 0)
     *          - B_0x1: 2's complement representation. (value: 1)
     */
        /** @brief 1's complement representation. */
    constexpr std::uint32_t SAI_BCR2_CPL_B_0x0 = 0;
        /** @brief 2's complement representation. */
    constexpr std::uint32_t SAI_BCR2_CPL_B_0x1 = 1;

    /** @brief Companding mode. These bits are set and cleared by software. The -Law and the A-Law log are a part of the CCITT G.711 recommendation, the type of complement that is used depends on CPL bit. The data expansion or data compression are determined by the state of bit MODE[0]. The data compression is applied if the audio block is configured as a transmitter. The data expansion is automatically applied when the audio block is configured as a receiver. Refer to for more details. Note: Companding mode is applicable only when Free protocol mode is selected. */
    using SAI_BCR2_COMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No companding algorithm (value: 0)
     *          - B_0x2: -Law algorithm (value: 2)
     *          - B_0x3: A-Law algorithm (value: 3)
     */
        /** @brief No companding algorithm */
    constexpr std::uint32_t SAI_BCR2_COMP_B_0x0 = 0;
        /** @brief -Law algorithm */
    constexpr std::uint32_t SAI_BCR2_COMP_B_0x2 = 2;
        /** @brief A-Law algorithm */
    constexpr std::uint32_t SAI_BCR2_COMP_B_0x3 = 3;

    /** @brief SAI frame configuration register */
    using SAI_BFRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame length. These bits are set and cleared by software. They define the audio frame length expressed in number of SCK clock cycles: the number of bits in the frame is equal to FRL[7:0] + 1. The minimum number of bits to transfer in an audio frame must be equal to 8, otherwise the audio block behaves in an unexpected way. This is the case when the data size is 8 bits and only one slot 0 is defined in NBSLOT[4:0] of SAI_xSLOTR register (NBSLOT[3:0] = 0000). In master mode, if the master clock (available on MCLK_x pin) is used, the frame length should be aligned with a number equal to a power of 2, ranging from 8 to 256. When the master clock is not used (NODIV = 1), it is recommended to program the frame length to an value ranging from 8 to 256. These bits are meaningless and are not used in AC'97 or SPDIF audio block configuration. */
    using SAI_BFRCR_FRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame synchronization active level length. These bits are set and cleared by software. They specify the length in number of bit clock (SCK) + 1 (FSALL[6:0] + 1) of the active level of the FS signal in the audio frame These bits are meaningless and are not used in AC'97 or SPDIF audio block configuration. They must be configured when the audio block is disabled. */
    using SAI_BFRCR_FSALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame synchronization definition. This bit is set and cleared by software. When the bit is set, the number of slots defined in the SAI_xSLOTR register has to be even. It means that half of this number of slots is dedicated to the left channel and the other slots for the right channel (e.g: this bit has to be set for I2S or MSB/LSB-justified protocols...). This bit is meaningless and is not used in AC'97 or SPDIF audio block configuration. It must be configured when the audio block is disabled. */
    using SAI_BFRCR_FSDEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS signal is a start frame signal (value: 0)
     *          - B_0x1: FS signal is a start of frame signal + channel side identification (value: 1)
     */
        /** @brief FS signal is a start frame signal */
    constexpr std::uint32_t SAI_BFRCR_FSDEF_B_0x0 = 0;
        /** @brief FS signal is a start of frame signal + channel side identification */
    constexpr std::uint32_t SAI_BFRCR_FSDEF_B_0x1 = 1;

    /** @brief Frame synchronization polarity. This bit is set and cleared by software. It is used to configure the level of the start of frame on the FS signal. It is meaningless and is not used in AC'97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled. */
    using SAI_BFRCR_FSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS is active low (falling edge) (value: 0)
     *          - B_0x1: FS is active high (rising edge) (value: 1)
     */
        /** @brief FS is active low (falling edge) */
    constexpr std::uint32_t SAI_BFRCR_FSPOL_B_0x0 = 0;
        /** @brief FS is active high (rising edge) */
    constexpr std::uint32_t SAI_BFRCR_FSPOL_B_0x1 = 1;

    /** @brief Frame synchronization offset. This bit is set and cleared by software. It is meaningless and is not used in AC'97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled. */
    using SAI_BFRCR_FSOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS is asserted on the first bit of the slot 0. (value: 0)
     *          - B_0x1: FS is asserted one bit before the first bit of the slot 0. (value: 1)
     */
        /** @brief FS is asserted on the first bit of the slot 0. */
    constexpr std::uint32_t SAI_BFRCR_FSOFF_B_0x0 = 0;
        /** @brief FS is asserted one bit before the first bit of the slot 0. */
    constexpr std::uint32_t SAI_BFRCR_FSOFF_B_0x1 = 1;

    /** @brief SAI slot register */
    using SAI_BSLOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief First bit offset These bits are set and cleared by software. The value set in this bitfield defines the position of the first data transfer bit in the slot. It represents an offset value. In transmission mode, the bits outside the data field are forced to 0. In reception mode, the extra received bits are discarded. These bits must be set when the audio block is disabled. They are ignored in AC'97 or SPDIF mode. */
    using SAI_BSLOTR_FBOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot size This bits is set and cleared by software. The slot size must be higher or equal to the data size. If this condition is not respected, the behavior of the SAI is undetermined. Refer to for information on how to drive SD line. These bits must be set when the audio block is disabled. They are ignored in AC'97 or SPDIF mode. */
    using SAI_BSLOTR_SLOTSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The slot size is equivalent to the data size (specified in DS[3:0] in the SAI_xCR1 register). (value: 0)
     *          - B_0x1: 16-bit (value: 1)
     *          - B_0x2: 32-bit (value: 2)
     */
        /** @brief The slot size is equivalent to the data size (specified in DS[3:0] in the SAI_xCR1 register). */
    constexpr std::uint32_t SAI_BSLOTR_SLOTSZ_B_0x0 = 0;
        /** @brief 16-bit */
    constexpr std::uint32_t SAI_BSLOTR_SLOTSZ_B_0x1 = 1;
        /** @brief 32-bit */
    constexpr std::uint32_t SAI_BSLOTR_SLOTSZ_B_0x2 = 2;

    /** @brief Number of slots in an audio frame. These bits are set and cleared by software. The value set in this bitfield represents the number of slots + 1 in the audio frame (including the number of inactive slots). The maximum number of slots is 16. The number of slots should be even if FSDEF bit in the SAI_xFRCR register is set. The number of slots must be configured when the audio block is disabled. They are ignored in AC'97 or SPDIF mode. */
    using SAI_BSLOTR_NBSLOT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot enable. These bits are set and cleared by software. Each SLOTEN bit corresponds to a slot position from 0 to 15 (maximum 16 slots). The slot must be enabled when the audio block is disabled. They are ignored in AC'97 or SPDIF mode. */
    using SAI_BSLOTR_SLOTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Inactive slot. (value: 0)
     *          - B_0x1: Active slot. (value: 1)
     */
        /** @brief Inactive slot. */
    constexpr std::uint32_t SAI_BSLOTR_SLOTEN_B_0x0 = 0;
        /** @brief Active slot. */
    constexpr std::uint32_t SAI_BSLOTR_SLOTEN_B_0x1 = 1;

    /** @brief SAI interrupt mask register */
    using SAI_BIM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun/underrun interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the OVRUDR bit in the SAI_xSR register is set. */
    using SAI_BIM_OVRUDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_OVRUDRIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_OVRUDRIE_B_0x1 = 1;

    /** @brief Mute detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the MUTEDET bit in the SAI_xSR register is set. This bit has a meaning only if the audio block is configured in receiver mode. */
    using SAI_BIM_MUTEDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_MUTEDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_MUTEDETIE_B_0x1 = 1;

    /** @brief Wrong clock configuration interrupt enable. This bit is set and cleared by software. This bit is taken into account only if the audio block is configured as a master (MODE[1] = 0) and NODIV = 0. It generates an interrupt if the WCKCFG flag in the SAI_xSR register is set. Note: This bit is used only in Free protocol mode and is meaningless in other modes. */
    using SAI_BIM_WCKCFGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_WCKCFGIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_WCKCFGIE_B_0x1 = 1;

    /** @brief FIFO request interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the FREQ bit in the SAI_xSR register is set. Since the audio block defaults to operate as a transmitter after reset, the MODE bit must be configured before setting FREQIE to avoid a parasitic interrupt in receiver mode, */
    using SAI_BIM_FREQIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_FREQIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_FREQIE_B_0x1 = 1;

    /** @brief Codec not ready interrupt enable (AC'97). This bit is set and cleared by software. When the interrupt is enabled, the audio block detects in the slot 0 (tag0) of the AC'97 frame if the Codec connected to this line is ready or not. If it is not ready, the CNRDY flag in the SAI_xSR register is set and an interrupt is generated. This bit has a meaning only if the AC'97 mode is selected through PRTCFG[1:0] bits and the audio block is operates as a receiver. */
    using SAI_BIM_CNRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_CNRDYIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_CNRDYIE_B_0x1 = 1;

    /** @brief Anticipated frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the AFSDET bit in the SAI_xSR register is set. This bit is meaningless in AC'97, SPDIF mode or when the audio block operates as a master. */
    using SAI_BIM_AFSDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_AFSDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_AFSDETIE_B_0x1 = 1;

    /** @brief Late frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the LFSDET bit is set in the SAI_xSR register. This bit is meaningless in AC'97, SPDIF mode or when the audio block operates as a master. */
    using SAI_BIM_LFSDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_LFSDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_LFSDETIE_B_0x1 = 1;

    /** @brief SAI status register */
    using SAI_BSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun / underrun. This bit is read only. The overrun and underrun conditions can occur only when the audio block is configured as a receiver and a transmitter, respectively. It can generate an interrupt if OVRUDRIE bit is set in SAI_xIM register. This flag is cleared when the software sets COVRUDR bit in SAI_xCLRFR register. */
    using SAI_BSR_OVRUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun/underrun error. (value: 0)
     *          - B_0x1: Overrun/underrun error detection. (value: 1)
     */
        /** @brief No overrun/underrun error. */
    constexpr std::uint32_t SAI_BSR_OVRUDR_B_0x0 = 0;
        /** @brief Overrun/underrun error detection. */
    constexpr std::uint32_t SAI_BSR_OVRUDR_B_0x1 = 1;

    /** @brief Mute detection. This bit is read only. This flag is set if consecutive 0 values are received in each slot of a given audio frame and for a consecutive number of audio frames (set in the MUTECNT bit in the SAI_xCR2 register). It can generate an interrupt if MUTEDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets bit CMUTEDET in the SAI_xCLRFR register. */
    using SAI_BSR_MUTEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MUTE detection on the SD input line (value: 0)
     *          - B_0x1: MUTE value detected on the SD input line (0 value) for a specified number of consecutive audio frame (value: 1)
     */
        /** @brief No MUTE detection on the SD input line */
    constexpr std::uint32_t SAI_BSR_MUTEDET_B_0x0 = 0;
        /** @brief MUTE value detected on the SD input line (0 value) for a specified number of consecutive audio frame */
    constexpr std::uint32_t SAI_BSR_MUTEDET_B_0x1 = 1;

    /** @brief Wrong clock configuration flag. This bit is read only. This bit is used only when the audio block operates in master mode (MODE[1] = 0) and NODIV = 0. It can generate an interrupt if WCKCFGIE bit is set in SAI_xIM register. This flag is cleared when the software sets CWCKCFG bit in SAI_xCLRFR register. */
    using SAI_BSR_WCKCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock configuration is correct (value: 0)
     *          - B_0x1: Clock configuration does not respect the rule concerning the frame length specification defined in (configuration of FRL[7:0] bit in the SAI_xFRCR register) (value: 1)
     */
        /** @brief Clock configuration is correct */
    constexpr std::uint32_t SAI_BSR_WCKCFG_B_0x0 = 0;
        /** @brief Clock configuration does not respect the rule concerning the frame length specification defined in (configuration of FRL[7:0] bit in the SAI_xFRCR register) */
    constexpr std::uint32_t SAI_BSR_WCKCFG_B_0x1 = 1;

    /** @brief FIFO request. This bit is read only. The request depends on the audio block configuration: If the block is configured in transmission mode, the FIFO request is related to a write request operation in the SAI_xDR. If the block configured in reception, the FIFO request related to a read request operation from the SAI_xDR. This flag can generate an interrupt if FREQIE bit is set in SAI_xIM register. */
    using SAI_BSR_FREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO request. (value: 0)
     *          - B_0x1: FIFO request to read or to write the SAI_xDR. (value: 1)
     */
        /** @brief No FIFO request. */
    constexpr std::uint32_t SAI_BSR_FREQ_B_0x0 = 0;
        /** @brief FIFO request to read or to write the SAI_xDR. */
    constexpr std::uint32_t SAI_BSR_FREQ_B_0x1 = 1;

    /** @brief Codec not ready. This bit is read only. This bit is used only when the AC'97 audio protocol is selected in the SAI_xCR1 register and configured in receiver mode. It can generate an interrupt if CNRDYIE bit is set in SAI_xIM register. This flag is cleared when the software sets CCNRDY bit in SAI_xCLRFR register. */
    using SAI_BSR_CNRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External AC'97 Codec is ready (value: 0)
     *          - B_0x1: External AC'97 Codec is not ready (value: 1)
     */
        /** @brief External AC'97 Codec is ready */
    constexpr std::uint32_t SAI_BSR_CNRDY_B_0x0 = 0;
        /** @brief External AC'97 Codec is not ready */
    constexpr std::uint32_t SAI_BSR_CNRDY_B_0x1 = 1;

    /** @brief Anticipated frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC'97or SPDIF mode. It can generate an interrupt if AFSDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets CAFSDET bit in SAI_xCLRFR register. */
    using SAI_BSR_AFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error. (value: 0)
     *          - B_0x1: Frame synchronization signal is detected earlier than expected. (value: 1)
     */
        /** @brief No error. */
    constexpr std::uint32_t SAI_BSR_AFSDET_B_0x0 = 0;
        /** @brief Frame synchronization signal is detected earlier than expected. */
    constexpr std::uint32_t SAI_BSR_AFSDET_B_0x1 = 1;

    /** @brief Late frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC'97 or SPDIF mode. It can generate an interrupt if LFSDETIE bit is set in the SAI_xIM register. This flag is cleared when the software sets bit CLFSDET in SAI_xCLRFR register */
    using SAI_BSR_LFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error. (value: 0)
     *          - B_0x1: Frame synchronization signal is not present at the right time. (value: 1)
     */
        /** @brief No error. */
    constexpr std::uint32_t SAI_BSR_LFSDET_B_0x0 = 0;
        /** @brief Frame synchronization signal is not present at the right time. */
    constexpr std::uint32_t SAI_BSR_LFSDET_B_0x1 = 1;

    /** @brief FIFO level threshold. This bit is read only. The FIFO level threshold flag is managed only by hardware and its setting depends on SAI block configuration (transmitter or receiver mode). Others: Reserved */
    using SAI_BSR_FLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO empty (transmitter and receiver modes) (value: 0)
     *          - B_0x1: FIFO less than or equal 1/4 but not empty (transmitter mode), FIFO 1/4 but not empty (receiver mode) (value: 1)
     *          - B_0x2: 1/4 FIFO less than or equal 1/2 (transmitter mode), 1/4 less than or equal FIFO 1/2 (receiver mode) (value: 2)
     *          - B_0x3: 1/2 FIFO less than or equal 3/4 (transmitter mode), 1/2 less than or equal FIFO 3/4 (receiver mode) (value: 3)
     *          - B_0x4: 3/4 FIFO but not full (transmitter mode), 3/4 less than or equal FIFO but not full (receiver mode) (value: 4)
     *          - B_0x5: FIFO full (transmitter and receiver modes) (value: 5)
     */
        /** @brief FIFO empty (transmitter and receiver modes) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x0 = 0;
        /** @brief FIFO less than or equal 1/4 but not empty (transmitter mode), FIFO 1/4 but not empty (receiver mode) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x1 = 1;
        /** @brief 1/4 FIFO less than or equal 1/2 (transmitter mode), 1/4 less than or equal FIFO 1/2 (receiver mode) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x2 = 2;
        /** @brief 1/2 FIFO less than or equal 3/4 (transmitter mode), 1/2 less than or equal FIFO 3/4 (receiver mode) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x3 = 3;
        /** @brief 3/4 FIFO but not full (transmitter mode), 3/4 less than or equal FIFO but not full (receiver mode) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x4 = 4;
        /** @brief FIFO full (transmitter and receiver modes) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x5 = 5;

    /** @brief SAI clear flag register */
    using SAI_BCLRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear overrun / underrun. This bit is write only. Programming this bit to 1 clears the OVRUDR flag in the SAI_xSR register. Reading this bit always returns the value 0. */
    using SAI_BCLRFR_COVRUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute detection flag. This bit is write only. Programming this bit to 1 clears the MUTEDET flag in the SAI_xSR register. Reading this bit always returns the value 0. */
    using SAI_BCLRFR_CMUTEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wrong clock configuration flag. This bit is write only. Programming this bit to 1 clears the WCKCFG flag in the SAI_xSR register. This bit is used only when the audio block is set as master (MODE[1] = 0) and NODIV = 0 in the SAI_xCR1 register. Reading this bit always returns the value 0. */
    using SAI_BCLRFR_CWCKCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Codec not ready flag. This bit is write only. Programming this bit to 1 clears the CNRDY flag in the SAI_xSR register. This bit is used only when the AC'97 audio protocol is selected in the SAI_xCR1 register. Reading this bit always returns the value 0. */
    using SAI_BCLRFR_CCNRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear anticipated frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the AFSDET flag in the SAI_xSR register. It is not used in AC'97or SPDIF mode. Reading this bit always returns the value 0. */
    using SAI_BCLRFR_CAFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear late frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the LFSDET flag in the SAI_xSR register. This bit is not used in AC'97or SPDIF mode Reading this bit always returns the value 0. */
    using SAI_BCLRFR_CLFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI data register */
    using SAI_BDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data A write to this register loads the FIFO provided the FIFO is not full. A read from this register empties the FIFO if the FIFO is not empty. */
    using SAI_BDR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI PDM control register */
    using SAI_PDMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDM enable This bit is set and cleared by software. This bit allows to control the state of the PDM interface block. Make sure that the SAI in already operating in TDM master mode before enabling the PDM interface. */
    using SAI_PDMCR_PDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDM interface disabled (value: 0)
     *          - B_0x1: PDM interface enabled (value: 1)
     */
        /** @brief PDM interface disabled */
    constexpr std::uint32_t SAI_PDMCR_PDMEN_B_0x0 = 0;
        /** @brief PDM interface enabled */
    constexpr std::uint32_t SAI_PDMCR_PDMEN_B_0x1 = 1;

    /** @brief Number of microphones This bit is set and cleared by software. Note: It is not recommended to configure this field when PDMEN = 1.* The complete set of data lines might not be available for all SAI instances. Refer to for details. */
    using SAI_PDMCR_MICNBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Configuration with 2 microphones (value: 0)
     *          - B_0x1: Configuration with 4 microphones (value: 1)
     *          - B_0x2: Configuration with 6 microphones (value: 2)
     *          - B_0x3: Configuration with 8 microphones (value: 3)
     */
        /** @brief Configuration with 2 microphones */
    constexpr std::uint32_t SAI_PDMCR_MICNBR_B_0x0 = 0;
        /** @brief Configuration with 4 microphones */
    constexpr std::uint32_t SAI_PDMCR_MICNBR_B_0x1 = 1;
        /** @brief Configuration with 6 microphones */
    constexpr std::uint32_t SAI_PDMCR_MICNBR_B_0x2 = 2;
        /** @brief Configuration with 8 microphones */
    constexpr std::uint32_t SAI_PDMCR_MICNBR_B_0x3 = 3;

    /** @brief Clock enable of bitstream clock number 1 This bit is set and cleared by software. Note: It is not recommended to configure this bit when PDMEN = 1. SAI_CK1 might not be available for all SAI instances. Refer to implementation for details. */
    using SAI_PDMCR_CKEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI_CK1 clock disabled (value: 0)
     *          - B_0x1: SAI_CK1 clock enabled (value: 1)
     */
        /** @brief SAI_CK1 clock disabled */
    constexpr std::uint32_t SAI_PDMCR_CKEN1_B_0x0 = 0;
        /** @brief SAI_CK1 clock enabled */
    constexpr std::uint32_t SAI_PDMCR_CKEN1_B_0x1 = 1;

    /** @brief Clock enable of bitstream clock number 2 This bit is set and cleared by software. Note: It is not recommended to configure this bit when PDMEN = 1. SAI_CK2 might not be available for all SAI instances. Refer to implementation for details. */
    using SAI_PDMCR_CKEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI_CK2 clock disabled (value: 0)
     *          - B_0x1: SAI_CK2 clock enabled (value: 1)
     */
        /** @brief SAI_CK2 clock disabled */
    constexpr std::uint32_t SAI_PDMCR_CKEN2_B_0x0 = 0;
        /** @brief SAI_CK2 clock enabled */
    constexpr std::uint32_t SAI_PDMCR_CKEN2_B_0x1 = 1;

    /** @brief SAI PDM delay register */
    using SAI_PDMDLY = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay line adjust for first microphone of pair 1 This bit is set and cleared by software. ... This field can be changed on-the-fly. Note: This field can be used only if D1 line is available.Refer to to check if it is available. */
    using SAI_PDMDLY_DLYM1L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 TSAI_CK period (value: 1)
     *          - B_0x2: Delay of 2 TSAI_CK periods (value: 2)
     *          - B_0x7: Delay of 7 TSAI_CK periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1L_B_0x0 = 0;
        /** @brief Delay of 1 TSAI_CK period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1L_B_0x1 = 1;
        /** @brief Delay of 2 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1L_B_0x2 = 2;
        /** @brief Delay of 7 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1L_B_0x7 = 7;

    /** @brief Delay line adjust for second microphone of pair 1 This bit is set and cleared by software. ... This field can be changed on-the-fly. Note: This field can be used only if D1 line is available.Refer to to check if it is available. */
    using SAI_PDMDLY_DLYM1R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 TSAI_CK period (value: 1)
     *          - B_0x2: Delay of 2 TSAI_CK periods (value: 2)
     *          - B_0x7: Delay of 7 TSAI_CK periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1R_B_0x0 = 0;
        /** @brief Delay of 1 TSAI_CK period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1R_B_0x1 = 1;
        /** @brief Delay of 2 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1R_B_0x2 = 2;
        /** @brief Delay of 7 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1R_B_0x7 = 7;

    /** @brief Delay line for first microphone of pair 2 This bit is set and cleared by software. ... This field can be changed on-the-fly. Note: This field can be used only if D2 line is available.Refer to to check if it is available. */
    using SAI_PDMDLY_DLYM2L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 TSAI_CK period (value: 1)
     *          - B_0x2: Delay of 2 TSAI_CK periods (value: 2)
     *          - B_0x7: Delay of 7 TSAI_CK periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2L_B_0x0 = 0;
        /** @brief Delay of 1 TSAI_CK period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2L_B_0x1 = 1;
        /** @brief Delay of 2 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2L_B_0x2 = 2;
        /** @brief Delay of 7 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2L_B_0x7 = 7;

    /** @brief Delay line for second microphone of pair 2 This bit is set and cleared by software. ... This field can be changed on-the-fly. Note: This field can be used only if D2 line is available.Refer to to check if it is available. */
    using SAI_PDMDLY_DLYM2R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 TSAI_CK period (value: 1)
     *          - B_0x2: Delay of 2 TSAI_CK periods (value: 2)
     *          - B_0x7: Delay of 7 TSAI_CK periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2R_B_0x0 = 0;
        /** @brief Delay of 1 TSAI_CK period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2R_B_0x1 = 1;
        /** @brief Delay of 2 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2R_B_0x2 = 2;
        /** @brief Delay of 7 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2R_B_0x7 = 7;

    /** @brief Delay line for first microphone of pair 3 This bit is set and cleared by software. ... This field can be changed on-the-fly. Note: This field can be used only if D3 line is available.Refer to to check if it is available. */
    using SAI_PDMDLY_DLYM3L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 TSAI_CK period (value: 1)
     *          - B_0x2: Delay of 2 TSAI_CK periods (value: 2)
     *          - B_0x7: Delay of 7 TSAI_CK periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3L_B_0x0 = 0;
        /** @brief Delay of 1 TSAI_CK period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3L_B_0x1 = 1;
        /** @brief Delay of 2 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3L_B_0x2 = 2;
        /** @brief Delay of 7 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3L_B_0x7 = 7;

    /** @brief Delay line for second microphone of pair 3 This bit is set and cleared by software. ... This field can be changed on-the-fly. Note: This field can be used only if D3 line is available.Refer to to check if it is available. */
    using SAI_PDMDLY_DLYM3R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 TSAI_CK period (value: 1)
     *          - B_0x2: Delay of 2 TSAI_CK periods (value: 2)
     *          - B_0x7: Delay of 7 TSAI_CK periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3R_B_0x0 = 0;
        /** @brief Delay of 1 TSAI_CK period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3R_B_0x1 = 1;
        /** @brief Delay of 2 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3R_B_0x2 = 2;
        /** @brief Delay of 7 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3R_B_0x7 = 7;

    /** @brief Delay line for first microphone of pair 4 This bit is set and cleared by software. ... This field can be changed on-the-fly. Note: This field can be used only if D4 line is available.Refer to to check if it is available. */
    using SAI_PDMDLY_DLYM4L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 TSAI_CK period (value: 1)
     *          - B_0x2: Delay of 2 TSAI_CK periods (value: 2)
     *          - B_0x7: Delay of 7 of TSAI_CK periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4L_B_0x0 = 0;
        /** @brief Delay of 1 TSAI_CK period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4L_B_0x1 = 1;
        /** @brief Delay of 2 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4L_B_0x2 = 2;
        /** @brief Delay of 7 of TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4L_B_0x7 = 7;

    /** @brief Delay line for second microphone of pair 4 This bit is set and cleared by software. ... This field can be changed on-the-fly. Note: This field can be used only if D4 line is available.Refer to to check if it is available. */
    using SAI_PDMDLY_DLYM4R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 TSAI_CK period (value: 1)
     *          - B_0x2: Delay of 2 TSAI_CK periods (value: 2)
     *          - B_0x7: Delay of 7 TSAI_CK periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4R_B_0x0 = 0;
        /** @brief Delay of 1 TSAI_CK period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4R_B_0x1 = 1;
        /** @brief Delay of 2 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4R_B_0x2 = 2;
        /** @brief Delay of 7 TSAI_CK periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4R_B_0x7 = 7;

}

#endif
