/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_SAI2_S_HPP
#define EMBEDDED_PP_STM32N645_SAI2_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Serial audio interface */
namespace STM32N645::SAI2_S {

    /** @brief SAI global configuration register */
    using SAI_GCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization outputs */
    using SAI_GCR_SYNCIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization outputs */
    using SAI_GCR_SYNCOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization output signals. SYNCOUT[1:0] should be configured as No synchronization output signals when audio block is configured as SPDIF (value: 0)
     *          - B_0x1: Block A used for further synchronization for others SAI (value: 1)
     *          - B_0x2: Block B used for further synchronization for others SAI (value: 2)
     */
        /** @brief No synchronization output signals. SYNCOUT[1:0] should be configured as No synchronization output signals when audio block is configured as SPDIF */
    constexpr std::uint32_t SAI_GCR_SYNCOUT_B_0x0 = 0;
        /** @brief Block A used for further synchronization for others SAI */
    constexpr std::uint32_t SAI_GCR_SYNCOUT_B_0x1 = 1;
        /** @brief Block B used for further synchronization for others SAI */
    constexpr std::uint32_t SAI_GCR_SYNCOUT_B_0x2 = 2;

    /** @brief SAI configuration register 1 */
    using SAI_ACR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAIx audio block mode */
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

    /** @brief Protocol configuration */
    using SAI_ACR1_PRTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Free protocol. Free protocol enables to use the powerful configuration of the audio block to address a specific audio protocol (such as I2S, LSB/MSB justified, TDM, PCM/DSP...) by setting most of the configuration register bits as well as frame configuration register. (value: 0)
     *          - B_0x1: SPDIF protocol (value: 1)
     *          - B_0x2: AC'97 protocol (value: 2)
     */
        /** @brief Free protocol. Free protocol enables to use the powerful configuration of the audio block to address a specific audio protocol (such as I2S, LSB/MSB justified, TDM, PCM/DSP...) by setting most of the configuration register bits as well as frame configuration register. */
    constexpr std::uint32_t SAI_ACR1_PRTCFG_B_0x0 = 0;
        /** @brief SPDIF protocol */
    constexpr std::uint32_t SAI_ACR1_PRTCFG_B_0x1 = 1;
        /** @brief AC'97 protocol */
    constexpr std::uint32_t SAI_ACR1_PRTCFG_B_0x2 = 2;

    /** @brief Data size */
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

    /** @brief Least significant bit first */
    using SAI_ACR1_LSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data are transferred with MSB first (value: 0)
     *          - B_0x1: Data are transferred with LSB first (value: 1)
     */
        /** @brief Data are transferred with MSB first */
    constexpr std::uint32_t SAI_ACR1_LSBFIRST_B_0x0 = 0;
        /** @brief Data are transferred with LSB first */
    constexpr std::uint32_t SAI_ACR1_LSBFIRST_B_0x1 = 1;

    /** @brief Clock strobing edge */
    using SAI_ACR1_CKSTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signals generated by the SAI change on SCK rising edge, while signals received by the SAI are sampled on the SCK falling edge. (value: 0)
     *          - B_0x1: Signals generated by the SAI change on SCK falling edge, while signals received by the SAI are sampled on the SCK rising edge. (value: 1)
     */
        /** @brief Signals generated by the SAI change on SCK rising edge, while signals received by the SAI are sampled on the SCK falling edge. */
    constexpr std::uint32_t SAI_ACR1_CKSTR_B_0x0 = 0;
        /** @brief Signals generated by the SAI change on SCK falling edge, while signals received by the SAI are sampled on the SCK rising edge. */
    constexpr std::uint32_t SAI_ACR1_CKSTR_B_0x1 = 1;

    /** @brief Synchronization enable */
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

    /** @brief Mono mode */
    using SAI_ACR1_MONO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stereo mode (value: 0)
     *          - B_0x1: Mono mode. (value: 1)
     */
        /** @brief Stereo mode */
    constexpr std::uint32_t SAI_ACR1_MONO_B_0x0 = 0;
        /** @brief Mono mode. */
    constexpr std::uint32_t SAI_ACR1_MONO_B_0x1 = 1;

    /** @brief Output drive */
    using SAI_ACR1_OUTDRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Audio block output driven when SAIEN is set (value: 0)
     *          - B_0x1: Audio block output driven immediately after the setting of this bit. (value: 1)
     */
        /** @brief Audio block output driven when SAIEN is set */
    constexpr std::uint32_t SAI_ACR1_OUTDRIV_B_0x0 = 0;
        /** @brief Audio block output driven immediately after the setting of this bit. */
    constexpr std::uint32_t SAI_ACR1_OUTDRIV_B_0x1 = 1;

    /** @brief Audio block enable */
    using SAI_ACR1_SAIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI audio block disabled (value: 0)
     *          - B_0x1: SAI audio block enabled. (value: 1)
     */
        /** @brief SAI audio block disabled */
    constexpr std::uint32_t SAI_ACR1_SAIEN_B_0x0 = 0;
        /** @brief SAI audio block enabled. */
    constexpr std::uint32_t SAI_ACR1_SAIEN_B_0x1 = 1;

    /** @brief DMA enable */
    using SAI_ACR1_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled (value: 0)
     *          - B_0x1: DMA enabled (value: 1)
     */
        /** @brief DMA disabled */
    constexpr std::uint32_t SAI_ACR1_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled */
    constexpr std::uint32_t SAI_ACR1_DMAEN_B_0x1 = 1;

