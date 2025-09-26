/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_HSP_HPP
#define EMBEDDED_PP_STM32U3C5_HSP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief HSP register block */
namespace STM32U3C5::HSP {

    /** @brief HSP control register */
    using HSP_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot enable control */
    using HSP_CR_BOOTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The HSP is not allowed to boot (default after reset). (value: 0)
     *          - B_0x1: The HSP is allowed to boot, and the SPE executes the code located in the CRAM. (value: 1)
     */
        /** @brief The HSP is not allowed to boot (default after reset). */
    constexpr std::uint32_t HSP_CR_BOOTEN_B_0x0 = 0;
        /** @brief The HSP is allowed to boot, and the SPE executes the code located in the CRAM. */
    constexpr std::uint32_t HSP_CR_BOOTEN_B_0x1 = 1;

    /** @brief HSP_CTRL clock gating disable */
    using HSP_CR_CTRLCGDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSP_CTRL clock gating enabled: HSP_CTRL clocks are locally gated (default after reset). (value: 0)
     *          - B_0x1: HSP_CTRL clock gating disabled: HSP_CTRL clocks are not locally gated. (value: 1)
     */
        /** @brief HSP_CTRL clock gating enabled: HSP_CTRL clocks are locally gated (default after reset). */
    constexpr std::uint32_t HSP_CR_CTRLCGDIS_B_0x0 = 0;
        /** @brief HSP_CTRL clock gating disabled: HSP_CTRL clocks are not locally gated. */
    constexpr std::uint32_t HSP_CR_CTRLCGDIS_B_0x1 = 1;

    /** @brief MMC clock gating disable */
    using HSP_CR_MMCCGDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MMC clock gating enabled: MMC clocks are locally gated (default after reset). (value: 0)
     *          - B_0x1: MMC clock gating disabled: MMC clocks are not locally gated. (value: 1)
     */
        /** @brief MMC clock gating enabled: MMC clocks are locally gated (default after reset). */
    constexpr std::uint32_t HSP_CR_MMCCGDIS_B_0x0 = 0;
        /** @brief MMC clock gating disabled: MMC clocks are not locally gated. */
    constexpr std::uint32_t HSP_CR_MMCCGDIS_B_0x1 = 1;

    /** @brief SPE clock gating disable */
    using HSP_CR_SPECGDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPE clock gating enabled: SPE clocks are locally gated (default after reset). (value: 0)
     *          - B_0x1: SPE clock gating disabled: SPE clocks are not locally gated. (value: 1)
     */
        /** @brief SPE clock gating enabled: SPE clocks are locally gated (default after reset). */
    constexpr std::uint32_t HSP_CR_SPECGDIS_B_0x0 = 0;
        /** @brief SPE clock gating disabled: SPE clocks are not locally gated. */
    constexpr std::uint32_t HSP_CR_SPECGDIS_B_0x1 = 1;