    /** @brief No divider */
    using SAI_ACR1_NODIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the ratio between the Master clock generator and frame synchronization is fixed to 256 or 512 (value: 0)
     *          - B_0x1: the ratio between the Master clock generator and frame synchronization depends on FRL[7:0] (value: 1)
     */
        /** @brief the ratio between the Master clock generator and frame synchronization is fixed to 256 or 512 */
    constexpr std::uint32_t SAI_ACR1_NODIV_B_0x0 = 0;
        /** @brief the ratio between the Master clock generator and frame synchronization depends on FRL[7:0] */
    constexpr std::uint32_t SAI_ACR1_NODIV_B_0x1 = 1;

    /** @brief Master clock divider */
    using SAI_ACR1_MCKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Divides by 1 the kernel clock input (sai_x_ker_ck). (value: 0)
     */
        /** @brief Divides by 1 the kernel clock input (sai_x_ker_ck). */
    constexpr std::uint32_t SAI_ACR1_MCKDIV_B_0x0 = 0;

    /** @brief Oversampling ratio for master clock */
    using SAI_ACR1_OSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master clock frequency = F less than sub>FS less than /sub> x 256 (value: 0)
     *          - B_0x1: Master clock frequency = F less than sub>FS less than /sub> x 512 (value: 1)
     */
        /** @brief Master clock frequency = F less than sub>FS less than /sub> x 256 */
    constexpr std::uint32_t SAI_ACR1_OSR_B_0x0 = 0;
        /** @brief Master clock frequency = F less than sub>FS less than /sub> x 512 */
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
    /** @brief FIFO threshold. */
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

    /** @brief FIFO flush. */
    using SAI_ACR2_FFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO flush. (value: 0)
     *          - B_0x1: FIFO flush. Programming this bit to 1 triggers the FIFO Flush. All the internal FIFO pointers (read and write) are cleared. In this case data still present in the FIFO are lost (no more transmission or received data lost). Before flushing, SAI DMA stream/interrupt must be disabled (value: 1)
     */
        /** @brief No FIFO flush. */
    constexpr std::uint32_t SAI_ACR2_FFLUSH_B_0x0 = 0;
        /** @brief FIFO flush. Programming this bit to 1 triggers the FIFO Flush. All the internal FIFO pointers (read and write) are cleared. In this case data still present in the FIFO are lost (no more transmission or received data lost). Before flushing, SAI DMA stream/interrupt must be disabled */
    constexpr std::uint32_t SAI_ACR2_FFLUSH_B_0x1 = 1;

    /** @brief Tristate management on data line. */
    using SAI_ACR2_TRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SD output line is still driven by the SAI when a slot is inactive. (value: 0)
     *          - B_0x1: SD output line is released (HI-Z) at the end of the last data bit of the last active slot if the next one is inactive. (value: 1)
     */
        /** @brief SD output line is still driven by the SAI when a slot is inactive. */
    constexpr std::uint32_t SAI_ACR2_TRIS_B_0x0 = 0;
        /** @brief SD output line is released (HI-Z) at the end of the last data bit of the last active slot if the next one is inactive. */
    constexpr std::uint32_t SAI_ACR2_TRIS_B_0x1 = 1;

    /** @brief Mute. */
    using SAI_ACR2_MUTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No mute mode. (value: 0)
     *          - B_0x1: Mute mode enabled. (value: 1)
     */
        /** @brief No mute mode. */
    constexpr std::uint32_t SAI_ACR2_MUTE_B_0x0 = 0;
        /** @brief Mute mode enabled. */
    constexpr std::uint32_t SAI_ACR2_MUTE_B_0x1 = 1;

    /** @brief Mute value. */
    using SAI_ACR2_MUTEVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bit value 0 is sent during the mute mode. (value: 0)
     *          - B_0x1: Last values are sent during the mute mode. (value: 1)
     */
        /** @brief Bit value 0 is sent during the mute mode. */
    constexpr std::uint32_t SAI_ACR2_MUTEVAL_B_0x0 = 0;
        /** @brief Last values are sent during the mute mode. */
    constexpr std::uint32_t SAI_ACR2_MUTEVAL_B_0x1 = 1;

    /** @brief Mute counter. */
    using SAI_ACR2_MUTECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Complement bit. */
    using SAI_ACR2_CPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1's complement representation. (value: 0)
     *          - B_0x1: 2's complement representation. (value: 1)
     */
        /** @brief 1's complement representation. */
    constexpr std::uint32_t SAI_ACR2_CPL_B_0x0 = 0;
        /** @brief 2's complement representation. */
    constexpr std::uint32_t SAI_ACR2_CPL_B_0x1 = 1;

    /** @brief Companding mode. */
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
    /** @brief Frame length. */
    using SAI_AFRCR_FRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame synchronization active level length. */
    using SAI_AFRCR_FSALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame synchronization definition. */
    using SAI_AFRCR_FSDEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS signal is a start frame signal (value: 0)
     *          - B_0x1: FS signal is a start of frame signal + channel side identification (value: 1)
     */
        /** @brief FS signal is a start frame signal */
    constexpr std::uint32_t SAI_AFRCR_FSDEF_B_0x0 = 0;
        /** @brief FS signal is a start of frame signal + channel side identification */
    constexpr std::uint32_t SAI_AFRCR_FSDEF_B_0x1 = 1;

    /** @brief Frame synchronization polarity. */
    using SAI_AFRCR_FSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS is active low (falling edge) (value: 0)
     *          - B_0x1: FS is active high (rising edge) (value: 1)
     */
        /** @brief FS is active low (falling edge) */
    constexpr std::uint32_t SAI_AFRCR_FSPOL_B_0x0 = 0;
        /** @brief FS is active high (rising edge) */
    constexpr std::uint32_t SAI_AFRCR_FSPOL_B_0x1 = 1;

    /** @brief Frame synchronization offset. */
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
    /** @brief First bit offset */
    using SAI_ASLOTR_FBOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot size */
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

    /** @brief Number of slots in an audio frame. */
    using SAI_ASLOTR_NBSLOT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot enable. */
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
    /** @brief Overrun/underrun interrupt enable. */
    using SAI_AIM_OVRUDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_OVRUDRIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_OVRUDRIE_B_0x1 = 1;

    /** @brief Mute detection interrupt enable. */
    using SAI_AIM_MUTEDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_MUTEDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_MUTEDETIE_B_0x1 = 1;

    /** @brief Wrong clock configuration interrupt enable. */
    using SAI_AIM_WCKCFGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_WCKCFGIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_WCKCFGIE_B_0x1 = 1;

    /** @brief FIFO request interrupt enable. */
    using SAI_AIM_FREQIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_FREQIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_FREQIE_B_0x1 = 1;

    /** @brief Codec not ready interrupt enable (AC'97). */
    using SAI_AIM_CNRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_CNRDYIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_CNRDYIE_B_0x1 = 1;

    /** @brief Anticipated frame synchronization detection interrupt enable. */
    using SAI_AIM_AFSDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_AIM_AFSDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_AIM_AFSDETIE_B_0x1 = 1;

    /** @brief Late frame synchronization detection interrupt enable. */
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
    /** @brief Overrun / underrun. */
    using SAI_ASR_OVRUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun/underrun error. (value: 0)
     *          - B_0x1: Overrun/underrun error detection. (value: 1)
     */
        /** @brief No overrun/underrun error. */
    constexpr std::uint32_t SAI_ASR_OVRUDR_B_0x0 = 0;
        /** @brief Overrun/underrun error detection. */
    constexpr std::uint32_t SAI_ASR_OVRUDR_B_0x1 = 1;

    /** @brief Mute detection. */
    using SAI_ASR_MUTEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MUTE detection on the SD input line (value: 0)
     *          - B_0x1: MUTE value detected on the SD input line (0 value) for a specified number of consecutive audio frame (value: 1)
     */
        /** @brief No MUTE detection on the SD input line */
    constexpr std::uint32_t SAI_ASR_MUTEDET_B_0x0 = 0;
        /** @brief MUTE value detected on the SD input line (0 value) for a specified number of consecutive audio frame */
    constexpr std::uint32_t SAI_ASR_MUTEDET_B_0x1 = 1;

    /** @brief Wrong clock configuration flag. */
    using SAI_ASR_WCKCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock configuration is correct (value: 0)
     *          - B_0x1: Clock configuration does not respect the rule concerning the frame length specification defined in Section 59.4.6: Frame synchronization (configuration of FRL[7:0] bit in the SAI_xFRCR register) (value: 1)
     */
        /** @brief Clock configuration is correct */
    constexpr std::uint32_t SAI_ASR_WCKCFG_B_0x0 = 0;
        /** @brief Clock configuration does not respect the rule concerning the frame length specification defined in Section 59.4.6: Frame synchronization (configuration of FRL[7:0] bit in the SAI_xFRCR register) */
    constexpr std::uint32_t SAI_ASR_WCKCFG_B_0x1 = 1;

    /** @brief FIFO request. */
    using SAI_ASR_FREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO request. (value: 0)
     *          - B_0x1: FIFO request to read or to write the SAI_xDR. (value: 1)
     */
        /** @brief No FIFO request. */
    constexpr std::uint32_t SAI_ASR_FREQ_B_0x0 = 0;
        /** @brief FIFO request to read or to write the SAI_xDR. */
    constexpr std::uint32_t SAI_ASR_FREQ_B_0x1 = 1;

    /** @brief Codec not ready. */
    using SAI_ASR_CNRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External AC'97 Codec is ready (value: 0)
     *          - B_0x1: External AC'97 Codec is not ready (value: 1)
     */
        /** @brief External AC'97 Codec is ready */
    constexpr std::uint32_t SAI_ASR_CNRDY_B_0x0 = 0;
        /** @brief External AC'97 Codec is not ready */
    constexpr std::uint32_t SAI_ASR_CNRDY_B_0x1 = 1;

    /** @brief Anticipated frame synchronization detection. */
    using SAI_ASR_AFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error. (value: 0)
     *          - B_0x1: Frame synchronization signal is detected earlier than expected. (value: 1)
     */
        /** @brief No error. */
    constexpr std::uint32_t SAI_ASR_AFSDET_B_0x0 = 0;
        /** @brief Frame synchronization signal is detected earlier than expected. */
    constexpr std::uint32_t SAI_ASR_AFSDET_B_0x1 = 1;

    /** @brief Late frame synchronization detection. */
    using SAI_ASR_LFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error. (value: 0)
     *          - B_0x1: Frame synchronization signal is not present at the right time. (value: 1)
     */
        /** @brief No error. */
    constexpr std::uint32_t SAI_ASR_LFSDET_B_0x0 = 0;
        /** @brief Frame synchronization signal is not present at the right time. */
    constexpr std::uint32_t SAI_ASR_LFSDET_B_0x1 = 1;