    /** @brief Direct command event enable */
    using HSP_CR_DCMDEVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (default after reset) (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled (default after reset) */
    constexpr std::uint32_t HSP_CR_DCMDEVEN_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t HSP_CR_DCMDEVEN_B_0x1 = 1;

    /** @brief CRAM and DRAM lock access control */
    using HSP_CR_CDRLCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRAM and DRAM are accessible for read and write operations (default after reset). (value: 0)
     *          - B_0x1: CRAM and DRAM are write protected, but can be read. (value: 1)
     */
        /** @brief CRAM and DRAM are accessible for read and write operations (default after reset). */
    constexpr std::uint32_t HSP_CR_CDRLCK_B_0x0 = 0;
        /** @brief CRAM and DRAM are write protected, but can be read. */
    constexpr std::uint32_t HSP_CR_CDRLCK_B_0x1 = 1;

    /** @brief Register write lock access control */
    using HSP_CR_REGLCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Registers are accessible by the CPU through the slave AHB interface (default after reset). (value: 0)
     *          - B_0x1: Selected registers are write-protected and the CPU cannot change the content. (value: 1)
     */
        /** @brief Registers are accessible by the CPU through the slave AHB interface (default after reset). */
    constexpr std::uint32_t HSP_CR_REGLCK_B_0x0 = 0;
        /** @brief Selected registers are write-protected and the CPU cannot change the content. */
    constexpr std::uint32_t HSP_CR_REGLCK_B_0x1 = 1;

    /** @brief Reset request */
    using HSP_CR_RSTREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HSP reset requested (default after reset) (value: 0)
     *          - B_0x1: HSP reset requested (value: 1)
     */
        /** @brief No HSP reset requested (default after reset) */
    constexpr std::uint32_t HSP_CR_RSTREQ_B_0x0 = 0;
        /** @brief HSP reset requested */
    constexpr std::uint32_t HSP_CR_RSTREQ_B_0x1 = 1;

    /** @brief Reset request accepted */
    using HSP_CR_RSTOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The HSP is not yet set into a state which ensures a safe reset. (value: 0)
     *          - B_0x1: The HSP can be safely reset. (value: 1)
     */
        /** @brief The HSP is not yet set into a state which ensures a safe reset. */
    constexpr std::uint32_t HSP_CR_RSTOK_B_0x0 = 0;
        /** @brief The HSP can be safely reset. */
    constexpr std::uint32_t HSP_CR_RSTOK_B_0x1 = 1;

    /** @brief BRAM arbitration */
    using HSP_CR_BARB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Max arbitration latency is 16 cycles. (value: 0)
     *          - B_0x1: Max arbitration latency is 8 cycles. (value: 1)
     *          - B_0x2: Max arbitration latency is 4 cycles. (value: 2)
     */
        /** @brief Max arbitration latency is 16 cycles. */
    constexpr std::uint32_t HSP_CR_BARB_B_0x0 = 0;
        /** @brief Max arbitration latency is 8 cycles. */
    constexpr std::uint32_t HSP_CR_BARB_B_0x1 = 1;
        /** @brief Max arbitration latency is 4 cycles. */
    constexpr std::uint32_t HSP_CR_BARB_B_0x2 = 2;

    /** @brief Boot status */
    using HSP_CR_BSTAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Initial value. (value: 0)
     *          - B_0x2: Start of firmware application (value: 2)
     */
        /** @brief Initial value. */
    constexpr std::uint32_t HSP_CR_BSTAT_B_0x0 = 0;
        /** @brief Start of firmware application */
    constexpr std::uint32_t HSP_CR_BSTAT_B_0x2 = 2;

    /** @brief HSP CPU-to-HSP semaphore register */
    using HSP_C2HSEMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU to HSP semaphore */
    using HSP_C2HSEMR_C2HSEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The CPU to HSP MSGB is ready to send a new message (default after reset). (value: 0)
     *          - B_0x1: The CPU to HSP MSGB contains a message for the HSP not yet read. (value: 1)
     */
        /** @brief The CPU to HSP MSGB is ready to send a new message (default after reset). */
    constexpr std::uint32_t HSP_C2HSEMR_C2HSEM_B_0x0 = 0;
        /** @brief The CPU to HSP MSGB contains a message for the HSP not yet read. */
    constexpr std::uint32_t HSP_C2HSEMR_C2HSEM_B_0x1 = 1;

    /** @brief HSP CPU-to-HSP message data register */
    using HSP_C2HMSGDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU message for the HSP */
    using HSP_C2HMSGDR_C2HDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP HSP-to-CPU semaphore register */
    using HSP_H2CSEMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP to CPU semaphore */
    using HSP_H2CSEMR_H2CSEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The HSP to CPU MSGB does not contain a new message from the HSP (default after reset). (value: 0)
     *          - B_0x1: The HSP to CPU MSGB contains a new message from the HSP. (value: 1)
     */
        /** @brief The HSP to CPU MSGB does not contain a new message from the HSP (default after reset). */
    constexpr std::uint32_t HSP_H2CSEMR_H2CSEM_B_0x0 = 0;
        /** @brief The HSP to CPU MSGB contains a new message from the HSP. */
    constexpr std::uint32_t HSP_H2CSEMR_H2CSEM_B_0x1 = 1;

    /** @brief HSP HSP-to-CPU message data register */
    using HSP_H2CMSGDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP message for the CPU */
    using HSP_H2CMSGDR_H2CDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP DCMD command status register */
    using HSP_DCMDSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direct command busy flag */
    using HSP_DCMDSR_DCBSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The current direct command execution is completed. (value: 0)
     *          - B_0x1: The current direct command execution is ongoing. (value: 1)
     */
        /** @brief The current direct command execution is completed. */
    constexpr std::uint32_t HSP_DCMDSR_DCBSY_B_0x0 = 0;
        /** @brief The current direct command execution is ongoing. */
    constexpr std::uint32_t HSP_DCMDSR_DCBSY_B_0x1 = 1;

    /** @brief HSP DCMD pointer status register */
    using HSP_DCMDPTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address pointer 0 flag */
    using HSP_DCMDPTSR_PTRF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPE read the address pointer 0. (value: 0)
     *          - B_0x1: The current address pointer 0 has not been read by the SPE. (value: 1)
     */
        /** @brief SPE read the address pointer 0. */
    constexpr std::uint32_t HSP_DCMDPTSR_PTRF0_B_0x0 = 0;
        /** @brief The current address pointer 0 has not been read by the SPE. */
    constexpr std::uint32_t HSP_DCMDPTSR_PTRF0_B_0x1 = 1;

    /** @brief Address pointer 1 flag */
    using HSP_DCMDPTSR_PTRF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPE read the address pointer 1. (value: 0)
     *          - B_0x1: The current address pointer 1 has not been read by the SPE. (value: 1)
     */
        /** @brief SPE read the address pointer 1. */
    constexpr std::uint32_t HSP_DCMDPTSR_PTRF1_B_0x0 = 0;
        /** @brief The current address pointer 1 has not been read by the SPE. */
    constexpr std::uint32_t HSP_DCMDPTSR_PTRF1_B_0x1 = 1;

    /** @brief Address pointer 2 flag */
    using HSP_DCMDPTSR_PTRF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPE read the address pointer 2. (value: 0)
     *          - B_0x1: The current address pointer 2 has not been read by the SPE. (value: 1)
     */
        /** @brief SPE read the address pointer 2. */
    constexpr std::uint32_t HSP_DCMDPTSR_PTRF2_B_0x0 = 0;
        /** @brief The current address pointer 2 has not been read by the SPE. */
    constexpr std::uint32_t HSP_DCMDPTSR_PTRF2_B_0x1 = 1;

    /** @brief Read ongoing indicator */
    using HSP_DCMDPTSR_RDOG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPE does not read a pointer (default after reset). (value: 0)
     *          - B_0x1: SPE is reading a pointer. (value: 1)
     */
        /** @brief SPE does not read a pointer (default after reset). */
    constexpr std::uint32_t HSP_DCMDPTSR_RDOG_B_0x0 = 0;
        /** @brief SPE is reading a pointer. */
    constexpr std::uint32_t HSP_DCMDPTSR_RDOG_B_0x1 = 1;

    /** @brief HSP DCMD command ID register */
    using HSP_DCMDIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command ID */
    using HSP_DCMDIDR_CMDID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP DCMD address pointer register 0 */
    using HSP_DCMDPTR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address pointer value */
    using HSP_DCMDPTR0_PTCPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP DCMD address pointer register 1 */
    using HSP_DCMDPTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address pointer value */
    using HSP_DCMDPTR1_PTCPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP DCMD address pointer register 2 */
    using HSP_DCMDPTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address pointer value */
    using HSP_DCMDPTR2_PTCPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP event enable register */
    using HSP_EVTENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Events enable */
    using HSP_EVTENR_EVTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 22, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (default after reset) (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled (default after reset) */
    constexpr std::uint32_t HSP_EVTENR_EVTEN_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t HSP_EVTENR_EVTEN_B_0x1 = 1;

    /** @brief HSP event synchronization enable register */
    using HSP_ESYNCENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event synchronization enable */
    using HSP_ESYNCENR_EVTSYNCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 22, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (default after reset) (value: 0)
     *          - B_0x1: Synchronization enabled. (value: 1)
     */
        /** @brief Synchronization disabled (default after reset) */
    constexpr std::uint32_t HSP_ESYNCENR_EVTSYNCEN_B_0x0 = 0;
        /** @brief Synchronization enabled. */
    constexpr std::uint32_t HSP_ESYNCENR_EVTSYNCEN_B_0x1 = 1;

    /** @brief CPU dedicated event synchronization enable */
    using HSP_ESYNCENR_CDEGSYNCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (default after reset) (value: 0)
     *          - B_0x1: Synchronization enabled. (value: 1)
     */
        /** @brief Synchronization disabled (default after reset) */
    constexpr std::uint32_t HSP_ESYNCENR_CDEGSYNCEN_B_0x0 = 0;
        /** @brief Synchronization enabled. */
    constexpr std::uint32_t HSP_ESYNCENR_CDEGSYNCEN_B_0x1 = 1;

    /** @brief HSP event synchronization source register 0 */
    using HSP_ESYNC0SRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event 1 synchronization source */
    using HSP_ESYNC0SRCR_EV1SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV1SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV1SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV1SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV1SSRC_B_0x3 = 3;

    /** @brief Event 2 synchronization source */
    using HSP_ESYNC0SRCR_EV2SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV2SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV2SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV2SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV2SSRC_B_0x3 = 3;

    /** @brief Event 3 synchronization source */
    using HSP_ESYNC0SRCR_EV3SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV3SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV3SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV3SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV3SSRC_B_0x3 = 3;

    /** @brief Event 4 synchronization source */
    using HSP_ESYNC0SRCR_EV4SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV4SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV4SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV4SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV4SSRC_B_0x3 = 3;

    /** @brief Event 5 synchronization source */
    using HSP_ESYNC0SRCR_EV5SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV5SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV5SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV5SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV5SSRC_B_0x3 = 3;

    /** @brief Event 6 synchronization source */
    using HSP_ESYNC0SRCR_EV6SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV6SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV6SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV6SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV6SSRC_B_0x3 = 3;

    /** @brief Event 7 synchronization source */
    using HSP_ESYNC0SRCR_EV7SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV7SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV7SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV7SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV7SSRC_B_0x3 = 3;

    /** @brief Event 8 synchronization source */
    using HSP_ESYNC0SRCR_EV8SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV8SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV8SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV8SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC0SRCR_EV8SSRC_B_0x3 = 3;

    /** @brief HSP event synchronization source register 1 */
    using HSP_ESYNC1SRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event 9 synchronization source */
    using HSP_ESYNC1SRCR_EV9SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV9SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV9SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV9SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV9SSRC_B_0x3 = 3;

    /** @brief Event 10 synchronization source */
    using HSP_ESYNC1SRCR_EV10SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV10SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV10SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV10SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV10SSRC_B_0x3 = 3;

    /** @brief Event 11 synchronization source */
    using HSP_ESYNC1SRCR_EV11SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV11SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV11SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV11SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV11SSRC_B_0x3 = 3;

    /** @brief Event 12 synchronization source */
    using HSP_ESYNC1SRCR_EV12SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV12SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV12SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV12SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV12SSRC_B_0x3 = 3;

    /** @brief Event 13 synchronization source */
    using HSP_ESYNC1SRCR_EV13SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV13SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV13SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV13SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV13SSRC_B_0x3 = 3;

    /** @brief Event 14 synchronization source */
    using HSP_ESYNC1SRCR_EV14SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV14SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV14SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV14SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV14SSRC_B_0x3 = 3;

    /** @brief Event 15 synchronization source */
    using HSP_ESYNC1SRCR_EV15SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV15SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV15SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV15SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV15SSRC_B_0x3 = 3;

    /** @brief Event 16 synchronization source */
    using HSP_ESYNC1SRCR_EV16SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV16SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV16SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV16SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC1SRCR_EV16SSRC_B_0x3 = 3;

    /** @brief HSP event synchronization source register 2 */
    using HSP_ESYNC2SRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event 17 synchronization source */
    using HSP_ESYNC2SRCR_EV17SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV17SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV17SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV17SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV17SSRC_B_0x3 = 3;

    /** @brief Event 18 synchronization source */
    using HSP_ESYNC2SRCR_EV18SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV18SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV18SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV18SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV18SSRC_B_0x3 = 3;

    /** @brief Event 19 synchronization source */
    using HSP_ESYNC2SRCR_EV19SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV19SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV19SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV19SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV19SSRC_B_0x3 = 3;

    /** @brief Event 20 synchronization source */
    using HSP_ESYNC2SRCR_EV20SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV20SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV20SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV20SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV20SSRC_B_0x3 = 3;

    /** @brief Event 21 synchronization source */
    using HSP_ESYNC2SRCR_EV21SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV21SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV21SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV21SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV21SSRC_B_0x3 = 3;

    /** @brief Event 22 synchronization source */
    using HSP_ESYNC2SRCR_EV22SSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV22SSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV22SSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV22SSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_EV22SSRC_B_0x3 = 3;

    /** @brief CPU dedicated event synchronization source */
    using HSP_ESYNC2SRCR_CDEGSSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tsk_cmp[0] selected as synchronization source (value: 0)
     *          - B_0x1: tsk_cmp[1] selected as synchronization source (value: 1)
     *          - B_0x2: tsk_cmp[2] selected as synchronization source (value: 2)
     *          - B_0x3: tsk_cmp[3] selected as synchronization source (value: 3)
     */
        /** @brief tsk_cmp[0] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_CDEGSSRC_B_0x0 = 0;
        /** @brief tsk_cmp[1] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_CDEGSSRC_B_0x1 = 1;
        /** @brief tsk_cmp[2] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_CDEGSSRC_B_0x2 = 2;
        /** @brief tsk_cmp[3] selected as synchronization source */
    constexpr std::uint32_t HSP_ESYNC2SRCR_CDEGSSRC_B_0x3 = 3;

    /** @brief HSP pending event level register */
    using HSP_PEVTLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event level */
    using HSP_PEVTLR_EVTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Level low (inactive) (value: 0)
     *          - B_0x1: Level high (pending) (value: 1)
     */
        /** @brief Level low (inactive) */
    constexpr std::uint32_t HSP_PEVTLR_EVTL_B_0x0 = 0;
        /** @brief Level high (pending) */
    constexpr std::uint32_t HSP_PEVTLR_EVTL_B_0x1 = 1;

    /** @brief HSP interface enable register */
    using HSP_ITFENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STREAM enable */
    using HSP_ITFENR_STREAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STREAM disabled (value: 0)
     *          - B_0x1: STREAM enabled (value: 1)
     */
        /** @brief STREAM disabled */
    constexpr std::uint32_t HSP_ITFENR_STREAMEN_B_0x0 = 0;
        /** @brief STREAM enabled */
    constexpr std::uint32_t HSP_ITFENR_STREAMEN_B_0x1 = 1;

    /** @brief TRGO enable bit */
    using HSP_ITFENR_TRGOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO function disabled, all TRGO outputs (hsp_trgo and hsp_gpo) forced to 0 (value: 0)
     *          - B_0x1: TRGO function enabled (value: 1)
     */
        /** @brief TRGO function disabled, all TRGO outputs (hsp_trgo and hsp_gpo) forced to 0 */
    constexpr std::uint32_t HSP_ITFENR_TRGOEN_B_0x0 = 0;
        /** @brief TRGO function enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGOEN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI0EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI0EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI1EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI1EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI2EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI2EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI3EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI3EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI4EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI4EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI5EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI5EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI6EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI6EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI7EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI7EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI8EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI8EN_B_0x1 = 1;

    /** @brief TRGINx enable bit */
    using HSP_ITFENR_TRGI9EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx disabled, all the TRGIN logic maintained in reset (value: 0)
     *          - B_0x1: TRGINx enabled (value: 1)
     */
        /** @brief TRGINx disabled, all the TRGIN logic maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_TRGI9EN_B_0x0 = 0;
        /** @brief TRGINx enabled */
    constexpr std::uint32_t HSP_ITFENR_TRGI9EN_B_0x1 = 1;

    /** @brief Direct command interface disable bit */
    using HSP_ITFENR_DCMDDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing this bit to 0 enables the DCMD interface, and prevents other applications to disable it (default after reset). (value: 0)
     *          - B_0x1: Writing this bit to 1 disables the DCMD interface. (value: 1)
     */
        /** @brief Writing this bit to 0 enables the DCMD interface, and prevents other applications to disable it (default after reset). */
    constexpr std::uint32_t HSP_ITFENR_DCMDDIS_B_0x0 = 0;
        /** @brief Writing this bit to 1 disables the DCMD interface. */
    constexpr std::uint32_t HSP_ITFENR_DCMDDIS_B_0x1 = 1;

    /** @brief CSEG interface enable bit */
    using HSP_ITFENR_CSEGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSEG interface disabled, and maintained in reset (value: 0)
     *          - B_0x1: CSEG interface is enabled (value: 1)
     */
        /** @brief CSEG interface disabled, and maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_CSEGEN_B_0x0 = 0;
        /** @brief CSEG interface is enabled */
    constexpr std::uint32_t HSP_ITFENR_CSEGEN_B_0x1 = 1;

    /** @brief CDEG interface enable bit */
    using HSP_ITFENR_CDEGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CDEG interface disabled, and maintained in reset (value: 0)
     *          - B_0x1: CDEG interface enabled (value: 1)
     */
        /** @brief CDEG interface disabled, and maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_CDEGEN_B_0x0 = 0;
        /** @brief CDEG interface enabled */
    constexpr std::uint32_t HSP_ITFENR_CDEGEN_B_0x1 = 1;

    /** @brief HSEG interface enable bit */
    using HSP_ITFENR_HSEGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSEG interface disabled, and maintained in reset (value: 0)
     *          - B_0x1: HSEG interface enabled (value: 1)
     */
        /** @brief HSEG interface disabled, and maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_HSEGEN_B_0x0 = 0;
        /** @brief HSEG interface enabled */
    constexpr std::uint32_t HSP_ITFENR_HSEGEN_B_0x1 = 1;

    /** @brief HDEG interface enable bit */
    using HSP_ITFENR_HDEGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDEG interface disabled, and maintained in reset (value: 0)
     *          - B_0x1: HDEG interface enabled (value: 1)
     */
        /** @brief HDEG interface disabled, and maintained in reset */
    constexpr std::uint32_t HSP_ITFENR_HDEGEN_B_0x0 = 0;
        /** @brief HDEG interface enabled */
    constexpr std::uint32_t HSP_ITFENR_HDEGEN_B_0x1 = 1;

    /** @brief HSP event source register 0 */
    using HSP_EVTSRC0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event source selection for priority encoder input 1 */
    using HSP_EVTSRC0R_EVT1SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF0 is selected (buff_evt[0]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN3 is selected (trgin_evt[3]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN8 is selected (trgin_evt[8]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[1]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[1]) (value: 6)
     */
        /** @brief Event provided by the BUFF0 is selected (buff_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT1SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN3 is selected (trgin_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT1SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN8 is selected (trgin_evt[8]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT1SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT1SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT1SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 2 */
    using HSP_EVTSRC0R_EVT2SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF1 is selected (buff_evt[1]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN4 is selected (trgin_evt[4]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN9 is selected (trgin_evt[9]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[2]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[2]) (value: 6)
     */
        /** @brief Event provided by the BUFF1 is selected (buff_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT2SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN4 is selected (trgin_evt[4]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT2SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN9 is selected (trgin_evt[9]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT2SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT2SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT2SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 3 */
    using HSP_EVTSRC0R_EVT3SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF2 is selected (buff_evt[2]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN0 is selected (trgin_evt[0]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN5 is selected (trgin_evt[5]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[3]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[3]) (value: 6)
     */
        /** @brief Event provided by the BUFF2 is selected (buff_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT3SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN0 is selected (trgin_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT3SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN5 is selected (trgin_evt[5]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT3SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT3SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT3SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 4 */
    using HSP_EVTSRC0R_EVT4SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF3 is selected (buff_evt[3]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN1 is selected (trgin_evt[1]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN6 is selected (trgin_evt[6]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[4]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[4]) (value: 6)
     */
        /** @brief Event provided by the BUFF3 is selected (buff_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT4SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN1 is selected (trgin_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT4SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN6 is selected (trgin_evt[6]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT4SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[4]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT4SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[4]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT4SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 5 */
    using HSP_EVTSRC0R_EVT5SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF0 is selected (buff_evt[0]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN2 is selected (trgin_evt[2]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN7 is selected (trgin_evt[7]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[5]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[5]) (value: 6)
     */
        /** @brief Event provided by the BUFF0 is selected (buff_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT5SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN2 is selected (trgin_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT5SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN7 is selected (trgin_evt[7]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT5SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[5]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT5SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[5]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT5SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 6 */
    using HSP_EVTSRC0R_EVT6SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF1 is selected (buff_evt[1]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN3 is selected (trgin_evt[3]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN8 is selected (trgin_evt[8]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[6]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[6]) (value: 6)
     */
        /** @brief Event provided by the BUFF1 is selected (buff_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT6SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN3 is selected (trgin_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT6SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN8 is selected (trgin_evt[8]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT6SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[6]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT6SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[6]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT6SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 7 */
    using HSP_EVTSRC0R_EVT7SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF2 is selected (buff_evt[2]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN4 is selected (trgin_evt[4]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN9 is selected (trgin_evt[9]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[7]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[7]) (value: 6)
     */
        /** @brief Event provided by the BUFF2 is selected (buff_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT7SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN4 is selected (trgin_evt[4]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT7SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN9 is selected (trgin_evt[9]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT7SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[7]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT7SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[7]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT7SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 8 */
    using HSP_EVTSRC0R_EVT8SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF3 is selected (buff_evt[3]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN0 is selected (trgin_evt[0]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN5 is selected (trgin_evt[5]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[8]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[8]) (value: 6)
     */
        /** @brief Event provided by the BUFF3 is selected (buff_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT8SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN0 is selected (trgin_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT8SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN5 is selected (trgin_evt[5]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT8SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[8]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT8SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[8]) */
    constexpr std::uint32_t HSP_EVTSRC0R_EVT8SRC_B_0x6 = 6;

    /** @brief HSP event source register 1 */
    using HSP_EVTSRC1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event source selection for priority encoder input 9 */
    using HSP_EVTSRC1R_EVT9SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF0 is selected (buff_evt[0]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN1 is selected (trgin_evt[1]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN6 is selected (trgin_evt[6]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[9]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[9]) (value: 6)
     */
        /** @brief Event provided by the BUFF0 is selected (buff_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT9SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN1 is selected (trgin_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT9SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN6 is selected (trgin_evt[6]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT9SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[9]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT9SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[9]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT9SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 10 */
    using HSP_EVTSRC1R_EVT10SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF1 is selected (buff_evt[1]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN2 is selected (trgin_evt[2]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN7 is selected (trgin_evt[7]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[10]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[10]) (value: 6)
     */
        /** @brief Event provided by the BUFF1 is selected (buff_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT10SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN2 is selected (trgin_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT10SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN7 is selected (trgin_evt[7]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT10SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[10]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT10SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[10]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT10SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 11 */
    using HSP_EVTSRC1R_EVT11SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF2 is selected (buff_evt[2]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN3 is selected (trgin_evt[3]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN8 is selected (trgin_evt[8]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[11]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[11]) (value: 6)
     */
        /** @brief Event provided by the BUFF2 is selected (buff_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT11SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN3 is selected (trgin_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT11SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN8 is selected (trgin_evt[8]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT11SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[11]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT11SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[11]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT11SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 12 */
    using HSP_EVTSRC1R_EVT12SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF3 is selected (buff_evt[3]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN4 is selected (trgin_evt[4]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN9 is selected (trgin_evt[9]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[12]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[12]) (value: 6)
     */
        /** @brief Event provided by the BUFF3 is selected (buff_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT12SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN4 is selected (trgin_evt[4]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT12SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN9 is selected (trgin_evt[9]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT12SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[12]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT12SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[12]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT12SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 13 */
    using HSP_EVTSRC1R_EVT13SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF0 is selected (buff_evt[0]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN0 is selected (trgin_evt[0]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN5 is selected (trgin_evt[5]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[13]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[13]) (value: 6)
     */
        /** @brief Event provided by the BUFF0 is selected (buff_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT13SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN0 is selected (trgin_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT13SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN5 is selected (trgin_evt[5]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT13SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[13]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT13SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[13]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT13SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 14 */
    using HSP_EVTSRC1R_EVT14SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF1 is selected (buff_evt[1]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN1 is selected (trgin_evt[1]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN7 is selected (trgin_evt[6]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[14]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[14]) (value: 6)
     */
        /** @brief Event provided by the BUFF1 is selected (buff_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT14SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN1 is selected (trgin_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT14SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN7 is selected (trgin_evt[6]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT14SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[14]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT14SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[14]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT14SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 15 */
    using HSP_EVTSRC1R_EVT15SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF2 is selected (buff_evt[2]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN2 is selected (trgin_evt[2]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN7 is selected (trgin_evt[7]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[15]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[15]) (value: 6)
     */
        /** @brief Event provided by the BUFF2 is selected (buff_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT15SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN2 is selected (trgin_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT15SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN7 is selected (trgin_evt[7]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT15SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[15]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT15SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[15]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT15SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 16 */
    using HSP_EVTSRC1R_EVT16SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF3 is selected (buff_evt[3]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN3 is selected (trgin_evt[3]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN8 is selected (trgin_evt[8]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[16]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[16]) (value: 6)
     */
        /** @brief Event provided by the BUFF3 is selected (buff_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT16SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN3 is selected (trgin_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT16SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN8 is selected (trgin_evt[8]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT16SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[16]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT16SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[16]) */
    constexpr std::uint32_t HSP_EVTSRC1R_EVT16SRC_B_0x6 = 6;

    /** @brief HSP event source register 2 */
    using HSP_EVTSRC2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event source selection for priority encoder input 17 */
    using HSP_EVTSRC2R_EVT17SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF0 is selected (buff_evt[0]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN4 is selected (trgin_evt[4]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN9 is selected (trgin_evt[9]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[17]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[17]) (value: 6)
     */
        /** @brief Event provided by the BUFF0 is selected (buff_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT17SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN4 is selected (trgin_evt[4]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT17SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN9 is selected (trgin_evt[9]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT17SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[17]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT17SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[17]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT17SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 18 */
    using HSP_EVTSRC2R_EVT18SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF1 is selected (buff_evt[1]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN0 is selected (trgin_evt[0]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN5 is selected (trgin_evt[5]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[18]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[18]) (value: 6)
     */
        /** @brief Event provided by the BUFF1 is selected (buff_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT18SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN0 is selected (trgin_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT18SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN5 is selected (trgin_evt[5]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT18SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[18]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT18SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[18]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT18SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 19 */
    using HSP_EVTSRC2R_EVT19SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF2 is selected (buff_evt[2]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN1 is selected (trgin_evt[1]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN6 is selected (trgin_evt[6]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[19]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[19]) (value: 6)
     */
        /** @brief Event provided by the BUFF2 is selected (buff_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT19SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN1 is selected (trgin_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT19SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN6 is selected (trgin_evt[6]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT19SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[19]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT19SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[19]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT19SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 20 */
    using HSP_EVTSRC2R_EVT20SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF3 is selected (buff_evt[3]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN2 is selected (trgin_evt[2]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN7 is selected (trgin_evt[7]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[20]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[20]) (value: 6)
     */
        /** @brief Event provided by the BUFF3 is selected (buff_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT20SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN2 is selected (trgin_evt[2]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT20SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN7 is selected (trgin_evt[7]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT20SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[20]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT20SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[20]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT20SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 21 */
    using HSP_EVTSRC2R_EVT21SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF0 is selected (buff_evt[0]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN3 is selected (trgin_evt[3]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN8 is selected (trgin_evt[8]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[21]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[21]) (value: 6)
     */
        /** @brief Event provided by the BUFF0 is selected (buff_evt[0]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT21SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN3 is selected (trgin_evt[3]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT21SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN8 is selected (trgin_evt[8]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT21SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[21]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT21SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[21]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT21SRC_B_0x6 = 6;

    /** @brief Event source selection for priority encoder input 22 */
    using HSP_EVTSRC2R_EVT22SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Event provided by the BUFF1 is selected (buff_evt[1]) (value: 2)
     *          - B_0x3: Event provided by the TRGIN4 is selected (trgin_evt[4]) (value: 3)
     *          - B_0x4: Event provided by the TRGIN9 is selected (trgin_evt[9]) (value: 4)
     *          - B_0x5: Event provided by the HSEG is selected (hseg_evt[22]) (value: 5)
     *          - B_0x6: Event provided by the CSEG is selected (cseg_evt[22]) (value: 6)
     */
        /** @brief Event provided by the BUFF1 is selected (buff_evt[1]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT22SRC_B_0x2 = 2;
        /** @brief Event provided by the TRGIN4 is selected (trgin_evt[4]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT22SRC_B_0x3 = 3;
        /** @brief Event provided by the TRGIN9 is selected (trgin_evt[9]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT22SRC_B_0x4 = 4;
        /** @brief Event provided by the HSEG is selected (hseg_evt[22]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT22SRC_B_0x5 = 5;
        /** @brief Event provided by the CSEG is selected (cseg_evt[22]) */
    constexpr std::uint32_t HSP_EVTSRC2R_EVT22SRC_B_0x6 = 6;

    /** @brief HSP BUFF configuration register */
    using HSP_BUFFCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction selection of BUFFx */
    using HSP_BUFFCFGR_BUFF0DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx direction is C2H (means written by the CPU and read by the HSP). (value: 0)
     *          - B_0x1: BUFFx direction is H2C (means read by the CPU and written by the HSP). (value: 1)
     */
        /** @brief BUFFx direction is C2H (means written by the CPU and read by the HSP). */
    constexpr std::uint32_t HSP_BUFFCFGR_BUFF0DIR_B_0x0 = 0;
        /** @brief BUFFx direction is H2C (means read by the CPU and written by the HSP). */
    constexpr std::uint32_t HSP_BUFFCFGR_BUFF0DIR_B_0x1 = 1;

    /** @brief Direction selection of BUFFx */
    using HSP_BUFFCFGR_BUFF1DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx direction is C2H (means written by the CPU and read by the HSP). (value: 0)
     *          - B_0x1: BUFFx direction is H2C (means read by the CPU and written by the HSP). (value: 1)
     */
        /** @brief BUFFx direction is C2H (means written by the CPU and read by the HSP). */
    constexpr std::uint32_t HSP_BUFFCFGR_BUFF1DIR_B_0x0 = 0;
        /** @brief BUFFx direction is H2C (means read by the CPU and written by the HSP). */
    constexpr std::uint32_t HSP_BUFFCFGR_BUFF1DIR_B_0x1 = 1;

    /** @brief Direction selection of BUFFx */
    using HSP_BUFFCFGR_BUFF2DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx direction is C2H (means written by the CPU and read by the HSP). (value: 0)
     *          - B_0x1: BUFFx direction is H2C (means read by the CPU and written by the HSP). (value: 1)
     */
        /** @brief BUFFx direction is C2H (means written by the CPU and read by the HSP). */
    constexpr std::uint32_t HSP_BUFFCFGR_BUFF2DIR_B_0x0 = 0;
        /** @brief BUFFx direction is H2C (means read by the CPU and written by the HSP). */
    constexpr std::uint32_t HSP_BUFFCFGR_BUFF2DIR_B_0x1 = 1;

    /** @brief Direction selection of BUFFx */
    using HSP_BUFFCFGR_BUFF3DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx direction is C2H (means written by the CPU and read by the HSP). (value: 0)
     *          - B_0x1: BUFFx direction is H2C (means read by the CPU and written by the HSP). (value: 1)
     */
        /** @brief BUFFx direction is C2H (means written by the CPU and read by the HSP). */
    constexpr std::uint32_t HSP_BUFFCFGR_BUFF3DIR_B_0x0 = 0;
        /** @brief BUFFx direction is H2C (means read by the CPU and written by the HSP). */
    constexpr std::uint32_t HSP_BUFFCFGR_BUFF3DIR_B_0x1 = 1;

    /** @brief Integer to float32 conversion */
    using HSP_BUFFCFGR_I2FEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Integer to float32 conversion disabled (value: 0)
     *          - B_0x1: Integer to float32 conversion enabled (value: 1)
     */
        /** @brief Integer to float32 conversion disabled */
    constexpr std::uint32_t HSP_BUFFCFGR_I2FEN_B_0x0 = 0;
        /** @brief Integer to float32 conversion enabled */
    constexpr std::uint32_t HSP_BUFFCFGR_I2FEN_B_0x1 = 1;

    /** @brief BUFCMB control for buff_evt[x] */
    using HSP_BUFFCFGR_COMB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: buff_evt[x] activated when buff_att[x] is activated (value: 0)
     *          - B_0x1: buff_evt[x] activated when buff_att[x] and buff_evt[x+1] are activated (value: 1)
     */
        /** @brief buff_evt[x] activated when buff_att[x] is activated */
    constexpr std::uint32_t HSP_BUFFCFGR_COMB0_B_0x0 = 0;
        /** @brief buff_evt[x] activated when buff_att[x] and buff_evt[x+1] are activated */
    constexpr std::uint32_t HSP_BUFFCFGR_COMB0_B_0x1 = 1;

    /** @brief BUFCMB control for buff_evt[x] */
    using HSP_BUFFCFGR_COMB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: buff_evt[x] activated when buff_att[x] is activated (value: 0)
     *          - B_0x1: buff_evt[x] activated when buff_att[x] and buff_evt[x+1] are activated (value: 1)
     */
        /** @brief buff_evt[x] activated when buff_att[x] is activated */
    constexpr std::uint32_t HSP_BUFFCFGR_COMB1_B_0x0 = 0;
        /** @brief buff_evt[x] activated when buff_att[x] and buff_evt[x+1] are activated */
    constexpr std::uint32_t HSP_BUFFCFGR_COMB1_B_0x1 = 1;

    /** @brief BUFCMB control for buff_evt[x] */
    using HSP_BUFFCFGR_COMB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: buff_evt[x] activated when buff_att[x] is activated (value: 0)
     *          - B_0x1: buff_evt[x] activated when buff_att[x] and buff_evt[x+1] are activated (value: 1)
     */
        /** @brief buff_evt[x] activated when buff_att[x] is activated */
    constexpr std::uint32_t HSP_BUFFCFGR_COMB2_B_0x0 = 0;
        /** @brief buff_evt[x] activated when buff_att[x] and buff_evt[x+1] are activated */
    constexpr std::uint32_t HSP_BUFFCFGR_COMB2_B_0x1 = 1;

    /** @brief HSP BUFF0 data register 0 */
    using HSP_BUFF0DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data buffer */
    using HSP_BUFF0DR_BUFFDAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP BUFF1 data register 1 */
    using HSP_BUFF1DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data buffer */
    using HSP_BUFF1DR_BUFFDAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP BUFF2 data register 2 */
    using HSP_BUFF2DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data buffer */
    using HSP_BUFF2DR_BUFFDAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP BUFF3 data register 3 */
    using HSP_BUFF3DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data buffer */
    using HSP_BUFF3DR_BUFFDAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP TRGIN configuration register */
    using HSP_TRGINCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG0POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG0POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG0POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG1POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG1POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG1POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG2POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG2POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG2POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG3POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG3POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG3POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG4POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG4POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG4POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG5POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG5POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG5POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG6POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG6POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG6POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG7POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG7POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG7POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG8POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG8POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG8POL_B_0x1 = 1;

    /** @brief Polarity selection for TRGINx */
    using HSP_TRGINCFGR_TRG9POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGINx triggers on rising edge of the input signal. (value: 0)
     *          - B_0x1: TRGINx triggers on falling edge of the input signal. (value: 1)
     */
        /** @brief TRGINx triggers on rising edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG9POL_B_0x0 = 0;
        /** @brief TRGINx triggers on falling edge of the input signal. */
    constexpr std::uint32_t HSP_TRGINCFGR_TRG9POL_B_0x1 = 1;

    /** @brief HSP TRGO configuration register */
    using HSP_TRGOCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger source selection for hsp_trgo[x] */
    using HSP_TRGOCFGR_TRGO0SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgo[x] disabled (value: 0)
     *          - B_0x1: buff_trgo[x] selected as trigger source (value: 1)
     *          - B_0x2: spe_trgo[x] selected as trigger source (value: 2)
     *          - B_0x3: tsc_trgo selected as trigger source (value: 3)
     */
        /** @brief hsp_trgo[x] disabled */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO0SRC_B_0x0 = 0;
        /** @brief buff_trgo[x] selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO0SRC_B_0x1 = 1;
        /** @brief spe_trgo[x] selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO0SRC_B_0x2 = 2;
        /** @brief tsc_trgo selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO0SRC_B_0x3 = 3;

    /** @brief Trigger source selection for hsp_trgo[x] */
    using HSP_TRGOCFGR_TRGO1SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgo[x] disabled (value: 0)
     *          - B_0x1: buff_trgo[x] selected as trigger source (value: 1)
     *          - B_0x2: spe_trgo[x] selected as trigger source (value: 2)
     *          - B_0x3: tsc_trgo selected as trigger source (value: 3)
     */
        /** @brief hsp_trgo[x] disabled */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO1SRC_B_0x0 = 0;
        /** @brief buff_trgo[x] selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO1SRC_B_0x1 = 1;
        /** @brief spe_trgo[x] selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO1SRC_B_0x2 = 2;
        /** @brief tsc_trgo selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO1SRC_B_0x3 = 3;

    /** @brief Trigger source selection for hsp_trgo[x] */
    using HSP_TRGOCFGR_TRGO2SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgo[x] disabled (value: 0)
     *          - B_0x1: buff_trgo[x] selected as trigger source (value: 1)
     *          - B_0x2: spe_trgo[x] selected as trigger source (value: 2)
     *          - B_0x3: tsc_trgo selected as trigger source (value: 3)
     */
        /** @brief hsp_trgo[x] disabled */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO2SRC_B_0x0 = 0;
        /** @brief buff_trgo[x] selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO2SRC_B_0x1 = 1;
        /** @brief spe_trgo[x] selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO2SRC_B_0x2 = 2;
        /** @brief tsc_trgo selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO2SRC_B_0x3 = 3;

    /** @brief Trigger source selection for hsp_trgo[x] */
    using HSP_TRGOCFGR_TRGO3SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgo[x] disabled (value: 0)
     *          - B_0x1: buff_trgo[x] selected as trigger source (value: 1)
     *          - B_0x2: spe_trgo[x] selected as trigger source (value: 2)
     *          - B_0x3: tsc_trgo selected as trigger source (value: 3)
     */
        /** @brief hsp_trgo[x] disabled */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO3SRC_B_0x0 = 0;
        /** @brief buff_trgo[x] selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO3SRC_B_0x1 = 1;
        /** @brief spe_trgo[x] selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO3SRC_B_0x2 = 2;
        /** @brief tsc_trgo selected as trigger source */
    constexpr std::uint32_t HSP_TRGOCFGR_TRGO3SRC_B_0x3 = 3;

    /** @brief HSP CPU shared event generator register */
    using HSP_CSEGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU shared software event */
    using HSP_CSEGR_CSEVT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 22, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 activates the corresponding event. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t HSP_CSEGR_CSEVT_B_0x0 = 0;
        /** @brief Writing 1 activates the corresponding event. */
    constexpr std::uint32_t HSP_CSEGR_CSEVT_B_0x1 = 1;

    /** @brief HSP CPU dedicated event generation register */
    using HSP_CDEGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU task number */
    using HSP_CDEGR_CTSKN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU dedicated event generator busy */
    using HSP_CDEGR_CDEGBSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The CDEG ready (value: 0)
     *          - B_0x1: The CDEG busy: previous event still under processing (value: 1)
     */
        /** @brief The CDEG ready */
    constexpr std::uint32_t HSP_CDEGR_CDEGBSY_B_0x0 = 0;
        /** @brief The CDEG busy: previous event still under processing */
    constexpr std::uint32_t HSP_CDEGR_CDEGBSY_B_0x1 = 1;

    /** @brief HSP TRGIN input selection register 0 */
    using HSP_TRGINSELR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input trigger selection for TRGIN0 */
    using HSP_TRGINSELR0_TRG0SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR0_TRG0SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR0_TRG0SEL_B_0x1 = 1;

    /** @brief Input trigger selection for TRGIN1 */
    using HSP_TRGINSELR0_TRG1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR0_TRG1SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR0_TRG1SEL_B_0x1 = 1;

    /** @brief Input trigger selection for TRGIN2 */
    using HSP_TRGINSELR0_TRG2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR0_TRG2SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR0_TRG2SEL_B_0x1 = 1;

    /** @brief Input trigger selection for TRGIN3 */
    using HSP_TRGINSELR0_TRG3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR0_TRG3SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR0_TRG3SEL_B_0x1 = 1;

    /** @brief HSP TRGIN input selection register 1 */
    using HSP_TRGINSELR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input trigger selection for TRGIN4 */
    using HSP_TRGINSELR1_TRG4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR1_TRG4SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR1_TRG4SEL_B_0x1 = 1;

    /** @brief Input trigger selection for TRGIN5 */
    using HSP_TRGINSELR1_TRG5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR1_TRG5SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR1_TRG5SEL_B_0x1 = 1;

    /** @brief Input trigger selection for TRGIN6 */
    using HSP_TRGINSELR1_TRG6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR1_TRG6SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR1_TRG6SEL_B_0x1 = 1;

    /** @brief Input trigger selection for TRGIN7 */
    using HSP_TRGINSELR1_TRG7SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR1_TRG7SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR1_TRG7SEL_B_0x1 = 1;

    /** @brief HSP TRGIN input selection register 2 */
    using HSP_TRGINSELR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input trigger selection for TRGIN8 */
    using HSP_TRGINSELR2_TRG8SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR2_TRG8SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR2_TRG8SEL_B_0x1 = 1;

    /** @brief Input trigger selection for TRGIN9 */
    using HSP_TRGINSELR2_TRG9SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_trgi[0] input signal selected (value: 0)
     *          - B_0x1: hsp_trgi[1] input signal selected (value: 1)
     */
        /** @brief hsp_trgi[0] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR2_TRG9SEL_B_0x0 = 0;
        /** @brief hsp_trgi[1] input signal selected */
    constexpr std::uint32_t HSP_TRGINSELR2_TRG9SEL_B_0x1 = 1;

    /** @brief HSP break output configuration register 0 */
    using HSP_BKO0CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access error break enable for ACCERRF */
    using HSP_BKO0CFGR_ACCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACCERRF flag does not generate a break. (value: 0)
     *          - B_0x1: ACCERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief ACCERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_ACCEREN_B_0x0 = 0;
        /** @brief ACCERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_ACCEREN_B_0x1 = 1;

    /** @brief FPU error break enable for FPUERRF */
    using HSP_BKO0CFGR_FPUEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FPUERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FPUERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FPUERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_FPUEREN_B_0x0 = 0;
        /** @brief FPUERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_FPUEREN_B_0x1 = 1;

    /** @brief Opcode error break enable for OPCOERRF */
    using HSP_BKO0CFGR_OPCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPCOERRF flag does not generate a break. (value: 0)
     *          - B_0x1: OPCOERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief OPCOERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_OPCEREN_B_0x0 = 0;
        /** @brief OPCOERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_OPCEREN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO0CFGR_PFCT28EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_PFCT28EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_PFCT28EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO0CFGR_PFCT29EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_PFCT29EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_PFCT29EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO0CFGR_PFCT30EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_PFCT30EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_PFCT30EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO0CFGR_PFCT31EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_PFCT31EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_PFCT31EN_B_0x1 = 1;

    /** @brief Firmware error break enable for FWERRF */
    using HSP_BKO0CFGR_FWEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FWERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FWERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FWERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_FWEREN_B_0x0 = 0;
        /** @brief FWERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_FWEREN_B_0x1 = 1;

    /** @brief HSP dedicated event generator overrun break enable for HDEGOVRF */
    using HSP_BKO0CFGR_HDEGOVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDEGOVRF flag does not generate a break. (value: 0)
     *          - B_0x1: HDEGOVRF flag generates a break when asserted. (value: 1)
     */
        /** @brief HDEGOVRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO0CFGR_HDEGOVEN_B_0x0 = 0;
        /** @brief HDEGOVRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO0CFGR_HDEGOVEN_B_0x1 = 1;

    /** @brief HSP break output configuration register 1 */
    using HSP_BKO1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access error break enable for ACCERRF */
    using HSP_BKO1CFGR_ACCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACCERRF flag does not generate a break. (value: 0)
     *          - B_0x1: ACCERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief ACCERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_ACCEREN_B_0x0 = 0;
        /** @brief ACCERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_ACCEREN_B_0x1 = 1;

    /** @brief FPU error break enable for FPUERRF */
    using HSP_BKO1CFGR_FPUEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FPUERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FPUERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FPUERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_FPUEREN_B_0x0 = 0;
        /** @brief FPUERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_FPUEREN_B_0x1 = 1;

    /** @brief Opcode error break enable for OPCOERRF */
    using HSP_BKO1CFGR_OPCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPCOERRF flag does not generate a break. (value: 0)
     *          - B_0x1: OPCOERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief OPCOERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_OPCEREN_B_0x0 = 0;
        /** @brief OPCOERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_OPCEREN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO1CFGR_PFCT28EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_PFCT28EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_PFCT28EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO1CFGR_PFCT29EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_PFCT29EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_PFCT29EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO1CFGR_PFCT30EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_PFCT30EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_PFCT30EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO1CFGR_PFCT31EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_PFCT31EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_PFCT31EN_B_0x1 = 1;

    /** @brief Firmware error break enable for FWERRF */
    using HSP_BKO1CFGR_FWEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FWERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FWERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FWERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_FWEREN_B_0x0 = 0;
        /** @brief FWERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_FWEREN_B_0x1 = 1;

    /** @brief HSP dedicated event generator overrun break enable for HDEGOVRF */
    using HSP_BKO1CFGR_HDEGOVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDEGOVRF flag does not generate a break. (value: 0)
     *          - B_0x1: HDEGOVRF flag generates a break when asserted. (value: 1)
     */
        /** @brief HDEGOVRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO1CFGR_HDEGOVEN_B_0x0 = 0;
        /** @brief HDEGOVRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO1CFGR_HDEGOVEN_B_0x1 = 1;

    /** @brief HSP break output configuration register 2 */
    using HSP_BKO2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access error break enable for ACCERRF */
    using HSP_BKO2CFGR_ACCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACCERRF flag does not generate a break. (value: 0)
     *          - B_0x1: ACCERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief ACCERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_ACCEREN_B_0x0 = 0;
        /** @brief ACCERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_ACCEREN_B_0x1 = 1;

    /** @brief FPU error break enable for FPUERRF */
    using HSP_BKO2CFGR_FPUEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FPUERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FPUERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FPUERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_FPUEREN_B_0x0 = 0;
        /** @brief FPUERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_FPUEREN_B_0x1 = 1;

    /** @brief Opcode error break enable for OPCOERRF */
    using HSP_BKO2CFGR_OPCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPCOERRF flag does not generate a break. (value: 0)
     *          - B_0x1: OPCOERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief OPCOERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_OPCEREN_B_0x0 = 0;
        /** @brief OPCOERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_OPCEREN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO2CFGR_PFCT28EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_PFCT28EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_PFCT28EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO2CFGR_PFCT29EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_PFCT29EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_PFCT29EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO2CFGR_PFCT30EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_PFCT30EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_PFCT30EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO2CFGR_PFCT31EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_PFCT31EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_PFCT31EN_B_0x1 = 1;

    /** @brief Firmware error break enable for FWERRF */
    using HSP_BKO2CFGR_FWEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FWERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FWERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FWERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_FWEREN_B_0x0 = 0;
        /** @brief FWERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_FWEREN_B_0x1 = 1;

    /** @brief HSP dedicated event generator overrun break enable for HDEGOVRF */
    using HSP_BKO2CFGR_HDEGOVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDEGOVRF flag does not generate a break. (value: 0)
     *          - B_0x1: HDEGOVRF flag generates a break when asserted. (value: 1)
     */
        /** @brief HDEGOVRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO2CFGR_HDEGOVEN_B_0x0 = 0;
        /** @brief HDEGOVRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO2CFGR_HDEGOVEN_B_0x1 = 1;

    /** @brief HSP break output configuration register 3 */
    using HSP_BKO3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access error break enable for ACCERRF */
    using HSP_BKO3CFGR_ACCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACCERRF flag does not generate a break. (value: 0)
     *          - B_0x1: ACCERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief ACCERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_ACCEREN_B_0x0 = 0;
        /** @brief ACCERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_ACCEREN_B_0x1 = 1;

    /** @brief FPU error break enable for FPUERRF */
    using HSP_BKO3CFGR_FPUEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FPUERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FPUERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FPUERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_FPUEREN_B_0x0 = 0;
        /** @brief FPUERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_FPUEREN_B_0x1 = 1;

    /** @brief Opcode error break enable for OPCOERRF */
    using HSP_BKO3CFGR_OPCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPCOERRF flag does not generate a break. (value: 0)
     *          - B_0x1: OPCOERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief OPCOERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_OPCEREN_B_0x0 = 0;
        /** @brief OPCOERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_OPCEREN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO3CFGR_PFCT28EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_PFCT28EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_PFCT28EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO3CFGR_PFCT29EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_PFCT29EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_PFCT29EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO3CFGR_PFCT30EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_PFCT30EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_PFCT30EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKO3CFGR_PFCT31EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted. (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_PFCT31EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_PFCT31EN_B_0x1 = 1;

    /** @brief Firmware error break enable for FWERRF */
    using HSP_BKO3CFGR_FWEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FWERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FWERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FWERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_FWEREN_B_0x0 = 0;
        /** @brief FWERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_FWEREN_B_0x1 = 1;

    /** @brief HSP dedicated event generator overrun break enable for HDEGOVRF */
    using HSP_BKO3CFGR_HDEGOVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDEGOVRF flag does not generate a break. (value: 0)
     *          - B_0x1: HDEGOVRF flag generates a break when asserted. (value: 1)
     */
        /** @brief HDEGOVRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKO3CFGR_HDEGOVEN_B_0x0 = 0;
        /** @brief HDEGOVRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKO3CFGR_HDEGOVEN_B_0x1 = 1;

    /** @brief HSP break input configuration register */
    using HSP_BKICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access error break enable for ACCERRF */
    using HSP_BKICFGR_ACCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACCERRF flag does not generate a break. (value: 0)
     *          - B_0x1: ACCERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief ACCERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_ACCEREN_B_0x0 = 0;
        /** @brief ACCERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKICFGR_ACCEREN_B_0x1 = 1;

    /** @brief FPU error break enable for FPUERRF */
    using HSP_BKICFGR_FPUEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FPUERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FPUERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FPUERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_FPUEREN_B_0x0 = 0;
        /** @brief FPUERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKICFGR_FPUEREN_B_0x1 = 1;

    /** @brief Opcode error break enable for OPCOERRF */
    using HSP_BKICFGR_OPCEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPCOERRF flag does not generate a break. (value: 0)
     *          - B_0x1: OPCOERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief OPCOERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_OPCEREN_B_0x0 = 0;
        /** @brief OPCOERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKICFGR_OPCEREN_B_0x1 = 1;

    /** @brief Break enable for hsp_break_in signal */
    using HSP_BKICFGR_BKIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsp_break_in signal does not generate a break. (value: 0)
     *          - B_0x1: hsp_break_in signal generates a break when asserted. (value: 1)
     */
        /** @brief hsp_break_in signal does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_BKIEN_B_0x0 = 0;
        /** @brief hsp_break_in signal generates a break when asserted. */
    constexpr std::uint32_t HSP_BKICFGR_BKIEN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKICFGR_PFCT28EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_PFCT28EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted */
    constexpr std::uint32_t HSP_BKICFGR_PFCT28EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKICFGR_PFCT29EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_PFCT29EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted */
    constexpr std::uint32_t HSP_BKICFGR_PFCT29EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKICFGR_PFCT30EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_PFCT30EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted */
    constexpr std::uint32_t HSP_BKICFGR_PFCT30EN_B_0x1 = 1;

    /** @brief Processing function flag break enable for PFCTF[x] */
    using HSP_BKICFGR_PFCT31EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PFCTF[x] does not generate a break. (value: 0)
     *          - B_0x1: PFCTF[x] generates a break when asserted (value: 1)
     */
        /** @brief PFCTF[x] does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_PFCT31EN_B_0x0 = 0;
        /** @brief PFCTF[x] generates a break when asserted */
    constexpr std::uint32_t HSP_BKICFGR_PFCT31EN_B_0x1 = 1;

    /** @brief Firmware error break enable for FWERRF */
    using HSP_BKICFGR_FWEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FWERRF flag does not generate a break. (value: 0)
     *          - B_0x1: FWERRF flag generates a break when asserted. (value: 1)
     */
        /** @brief FWERRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_FWEREN_B_0x0 = 0;
        /** @brief FWERRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKICFGR_FWEREN_B_0x1 = 1;

    /** @brief HSP dedicated event generator overrun break enable for HDEGOVRF */
    using HSP_BKICFGR_HDEGOVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDEGOVRF flag does not generate a break. (value: 0)
     *          - B_0x1: HDEGOVRF flag generates a break when asserted. (value: 1)
     */
        /** @brief HDEGOVRF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_HDEGOVEN_B_0x0 = 0;
        /** @brief HDEGOVRF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKICFGR_HDEGOVEN_B_0x1 = 1;

    /** @brief FPU saturation break enable for FPUSATF */
    using HSP_BKICFGR_FSATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FPUSATF flag does not generate a break. (value: 0)
     *          - B_0x1: FPUSATF flag generates a break when asserted. (value: 1)
     */
        /** @brief FPUSATF flag does not generate a break. */
    constexpr std::uint32_t HSP_BKICFGR_FSATEN_B_0x0 = 0;
        /** @brief FPUSATF flag generates a break when asserted. */
    constexpr std::uint32_t HSP_BKICFGR_FSATEN_B_0x1 = 1;

    /** @brief Single step enable */
    using HSP_BKICFGR_SSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The single step function is disabled: the SPE is not frozen when the processing function transition detector provides a trigger. (value: 0)
     *          - B_0x1: The single step function is enabled: the SPE is frozen every time the processing function transition detector provides a trigger. (value: 1)
     */
        /** @brief The single step function is disabled: the SPE is not frozen when the processing function transition detector provides a trigger. */
    constexpr std::uint32_t HSP_BKICFGR_SSEN_B_0x0 = 0;
        /** @brief The single step function is enabled: the SPE is frozen every time the processing function transition detector provides a trigger. */
    constexpr std::uint32_t HSP_BKICFGR_SSEN_B_0x1 = 1;

    /** @brief Break enable input polarity */
    using HSP_BKICFGR_BKIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A break event is generated on hsp_break_in rising edge (if BKEN = 1). (value: 0)
     *          - B_0x1: A break event is generated on hsp_break_in falling edge (if BKEN = 1). (value: 1)
     */
        /** @brief A break event is generated on hsp_break_in rising edge (if BKEN = 1). */
    constexpr std::uint32_t HSP_BKICFGR_BKIP_B_0x0 = 0;
        /** @brief A break event is generated on hsp_break_in falling edge (if BKEN = 1). */
    constexpr std::uint32_t HSP_BKICFGR_BKIP_B_0x1 = 1;

    /** @brief HSP firmware error register */
    using HSP_FWERR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Firmware error number */
    using HSP_FWERR_FWERRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 0 */
    using HSP_PARAMR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR0_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 1 */
    using HSP_PARAMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR1_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 2 */
    using HSP_PARAMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR2_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 3 */
    using HSP_PARAMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR3_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 4 */
    using HSP_PARAMR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR4_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 5 */
    using HSP_PARAMR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR5_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 6 */
    using HSP_PARAMR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR6_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 7 */
    using HSP_PARAMR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR7_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 8 */
    using HSP_PARAMR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR8_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 9 */
    using HSP_PARAMR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR9_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 10 */
    using HSP_PARAMR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR10_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 11 */
    using HSP_PARAMR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR11_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 12 */
    using HSP_PARAMR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR12_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 13 */
    using HSP_PARAMR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR13_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 14 */
    using HSP_PARAMR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR14_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP parameter register 15 */
    using HSP_PARAMR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parameter value */
    using HSP_PARAMR15_PARAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP SPE interrupt enable register */
    using HSP_SPE_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU to SPE message ready interrupt enable */
    using HSP_SPE_IER_C2HMRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t HSP_SPE_IER_C2HMRDYIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t HSP_SPE_IER_C2HMRDYIE_B_0x1 = 1;

    /** @brief SPE to CPU message free interrupt enable */
    using HSP_SPE_IER_H2CMFREEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t HSP_SPE_IER_H2CMFREEIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t HSP_SPE_IER_H2CMFREEIE_B_0x1 = 1;

    /** @brief HSP SPE interrupt status register */
    using HSP_SPE_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU to SPE message box status */
    using HSP_SPE_ISR_C2HMRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No message from the CPU (value: 0)
     *          - B_0x1: A new message from the CPU is available. (value: 1)
     */
        /** @brief No message from the CPU */
    constexpr std::uint32_t HSP_SPE_ISR_C2HMRDYF_B_0x0 = 0;
        /** @brief A new message from the CPU is available. */
    constexpr std::uint32_t HSP_SPE_ISR_C2HMRDYF_B_0x1 = 1;

    /** @brief SPE to CPU message box status */
    using HSP_SPE_ISR_H2CMFREEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The SPE to CPU message box is not free. (value: 0)
     *          - B_0x1: The SPE to CPU message box is free. (value: 1)
     */
        /** @brief The SPE to CPU message box is not free. */
    constexpr std::uint32_t HSP_SPE_ISR_H2CMFREEF_B_0x0 = 0;
        /** @brief The SPE to CPU message box is free. */
    constexpr std::uint32_t HSP_SPE_ISR_H2CMFREEF_B_0x1 = 1;

    /** @brief HSP reset request */
    using HSP_SPE_ISR_RSTREQF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pending reset request (value: 0)
     *          - B_0x1: A reset request from the application is pending. (value: 1)
     */
        /** @brief No pending reset request */
    constexpr std::uint32_t HSP_SPE_ISR_RSTREQF_B_0x0 = 0;
        /** @brief A reset request from the application is pending. */
    constexpr std::uint32_t HSP_SPE_ISR_RSTREQF_B_0x1 = 1;

    /** @brief BUFFx status */
    using HSP_SPE_ISR_BUF0EVTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event pending (value: 0)
     *          - B_0x1: An event is pending BUFFx empty (if set to C2H) or BUFFx not empty (if set to C2H). (value: 1)
     */
        /** @brief No event pending */
    constexpr std::uint32_t HSP_SPE_ISR_BUF0EVTF_B_0x0 = 0;
        /** @brief An event is pending BUFFx empty (if set to C2H) or BUFFx not empty (if set to C2H). */
    constexpr std::uint32_t HSP_SPE_ISR_BUF0EVTF_B_0x1 = 1;

    /** @brief BUFFx status */
    using HSP_SPE_ISR_BUF1EVTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event pending (value: 0)
     *          - B_0x1: An event is pending BUFFx empty (if set to C2H) or BUFFx not empty (if set to C2H). (value: 1)
     */
        /** @brief No event pending */
    constexpr std::uint32_t HSP_SPE_ISR_BUF1EVTF_B_0x0 = 0;
        /** @brief An event is pending BUFFx empty (if set to C2H) or BUFFx not empty (if set to C2H). */
    constexpr std::uint32_t HSP_SPE_ISR_BUF1EVTF_B_0x1 = 1;

    /** @brief BUFFx status */
    using HSP_SPE_ISR_BUF2EVTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event pending (value: 0)
     *          - B_0x1: An event is pending BUFFx empty (if set to C2H) or BUFFx not empty (if set to C2H). (value: 1)
     */
        /** @brief No event pending */
    constexpr std::uint32_t HSP_SPE_ISR_BUF2EVTF_B_0x0 = 0;
        /** @brief An event is pending BUFFx empty (if set to C2H) or BUFFx not empty (if set to C2H). */
    constexpr std::uint32_t HSP_SPE_ISR_BUF2EVTF_B_0x1 = 1;

    /** @brief BUFFx status */
    using HSP_SPE_ISR_BUF3EVTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event pending (value: 0)
     *          - B_0x1: An event is pending BUFFx empty (if set to C2H) or BUFFx not empty (if set to C2H). (value: 1)
     */
        /** @brief No event pending */
    constexpr std::uint32_t HSP_SPE_ISR_BUF3EVTF_B_0x0 = 0;
        /** @brief An event is pending BUFFx empty (if set to C2H) or BUFFx not empty (if set to C2H). */
    constexpr std::uint32_t HSP_SPE_ISR_BUF3EVTF_B_0x1 = 1;

    /** @brief HSP task comparator unit register */
    using HSP_TCUCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x340, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Task compare 0 */
    using HSP_TCUCFGR_TSKCMP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Task comparator 0 enable */
    using HSP_TCUCFGR_TC0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSKCMP0 output disabled (value: 0)
     *          - B_0x1: TSKCMP0 output enabled (value: 1)
     */
        /** @brief TSKCMP0 output disabled */
    constexpr std::uint32_t HSP_TCUCFGR_TC0EN_B_0x0 = 0;
        /** @brief TSKCMP0 output enabled */
    constexpr std::uint32_t HSP_TCUCFGR_TC0EN_B_0x1 = 1;

    /** @brief Task compare 1 */
    using HSP_TCUCFGR_TSKCMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Task comparator 1 enable */
    using HSP_TCUCFGR_TC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSKCMP1 output disabled (value: 0)
     *          - B_0x1: TSKCMP1 output enabled (value: 1)
     */
        /** @brief TSKCMP1 output disabled */
    constexpr std::uint32_t HSP_TCUCFGR_TC1EN_B_0x0 = 0;
        /** @brief TSKCMP1 output enabled */
    constexpr std::uint32_t HSP_TCUCFGR_TC1EN_B_0x1 = 1;

    /** @brief Task compare 2 */
    using HSP_TCUCFGR_TSKCMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Task comparator 2 enable */
    using HSP_TCUCFGR_TC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSKCMP2 output disabled (value: 0)
     *          - B_0x1: TSKCMP2 output enabled (value: 1)
     */
        /** @brief TSKCMP2 output disabled */
    constexpr std::uint32_t HSP_TCUCFGR_TC2EN_B_0x0 = 0;
        /** @brief TSKCMP2 output enabled */
    constexpr std::uint32_t HSP_TCUCFGR_TC2EN_B_0x1 = 1;

    /** @brief Task compare 3 */
    using HSP_TCUCFGR_TSKCMP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Task comparator 3 enable */
    using HSP_TCUCFGR_TC3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSKCMP3 output disabled (value: 0)
     *          - B_0x1: TSKCMP3 output enabled (value: 1)
     */
        /** @brief TSKCMP3 output disabled */
    constexpr std::uint32_t HSP_TCUCFGR_TC3EN_B_0x0 = 0;
        /** @brief TSKCMP3 output enabled */
    constexpr std::uint32_t HSP_TCUCFGR_TC3EN_B_0x1 = 1;

    /** @brief HSP task overlap control register */
    using HSP_TOVLPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x344, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Task overlap enable */
    using HSP_TOVLPCR_TOVLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Task overlap detector disabled (value: 0)
     *          - B_0x1: Task overlap detector enabled (value: 1)
     */
        /** @brief Task overlap detector disabled */
    constexpr std::uint32_t HSP_TOVLPCR_TOVLPEN_B_0x0 = 0;
        /** @brief Task overlap detector enabled */
    constexpr std::uint32_t HSP_TOVLPCR_TOVLPEN_B_0x1 = 1;

    /** @brief Lower task number value */
    using HSP_TOVLPCR_LTNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Higher task number value */
    using HSP_TOVLPCR_HTNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP SNOOP register */
    using HSP_SNPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x378, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNOOP group A signal selection */
    using HSP_SNPR_SNPSELA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSP_SNP[2:0] outputs are disabled. (value: 0)
     *          - B_0x1: Selects signal set 1 to HSP_SNP[2:0] outputs. (value: 1)
     *          - B_0x2: Selects signal set 2 to HSP_SNP[2:0] outputs. (value: 2)
     *          - B_0x3: Selects signal set 3 to HSP_SNP[2:0] outputs. (value: 3)
     *          - B_0x4: Selects signal set 4 to HSP_SNP[2:0] outputs. (value: 4)
     *          - B_0x5: Selects signal set 5 to HSP_SNP[2:0] outputs. (value: 5)
     *          - B_0x6: Selects signal set 6 to HSP_SNP[2:0] outputs. (value: 6)
     *          - B_0x7: Selects signal set 7 to HSP_SNP[2:0] outputs. (value: 7)
     */
        /** @brief HSP_SNP[2:0] outputs are disabled. */
    constexpr std::uint32_t HSP_SNPR_SNPSELA_B_0x0 = 0;
        /** @brief Selects signal set 1 to HSP_SNP[2:0] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELA_B_0x1 = 1;
        /** @brief Selects signal set 2 to HSP_SNP[2:0] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELA_B_0x2 = 2;
        /** @brief Selects signal set 3 to HSP_SNP[2:0] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELA_B_0x3 = 3;
        /** @brief Selects signal set 4 to HSP_SNP[2:0] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELA_B_0x4 = 4;
        /** @brief Selects signal set 5 to HSP_SNP[2:0] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELA_B_0x5 = 5;
        /** @brief Selects signal set 6 to HSP_SNP[2:0] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELA_B_0x6 = 6;
        /** @brief Selects signal set 7 to HSP_SNP[2:0] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELA_B_0x7 = 7;

    /** @brief SNOOP group B signal selection */
    using HSP_SNPR_SNPSELB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSP_SNP[5:3] outputs are disabled. (value: 0)
     *          - B_0x1: Selects signal set 1 to HSP_SNP[5:3] outputs. (value: 1)
     *          - B_0x2: Selects signal set 2 to HSP_SNP[5:3] outputs. (value: 2)
     *          - B_0x3: Selects signal set 3 to HSP_SNP[5:3] outputs. (value: 3)
     *          - B_0x4: Selects signal set 4 to HSP_SNP[5:3] outputs. (value: 4)
     *          - B_0x5: Selects signal set 5 to HSP_SNP[5:3] outputs. (value: 5)
     *          - B_0x6: Selects signal set 6 to HSP_SNP[5:3] outputs. (value: 6)
     *          - B_0x7: Selects signal set 7 to HSP_SNP[5:3] outputs. (value: 7)
     */
        /** @brief HSP_SNP[5:3] outputs are disabled. */
    constexpr std::uint32_t HSP_SNPR_SNPSELB_B_0x0 = 0;
        /** @brief Selects signal set 1 to HSP_SNP[5:3] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELB_B_0x1 = 1;
        /** @brief Selects signal set 2 to HSP_SNP[5:3] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELB_B_0x2 = 2;
        /** @brief Selects signal set 3 to HSP_SNP[5:3] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELB_B_0x3 = 3;
        /** @brief Selects signal set 4 to HSP_SNP[5:3] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELB_B_0x4 = 4;
        /** @brief Selects signal set 5 to HSP_SNP[5:3] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELB_B_0x5 = 5;
        /** @brief Selects signal set 6 to HSP_SNP[5:3] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELB_B_0x6 = 6;
        /** @brief Selects signal set 7 to HSP_SNP[5:3] outputs. */
    constexpr std::uint32_t HSP_SNPR_SNPSELB_B_0x7 = 7;

    /** @brief HSP conflict counter register */
    using HSP_CCNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x37C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Conflict counter */
    using HSP_CCNTR_CCNTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP data capture register */
    using HSP_CAPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time-stamp value */
    using HSP_CAPDR_TSTAMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IF condition history */
    using HSP_CAPDR_IFHIST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IF instruction counter */
    using HSP_CAPDR_IFCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last captured task number */
    using HSP_CAPDR_TSKNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP data capture register */
    using HSP_CAPDR_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IF condition history */
    using HSP_CAPDR_ALTERNATE1_IFHIST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last captured processing function number */
    using HSP_CAPDR_ALTERNATE1_PFCTNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IF instruction counter */
    using HSP_CAPDR_ALTERNATE1_IFCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last captured task number */
    using HSP_CAPDR_ALTERNATE1_TSKNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP capture control register */
    using HSP_CAPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x384, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture mode */
    using HSP_CAPCR_CAPMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture function is disabled. (value: 0)
     *          - B_0x1: A capture is performed every time the SPE breaks. (value: 1)
     *          - B_0x2: A capture is performed every time the task number changes. (value: 2)
     *          - B_0x3: A capture is performed every time the processing function number changes. (value: 3)
     */
        /** @brief Capture function is disabled. */
    constexpr std::uint32_t HSP_CAPCR_CAPMOD_B_0x0 = 0;
        /** @brief A capture is performed every time the SPE breaks. */
    constexpr std::uint32_t HSP_CAPCR_CAPMOD_B_0x1 = 1;
        /** @brief A capture is performed every time the task number changes. */
    constexpr std::uint32_t HSP_CAPCR_CAPMOD_B_0x2 = 2;
        /** @brief A capture is performed every time the processing function number changes. */
    constexpr std::uint32_t HSP_CAPCR_CAPMOD_B_0x3 = 3;

    /** @brief Free-running counter enable */
    using HSP_CAPCR_FRCNTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The free-running counter and prescaler are disabled and reset. (value: 0)
     *          - B_0x1: The free-running counter and prescaler are enabled. (value: 1)
     */
        /** @brief The free-running counter and prescaler are disabled and reset. */
    constexpr std::uint32_t HSP_CAPCR_FRCNTEN_B_0x0 = 0;
        /** @brief The free-running counter and prescaler are enabled. */
    constexpr std::uint32_t HSP_CAPCR_FRCNTEN_B_0x1 = 1;

    /** @brief Time-stamp prescaler value */
    using HSP_CAPCR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock division is 1 (bypassed). (value: 0)
     *          - B_0x1: Clock division is hsp_xclk_core_ck / 2. (value: 1)
     *          - B_0x2: Clock division is hsp_xclk_core_ck / 4. (value: 2)
     *          - B_0x3: Clock division is hsp_xclk_core_ck / 8. (value: 3)
     *          - B_0x4: Clock division is hsp_xclk_core_ck / 16. (value: 4)
     *          - B_0x5: Clock division is hsp_xclk_core_ck / 32. (value: 5)
     *          - B_0x6: Clock division is hsp_xclk_core_ck / 64. (value: 6)
     *          - B_0x7: Clock division is hsp_xclk_core_ck / 128. (value: 7)
     *          - B_0x8: Clock division is hsp_xclk_core_ck / 256. (value: 8)
     *          - B_0x9: Clock division is hsp_xclk_core_ck / 512. (value: 9)
     *          - B_0xA: Clock division is hsp_xclk_core_ck / 1024. (value: 10)
     *          - B_0xB: Clock division is hsp_xclk_core_ck / 2048. (value: 11)
     *          - B_0xC: Clock division is hsp_xclk_core_ck / 4096. (value: 12)
     *          - B_0xD: Clock division is hsp_xclk_core_ck / 8192. (value: 13)
     *          - B_0xE: Clock division is hsp_xclk_core_ck / 16384. (value: 14)
     *          - B_0xF: Clock division is hsp_xclk_core_ck / 32768. (value: 15)
     */
        /** @brief Clock division is 1 (bypassed). */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x0 = 0;
        /** @brief Clock division is hsp_xclk_core_ck / 2. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x1 = 1;
        /** @brief Clock division is hsp_xclk_core_ck / 4. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x2 = 2;
        /** @brief Clock division is hsp_xclk_core_ck / 8. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x3 = 3;
        /** @brief Clock division is hsp_xclk_core_ck / 16. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x4 = 4;
        /** @brief Clock division is hsp_xclk_core_ck / 32. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x5 = 5;
        /** @brief Clock division is hsp_xclk_core_ck / 64. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x6 = 6;
        /** @brief Clock division is hsp_xclk_core_ck / 128. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x7 = 7;
        /** @brief Clock division is hsp_xclk_core_ck / 256. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x8 = 8;
        /** @brief Clock division is hsp_xclk_core_ck / 512. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0x9 = 9;
        /** @brief Clock division is hsp_xclk_core_ck / 1024. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0xA = 10;
        /** @brief Clock division is hsp_xclk_core_ck / 2048. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0xB = 11;
        /** @brief Clock division is hsp_xclk_core_ck / 4096. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0xC = 12;
        /** @brief Clock division is hsp_xclk_core_ck / 8192. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0xD = 13;
        /** @brief Clock division is hsp_xclk_core_ck / 16384. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0xE = 14;
        /** @brief Clock division is hsp_xclk_core_ck / 32768. */
    constexpr std::uint32_t HSP_CAPCR_PRESC_B_0xF = 15;

    /** @brief Task filter enable */
    using HSP_CAPCR_TSKFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The trace controller asserts the tsc_pfcttd signal every time the processing function is executed, independently to the task number running. (value: 0)
     *          - B_0x1: The trace controller asserts the tsc_pfcttd signal every time the processing function executed when the task selected by TSKCMP0[5:0] is running. (value: 1)
     */
        /** @brief The trace controller asserts the tsc_pfcttd signal every time the processing function is executed, independently to the task number running. */
    constexpr std::uint32_t HSP_CAPCR_TSKFLT_B_0x0 = 0;
        /** @brief The trace controller asserts the tsc_pfcttd signal every time the processing function executed when the task selected by TSKCMP0[5:0] is running. */
    constexpr std::uint32_t HSP_CAPCR_TSKFLT_B_0x1 = 1;

    /** @brief Conflict counter enable */
    using HSP_CAPCR_CCNTREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Conflict counter disabled, and reset to 0 (value: 0)
     *          - B_0x1: Conflict counter enabled (value: 1)
     */
        /** @brief Conflict counter disabled, and reset to 0 */
    constexpr std::uint32_t HSP_CAPCR_CCNTREN_B_0x0 = 0;
        /** @brief Conflict counter enabled */
    constexpr std::uint32_t HSP_CAPCR_CCNTREN_B_0x1 = 1;

    /** @brief HSP error interrupt enable register */
    using HSP_ERR_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRGITF overrun interrupt enable */
    using HSP_ERR_IER_TRGIOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGITF overrun interrupt disabled (value: 0)
     *          - B_0x1: TRGITF overrun interrupt enabled (value: 1)
     */
        /** @brief TRGITF overrun interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_TRGIOVRIE_B_0x0 = 0;
        /** @brief TRGITF overrun interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_TRGIOVRIE_B_0x1 = 1;

    /** @brief H2CBUFFx underrun or C2HBUFFx overrun interrupt enable */
    using HSP_ERR_IER_B0ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: H2C/C2HBUFFx underrun/overrun interrupt disabled (value: 0)
     *          - B_0x1: H2C/C2HBUFFx underrun/overrun interrupt enabled (value: 1)
     */
        /** @brief H2C/C2HBUFFx underrun/overrun interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_B0ERRIE_B_0x0 = 0;
        /** @brief H2C/C2HBUFFx underrun/overrun interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_B0ERRIE_B_0x1 = 1;

    /** @brief H2CBUFFx underrun or C2HBUFFx overrun interrupt enable */
    using HSP_ERR_IER_B1ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: H2C/C2HBUFFx underrun/overrun interrupt disabled (value: 0)
     *          - B_0x1: H2C/C2HBUFFx underrun/overrun interrupt enabled (value: 1)
     */
        /** @brief H2C/C2HBUFFx underrun/overrun interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_B1ERRIE_B_0x0 = 0;
        /** @brief H2C/C2HBUFFx underrun/overrun interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_B1ERRIE_B_0x1 = 1;

    /** @brief H2CBUFFx underrun or C2HBUFFx overrun interrupt enable */
    using HSP_ERR_IER_B2ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: H2C/C2HBUFFx underrun/overrun interrupt disabled (value: 0)
     *          - B_0x1: H2C/C2HBUFFx underrun/overrun interrupt enabled (value: 1)
     */
        /** @brief H2C/C2HBUFFx underrun/overrun interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_B2ERRIE_B_0x0 = 0;
        /** @brief H2C/C2HBUFFx underrun/overrun interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_B2ERRIE_B_0x1 = 1;

    /** @brief H2CBUFFx underrun or C2HBUFFx overrun interrupt enable */
    using HSP_ERR_IER_B3ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: H2C/C2HBUFFx underrun/overrun interrupt disabled (value: 0)
     *          - B_0x1: H2C/C2HBUFFx underrun/overrun interrupt enabled (value: 1)
     */
        /** @brief H2C/C2HBUFFx underrun/overrun interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_B3ERRIE_B_0x0 = 0;
        /** @brief H2C/C2HBUFFx underrun/overrun interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_B3ERRIE_B_0x1 = 1;

    /** @brief Capture register overrun interrupt enable */
    using HSP_ERR_IER_CAPOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture register overrun interrupt disabled (value: 0)
     *          - B_0x1: Capture register overrun interrupt enabled (value: 1)
     */
        /** @brief Capture register overrun interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_CAPOVRIE_B_0x0 = 0;
        /** @brief Capture register overrun interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_CAPOVRIE_B_0x1 = 1;

    /** @brief Firmware error interrupt enable */
    using HSP_ERR_IER_FWERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Firmware error interrupt disabled (value: 0)
     *          - B_0x1: Firmware error interrupt enabled (value: 1)
     */
        /** @brief Firmware error interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_FWERRIE_B_0x0 = 0;
        /** @brief Firmware error interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_FWERRIE_B_0x1 = 1;

    /** @brief Scheduler error interrupt enable */
    using HSP_ERR_IER_SCHERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Scheduler error interrupt disabled (value: 0)
     *          - B_0x1: Scheduler error interrupt enabled (value: 1)
     */
        /** @brief Scheduler error interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_SCHERRIE_B_0x0 = 0;
        /** @brief Scheduler error interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_SCHERRIE_B_0x1 = 1;

    /** @brief Break input interrupt enable */
    using HSP_ERR_IER_BKINIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input interrupt disabled (value: 0)
     *          - B_0x1: Break input interrupt enabled (value: 1)
     */
        /** @brief Break input interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_BKINIE_B_0x0 = 0;
        /** @brief Break input interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_BKINIE_B_0x1 = 1;

    /** @brief SPE event overrun interrupt enable */
    using HSP_ERR_IER_HDEGOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPE event overrun interrupt disabled (value: 0)
     *          - B_0x1: SPE event overrun interrupt enabled (value: 1)
     */
        /** @brief SPE event overrun interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_HDEGOVRIE_B_0x0 = 0;
        /** @brief SPE event overrun interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_HDEGOVRIE_B_0x1 = 1;

    /** @brief Invalid OpCode error interrupt enable */
    using HSP_ERR_IER_OPCOERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OpCode error interrupt disabled (value: 0)
     *          - B_0x1: OpCode error interrupt enabled (value: 1)
     */
        /** @brief OpCode error interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_OPCOERRIE_B_0x0 = 0;
        /** @brief OpCode error interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_OPCOERRIE_B_0x1 = 1;

    /** @brief SPE access error interrupt enable */
    using HSP_ERR_IER_ACCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access error interrupt disabled (value: 0)
     *          - B_0x1: Access error interrupt enabled (value: 1)
     */
        /** @brief Access error interrupt disabled */
    constexpr std::uint32_t HSP_ERR_IER_ACCERRIE_B_0x0 = 0;
        /** @brief Access error interrupt enabled */
    constexpr std::uint32_t HSP_ERR_IER_ACCERRIE_B_0x1 = 1;

    /** @brief FPU underflow exception interrupt enable */
    using HSP_ERR_IER_UDFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Underflow exception does not activate the FPUERRF flag. (value: 0)
     *          - B_0x1: Underflow exception activates the FPUERRF flag. (value: 1)
     */
        /** @brief Underflow exception does not activate the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_UDFIE_B_0x0 = 0;
        /** @brief Underflow exception activates the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_UDFIE_B_0x1 = 1;

    /** @brief FPU overflow exception interrupt enable */
    using HSP_ERR_IER_OVFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overflow exception does not activate the FPUERRF flag. (value: 0)
     *          - B_0x1: Overflow exception activates the FPUERRF flag (value: 1)
     */
        /** @brief Overflow exception does not activate the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_OVFIE_B_0x0 = 0;
        /** @brief Overflow exception activates the FPUERRF flag */
    constexpr std::uint32_t HSP_ERR_IER_OVFIE_B_0x1 = 1;

    /** @brief FPU division-by-zero exception interrupt enable */
    using HSP_ERR_IER_DBZIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Division-by-zero exception does not activate the FPUERRF flag. (value: 0)
     *          - B_0x1: Division-by-zero exception activates the FPUERRF flag. (value: 1)
     */
        /** @brief Division-by-zero exception does not activate the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_DBZIE_B_0x0 = 0;
        /** @brief Division-by-zero exception activates the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_DBZIE_B_0x1 = 1;

    /** @brief FPU Invalid exception interrupt enable */
    using HSP_ERR_IER_INVIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Invalid exception does not activate the FPUERRF flag. (value: 0)
     *          - B_0x1: Invalid exception activates the FPUERRF flag. (value: 1)
     */
        /** @brief Invalid exception does not activate the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_INVIE_B_0x0 = 0;
        /** @brief Invalid exception activates the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_INVIE_B_0x1 = 1;

    /** @brief FPU denormal interrupt enable */
    using HSP_ERR_IER_DENORMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Denormal exception does not activate the FPUERRF flag. (value: 0)
     *          - B_0x1: Denormal exception activates the FPUERRF flag. (value: 1)
     */
        /** @brief Denormal exception does not activate the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_DENORMIE_B_0x0 = 0;
        /** @brief Denormal exception activates the FPUERRF flag. */
    constexpr std::uint32_t HSP_ERR_IER_DENORMIE_B_0x1 = 1;

    /** @brief HSP events interrupt enable register */
    using HSP_EVT_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP to CPU message ready interrupt enable */
    using HSP_EVT_IER_H2CMRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSP to CPU message ready interrupt disabled (value: 0)
     *          - B_0x1: HSP to CPU message ready interrupt enabled (value: 1)
     */
        /** @brief HSP to CPU message ready interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_H2CMRDYIE_B_0x0 = 0;
        /** @brief HSP to CPU message ready interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_H2CMRDYIE_B_0x1 = 1;

    /** @brief CPU to HSP message box free interrupt enable */
    using HSP_EVT_IER_C2HMFREEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CPU to HSP message free interrupt disabled (value: 0)
     *          - B_0x1: CPU to HSP message free interrupt enabled (value: 1)
     */
        /** @brief CPU to HSP message free interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_C2HMFREEIE_B_0x0 = 0;
        /** @brief CPU to HSP message free interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_C2HMFREEIE_B_0x1 = 1;

    /** @brief Direct command done interrupt enable */
    using HSP_EVT_IER_DCDONEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of direct command execution interrupt disabled (value: 0)
     *          - B_0x1: End of direct command execution interrupt enabled (value: 1)
     */
        /** @brief End of direct command execution interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_DCDONEIE_B_0x0 = 0;
        /** @brief End of direct command execution interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_DCDONEIE_B_0x1 = 1;

    /** @brief Capture buffer data ready interrupt enable */
    using HSP_EVT_IER_CAPRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture buffer data ready interrupt disabled (value: 0)
     *          - B_0x1: Capture buffer data ready interrupt enabled (value: 1)
     */
        /** @brief Capture buffer data ready interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_CAPRDYIE_B_0x0 = 0;
        /** @brief Capture buffer data ready interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_CAPRDYIE_B_0x1 = 1;

    /** @brief CPU dedicated event generator ready interrupt enable */
    using HSP_EVT_IER_CDEGRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dedicated software event generator ready interrupt disabled (value: 0)
     *          - B_0x1: Dedicated software event generator ready interrupt enabled (value: 1)
     */
        /** @brief Dedicated software event generator ready interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_CDEGRDYIE_B_0x0 = 0;
        /** @brief Dedicated software event generator ready interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_CDEGRDYIE_B_0x1 = 1;

    /** @brief Start of WFE interrupt enable */
    using HSP_EVT_IER_SOFWFEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Start of WFE interrupt disabled (value: 0)
     *          - B_0x1: Start of WFE interrupt enabled (value: 1)
     */
        /** @brief Start of WFE interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_SOFWFEIE_B_0x0 = 0;
        /** @brief Start of WFE interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_SOFWFEIE_B_0x1 = 1;

    /** @brief End of WFE interrupt enable */
    using HSP_EVT_IER_EOFWFEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of WFE interrupt disabled (value: 0)
     *          - B_0x1: End of WFE interrupt enabled (value: 1)
     */
        /** @brief End of WFE interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_EOFWFEIE_B_0x0 = 0;
        /** @brief End of WFE interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_EOFWFEIE_B_0x1 = 1;

    /** @brief BUFFx event interrupt enable */
    using HSP_EVT_IER_B0EVTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx event interrupt disabled (value: 0)
     *          - B_0x1: BUFFx event interrupt enabled (value: 1)
     */
        /** @brief BUFFx event interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_B0EVTIE_B_0x0 = 0;
        /** @brief BUFFx event interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_B0EVTIE_B_0x1 = 1;

    /** @brief BUFFx event interrupt enable */
    using HSP_EVT_IER_B1EVTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx event interrupt disabled (value: 0)
     *          - B_0x1: BUFFx event interrupt enabled (value: 1)
     */
        /** @brief BUFFx event interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_B1EVTIE_B_0x0 = 0;
        /** @brief BUFFx event interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_B1EVTIE_B_0x1 = 1;

    /** @brief BUFFx event interrupt enable */
    using HSP_EVT_IER_B2EVTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx event interrupt disabled (value: 0)
     *          - B_0x1: BUFFx event interrupt enabled (value: 1)
     */
        /** @brief BUFFx event interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_B2EVTIE_B_0x0 = 0;
        /** @brief BUFFx event interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_B2EVTIE_B_0x1 = 1;

    /** @brief BUFFx event interrupt enable */
    using HSP_EVT_IER_B3EVTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx event interrupt disabled (value: 0)
     *          - B_0x1: BUFFx event interrupt enabled (value: 1)
     */
        /** @brief BUFFx event interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_B3EVTIE_B_0x0 = 0;
        /** @brief BUFFx event interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_B3EVTIE_B_0x1 = 1;

    /** @brief Start of task generated by event comparator x interrupt enable */
    using HSP_EVT_IER_SOTECP0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Start of task interrupt generated by event comparator x disabled (value: 0)
     *          - B_0x1: Start of task interrupt generated by event comparator x enabled (value: 1)
     */
        /** @brief Start of task interrupt generated by event comparator x disabled */
    constexpr std::uint32_t HSP_EVT_IER_SOTECP0IE_B_0x0 = 0;
        /** @brief Start of task interrupt generated by event comparator x enabled */
    constexpr std::uint32_t HSP_EVT_IER_SOTECP0IE_B_0x1 = 1;

    /** @brief Start of task generated by event comparator x interrupt enable */
    using HSP_EVT_IER_SOTECP1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Start of task interrupt generated by event comparator x disabled (value: 0)
     *          - B_0x1: Start of task interrupt generated by event comparator x enabled (value: 1)
     */
        /** @brief Start of task interrupt generated by event comparator x disabled */
    constexpr std::uint32_t HSP_EVT_IER_SOTECP1IE_B_0x0 = 0;
        /** @brief Start of task interrupt generated by event comparator x enabled */
    constexpr std::uint32_t HSP_EVT_IER_SOTECP1IE_B_0x1 = 1;

    /** @brief Start of task generated by event comparator x interrupt enable */
    using HSP_EVT_IER_SOTECP2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Start of task interrupt generated by event comparator x disabled (value: 0)
     *          - B_0x1: Start of task interrupt generated by event comparator x enabled (value: 1)
     */
        /** @brief Start of task interrupt generated by event comparator x disabled */
    constexpr std::uint32_t HSP_EVT_IER_SOTECP2IE_B_0x0 = 0;
        /** @brief Start of task interrupt generated by event comparator x enabled */
    constexpr std::uint32_t HSP_EVT_IER_SOTECP2IE_B_0x1 = 1;

    /** @brief Start of task generated by event comparator x interrupt enable */
    using HSP_EVT_IER_SOTECP3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Start of task interrupt generated by event comparator x disabled (value: 0)
     *          - B_0x1: Start of task interrupt generated by event comparator x enabled (value: 1)
     */
        /** @brief Start of task interrupt generated by event comparator x disabled */
    constexpr std::uint32_t HSP_EVT_IER_SOTECP3IE_B_0x0 = 0;
        /** @brief Start of task interrupt generated by event comparator x enabled */
    constexpr std::uint32_t HSP_EVT_IER_SOTECP3IE_B_0x1 = 1;

    /** @brief End of task generated by event comparator x interrupt enable */
    using HSP_EVT_IER_EOTECP0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of task interrupt generated by event comparator x disabled (value: 0)
     *          - B_0x1: End of task interrupt generated by event comparator x enabled (value: 1)
     */
        /** @brief End of task interrupt generated by event comparator x disabled */
    constexpr std::uint32_t HSP_EVT_IER_EOTECP0IE_B_0x0 = 0;
        /** @brief End of task interrupt generated by event comparator x enabled */
    constexpr std::uint32_t HSP_EVT_IER_EOTECP0IE_B_0x1 = 1;

    /** @brief End of task generated by event comparator x interrupt enable */
    using HSP_EVT_IER_EOTECP1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of task interrupt generated by event comparator x disabled (value: 0)
     *          - B_0x1: End of task interrupt generated by event comparator x enabled (value: 1)
     */
        /** @brief End of task interrupt generated by event comparator x disabled */
    constexpr std::uint32_t HSP_EVT_IER_EOTECP1IE_B_0x0 = 0;
        /** @brief End of task interrupt generated by event comparator x enabled */
    constexpr std::uint32_t HSP_EVT_IER_EOTECP1IE_B_0x1 = 1;

    /** @brief End of task generated by event comparator x interrupt enable */
    using HSP_EVT_IER_EOTECP2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of task interrupt generated by event comparator x disabled (value: 0)
     *          - B_0x1: End of task interrupt generated by event comparator x enabled (value: 1)
     */
        /** @brief End of task interrupt generated by event comparator x disabled */
    constexpr std::uint32_t HSP_EVT_IER_EOTECP2IE_B_0x0 = 0;
        /** @brief End of task interrupt generated by event comparator x enabled */
    constexpr std::uint32_t HSP_EVT_IER_EOTECP2IE_B_0x1 = 1;

    /** @brief End of task generated by event comparator x interrupt enable */
    using HSP_EVT_IER_EOTECP3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of task interrupt generated by event comparator x disabled (value: 0)
     *          - B_0x1: End of task interrupt generated by event comparator x enabled (value: 1)
     */
        /** @brief End of task interrupt generated by event comparator x disabled */
    constexpr std::uint32_t HSP_EVT_IER_EOTECP3IE_B_0x0 = 0;
        /** @brief End of task interrupt generated by event comparator x enabled */
    constexpr std::uint32_t HSP_EVT_IER_EOTECP3IE_B_0x1 = 1;

    /** @brief Task overlap flag interrupt enable */
    using HSP_EVT_IER_TOVLPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Task overlap interrupt disabled (value: 0)
     *          - B_0x1: Task overlap interrupt enabled (value: 1)
     */
        /** @brief Task overlap interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_TOVLPIE_B_0x0 = 0;
        /** @brief Task overlap interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_TOVLPIE_B_0x1 = 1;

    /** @brief Saturation flag interrupt enable */
    using HSP_EVT_IER_FPUSATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t HSP_EVT_IER_FPUSATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t HSP_EVT_IER_FPUSATIE_B_0x1 = 1;

    /** @brief HSP processing event interrupt enable register */
    using HSP_PFCTEVT_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Processing function flags interrupt enable */
    using HSP_PFCTEVT_IER_PFCTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt not generated on flag activation (value: 0)
     *          - B_0x1: Interrupt generated on flag activation (value: 1)
     */
        /** @brief Interrupt not generated on flag activation */
    constexpr std::uint32_t HSP_PFCTEVT_IER_PFCTIE_B_0x0 = 0;
        /** @brief Interrupt generated on flag activation */
    constexpr std::uint32_t HSP_PFCTEVT_IER_PFCTIE_B_0x1 = 1;

    /** @brief HSP error interrupt status register */
    using HSP_ERR_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRGITF overrun flag */
    using HSP_ERR_ISR_TRGIOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No TRGITF overrun event detected (value: 0)
     *          - B_0x1: An TRGITF overrun event detected (value: 1)
     */
        /** @brief No TRGITF overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_TRGIOVRF_B_0x0 = 0;
        /** @brief An TRGITF overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_TRGIOVRF_B_0x1 = 1;

    /** @brief H2CBUFFx underrun or C2HBUFFx overrun flag */
    using HSP_ERR_ISR_B0ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No H2C/C2HBUFFx underrun/overrun event detected (value: 0)
     *          - B_0x1: A H2C/C2HBUFFx underrun/overrun event detected (value: 1)
     */
        /** @brief No H2C/C2HBUFFx underrun/overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_B0ERRF_B_0x0 = 0;
        /** @brief A H2C/C2HBUFFx underrun/overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_B0ERRF_B_0x1 = 1;

    /** @brief H2CBUFFx underrun or C2HBUFFx overrun flag */
    using HSP_ERR_ISR_B1ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No H2C/C2HBUFFx underrun/overrun event detected (value: 0)
     *          - B_0x1: A H2C/C2HBUFFx underrun/overrun event detected (value: 1)
     */
        /** @brief No H2C/C2HBUFFx underrun/overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_B1ERRF_B_0x0 = 0;
        /** @brief A H2C/C2HBUFFx underrun/overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_B1ERRF_B_0x1 = 1;

    /** @brief H2CBUFFx underrun or C2HBUFFx overrun flag */
    using HSP_ERR_ISR_B2ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No H2C/C2HBUFFx underrun/overrun event detected (value: 0)
     *          - B_0x1: A H2C/C2HBUFFx underrun/overrun event detected (value: 1)
     */
        /** @brief No H2C/C2HBUFFx underrun/overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_B2ERRF_B_0x0 = 0;
        /** @brief A H2C/C2HBUFFx underrun/overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_B2ERRF_B_0x1 = 1;

    /** @brief H2CBUFFx underrun or C2HBUFFx overrun flag */
    using HSP_ERR_ISR_B3ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No H2C/C2HBUFFx underrun/overrun event detected (value: 0)
     *          - B_0x1: A H2C/C2HBUFFx underrun/overrun event detected (value: 1)
     */
        /** @brief No H2C/C2HBUFFx underrun/overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_B3ERRF_B_0x0 = 0;
        /** @brief A H2C/C2HBUFFx underrun/overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_B3ERRF_B_0x1 = 1;

    /** @brief Capture register overrun flag */
    using HSP_ERR_ISR_CAPOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture register overrun event detected (value: 0)
     *          - B_0x1: A capture register overrun event detected (value: 1)
     */
        /** @brief No capture register overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_CAPOVRF_B_0x0 = 0;
        /** @brief A capture register overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_CAPOVRF_B_0x1 = 1;

    /** @brief Firmware error flag */
    using HSP_ERR_ISR_FWERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No firmware error detected (value: 0)
     *          - B_0x1: A firmware error detected (see HSP firmware error register (HSP_FWERR) to get the firmware error number) (value: 1)
     */
        /** @brief No firmware error detected */
    constexpr std::uint32_t HSP_ERR_ISR_FWERRF_B_0x0 = 0;
        /** @brief A firmware error detected (see HSP firmware error register (HSP_FWERR) to get the firmware error number) */
    constexpr std::uint32_t HSP_ERR_ISR_FWERRF_B_0x1 = 1;

    /** @brief Scheduler error flag */
    using HSP_ERR_ISR_SCHERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No scheduler error detected (value: 0)
     *          - B_0x1: A scheduler error detected (value: 1)
     */
        /** @brief No scheduler error detected */
    constexpr std::uint32_t HSP_ERR_ISR_SCHERRF_B_0x0 = 0;
        /** @brief A scheduler error detected */
    constexpr std::uint32_t HSP_ERR_ISR_SCHERRF_B_0x1 = 1;

    /** @brief Break input flag */
    using HSP_ERR_ISR_BKINF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break input event detected (value: 0)
     *          - B_0x1: A break input event detected (value: 1)
     */
        /** @brief No break input event detected */
    constexpr std::uint32_t HSP_ERR_ISR_BKINF_B_0x0 = 0;
        /** @brief A break input event detected */
    constexpr std::uint32_t HSP_ERR_ISR_BKINF_B_0x1 = 1;

    /** @brief SPE event overrun flag */
    using HSP_ERR_ISR_HDEGOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SPE event overrun event detected (value: 0)
     *          - B_0x1: An SPE event overrun event detected (value: 1)
     */
        /** @brief No SPE event overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_HDEGOVRF_B_0x0 = 0;
        /** @brief An SPE event overrun event detected */
    constexpr std::uint32_t HSP_ERR_ISR_HDEGOVRF_B_0x1 = 1;

    /** @brief Invalid OpCode error flag */
    using HSP_ERR_ISR_OPCOERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No OpCode error event detected (value: 0)
     *          - B_0x1: An OpCode error event detected (value: 1)
     */
        /** @brief No OpCode error event detected */
    constexpr std::uint32_t HSP_ERR_ISR_OPCOERRF_B_0x0 = 0;
        /** @brief An OpCode error event detected */
    constexpr std::uint32_t HSP_ERR_ISR_OPCOERRF_B_0x1 = 1;

    /** @brief SPE Access error flag */
    using HSP_ERR_ISR_ACCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No access error event detected (value: 0)
     *          - B_0x1: An access error event detected (value: 1)
     */
        /** @brief No access error event detected */
    constexpr std::uint32_t HSP_ERR_ISR_ACCERRF_B_0x0 = 0;
        /** @brief An access error event detected */
    constexpr std::uint32_t HSP_ERR_ISR_ACCERRF_B_0x1 = 1;

    /** @brief Computation error flag */
    using HSP_ERR_ISR_FPUERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No computation error event detected (value: 0)
     *          - B_0x1: A computation error event detected (value: 1)
     */
        /** @brief No computation error event detected */
    constexpr std::uint32_t HSP_ERR_ISR_FPUERRF_B_0x0 = 0;
        /** @brief A computation error event detected */
    constexpr std::uint32_t HSP_ERR_ISR_FPUERRF_B_0x1 = 1;

    /** @brief HSP events interrupt status register */
    using HSP_EVT_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP to CPU message ready flag */
    using HSP_EVT_ISR_H2CMRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HSP to CPU message ready event detected (value: 0)
     *          - B_0x1: A HSP to CPU message ready event detected (value: 1)
     */
        /** @brief No HSP to CPU message ready event detected */
    constexpr std::uint32_t HSP_EVT_ISR_H2CMRDYF_B_0x0 = 0;
        /** @brief A HSP to CPU message ready event detected */
    constexpr std::uint32_t HSP_EVT_ISR_H2CMRDYF_B_0x1 = 1;

    /** @brief CPU to HSP message box free flag */
    using HSP_EVT_ISR_C2HMFREEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No CPU to HSP message busy event detected (value: 0)
     *          - B_0x1: A CPU to HSP message busy event detected (value: 1)
     */
        /** @brief No CPU to HSP message busy event detected */
    constexpr std::uint32_t HSP_EVT_ISR_C2HMFREEF_B_0x0 = 0;
        /** @brief A CPU to HSP message busy event detected */
    constexpr std::uint32_t HSP_EVT_ISR_C2HMFREEF_B_0x1 = 1;

    /** @brief Direct command done flag */
    using HSP_EVT_ISR_DCDONEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No direct command under execution, or current execution not yet completed (value: 0)
     *          - B_0x1: Direct command execution completed (value: 1)
     */
        /** @brief No direct command under execution, or current execution not yet completed */
    constexpr std::uint32_t HSP_EVT_ISR_DCDONEF_B_0x0 = 0;
        /** @brief Direct command execution completed */
    constexpr std::uint32_t HSP_EVT_ISR_DCDONEF_B_0x1 = 1;

    /** @brief Capture buffer data ready flag */
    using HSP_EVT_ISR_CAPRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture buffer data ready event detected (value: 0)
     *          - B_0x1: A capture buffer data ready event detected (value: 1)
     */
        /** @brief No capture buffer data ready event detected */
    constexpr std::uint32_t HSP_EVT_ISR_CAPRDYF_B_0x0 = 0;
        /** @brief A capture buffer data ready event detected */
    constexpr std::uint32_t HSP_EVT_ISR_CAPRDYF_B_0x1 = 1;

    /** @brief CPU dedicated event generator ready flag */
    using HSP_EVT_ISR_CDEGRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CDEG not ready (value: 0)
     *          - B_0x1: CDEG ready to accept the generation of a new event (value: 1)
     */
        /** @brief CDEG not ready */
    constexpr std::uint32_t HSP_EVT_ISR_CDEGRDYF_B_0x0 = 0;
        /** @brief CDEG ready to accept the generation of a new event */
    constexpr std::uint32_t HSP_EVT_ISR_CDEGRDYF_B_0x1 = 1;

    /** @brief Start of WFE flag */
    using HSP_EVT_ISR_SOFWFEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No start of WFE event detected (value: 0)
     *          - B_0x1: Start of WFE event detected (value: 1)
     */
        /** @brief No start of WFE event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOFWFEF_B_0x0 = 0;
        /** @brief Start of WFE event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOFWFEF_B_0x1 = 1;

    /** @brief End of WFE flag */
    using HSP_EVT_ISR_EOFWFEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of WFE event detected (value: 0)
     *          - B_0x1: End of WFE event is detected (value: 1)
     */
        /** @brief No end of WFE event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOFWFEF_B_0x0 = 0;
        /** @brief End of WFE event is detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOFWFEF_B_0x1 = 1;

    /** @brief BUFFx event flag */
    using HSP_EVT_ISR_B0EVTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx not empty (if configured in C2H) or BUFFx empty if configured in H2C (value: 0)
     *          - B_0x1: BUFFx empty (if configured in C2H) or BUFFx not empty if configured in H2C (value: 1)
     */
        /** @brief BUFFx not empty (if configured in C2H) or BUFFx empty if configured in H2C */
    constexpr std::uint32_t HSP_EVT_ISR_B0EVTF_B_0x0 = 0;
        /** @brief BUFFx empty (if configured in C2H) or BUFFx not empty if configured in H2C */
    constexpr std::uint32_t HSP_EVT_ISR_B0EVTF_B_0x1 = 1;

    /** @brief BUFFx event flag */
    using HSP_EVT_ISR_B1EVTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx not empty (if configured in C2H) or BUFFx empty if configured in H2C (value: 0)
     *          - B_0x1: BUFFx empty (if configured in C2H) or BUFFx not empty if configured in H2C (value: 1)
     */
        /** @brief BUFFx not empty (if configured in C2H) or BUFFx empty if configured in H2C */
    constexpr std::uint32_t HSP_EVT_ISR_B1EVTF_B_0x0 = 0;
        /** @brief BUFFx empty (if configured in C2H) or BUFFx not empty if configured in H2C */
    constexpr std::uint32_t HSP_EVT_ISR_B1EVTF_B_0x1 = 1;

    /** @brief BUFFx event flag */
    using HSP_EVT_ISR_B2EVTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx not empty (if configured in C2H) or BUFFx empty if configured in H2C (value: 0)
     *          - B_0x1: BUFFx empty (if configured in C2H) or BUFFx not empty if configured in H2C (value: 1)
     */
        /** @brief BUFFx not empty (if configured in C2H) or BUFFx empty if configured in H2C */
    constexpr std::uint32_t HSP_EVT_ISR_B2EVTF_B_0x0 = 0;
        /** @brief BUFFx empty (if configured in C2H) or BUFFx not empty if configured in H2C */
    constexpr std::uint32_t HSP_EVT_ISR_B2EVTF_B_0x1 = 1;

    /** @brief BUFFx event flag */
    using HSP_EVT_ISR_B3EVTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUFFx not empty (if configured in C2H) or BUFFx empty if configured in H2C (value: 0)
     *          - B_0x1: BUFFx empty (if configured in C2H) or BUFFx not empty if configured in H2C (value: 1)
     */
        /** @brief BUFFx not empty (if configured in C2H) or BUFFx empty if configured in H2C */
    constexpr std::uint32_t HSP_EVT_ISR_B3EVTF_B_0x0 = 0;
        /** @brief BUFFx empty (if configured in C2H) or BUFFx not empty if configured in H2C */
    constexpr std::uint32_t HSP_EVT_ISR_B3EVTF_B_0x1 = 1;

    /** @brief Start of task flag, for event comparator x */
    using HSP_EVT_ISR_SOTECP0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No start of task event detected (value: 0)
     *          - B_0x1: A start of task event detected (value: 1)
     */
        /** @brief No start of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOTECP0F_B_0x0 = 0;
        /** @brief A start of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOTECP0F_B_0x1 = 1;

    /** @brief Start of task flag, for event comparator x */
    using HSP_EVT_ISR_SOTECP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No start of task event detected (value: 0)
     *          - B_0x1: A start of task event detected (value: 1)
     */
        /** @brief No start of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOTECP1F_B_0x0 = 0;
        /** @brief A start of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOTECP1F_B_0x1 = 1;

    /** @brief Start of task flag, for event comparator x */
    using HSP_EVT_ISR_SOTECP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No start of task event detected (value: 0)
     *          - B_0x1: A start of task event detected (value: 1)
     */
        /** @brief No start of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOTECP2F_B_0x0 = 0;
        /** @brief A start of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOTECP2F_B_0x1 = 1;

    /** @brief Start of task flag, for event comparator x */
    using HSP_EVT_ISR_SOTECP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No start of task event detected (value: 0)
     *          - B_0x1: A start of task event detected (value: 1)
     */
        /** @brief No start of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOTECP3F_B_0x0 = 0;
        /** @brief A start of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_SOTECP3F_B_0x1 = 1;

    /** @brief End of task flag, for event comparator x */
    using HSP_EVT_ISR_EOTECP0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of task event detected (value: 0)
     *          - B_0x1: An end of task event detected (value: 1)
     */
        /** @brief No end of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOTECP0F_B_0x0 = 0;
        /** @brief An end of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOTECP0F_B_0x1 = 1;

    /** @brief End of task flag, for event comparator x */
    using HSP_EVT_ISR_EOTECP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of task event detected (value: 0)
     *          - B_0x1: An end of task event detected (value: 1)
     */
        /** @brief No end of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOTECP1F_B_0x0 = 0;
        /** @brief An end of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOTECP1F_B_0x1 = 1;

    /** @brief End of task flag, for event comparator x */
    using HSP_EVT_ISR_EOTECP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of task event detected (value: 0)
     *          - B_0x1: An end of task event detected (value: 1)
     */
        /** @brief No end of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOTECP2F_B_0x0 = 0;
        /** @brief An end of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOTECP2F_B_0x1 = 1;

    /** @brief End of task flag, for event comparator x */
    using HSP_EVT_ISR_EOTECP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of task event detected (value: 0)
     *          - B_0x1: An end of task event detected (value: 1)
     */
        /** @brief No end of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOTECP3F_B_0x0 = 0;
        /** @brief An end of task event detected */
    constexpr std::uint32_t HSP_EVT_ISR_EOTECP3F_B_0x1 = 1;

    /** @brief Task overlap flag */
    using HSP_EVT_ISR_TOVLPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No task overlap situation detected (value: 0)
     *          - B_0x1: A task overlap situation in the specified task range detected (value: 1)
     */
        /** @brief No task overlap situation detected */
    constexpr std::uint32_t HSP_EVT_ISR_TOVLPF_B_0x0 = 0;
        /** @brief A task overlap situation in the specified task range detected */
    constexpr std::uint32_t HSP_EVT_ISR_TOVLPF_B_0x1 = 1;

    /** @brief FPU saturation flag */
    using HSP_EVT_ISR_FPUSATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No saturation detected (value: 0)
     *          - B_0x1: A saturation detected (value: 1)
     */
        /** @brief No saturation detected */
    constexpr std::uint32_t HSP_EVT_ISR_FPUSATF_B_0x0 = 0;
        /** @brief A saturation detected */
    constexpr std::uint32_t HSP_EVT_ISR_FPUSATF_B_0x1 = 1;

    /** @brief HSP processing event interrupt status register */
    using HSP_PFCTEVT_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flags generated by SPE processing functions */
    using HSP_PFCTEVT_ISR_PFCTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flag not active (value: 0)
     *          - B_0x1: Flag active (value: 1)
     */
        /** @brief Flag not active */
    constexpr std::uint32_t HSP_PFCTEVT_ISR_PFCTF_B_0x0 = 0;
        /** @brief Flag active */
    constexpr std::uint32_t HSP_PFCTEVT_ISR_PFCTF_B_0x1 = 1;

    /** @brief HSP error information register */
    using HSP_ERRINFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inexact exception flag */
    using HSP_ERRINFR_INEXACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Inexact exception detected (value: 0)
     *          - B_0x1: Inexact exception detected (value: 1)
     */
        /** @brief No Inexact exception detected */
    constexpr std::uint32_t HSP_ERRINFR_INEXACT_B_0x0 = 0;
        /** @brief Inexact exception detected */
    constexpr std::uint32_t HSP_ERRINFR_INEXACT_B_0x1 = 1;

    /** @brief Underflow exception flag */
    using HSP_ERRINFR_UDFLOW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Underflow exception detected (value: 0)
     *          - B_0x1: Underflow exception detected (value: 1)
     */
        /** @brief No Underflow exception detected */
    constexpr std::uint32_t HSP_ERRINFR_UDFLOW_B_0x0 = 0;
        /** @brief Underflow exception detected */
    constexpr std::uint32_t HSP_ERRINFR_UDFLOW_B_0x1 = 1;

    /** @brief Overflow exception flag */
    using HSP_ERRINFR_OVFLOW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Overflow exception detected (value: 0)
     *          - B_0x1: Overflow exception detected (value: 1)
     */
        /** @brief No Overflow exception detected */
    constexpr std::uint32_t HSP_ERRINFR_OVFLOW_B_0x0 = 0;
        /** @brief Overflow exception detected */
    constexpr std::uint32_t HSP_ERRINFR_OVFLOW_B_0x1 = 1;

    /** @brief Division by zero exception flag */
    using HSP_ERRINFR_DIVZERO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No division by 0 exception detected (value: 0)
     *          - B_0x1: Division by 0 exception detected (value: 1)
     */
        /** @brief No division by 0 exception detected */
    constexpr std::uint32_t HSP_ERRINFR_DIVZERO_B_0x0 = 0;
        /** @brief Division by 0 exception detected */
    constexpr std::uint32_t HSP_ERRINFR_DIVZERO_B_0x1 = 1;

    /** @brief Invalid exception flag */
    using HSP_ERRINFR_INVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Invalid exception detected (value: 0)
     *          - B_0x1: Invalid exception detected (value: 1)
     */
        /** @brief No Invalid exception detected */
    constexpr std::uint32_t HSP_ERRINFR_INVALID_B_0x0 = 0;
        /** @brief Invalid exception detected */
    constexpr std::uint32_t HSP_ERRINFR_INVALID_B_0x1 = 1;

    /** @brief Denormal exception flag */
    using HSP_ERRINFR_DENORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Denormal exception detected (value: 0)
     *          - B_0x1: Denormal exception detected (value: 1)
     */
        /** @brief No Denormal exception detected */
    constexpr std::uint32_t HSP_ERRINFR_DENORM_B_0x0 = 0;
        /** @brief Denormal exception detected */
    constexpr std::uint32_t HSP_ERRINFR_DENORM_B_0x1 = 1;

    /** @brief Code memory access error flag */
    using HSP_ERRINFR_CMERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The SPE did not generate a CRAM/CROM access error. (value: 0)
     *          - B_0x1: The SPE performed a fetch/load outside the CRAM/CROM memory range (value: 1)
     */
        /** @brief The SPE did not generate a CRAM/CROM access error. */
    constexpr std::uint32_t HSP_ERRINFR_CMERR_B_0x0 = 0;
        /** @brief The SPE performed a fetch/load outside the CRAM/CROM memory range */
    constexpr std::uint32_t HSP_ERRINFR_CMERR_B_0x1 = 1;

    /** @brief Data memory access error flag */
    using HSP_ERRINFR_DMERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The SPE did not generate a DRAM/BRAM access error. (value: 0)
     *          - B_0x1: The SPE performed a load/store outside the DRAM/BRAM range. (value: 1)
     */
        /** @brief The SPE did not generate a DRAM/BRAM access error. */
    constexpr std::uint32_t HSP_ERRINFR_DMERR_B_0x0 = 0;
        /** @brief The SPE performed a load/store outside the DRAM/BRAM range. */
    constexpr std::uint32_t HSP_ERRINFR_DMERR_B_0x1 = 1;

    /** @brief Internal AHB access error flag */
    using HSP_ERRINFR_MAHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The SPE did not generate an AHB access error. (value: 0)
     *          - B_0x1: The SPE generates an AHB error when accessing to HSP_CTRL. (value: 1)
     */
        /** @brief The SPE did not generate an AHB access error. */
    constexpr std::uint32_t HSP_ERRINFR_MAHBERR_B_0x0 = 0;
        /** @brief The SPE generates an AHB error when accessing to HSP_CTRL. */
    constexpr std::uint32_t HSP_ERRINFR_MAHBERR_B_0x1 = 1;

    /** @brief Slave AHB access error flag */
    using HSP_ERRINFR_SAHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The MMC did not detect invalid accesses from the device. (value: 0)
     *          - B_0x1: The MMC detected invalid accesses from the device. (value: 1)
     */
        /** @brief The MMC did not detect invalid accesses from the device. */
    constexpr std::uint32_t HSP_ERRINFR_SAHBERR_B_0x0 = 0;
        /** @brief The MMC detected invalid accesses from the device. */
    constexpr std::uint32_t HSP_ERRINFR_SAHBERR_B_0x1 = 1;

    /** @brief TRGIN error information */
    using HSP_ERRINFR_TRGIERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSP error interrupt clear register */
    using HSP_ERR_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRGIOVRF flag clear */
    using HSP_ERR_ICR_TRGIOVRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears TRGIOVRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_TRGIOVRC_B_0x0 = 0;
        /** @brief Clears TRGIOVRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_TRGIOVRC_B_0x1 = 1;

    /** @brief B0ERRF flag clear */
    using HSP_ERR_ICR_B0ERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears B0ERRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_B0ERRC_B_0x0 = 0;
        /** @brief Clears B0ERRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_B0ERRC_B_0x1 = 1;

    /** @brief B1ERRF flag clear */
    using HSP_ERR_ICR_B1ERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears B1ERRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_B1ERRC_B_0x0 = 0;
        /** @brief Clears B1ERRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_B1ERRC_B_0x1 = 1;

    /** @brief B2ERRF flag clear */
    using HSP_ERR_ICR_B2ERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears B2ERRFin HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_B2ERRC_B_0x0 = 0;
        /** @brief Clears B2ERRFin HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_B2ERRC_B_0x1 = 1;

    /** @brief B3ERRF flag clear */
    using HSP_ERR_ICR_B3ERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears B3ERRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_B3ERRC_B_0x0 = 0;
        /** @brief Clears B3ERRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_B3ERRC_B_0x1 = 1;

    /** @brief CAPOVRF flag clear */
    using HSP_ERR_ICR_CAPOVRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears CAPOVRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_CAPOVRC_B_0x0 = 0;
        /** @brief Clears CAPOVRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_CAPOVRC_B_0x1 = 1;

    /** @brief FWERRF flag clear */
    using HSP_ERR_ICR_FWERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears FWERRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_FWERRC_B_0x0 = 0;
        /** @brief Clears FWERRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_FWERRC_B_0x1 = 1;

    /** @brief SCHERRF flag clear */
    using HSP_ERR_ICR_SCHERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears SCHERRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_SCHERRC_B_0x0 = 0;
        /** @brief Clears SCHERRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_SCHERRC_B_0x1 = 1;

    /** @brief BKINF flag clear */
    using HSP_ERR_ICR_BKINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears BKINF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_BKINC_B_0x0 = 0;
        /** @brief Clears BKINF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_BKINC_B_0x1 = 1;

    /** @brief HDEGOVRF flag clear */
    using HSP_ERR_ICR_HDEGOVRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears HDEGOVRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_HDEGOVRC_B_0x0 = 0;
        /** @brief Clears HDEGOVRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_HDEGOVRC_B_0x1 = 1;

    /** @brief OPCOERRF flag clear */
    using HSP_ERR_ICR_OPCOERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears OPCOERRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_OPCOERRC_B_0x0 = 0;
        /** @brief Clears OPCOERRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_OPCOERRC_B_0x1 = 1;

    /** @brief ACCERRF flag clear */
    using HSP_ERR_ICR_ACCERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears ACCERRF in HSP_ERR_ISR, and also SAHBERR, MAHBERR, STIERR, DMERR, and CMERR in HSP_ERRINFR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_ACCERRC_B_0x0 = 0;
        /** @brief Clears ACCERRF in HSP_ERR_ISR, and also SAHBERR, MAHBERR, STIERR, DMERR, and CMERR in HSP_ERRINFR. */
    constexpr std::uint32_t HSP_ERR_ICR_ACCERRC_B_0x1 = 1;

    /** @brief FPUERRF flag clear */
    using HSP_ERR_ICR_FPUERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears FPUERRF in HSP_ERR_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_ERR_ICR_FPUERRC_B_0x0 = 0;
        /** @brief Clears FPUERRF in HSP_ERR_ISR. */
    constexpr std::uint32_t HSP_ERR_ICR_FPUERRC_B_0x1 = 1;

    /** @brief HSP events interrupt clear register */
    using HSP_EVT_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H2CMRDYF flag clear */
    using HSP_EVT_ICR_H2CMRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears H2CMRDYF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_H2CMRDYC_B_0x0 = 0;
        /** @brief Clears H2CMRDYF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_H2CMRDYC_B_0x1 = 1;

    /** @brief C2HMFREEF flag clear */
    using HSP_EVT_ICR_C2HMFREEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears C2HMFREEF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_C2HMFREEC_B_0x0 = 0;
        /** @brief Clears C2HMFREEF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_C2HMFREEC_B_0x1 = 1;

    /** @brief DCDONEF flag clear */
    using HSP_EVT_ICR_DCDONEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears DCDONEF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_DCDONEC_B_0x0 = 0;
        /** @brief Clears DCDONEF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_DCDONEC_B_0x1 = 1;

    /** @brief CDEGRDYF flag clear */
    using HSP_EVT_ICR_CDEGRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears CDEGRDYF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_CDEGRDYC_B_0x0 = 0;
        /** @brief Clears CDEGRDYF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_CDEGRDYC_B_0x1 = 1;

    /** @brief SOFWFEF flag clear */
    using HSP_EVT_ICR_SOFWFEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears SOFWFEFF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_SOFWFEC_B_0x0 = 0;
        /** @brief Clears SOFWFEFF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_SOFWFEC_B_0x1 = 1;

    /** @brief EOFWFEF flag clear */
    using HSP_EVT_ICR_EOFWFEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears EOFWFEF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_EOFWFEC_B_0x0 = 0;
        /** @brief Clears EOFWFEF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_EOFWFEC_B_0x1 = 1;

    /** @brief SOTECPxF flag clear */
    using HSP_EVT_ICR_SOTECP0C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears SOTECP3F in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_SOTECP0C_B_0x0 = 0;
        /** @brief Clears SOTECP3F in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_SOTECP0C_B_0x1 = 1;

    /** @brief SOTECPxF flag clear */
    using HSP_EVT_ICR_SOTECP1C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears SOTECP3F in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_SOTECP1C_B_0x0 = 0;
        /** @brief Clears SOTECP3F in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_SOTECP1C_B_0x1 = 1;

    /** @brief SOTECPxF flag clear */
    using HSP_EVT_ICR_SOTECP2C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears SOTECP3F in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_SOTECP2C_B_0x0 = 0;
        /** @brief Clears SOTECP3F in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_SOTECP2C_B_0x1 = 1;

    /** @brief SOTECPxF flag clear */
    using HSP_EVT_ICR_SOTECP3C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears SOTECP3F in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_SOTECP3C_B_0x0 = 0;
        /** @brief Clears SOTECP3F in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_SOTECP3C_B_0x1 = 1;

    /** @brief EOTECPxF flag clear */
    using HSP_EVT_ICR_EOTECP0C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears EOTECPxF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_EOTECP0C_B_0x0 = 0;
        /** @brief Clears EOTECPxF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_EOTECP0C_B_0x1 = 1;

    /** @brief EOTECPxF flag clear */
    using HSP_EVT_ICR_EOTECP1C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears EOTECPxF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_EOTECP1C_B_0x0 = 0;
        /** @brief Clears EOTECPxF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_EOTECP1C_B_0x1 = 1;

    /** @brief EOTECPxF flag clear */
    using HSP_EVT_ICR_EOTECP2C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears EOTECPxF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_EOTECP2C_B_0x0 = 0;
        /** @brief Clears EOTECPxF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_EOTECP2C_B_0x1 = 1;

    /** @brief EOTECPxF flag clear */
    using HSP_EVT_ICR_EOTECP3C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears EOTECPxF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_EOTECP3C_B_0x0 = 0;
        /** @brief Clears EOTECPxF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_EOTECP3C_B_0x1 = 1;

    /** @brief TOVLPF flag clear */
    using HSP_EVT_ICR_TOVLPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears TOVLPF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_TOVLPC_B_0x0 = 0;
        /** @brief Clears TOVLPF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_TOVLPC_B_0x1 = 1;

    /** @brief FPUSATF flag clear */
    using HSP_EVT_ICR_FPUSATC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears FPUSATF in HSP_EVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_EVT_ICR_FPUSATC_B_0x0 = 0;
        /** @brief Clears FPUSATF in HSP_EVT_ISR. */
    constexpr std::uint32_t HSP_EVT_ICR_FPUSATC_B_0x1 = 1;

    /** @brief HSP processing event interrupt clear register */
    using HSP_PFCTEVT_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PFCTF[31:0] flag clear */
    using HSP_PFCTEVT_ICR_PFCTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears PFCTFn in HSP_PFCTEVT_ISR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t HSP_PFCTEVT_ICR_PFCTC_B_0x0 = 0;
        /** @brief Clears PFCTFn in HSP_PFCTEVT_ISR. */
    constexpr std::uint32_t HSP_PFCTEVT_ICR_PFCTC_B_0x1 = 1;

}

#endif