    /** @brief FIFO level threshold. */
    using SAI_ASR_FLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO empty (transmitter and receiver modes) (value: 0)
     *          - B_0x1: FIFO less than or equal 1/4 but not empty (transmitter mode), FIFO less than 1/4 but not empty (receiver mode) (value: 1)
     *          - B_0x2: 1/4 less than FIFO less than or equal half (transmitter mode), 1/4 less than or equal FIFO less than half (receiver mode) (value: 2)
     *          - B_0x3: half less than FIFO less than or equal 3/4 (transmitter mode), half less than or equal FIFO less than 3/4 (receiver mode) (value: 3)
     *          - B_0x4: 3/4 less than FIFO but not full (transmitter mode), 3/4 less than or equal FIFO but not full (receiver mode) (value: 4)
     *          - B_0x5: FIFO full (transmitter and receiver modes) (value: 5)
     */
        /** @brief FIFO empty (transmitter and receiver modes) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x0 = 0;
        /** @brief FIFO less than or equal 1/4 but not empty (transmitter mode), FIFO less than 1/4 but not empty (receiver mode) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x1 = 1;
        /** @brief 1/4 less than FIFO less than or equal half (transmitter mode), 1/4 less than or equal FIFO less than half (receiver mode) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x2 = 2;
        /** @brief half less than FIFO less than or equal 3/4 (transmitter mode), half less than or equal FIFO less than 3/4 (receiver mode) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x3 = 3;
        /** @brief 3/4 less than FIFO but not full (transmitter mode), 3/4 less than or equal FIFO but not full (receiver mode) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x4 = 4;
        /** @brief FIFO full (transmitter and receiver modes) */
    constexpr std::uint32_t SAI_ASR_FLVL_B_0x5 = 5;

    /** @brief SAI clear flag register */
    using SAI_ACLRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear overrun / underrun. */
    using SAI_ACLRFR_COVRUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute detection flag. */
    using SAI_ACLRFR_CMUTEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wrong clock configuration flag. */
    using SAI_ACLRFR_CWCKCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Codec not ready flag. */
    using SAI_ACLRFR_CCNRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear anticipated frame synchronization detection flag. */
    using SAI_ACLRFR_CAFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear late frame synchronization detection flag. */
    using SAI_ACLRFR_CLFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI data register */
    using SAI_ADR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data */
    using SAI_ADR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI configuration register 1 */
    using SAI_BCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAIx audio block mode */
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

    /** @brief Protocol configuration */
    using SAI_BCR1_PRTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Free protocol. Free protocol enables to use the powerful config uration of the audio block to address a specific audio protocol (such as I2S, LSB/MSB justified, TDM, PCM/DSP...) by setting most of the configuration register bits as well as frame configuration register. (value: 0)
     *          - B_0x1: SPDIF protocol (value: 1)
     *          - B_0x2: AC'97 protocol (value: 2)
     */
        /** @brief Free protocol. Free protocol enables to use the powerful config uration of the audio block to address a specific audio protocol (such as I2S, LSB/MSB justified, TDM, PCM/DSP...) by setting most of the configuration register bits as well as frame configuration register. */
    constexpr std::uint32_t SAI_BCR1_PRTCFG_B_0x0 = 0;
        /** @brief SPDIF protocol */
    constexpr std::uint32_t SAI_BCR1_PRTCFG_B_0x1 = 1;
        /** @brief AC'97 protocol */
    constexpr std::uint32_t SAI_BCR1_PRTCFG_B_0x2 = 2;

    /** @brief Data size */
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

    /** @brief Least significant bit first */
    using SAI_BCR1_LSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data are transferred with MSB first (value: 0)
     *          - B_0x1: Data are transferred with LSB first (value: 1)
     */
        /** @brief Data are transferred with MSB first */
    constexpr std::uint32_t SAI_BCR1_LSBFIRST_B_0x0 = 0;
        /** @brief Data are transferred with LSB first */
    constexpr std::uint32_t SAI_BCR1_LSBFIRST_B_0x1 = 1;

    /** @brief Clock strobing edge */
    using SAI_BCR1_CKSTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signals generated by the SAI change on SCK rising edge, while signals received by the SAI are sampled on the SCK falling edge. (value: 0)
     *          - B_0x1: Signals generated by the SAI change on SCK falling edge, while signals received by the SAI are sampled on the SCK rising edge. (value: 1)
     */
        /** @brief Signals generated by the SAI change on SCK rising edge, while signals received by the SAI are sampled on the SCK falling edge. */
    constexpr std::uint32_t SAI_BCR1_CKSTR_B_0x0 = 0;
        /** @brief Signals generated by the SAI change on SCK falling edge, while signals received by the SAI are sampled on the SCK rising edge. */
    constexpr std::uint32_t SAI_BCR1_CKSTR_B_0x1 = 1;

    /** @brief Synchronization enable */
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

    /** @brief Mono mode */
    using SAI_BCR1_MONO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stereo mode (value: 0)
     *          - B_0x1: Mono mode. (value: 1)
     */
        /** @brief Stereo mode */
    constexpr std::uint32_t SAI_BCR1_MONO_B_0x0 = 0;
        /** @brief Mono mode. */
    constexpr std::uint32_t SAI_BCR1_MONO_B_0x1 = 1;

    /** @brief Output drive */
    using SAI_BCR1_OUTDRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Audio block output driven when SAIEN is set (value: 0)
     *          - B_0x1: Audio block output driven immediately after the setting of this bit. (value: 1)
     */
        /** @brief Audio block output driven when SAIEN is set */
    constexpr std::uint32_t SAI_BCR1_OUTDRIV_B_0x0 = 0;
        /** @brief Audio block output driven immediately after the setting of this bit. */
    constexpr std::uint32_t SAI_BCR1_OUTDRIV_B_0x1 = 1;

    /** @brief Audio block enable */
    using SAI_BCR1_SAIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI audio block disabled (value: 0)
     *          - B_0x1: SAI audio block enabled. (value: 1)
     */
        /** @brief SAI audio block disabled */
    constexpr std::uint32_t SAI_BCR1_SAIEN_B_0x0 = 0;
        /** @brief SAI audio block enabled. */
    constexpr std::uint32_t SAI_BCR1_SAIEN_B_0x1 = 1;

    /** @brief DMA enable */
    using SAI_BCR1_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled (value: 0)
     *          - B_0x1: DMA enabled (value: 1)
     */
        /** @brief DMA disabled */
    constexpr std::uint32_t SAI_BCR1_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled */
    constexpr std::uint32_t SAI_BCR1_DMAEN_B_0x1 = 1;

    /** @brief No divider */
    using SAI_BCR1_NODIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the ratio between the Master clock generator and frame synchronization is fixed to 256 or 512 (value: 0)
     *          - B_0x1: the ratio between the Master clock generator and frame synchronization depends on FRL[7:0] (value: 1)
     */
        /** @brief the ratio between the Master clock generator and frame synchronization is fixed to 256 or 512 */
    constexpr std::uint32_t SAI_BCR1_NODIV_B_0x0 = 0;
        /** @brief the ratio between the Master clock generator and frame synchronization depends on FRL[7:0] */
    constexpr std::uint32_t SAI_BCR1_NODIV_B_0x1 = 1;

    /** @brief Master clock divider */
    using SAI_BCR1_MCKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Divides by 1 the kernel clock input (sai_x_ker_ck). (value: 0)
     */
        /** @brief Divides by 1 the kernel clock input (sai_x_ker_ck). */
    constexpr std::uint32_t SAI_BCR1_MCKDIV_B_0x0 = 0;

    /** @brief Oversampling ratio for master clock */
    using SAI_BCR1_OSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master clock frequency = F less than sub>FS less than /sub> x 256 (value: 0)
     *          - B_0x1: Master clock frequency = F less than sub>FS less than /sub> x 512 (value: 1)
     */
        /** @brief Master clock frequency = F less than sub>FS less than /sub> x 256 */
    constexpr std::uint32_t SAI_BCR1_OSR_B_0x0 = 0;
        /** @brief Master clock frequency = F less than sub>FS less than /sub> x 512 */
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
    /** @brief FIFO threshold. */
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

    /** @brief FIFO flush. */
    using SAI_BCR2_FFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO flush. (value: 0)
     *          - B_0x1: FIFO flush. Programming this bit to 1 triggers the FIFO Flush. All the internal FIFO pointers (read and write) are cleared. In this case data still present in the FIFO are lost (no more transmission or received data lost). Before flushing, SAI DMA stream/interrupt must be disabled (value: 1)
     */
        /** @brief No FIFO flush. */
    constexpr std::uint32_t SAI_BCR2_FFLUSH_B_0x0 = 0;
        /** @brief FIFO flush. Programming this bit to 1 triggers the FIFO Flush. All the internal FIFO pointers (read and write) are cleared. In this case data still present in the FIFO are lost (no more transmission or received data lost). Before flushing, SAI DMA stream/interrupt must be disabled */
    constexpr std::uint32_t SAI_BCR2_FFLUSH_B_0x1 = 1;

    /** @brief Tristate management on data line. */
    using SAI_BCR2_TRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SD output line is still driven by the SAI when a slot is inactive. (value: 0)
     *          - B_0x1: SD output line is released (HI-Z) at the end of the last data bit of the last active slot if the next one is inactive. (value: 1)
     */
        /** @brief SD output line is still driven by the SAI when a slot is inactive. */
    constexpr std::uint32_t SAI_BCR2_TRIS_B_0x0 = 0;
        /** @brief SD output line is released (HI-Z) at the end of the last data bit of the last active slot if the next one is inactive. */
    constexpr std::uint32_t SAI_BCR2_TRIS_B_0x1 = 1;

    /** @brief Mute. */
    using SAI_BCR2_MUTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No mute mode. (value: 0)
     *          - B_0x1: Mute mode enabled. (value: 1)
     */
        /** @brief No mute mode. */
    constexpr std::uint32_t SAI_BCR2_MUTE_B_0x0 = 0;
        /** @brief Mute mode enabled. */
    constexpr std::uint32_t SAI_BCR2_MUTE_B_0x1 = 1;

    /** @brief Mute value. */
    using SAI_BCR2_MUTEVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bit value 0 is sent during the mute mode. (value: 0)
     *          - B_0x1: Last values are sent during the mute mode. (value: 1)
     */
        /** @brief Bit value 0 is sent during the mute mode. */
    constexpr std::uint32_t SAI_BCR2_MUTEVAL_B_0x0 = 0;
        /** @brief Last values are sent during the mute mode. */
    constexpr std::uint32_t SAI_BCR2_MUTEVAL_B_0x1 = 1;

    /** @brief Mute counter. */
    using SAI_BCR2_MUTECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Complement bit. */
    using SAI_BCR2_CPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1's complement representation. (value: 0)
     *          - B_0x1: 2's complement representation. (value: 1)
     */
        /** @brief 1's complement representation. */
    constexpr std::uint32_t SAI_BCR2_CPL_B_0x0 = 0;
        /** @brief 2's complement representation. */
    constexpr std::uint32_t SAI_BCR2_CPL_B_0x1 = 1;

    /** @brief Companding mode. */
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
    /** @brief Frame length. */
    using SAI_BFRCR_FRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame synchronization active level length. */
    using SAI_BFRCR_FSALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame synchronization definition. */
    using SAI_BFRCR_FSDEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS signal is a start frame signal (value: 0)
     *          - B_0x1: FS signal is a start of frame signal + channel side identification (value: 1)
     */
        /** @brief FS signal is a start frame signal */
    constexpr std::uint32_t SAI_BFRCR_FSDEF_B_0x0 = 0;
        /** @brief FS signal is a start of frame signal + channel side identification */
    constexpr std::uint32_t SAI_BFRCR_FSDEF_B_0x1 = 1;

    /** @brief Frame synchronization polarity. */
    using SAI_BFRCR_FSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FS is active low (falling edge) (value: 0)
     *          - B_0x1: FS is active high (rising edge) (value: 1)
     */
        /** @brief FS is active low (falling edge) */
    constexpr std::uint32_t SAI_BFRCR_FSPOL_B_0x0 = 0;
        /** @brief FS is active high (rising edge) */
    constexpr std::uint32_t SAI_BFRCR_FSPOL_B_0x1 = 1;

    /** @brief Frame synchronization offset. */
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
    /** @brief First bit offset */
    using SAI_BSLOTR_FBOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot size */
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

    /** @brief Number of slots in an audio frame. */
    using SAI_BSLOTR_NBSLOT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot enable. */
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
    /** @brief Overrun/underrun interrupt enable. */
    using SAI_BIM_OVRUDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_OVRUDRIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_OVRUDRIE_B_0x1 = 1;

    /** @brief Mute detection interrupt enable. */
    using SAI_BIM_MUTEDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_MUTEDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_MUTEDETIE_B_0x1 = 1;

    /** @brief Wrong clock configuration interrupt enable. */
    using SAI_BIM_WCKCFGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_WCKCFGIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_WCKCFGIE_B_0x1 = 1;

    /** @brief FIFO request interrupt enable. */
    using SAI_BIM_FREQIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_FREQIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_FREQIE_B_0x1 = 1;

    /** @brief Codec not ready interrupt enable (AC'97). */
    using SAI_BIM_CNRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_CNRDYIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_CNRDYIE_B_0x1 = 1;

    /** @brief Anticipated frame synchronization detection interrupt enable. */
    using SAI_BIM_AFSDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: Interrupt is enabled (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t SAI_BIM_AFSDETIE_B_0x0 = 0;
        /** @brief Interrupt is enabled */
    constexpr std::uint32_t SAI_BIM_AFSDETIE_B_0x1 = 1;

    /** @brief Late frame synchronization detection interrupt enable. */
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
    /** @brief Overrun / underrun. */
    using SAI_BSR_OVRUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun/underrun error. (value: 0)
     *          - B_0x1: Overrun/underrun error detection. (value: 1)
     */
        /** @brief No overrun/underrun error. */
    constexpr std::uint32_t SAI_BSR_OVRUDR_B_0x0 = 0;
        /** @brief Overrun/underrun error detection. */
    constexpr std::uint32_t SAI_BSR_OVRUDR_B_0x1 = 1;

    /** @brief Mute detection. */
    using SAI_BSR_MUTEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MUTE detection on the SD input line (value: 0)
     *          - B_0x1: MUTE value detected on the SD input line (0 value) for a specified number of consecutive audio frame (value: 1)
     */
        /** @brief No MUTE detection on the SD input line */
    constexpr std::uint32_t SAI_BSR_MUTEDET_B_0x0 = 0;
        /** @brief MUTE value detected on the SD input line (0 value) for a specified number of consecutive audio frame */
    constexpr std::uint32_t SAI_BSR_MUTEDET_B_0x1 = 1;

    /** @brief Wrong clock configuration flag. */
    using SAI_BSR_WCKCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock configuration is correct (value: 0)
     *          - B_0x1: Clock configuration does not respect the rule concerning the frame length specification defined in Section 59.4.6: Frame synchronization (configuration of FRL[7:0] bit in the SAI_xFRCR register) (value: 1)
     */
        /** @brief Clock configuration is correct */
    constexpr std::uint32_t SAI_BSR_WCKCFG_B_0x0 = 0;
        /** @brief Clock configuration does not respect the rule concerning the frame length specification defined in Section 59.4.6: Frame synchronization (configuration of FRL[7:0] bit in the SAI_xFRCR register) */
    constexpr std::uint32_t SAI_BSR_WCKCFG_B_0x1 = 1;

    /** @brief FIFO request. */
    using SAI_BSR_FREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO request. (value: 0)
     *          - B_0x1: FIFO request to read or to write the SAI_xDR. (value: 1)
     */
        /** @brief No FIFO request. */
    constexpr std::uint32_t SAI_BSR_FREQ_B_0x0 = 0;
        /** @brief FIFO request to read or to write the SAI_xDR. */
    constexpr std::uint32_t SAI_BSR_FREQ_B_0x1 = 1;

    /** @brief Codec not ready. */
    using SAI_BSR_CNRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External AC'97 Codec is ready (value: 0)
     *          - B_0x1: External AC'97 Codec is not ready (value: 1)
     */
        /** @brief External AC'97 Codec is ready */
    constexpr std::uint32_t SAI_BSR_CNRDY_B_0x0 = 0;
        /** @brief External AC'97 Codec is not ready */
    constexpr std::uint32_t SAI_BSR_CNRDY_B_0x1 = 1;

    /** @brief Anticipated frame synchronization detection. */
    using SAI_BSR_AFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error. (value: 0)
     *          - B_0x1: Frame synchronization signal is detected earlier than expected. (value: 1)
     */
        /** @brief No error. */
    constexpr std::uint32_t SAI_BSR_AFSDET_B_0x0 = 0;
        /** @brief Frame synchronization signal is detected earlier than expected. */
    constexpr std::uint32_t SAI_BSR_AFSDET_B_0x1 = 1;

    /** @brief Late frame synchronization detection. */
    using SAI_BSR_LFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error. (value: 0)
     *          - B_0x1: Frame synchronization signal is not present at the right time. (value: 1)
     */
        /** @brief No error. */
    constexpr std::uint32_t SAI_BSR_LFSDET_B_0x0 = 0;
        /** @brief Frame synchronization signal is not present at the right time. */
    constexpr std::uint32_t SAI_BSR_LFSDET_B_0x1 = 1;

    /** @brief FIFO level threshold. */
    using SAI_BSR_FLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO empty (transmitter and receiver modes) (value: 0)
     *          - B_0x1: FIFO less than or equal 1/4 but not empty (transmitter mode), FIFO less than 1/4 but not empty (receiver mode) (value: 1)
     *          - B_0x2: 1/4 less than FIFO less than or equal half (transmitter mode), 1/4 less than or equal FIFO less than half (receiver mode) (value: 2)
     *          - B_0x3: half less than FIFO less than or equal 3/4 (transmitter mode), half less than or equal FIFO less than 3/4 (receiver mode) (value: 3)
     *          - B_0x4: 3/4 less than FIFO but not full (transmitter mode), 3/4 less than or equal FIFO but not full (receiver mode) (value: 4)
     *          - B_0x5: FIFO full (transmitter and receiver modes) (value: 5)
     */
        /** @brief FIFO empty (transmitter and receiver modes) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x0 = 0;
        /** @brief FIFO less than or equal 1/4 but not empty (transmitter mode), FIFO less than 1/4 but not empty (receiver mode) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x1 = 1;
        /** @brief 1/4 less than FIFO less than or equal half (transmitter mode), 1/4 less than or equal FIFO less than half (receiver mode) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x2 = 2;
        /** @brief half less than FIFO less than or equal 3/4 (transmitter mode), half less than or equal FIFO less than 3/4 (receiver mode) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x3 = 3;
        /** @brief 3/4 less than FIFO but not full (transmitter mode), 3/4 less than or equal FIFO but not full (receiver mode) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x4 = 4;
        /** @brief FIFO full (transmitter and receiver modes) */
    constexpr std::uint32_t SAI_BSR_FLVL_B_0x5 = 5;

    /** @brief SAI clear flag register */
    using SAI_BCLRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear overrun / underrun. */
    using SAI_BCLRFR_COVRUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute detection flag. */
    using SAI_BCLRFR_CMUTEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wrong clock configuration flag. */
    using SAI_BCLRFR_CWCKCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Codec not ready flag. */
    using SAI_BCLRFR_CCNRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear anticipated frame synchronization detection flag. */
    using SAI_BCLRFR_CAFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear late frame synchronization detection flag. */
    using SAI_BCLRFR_CLFSDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI data register */
    using SAI_BDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data */
    using SAI_BDR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI PDM control register */
    using SAI_PDMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDM enable */
    using SAI_PDMCR_PDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDM interface disabled (value: 0)
     *          - B_0x1: PDM interface enabled (value: 1)
     */
        /** @brief PDM interface disabled */
    constexpr std::uint32_t SAI_PDMCR_PDMEN_B_0x0 = 0;
        /** @brief PDM interface enabled */
    constexpr std::uint32_t SAI_PDMCR_PDMEN_B_0x1 = 1;

    /** @brief Number of microphones */
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

    /** @brief Clock enable of bitstream clock number 1 */
    using SAI_PDMCR_CKEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI_CK1 clock disabled (value: 0)
     *          - B_0x1: SAI_CK1 clock enabled (value: 1)
     */
        /** @brief SAI_CK1 clock disabled */
    constexpr std::uint32_t SAI_PDMCR_CKEN1_B_0x0 = 0;
        /** @brief SAI_CK1 clock enabled */
    constexpr std::uint32_t SAI_PDMCR_CKEN1_B_0x1 = 1;

    /** @brief Clock enable of bitstream clock number 2 */
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
    /** @brief Delay line adjust for first microphone of pair 1 */
    using SAI_PDMDLY_DLYM1L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 T less than sub>SAI_CK less than /sub>period (value: 1)
     *          - B_0x2: Delay of 2 T less than sub>SAI_CK less than /sub>periods (value: 2)
     *          - B_0x7: Delay of 7 T less than sub>SAI_CK less than /sub>periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1L_B_0x0 = 0;
        /** @brief Delay of 1 T less than sub>SAI_CK less than /sub>period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1L_B_0x1 = 1;
        /** @brief Delay of 2 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1L_B_0x2 = 2;
        /** @brief Delay of 7 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1L_B_0x7 = 7;

    /** @brief Delay line adjust for second microphone of pair 1 */
    using SAI_PDMDLY_DLYM1R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 T less than sub>SAI_CK less than /sub>period (value: 1)
     *          - B_0x2: Delay of 2 T less than sub>SAI_CK less than /sub>periods (value: 2)
     *          - B_0x7: Delay of 7 T less than sub>SAI_CK less than /sub>periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1R_B_0x0 = 0;
        /** @brief Delay of 1 T less than sub>SAI_CK less than /sub>period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1R_B_0x1 = 1;
        /** @brief Delay of 2 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1R_B_0x2 = 2;
        /** @brief Delay of 7 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM1R_B_0x7 = 7;

    /** @brief Delay line for first microphone of pair 2 */
    using SAI_PDMDLY_DLYM2L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 T less than sub>SAI_CK less than /sub>period (value: 1)
     *          - B_0x2: Delay of 2 T less than sub>SAI_CK less than /sub>periods (value: 2)
     *          - B_0x7: Delay of 7 T less than sub>SAI_CK less than /sub>periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2L_B_0x0 = 0;
        /** @brief Delay of 1 T less than sub>SAI_CK less than /sub>period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2L_B_0x1 = 1;
        /** @brief Delay of 2 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2L_B_0x2 = 2;
        /** @brief Delay of 7 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2L_B_0x7 = 7;

    /** @brief Delay line for second microphone of pair 2 */
    using SAI_PDMDLY_DLYM2R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 T less than sub>SAI_CK less than /sub>period (value: 1)
     *          - B_0x2: Delay of 2 T less than sub>SAI_CK less than /sub>periods (value: 2)
     *          - B_0x7: Delay of 7 T less than sub>SAI_CK less than /sub>periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2R_B_0x0 = 0;
        /** @brief Delay of 1 T less than sub>SAI_CK less than /sub>period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2R_B_0x1 = 1;
        /** @brief Delay of 2 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2R_B_0x2 = 2;
        /** @brief Delay of 7 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM2R_B_0x7 = 7;

    /** @brief Delay line for first microphone of pair 3 */
    using SAI_PDMDLY_DLYM3L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 T less than sub>SAI_CK less than /sub>period (value: 1)
     *          - B_0x2: Delay of 2 T less than sub>SAI_CK less than /sub>periods (value: 2)
     *          - B_0x7: Delay of 7 T less than sub>SAI_CK less than /sub>periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3L_B_0x0 = 0;
        /** @brief Delay of 1 T less than sub>SAI_CK less than /sub>period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3L_B_0x1 = 1;
        /** @brief Delay of 2 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3L_B_0x2 = 2;
        /** @brief Delay of 7 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3L_B_0x7 = 7;

    /** @brief Delay line for second microphone of pair 3 */
    using SAI_PDMDLY_DLYM3R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 T less than sub>SAI_CK less than /sub>period (value: 1)
     *          - B_0x2: Delay of 2 T less than sub>SAI_CK less than /sub>periods (value: 2)
     *          - B_0x7: Delay of 7 T less than sub>SAI_CK less than /sub>periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3R_B_0x0 = 0;
        /** @brief Delay of 1 T less than sub>SAI_CK less than /sub>period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3R_B_0x1 = 1;
        /** @brief Delay of 2 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3R_B_0x2 = 2;
        /** @brief Delay of 7 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM3R_B_0x7 = 7;

    /** @brief Delay line for first microphone of pair 4 */
    using SAI_PDMDLY_DLYM4L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 T less than sub>SAI_CK less than /sub>period (value: 1)
     *          - B_0x2: Delay of 2 T less than sub>SAI_CK less than /sub>periods (value: 2)
     *          - B_0x7: Delay of 7 of T less than sub>SAI_CK less than /sub>periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4L_B_0x0 = 0;
        /** @brief Delay of 1 T less than sub>SAI_CK less than /sub>period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4L_B_0x1 = 1;
        /** @brief Delay of 2 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4L_B_0x2 = 2;
        /** @brief Delay of 7 of T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4L_B_0x7 = 7;

    /** @brief Delay line for second microphone of pair 4 */
    using SAI_PDMDLY_DLYM4R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay of 1 T less than sub>SAI_CK less than /sub>period (value: 1)
     *          - B_0x2: Delay of 2 T less than sub>SAI_CK less than /sub>periods (value: 2)
     *          - B_0x7: Delay of 7 T less than sub>SAI_CK less than /sub>periods (value: 7)
     */
        /** @brief No delay */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4R_B_0x0 = 0;
        /** @brief Delay of 1 T less than sub>SAI_CK less than /sub>period */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4R_B_0x1 = 1;
        /** @brief Delay of 2 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4R_B_0x2 = 2;
        /** @brief Delay of 7 T less than sub>SAI_CK less than /sub>periods */
    constexpr std::uint32_t SAI_PDMDLY_DLYM4R_B_0x7 = 7;

}

#endif
