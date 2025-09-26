/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_SDMMC2_HPP
#define EMBEDDED_PP_STM32H7R_SDMMC2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Secure digital input/output MultiMediaCard interface */
namespace STM32H7R::SDMMC2 {

    /** @brief SDMMC power control register */
    using SDMMC_POWER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC state control bits These bits can only be written when the SDMMC is not in the power-on state (PWRCTRL different from 11). These bits are used to define the functional state of the SDMMC signals: When written 00, power-off: the SDMMC is disabled and the clock to the card is stopped, SDMMC_D[7:0], SDMMC_CMD and SDMMC_CK are driven high. Any further write is ignored, PWRCTRL value keeps 11. */
    using SDMMC_POWER_PWRCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: After reset, Reset: the SDMMC is disabled and the clock to the Card is stopped, SDMMC_D[7:0], and SDMMC_CMD are HiZ and SDMMC_CK is driven low. (value: 0)
     *          - B_0x1: Reserved. (When written 01, PWRCTRL value does not change) (value: 1)
     *          - B_0x2: Power-cycle, the SDMMC is disabled and the clock to the card is stopped, SDMMC_D[7:0], SDMMC_CMD and SDMMC_CK are driven low. (value: 2)
     *          - B_0x3: Power-on: the card is clocked, The first 74 SDMMC_CK cycles the SDMMC is still disabled. After the 74 cycles the SDMMC is enabled and the SDMMC_D[7:0], SDMMC_CMD and SDMMC_CK are controlled according the SDMMC operation. (value: 3)
     */
        /** @brief After reset, Reset: the SDMMC is disabled and the clock to the Card is stopped, SDMMC_D[7:0], and SDMMC_CMD are HiZ and SDMMC_CK is driven low. */
    constexpr std::uint32_t SDMMC_POWER_PWRCTRL_B_0x0 = 0;
        /** @brief Reserved. (When written 01, PWRCTRL value does not change) */
    constexpr std::uint32_t SDMMC_POWER_PWRCTRL_B_0x1 = 1;
        /** @brief Power-cycle, the SDMMC is disabled and the clock to the card is stopped, SDMMC_D[7:0], SDMMC_CMD and SDMMC_CK are driven low. */
    constexpr std::uint32_t SDMMC_POWER_PWRCTRL_B_0x2 = 2;
        /** @brief Power-on: the card is clocked, The first 74 SDMMC_CK cycles the SDMMC is still disabled. After the 74 cycles the SDMMC is enabled and the SDMMC_D[7:0], SDMMC_CMD and SDMMC_CK are controlled according the SDMMC operation. */
    constexpr std::uint32_t SDMMC_POWER_PWRCTRL_B_0x3 = 3;

    /** @brief Voltage switch sequence start This bit is used to start the timing critical section of the voltage switch sequence: */
    using SDMMC_POWER_VSWITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage switch sequence not started and not active. (value: 0)
     *          - B_0x1: Voltage switch sequence started or active. (value: 1)
     */
        /** @brief Voltage switch sequence not started and not active. */
    constexpr std::uint32_t SDMMC_POWER_VSWITCH_B_0x0 = 0;
        /** @brief Voltage switch sequence started or active. */
    constexpr std::uint32_t SDMMC_POWER_VSWITCH_B_0x1 = 1;

    /** @brief Voltage switch procedure enable This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). This bit is used to stop the SDMMC_CK after the voltage switch command response: */
    using SDMMC_POWER_VSWITCHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC_CK clock kept unchanged after successfully received command response. (value: 0)
     *          - B_0x1: SDMMC_CK clock stopped after successfully received command response. (value: 1)
     */
        /** @brief SDMMC_CK clock kept unchanged after successfully received command response. */
    constexpr std::uint32_t SDMMC_POWER_VSWITCHEN_B_0x0 = 0;
        /** @brief SDMMC_CK clock stopped after successfully received command response. */
    constexpr std::uint32_t SDMMC_POWER_VSWITCHEN_B_0x1 = 1;

    /** @brief Data and command direction signals polarity selection This bit can only be written when the SDMMC is in the power-off state (PWRCTRL = 00). */
    using SDMMC_POWER_DIRPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage transceiver IOs driven as output when direction signal is low. (value: 0)
     *          - B_0x1: Voltage transceiver IOs driven as output when direction signal is high. (value: 1)
     */
        /** @brief Voltage transceiver IOs driven as output when direction signal is low. */
    constexpr std::uint32_t SDMMC_POWER_DIRPOL_B_0x0 = 0;
        /** @brief Voltage transceiver IOs driven as output when direction signal is high. */
    constexpr std::uint32_t SDMMC_POWER_DIRPOL_B_0x1 = 1;

    /** @brief SDMMC clock control register */
    using SDMMC_CLKCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock divide factor This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). This field defines the divide factor between the input clock (sdmmc_ker_ck) and the output clock (SDMMC_CK): SDMMC_CK frequency = sdmmc_ker_ck / [2 * CLKDIV]. 0x0XX: etc.. 0xXXX: etc.. */
    using SDMMC_CLKCR_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x000: SDMMC_CK frequency = sdmmc_ker_ck / 1 (Does not support DDR) (value: 0)
     *          - B_0x001: SDMMC_CK frequency = sdmmc_ker_ck / 2 (value: 1)
     *          - B_0x002: SDMMC_CK frequency = sdmmc_ker_ck / 4 (value: 2)
     *          - B_0x080: SDMMC_CK frequency = sdmmc_ker_ck / 256 (value: 128)
     *          - B_0x3FF: SDMMC_CK frequency = sdmmc_ker_ck / 2046 (value: 1023)
     */
        /** @brief SDMMC_CK frequency = sdmmc_ker_ck / 1 (Does not support DDR) */
    constexpr std::uint32_t SDMMC_CLKCR_CLKDIV_B_0x000 = 0;
        /** @brief SDMMC_CK frequency = sdmmc_ker_ck / 2 */
    constexpr std::uint32_t SDMMC_CLKCR_CLKDIV_B_0x001 = 1;
        /** @brief SDMMC_CK frequency = sdmmc_ker_ck / 4 */
    constexpr std::uint32_t SDMMC_CLKCR_CLKDIV_B_0x002 = 2;
        /** @brief SDMMC_CK frequency = sdmmc_ker_ck / 256 */
    constexpr std::uint32_t SDMMC_CLKCR_CLKDIV_B_0x080 = 128;
        /** @brief SDMMC_CK frequency = sdmmc_ker_ck / 2046 */
    constexpr std::uint32_t SDMMC_CLKCR_CLKDIV_B_0x3FF = 1023;

    /** @brief Power saving configuration bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) For power saving, the SDMMC_CK clock output can be disabled when the bus is idle by setting PWRSAV: */
    using SDMMC_CLKCR_PWRSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC_CK clock is always enabled (value: 0)
     *          - B_0x1: SDMMC_CK is only enabled when the bus is active (value: 1)
     */
        /** @brief SDMMC_CK clock is always enabled */
    constexpr std::uint32_t SDMMC_CLKCR_PWRSAV_B_0x0 = 0;
        /** @brief SDMMC_CK is only enabled when the bus is active */
    constexpr std::uint32_t SDMMC_CLKCR_PWRSAV_B_0x1 = 1;

    /** @brief Wide bus mode enable bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) */
    using SDMMC_CLKCR_WIDBUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default 1-bit wide bus mode: SDMMC_D0 used (Does not support DDR) (value: 0)
     *          - B_0x1: 4-bit wide bus mode: SDMMC_D[3:0] used (value: 1)
     *          - B_0x2: 8-bit wide bus mode: SDMMC_D[7:0] used (value: 2)
     */
        /** @brief Default 1-bit wide bus mode: SDMMC_D0 used (Does not support DDR) */
    constexpr std::uint32_t SDMMC_CLKCR_WIDBUS_B_0x0 = 0;
        /** @brief 4-bit wide bus mode: SDMMC_D[3:0] used */
    constexpr std::uint32_t SDMMC_CLKCR_WIDBUS_B_0x1 = 1;
        /** @brief 8-bit wide bus mode: SDMMC_D[7:0] used */
    constexpr std::uint32_t SDMMC_CLKCR_WIDBUS_B_0x2 = 2;

    /** @brief SDMMC_CK dephasing selection bit for data and command This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). When clock division = 1 (CLKDIV = 0), this bit has no effect. Data and Command change on SDMMC_CK falling edge. Command and data changed on the sdmmc_ker_ck falling edge succeeding the rising edge of SDMMC_CK. SDMMC_CK edge occurs on sdmmc_ker_ck rising edge. 	When clock division >1 (CLKDIV > 0) & DDR = 1: Command changed on the sdmmc_ker_ck falling edge succeeding the rising edge of SDMMC_CK. Data changed on the sdmmc_ker_ck falling edge succeeding a SDMMC_CK edge. SDMMC_CK edge occurs on sdmmc_ker_ck rising edge. Command and data changed on the same sdmmc_ker_ck rising edge generating the SDMMC_CK falling edge. 	When clock division >1 (CLKDIV > 0) & DDR = 1: Command changed on the same sdmmc_ker_ck rising edge generating the SDMMC_CK falling edge. Data changed on the SDMMC_CK falling edge succeeding a SDMMC_CK edge. SDMMC_CK edge occurs on sdmmc_ker_ck rising edge. */
    using SDMMC_CLKCR_NEGEDGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When clock division >1 (CLKDIV > 0) & DDR = 0: (value: 0)
     *          - B_0x1: When clock division >1 (CLKDIV > 0) & DDR = 0: (value: 1)
     */
        /** @brief When clock division >1 (CLKDIV > 0) & DDR = 0: */
    constexpr std::uint32_t SDMMC_CLKCR_NEGEDGE_B_0x0 = 0;
        /** @brief When clock division >1 (CLKDIV > 0) & DDR = 0: */
    constexpr std::uint32_t SDMMC_CLKCR_NEGEDGE_B_0x1 = 1;

    /** @brief Hardware flow control enable This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) When Hardware flow control is enabled, the meaning of the TXFIFOE and RXFIFOF flags change, see SDMMC status register definition in Section 58.10.11. */
    using SDMMC_CLKCR_HWFC_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware flow control is disabled (value: 0)
     *          - B_0x1: Hardware flow control is enabled (value: 1)
     */
        /** @brief Hardware flow control is disabled */
    constexpr std::uint32_t SDMMC_CLKCR_HWFC_EN_B_0x0 = 0;
        /** @brief Hardware flow control is enabled */
    constexpr std::uint32_t SDMMC_CLKCR_HWFC_EN_B_0x1 = 1;

    /** @brief Data rate signaling selection This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) DDR rate must only be selected with 4-bit or 8-bit wide bus mode. (WIDBUS > 00). DDR = 1 has no effect when WIDBUS = 00 (1-bit wide bus). DDR rate must only be selected with clock division >1. (CLKDIV > 0) */
    using SDMMC_CLKCR_DDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDR Single data rate signaling (value: 0)
     *          - B_0x1: DDR double data rate signaling (value: 1)
     */
        /** @brief SDR Single data rate signaling */
    constexpr std::uint32_t SDMMC_CLKCR_DDR_B_0x0 = 0;
        /** @brief DDR double data rate signaling */
    constexpr std::uint32_t SDMMC_CLKCR_DDR_B_0x1 = 1;

    /** @brief Bus speed for selection of SDMMC operating modes This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) */
    using SDMMC_CLKCR_BUSSPEED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DS, HS, SDR12, SDR25, Legacy compatible, High speed SDR, High speed DDR bus speed mode selected (value: 0)
     *          - B_0x1: SDR50, DDR50, SDR104, HS200 bus speed mode selected. (value: 1)
     */
        /** @brief DS, HS, SDR12, SDR25, Legacy compatible, High speed SDR, High speed DDR bus speed mode selected */
    constexpr std::uint32_t SDMMC_CLKCR_BUSSPEED_B_0x0 = 0;
        /** @brief SDR50, DDR50, SDR104, HS200 bus speed mode selected. */
    constexpr std::uint32_t SDMMC_CLKCR_BUSSPEED_B_0x1 = 1;

    /** @brief Receive clock selection These bits can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) */
    using SDMMC_CLKCR_SELCLKRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sdmmc_io_in_ck selected as receive clock (value: 0)
     *          - B_0x1: SDMMC_CKIN feedback clock selected as receive clock (value: 1)
     *          - B_0x2: sdmmc_fb_ck tuned feedback clock selected as receive clock. (value: 2)
     *          - B_0x3: Reserved (select sdmmc_io_in_ck) (value: 3)
     */
        /** @brief sdmmc_io_in_ck selected as receive clock */
    constexpr std::uint32_t SDMMC_CLKCR_SELCLKRX_B_0x0 = 0;
        /** @brief SDMMC_CKIN feedback clock selected as receive clock */
    constexpr std::uint32_t SDMMC_CLKCR_SELCLKRX_B_0x1 = 1;
        /** @brief sdmmc_fb_ck tuned feedback clock selected as receive clock. */
    constexpr std::uint32_t SDMMC_CLKCR_SELCLKRX_B_0x2 = 2;
        /** @brief Reserved (select sdmmc_io_in_ck) */
    constexpr std::uint32_t SDMMC_CLKCR_SELCLKRX_B_0x3 = 3;

    /** @brief SDMMC argument register */
    using SDMMC_ARGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command argument These bits can only be written by firmware when CPSM is disabled (CPSMEN = 0). Command argument sent to a card as part of a command message. If a command contains an argument, it must be loaded into this register before writing a command to the command register. */
    using SDMMC_ARGR_CMDARG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC command register */
    using SDMMC_CMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command index This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). The command index is sent to the card as part of a command message. */
    using SDMMC_CMDR_CMDINDEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The CPSM treats the command as a data transfer command, stops the interrupt period, and signals DataEnable to the DPSM This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues an end of interrupt period and issues DataEnable signal to the DPSM when the command is sent. */
    using SDMMC_CMDR_CMDTRANS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The CPSM treats the command as a Stop Transmission command and signals abort to the DPSM This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues the abort signal to the DPSM when the command is sent. */
    using SDMMC_CMDR_CMDSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wait for response bits This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). They are used to configure whether the CPSM is to wait for a response, and if yes, which kind of response. */
    using SDMMC_CMDR_WAITRESP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No response, expect CMDSENT flag (value: 0)
     *          - B_0x1: Short response, expect CMDREND or CCRCFAIL flag (value: 1)
     *          - B_0x2: Short response, expect CMDREND flag (No CRC) (value: 2)
     *          - B_0x3: Long response, expect CMDREND or CCRCFAIL flag (value: 3)
     */
        /** @brief No response, expect CMDSENT flag */
    constexpr std::uint32_t SDMMC_CMDR_WAITRESP_B_0x0 = 0;
        /** @brief Short response, expect CMDREND or CCRCFAIL flag */
    constexpr std::uint32_t SDMMC_CMDR_WAITRESP_B_0x1 = 1;
        /** @brief Short response, expect CMDREND flag (No CRC) */
    constexpr std::uint32_t SDMMC_CMDR_WAITRESP_B_0x2 = 2;
        /** @brief Long response, expect CMDREND or CCRCFAIL flag */
    constexpr std::uint32_t SDMMC_CMDR_WAITRESP_B_0x3 = 3;

    /** @brief CPSM waits for interrupt request If this bit is set, the CPSM disables command timeout and waits for an card interrupt request (Response). If this bit is cleared in the CPSM Wait state, it causes the abort of the interrupt mode. */
    using SDMMC_CMDR_WAITINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPSM waits for end of data transfer (CmdPend internal signal) from DPSM This bit when set, the CPSM waits for the end of data transfer trigger before it starts sending a command. WAITPEND is only taken into account when DTMODE = e.MMC stream data transfer, WIDBUS = 1-bit wide bus mode, DPSMACT = 1 and DTDIR = from host to card. */
    using SDMMC_CMDR_WAITPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command path state machine (CPSM) enable bit This bit is written 1 by firmware, and cleared by hardware when the CPSM enters the Idle state. If this bit is set, the CPSM is enabled. When DTEN = 1, no command is transfered nor boot procedure is started. CPSMEN is cleared to 0. During Read Wait with SDMMC_CK stopped no command is sent and CPSMEN is kept 0. */
    using SDMMC_CMDR_CPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hold new data block transmission and reception in the DPSM If this bit is set, the DPSM does not move from the Wait_S state to the Send state or from the Wait_R state to the Receive state. */
    using SDMMC_CMDR_DTHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the boot mode procedure to be used This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0) */
    using SDMMC_CMDR_BOOTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal boot mode procedure selected (value: 0)
     *          - B_0x1: Alternative boot mode procedure selected. (value: 1)
     */
        /** @brief Normal boot mode procedure selected */
    constexpr std::uint32_t SDMMC_CMDR_BOOTMODE_B_0x0 = 0;
        /** @brief Alternative boot mode procedure selected. */
    constexpr std::uint32_t SDMMC_CMDR_BOOTMODE_B_0x1 = 1;

    /** @brief Enable boot mode procedure */
    using SDMMC_CMDR_BOOTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Boot mode procedure disabled (value: 0)
     *          - B_0x1: Boot mode procedure enabled (value: 1)
     */
        /** @brief Boot mode procedure disabled */
    constexpr std::uint32_t SDMMC_CMDR_BOOTEN_B_0x0 = 0;
        /** @brief Boot mode procedure enabled */
    constexpr std::uint32_t SDMMC_CMDR_BOOTEN_B_0x1 = 1;

    /** @brief The CPSM treats the command as a Suspend or Resume command and signals interrupt period start/end This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). CMDSUSPEND = 1 and CMDTRANS = 0 Suspend command, start interrupt period when response bit BS=0. CMDSUSPEND = 1 and CMDTRANS = 1 Resume command with data, end interrupt period when response bit DF=1. */
    using SDMMC_CMDR_CMDSUSPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC command response register */
    using SDMMC_RESPCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response command index Read-only bit field. Contains the command index of the last command response received. */
    using SDMMC_RESPCMDR_RESPCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC response 1 register */
    using SDMMC_RESP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Card status according table below See Table 444. */
    using SDMMC_RESP1R_CARDSTATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC response 2 register */
    using SDMMC_RESP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Card status according table below See Table 444. */
    using SDMMC_RESP2R_CARDSTATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC response 3 register */
    using SDMMC_RESP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Card status according table below See Table 444. */
    using SDMMC_RESP3R_CARDSTATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC response 4 register */
    using SDMMC_RESP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Card status according table below See Table 444. */
    using SDMMC_RESP4R_CARDSTATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data timer register */
    using SDMMC_DTIMER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data and R1b busy timeout period This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). Data and R1b busy timeout period expressed in card bus clock periods. */
    using SDMMC_DTIMER_DATATIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data length register */
    using SDMMC_DLENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data length value This register can only be written by firmware when DPSM is inactive (DPSMACT = 0). Number of data bytes to be transferred. When DDR = 1 DATALENGTH is truncated to a multiple of 2. (The last odd byte is not transfered) When DATALENGTH = 0 no data are transfered, when requested by a CPSMEN and CMDTRANS = 1 also no command is transfered. DTEN and CPSMEN are cleared to 0. */
    using SDMMC_DLENR_DATALENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data control register */
    using SDMMC_DCTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer enable bit This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). This bit is cleared by Hardware when data transfer completes. This bit must only be used to transfer data when no associated data transfer command is used, i.e. must not be used with SD or e.MMC cards. */
    using SDMMC_DCTRL_DTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not start data transfer without CPSM data transfer command. (value: 0)
     *          - B_0x1: Start data transfer without CPSM data transfer command. (value: 1)
     */
        /** @brief Do not start data transfer without CPSM data transfer command. */
    constexpr std::uint32_t SDMMC_DCTRL_DTEN_B_0x0 = 0;
        /** @brief Start data transfer without CPSM data transfer command. */
    constexpr std::uint32_t SDMMC_DCTRL_DTEN_B_0x1 = 1;

    /** @brief Data transfer direction selection This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_DCTRL_DTDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: From host to card. (value: 0)
     *          - B_0x1: From card to host. (value: 1)
     */
        /** @brief From host to card. */
    constexpr std::uint32_t SDMMC_DCTRL_DTDIR_B_0x0 = 0;
        /** @brief From card to host. */
    constexpr std::uint32_t SDMMC_DCTRL_DTDIR_B_0x1 = 1;

    /** @brief Data transfer mode selection This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_DCTRL_DTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Block data transfer ending on block count. (value: 0)
     *          - B_0x1: SDIO multibyte data transfer. (value: 1)
     *          - B_0x2: e.MMC Stream data transfer. (WIDBUS must select 1-bit wide bus mode) (value: 2)
     *          - B_0x3: Block data transfer ending with STOP_TRANSMISSION command (not to be used with DTEN initiated data transfers). (value: 3)
     */
        /** @brief Block data transfer ending on block count. */
    constexpr std::uint32_t SDMMC_DCTRL_DTMODE_B_0x0 = 0;
        /** @brief SDIO multibyte data transfer. */
    constexpr std::uint32_t SDMMC_DCTRL_DTMODE_B_0x1 = 1;
        /** @brief e.MMC Stream data transfer. (WIDBUS must select 1-bit wide bus mode) */
    constexpr std::uint32_t SDMMC_DCTRL_DTMODE_B_0x2 = 2;
        /** @brief Block data transfer ending with STOP_TRANSMISSION command (not to be used with DTEN initiated data transfers). */
    constexpr std::uint32_t SDMMC_DCTRL_DTMODE_B_0x3 = 3;

    /** @brief Data block size This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). Define the data block length when the block data transfer mode is selected: When DATALENGTH is not a multiple of DBLOCKSIZE, the transfered data is truncated at a multiple of DBLOCKSIZE. (None of the remaining data are transfered.) When DDR = 1, DBLOCKSIZE = 0000 must not be used. (No data are transfered) */
    using SDMMC_DCTRL_DBLOCKSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Block length = 2<sup>0</sup> = 1 byte (value: 0)
     *          - B_0x1: Block length = 2<sup>1</sup> = 2 bytes (value: 1)
     *          - B_0x2: Block length = 2<sup>2 </sup>= 4 bytes (value: 2)
     *          - B_0x3: Block length = 2<sup>3</sup> = 8 bytes (value: 3)
     *          - B_0x4: Block length = 2<sup>4</sup> = 16 bytes (value: 4)
     *          - B_0x5: Block length = 2<sup>5</sup> = 32 bytes (value: 5)
     *          - B_0x6: Block length = 2<sup>6</sup> = 64 bytes (value: 6)
     *          - B_0x7: Block length = 2<sup>7</sup> = 128 bytes (value: 7)
     *          - B_0x8: Block length = 2<sup>8</sup> = 256 bytes (value: 8)
     *          - B_0x9: Block length = 2<sup>9</sup> = 512 bytes (value: 9)
     *          - B_0xA: Block length = 2<sup>10</sup> = 1024 bytes (value: 10)
     *          - B_0xB: Block length = 2<sup>11</sup> = 2048 bytes (value: 11)
     *          - B_0xC: Block length = 2<sup>12</sup> = 4096 bytes (value: 12)
     *          - B_0xD: Block length = 2<sup>13</sup> = 8192 bytes (value: 13)
     *          - B_0xE: Block length = 2<sup>14</sup> = 16384 bytes (value: 14)
     */
        /** @brief Block length = 2<sup>0</sup> = 1 byte */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x0 = 0;
        /** @brief Block length = 2<sup>1</sup> = 2 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x1 = 1;
        /** @brief Block length = 2<sup>2 </sup>= 4 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x2 = 2;
        /** @brief Block length = 2<sup>3</sup> = 8 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x3 = 3;
        /** @brief Block length = 2<sup>4</sup> = 16 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x4 = 4;
        /** @brief Block length = 2<sup>5</sup> = 32 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x5 = 5;
        /** @brief Block length = 2<sup>6</sup> = 64 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x6 = 6;
        /** @brief Block length = 2<sup>7</sup> = 128 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x7 = 7;
        /** @brief Block length = 2<sup>8</sup> = 256 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x8 = 8;
        /** @brief Block length = 2<sup>9</sup> = 512 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0x9 = 9;
        /** @brief Block length = 2<sup>10</sup> = 1024 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0xA = 10;
        /** @brief Block length = 2<sup>11</sup> = 2048 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0xB = 11;
        /** @brief Block length = 2<sup>12</sup> = 4096 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0xC = 12;
        /** @brief Block length = 2<sup>13</sup> = 8192 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0xD = 13;
        /** @brief Block length = 2<sup>14</sup> = 16384 bytes */
    constexpr std::uint32_t SDMMC_DCTRL_DBLOCKSIZE_B_0xE = 14;

    /** @brief Read Wait start If this bit is set, Read Wait operation starts. */
    using SDMMC_DCTRL_RWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read Wait stop This bit is written by firmware and auto cleared by hardware when the DPSM moves from the R_W state to the Wait_R or Idle state. */
    using SDMMC_DCTRL_RWSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Read Wait stop. (value: 0)
     *          - B_0x1: Enable for Read Wait stop when DPSM is in the R_W state. (value: 1)
     */
        /** @brief No Read Wait stop. */
    constexpr std::uint32_t SDMMC_DCTRL_RWSTOP_B_0x0 = 0;
        /** @brief Enable for Read Wait stop when DPSM is in the R_W state. */
    constexpr std::uint32_t SDMMC_DCTRL_RWSTOP_B_0x1 = 1;

    /** @brief Read Wait mode This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_DCTRL_RWMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read Wait control using SDMMC_D2 (value: 0)
     *          - B_0x1: Read Wait control stopping SDMMC_CK (value: 1)
     */
        /** @brief Read Wait control using SDMMC_D2 */
    constexpr std::uint32_t SDMMC_DCTRL_RWMOD_B_0x0 = 0;
        /** @brief Read Wait control stopping SDMMC_CK */
    constexpr std::uint32_t SDMMC_DCTRL_RWMOD_B_0x1 = 1;

    /** @brief SD I/O interrupt enable functions This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). If this bit is set, the DPSM enables the SD I/O card specific interrupt operation. */
    using SDMMC_DCTRL_SDIOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the reception of the boot acknowledgment This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_DCTRL_BOOTACKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Boot acknowledgment disabled, not expected to be received (value: 0)
     *          - B_0x1: Boot acknowledgment enabled, expected to be received (value: 1)
     */
        /** @brief Boot acknowledgment disabled, not expected to be received */
    constexpr std::uint32_t SDMMC_DCTRL_BOOTACKEN_B_0x0 = 0;
        /** @brief Boot acknowledgment enabled, expected to be received */
    constexpr std::uint32_t SDMMC_DCTRL_BOOTACKEN_B_0x1 = 1;

    /** @brief FIFO reset, flushes any remaining data This bit can only be written by firmware when IDMAEN= 0 and DPSM is active (DPSMACT = 1). This bit only takes effect when a transfer error or transfer hold occurs. */
    using SDMMC_DCTRL_FIFORST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO not affected. (value: 0)
     *          - B_0x1: Flush any remaining data and reset the FIFO pointers. This bit is automatically cleared to 0 by hardware when DPSM gets inactive (DPSMACT = 0). (value: 1)
     */
        /** @brief FIFO not affected. */
    constexpr std::uint32_t SDMMC_DCTRL_FIFORST_B_0x0 = 0;
        /** @brief Flush any remaining data and reset the FIFO pointers. This bit is automatically cleared to 0 by hardware when DPSM gets inactive (DPSMACT = 0). */
    constexpr std::uint32_t SDMMC_DCTRL_FIFORST_B_0x1 = 1;

    /** @brief SDMMC data counter register */
    using SDMMC_DCNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data count value When read, the number of remaining data bytes to be transferred is returned. Write has no effect. */
    using SDMMC_DCNTR_DATACOUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC status register */
    using SDMMC_STAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command response received (CRC check failed) Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_CCRCFAIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data block sent/received (CRC check failed) Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_DCRCFAIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command response timeout Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. The Command Timeout period has a fixed value of 64 SDMMC_CK clock periods. */
    using SDMMC_STAR_CTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data timeout Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_DTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO underrun error (masked by hardware when IDMA is enabled) Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_TXUNDERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received FIFO overrun error (masked by hardware when IDMA is enabled) Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_RXOVERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command response received (CRC check passed, or no CRC) Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_CMDREND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command sent (no response required) Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_CMDSENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer ended correctly DATAEND is set if data counter DATACOUNT is zero and no errors occur, and no transmit data transfer hold. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_DATAEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer Hold Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_DHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data block sent/received DBCKEND is set when: - CRC check passed and DPSM moves to the R_W state or - IDMAEN = 0 and transmit data transfer hold and DATACOUNT >0 and DPSM moves to Wait_S. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_DBCKEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer aborted by CMD12 Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_DABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data path state machine active, i.e. not in Idle state This is a hardware status flag only, does not generate an interrupt. */
    using SDMMC_STAR_DPSMACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command path state machine active, i.e. not in Idle state This is a hardware status flag only, does not generate an interrupt. */
    using SDMMC_STAR_CPSMACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO half empty At least half the number of words can be written into the FIFO. This bit is cleared when the FIFO becomes half+1 full. */
    using SDMMC_STAR_TXFIFOHE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive FIFO half full There are at least half the number of words in the FIFO. This bit is cleared when the FIFO becomes half+1 empty. */
    using SDMMC_STAR_RXFIFOHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO full This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes empty. */
    using SDMMC_STAR_TXFIFOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive FIFO full This bit is cleared when one FIFO location becomes empty. */
    using SDMMC_STAR_RXFIFOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This bit is cleared when one FIFO location becomes full. */
    using SDMMC_STAR_TXFIFOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive FIFO empty This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes full. */
    using SDMMC_STAR_RXFIFOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inverted value of SDMMC_D0 line (Busy), sampled at the end of a CMD response and a second time 2 SDMMC_CK cycles after the CMD response This bit is reset to not busy when the SDMMCD0 line changes from busy to not busy. This bit does not signal busy due to data transfer. This is a hardware status flag only, it does not generate an interrupt. */
    using SDMMC_STAR_BUSYD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: card signals not busy on SDMMC_D0. (value: 0)
     *          - B_0x1: card signals busy on SDMMC_D0. (value: 1)
     */
        /** @brief card signals not busy on SDMMC_D0. */
    constexpr std::uint32_t SDMMC_STAR_BUSYD0_B_0x0 = 0;
        /** @brief card signals busy on SDMMC_D0. */
    constexpr std::uint32_t SDMMC_STAR_BUSYD0_B_0x1 = 1;

    /** @brief end of SDMMC_D0 Busy following a CMD response detected This indicates only end of busy following a CMD response. This bit does not signal busy due to data transfer. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_BUSYD0END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: card SDMMC_D0 signal does NOT signal change from busy to not busy. (value: 0)
     *          - B_0x1: card SDMMC_D0 signal changed from busy to NOT busy. (value: 1)
     */
        /** @brief card SDMMC_D0 signal does NOT signal change from busy to not busy. */
    constexpr std::uint32_t SDMMC_STAR_BUSYD0END_B_0x0 = 0;
        /** @brief card SDMMC_D0 signal changed from busy to NOT busy. */
    constexpr std::uint32_t SDMMC_STAR_BUSYD0END_B_0x1 = 1;

    /** @brief SDIO interrupt received The interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_SDIOIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot acknowledgment received (boot acknowledgment check fail) The interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_ACKFAIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot acknowledgment timeout The interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_ACKTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage switch critical timing section completion The interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_VSWEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC_CK stopped in Voltage switch procedure The interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_CKSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA transfer error The interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_IDMATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA buffer transfer complete The interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using SDMMC_STAR_IDMABTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC interrupt clear register */
    using SDMMC_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCRCFAIL flag clear bit Set by software to clear the CCRCFAIL flag. */
    using SDMMC_ICR_CCRCFAILC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCRCFAIL not cleared (value: 0)
     *          - B_0x1: CCRCFAIL cleared (value: 1)
     */
        /** @brief CCRCFAIL not cleared */
    constexpr std::uint32_t SDMMC_ICR_CCRCFAILC_B_0x0 = 0;
        /** @brief CCRCFAIL cleared */
    constexpr std::uint32_t SDMMC_ICR_CCRCFAILC_B_0x1 = 1;

    /** @brief DCRCFAIL flag clear bit Set by software to clear the DCRCFAIL flag. */
    using SDMMC_ICR_DCRCFAILC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCRCFAIL not cleared (value: 0)
     *          - B_0x1: DCRCFAIL cleared (value: 1)
     */
        /** @brief DCRCFAIL not cleared */
    constexpr std::uint32_t SDMMC_ICR_DCRCFAILC_B_0x0 = 0;
        /** @brief DCRCFAIL cleared */
    constexpr std::uint32_t SDMMC_ICR_DCRCFAILC_B_0x1 = 1;

    /** @brief CTIMEOUT flag clear bit Set by software to clear the CTIMEOUT flag. */
    using SDMMC_ICR_CTIMEOUTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTIMEOUT not cleared (value: 0)
     *          - B_0x1: CTIMEOUT cleared (value: 1)
     */
        /** @brief CTIMEOUT not cleared */
    constexpr std::uint32_t SDMMC_ICR_CTIMEOUTC_B_0x0 = 0;
        /** @brief CTIMEOUT cleared */
    constexpr std::uint32_t SDMMC_ICR_CTIMEOUTC_B_0x1 = 1;

    /** @brief DTIMEOUT flag clear bit Set by software to clear the DTIMEOUT flag. */
    using SDMMC_ICR_DTIMEOUTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTIMEOUT not cleared (value: 0)
     *          - B_0x1: DTIMEOUT cleared (value: 1)
     */
        /** @brief DTIMEOUT not cleared */
    constexpr std::uint32_t SDMMC_ICR_DTIMEOUTC_B_0x0 = 0;
        /** @brief DTIMEOUT cleared */
    constexpr std::uint32_t SDMMC_ICR_DTIMEOUTC_B_0x1 = 1;

    /** @brief TXUNDERR flag clear bit Set by software to clear TXUNDERR flag. */
    using SDMMC_ICR_TXUNDERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXUNDERR not cleared (value: 0)
     *          - B_0x1: TXUNDERR cleared (value: 1)
     */
        /** @brief TXUNDERR not cleared */
    constexpr std::uint32_t SDMMC_ICR_TXUNDERRC_B_0x0 = 0;
        /** @brief TXUNDERR cleared */
    constexpr std::uint32_t SDMMC_ICR_TXUNDERRC_B_0x1 = 1;

    /** @brief RXOVERR flag clear bit Set by software to clear the RXOVERR flag. */
    using SDMMC_ICR_RXOVERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXOVERR not cleared (value: 0)
     *          - B_0x1: RXOVERR cleared (value: 1)
     */
        /** @brief RXOVERR not cleared */
    constexpr std::uint32_t SDMMC_ICR_RXOVERRC_B_0x0 = 0;
        /** @brief RXOVERR cleared */
    constexpr std::uint32_t SDMMC_ICR_RXOVERRC_B_0x1 = 1;

    /** @brief CMDREND flag clear bit Set by software to clear the CMDREND flag. */
    using SDMMC_ICR_CMDRENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMDREND not cleared (value: 0)
     *          - B_0x1: CMDREND cleared (value: 1)
     */
        /** @brief CMDREND not cleared */
    constexpr std::uint32_t SDMMC_ICR_CMDRENDC_B_0x0 = 0;
        /** @brief CMDREND cleared */
    constexpr std::uint32_t SDMMC_ICR_CMDRENDC_B_0x1 = 1;

    /** @brief CMDSENT flag clear bit Set by software to clear the CMDSENT flag. */
    using SDMMC_ICR_CMDSENTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMDSENT not cleared (value: 0)
     *          - B_0x1: CMDSENT cleared (value: 1)
     */
        /** @brief CMDSENT not cleared */
    constexpr std::uint32_t SDMMC_ICR_CMDSENTC_B_0x0 = 0;
        /** @brief CMDSENT cleared */
    constexpr std::uint32_t SDMMC_ICR_CMDSENTC_B_0x1 = 1;

    /** @brief DATAEND flag clear bit Set by software to clear the DATAEND flag. */
    using SDMMC_ICR_DATAENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAEND not cleared (value: 0)
     *          - B_0x1: DATAEND cleared (value: 1)
     */
        /** @brief DATAEND not cleared */
    constexpr std::uint32_t SDMMC_ICR_DATAENDC_B_0x0 = 0;
        /** @brief DATAEND cleared */
    constexpr std::uint32_t SDMMC_ICR_DATAENDC_B_0x1 = 1;

    /** @brief DHOLD flag clear bit Set by software to clear the DHOLD flag. */
    using SDMMC_ICR_DHOLDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DHOLD not cleared (value: 0)
     *          - B_0x1: DHOLD cleared (value: 1)
     */
        /** @brief DHOLD not cleared */
    constexpr std::uint32_t SDMMC_ICR_DHOLDC_B_0x0 = 0;
        /** @brief DHOLD cleared */
    constexpr std::uint32_t SDMMC_ICR_DHOLDC_B_0x1 = 1;

    /** @brief DBCKEND flag clear bit Set by software to clear the DBCKEND flag. */
    using SDMMC_ICR_DBCKENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBCKEND not cleared (value: 0)
     *          - B_0x1: DBCKEND cleared (value: 1)
     */
        /** @brief DBCKEND not cleared */
    constexpr std::uint32_t SDMMC_ICR_DBCKENDC_B_0x0 = 0;
        /** @brief DBCKEND cleared */
    constexpr std::uint32_t SDMMC_ICR_DBCKENDC_B_0x1 = 1;

    /** @brief DABORT flag clear bit Set by software to clear the DABORT flag. */
    using SDMMC_ICR_DABORTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DABORT not cleared (value: 0)
     *          - B_0x1: DABORT cleared (value: 1)
     */
        /** @brief DABORT not cleared */
    constexpr std::uint32_t SDMMC_ICR_DABORTC_B_0x0 = 0;
        /** @brief DABORT cleared */
    constexpr std::uint32_t SDMMC_ICR_DABORTC_B_0x1 = 1;

    /** @brief BUSYD0END flag clear bit Set by software to clear the BUSYD0END flag. */
    using SDMMC_ICR_BUSYD0ENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSYD0END not cleared (value: 0)
     *          - B_0x1: BUSYD0END cleared (value: 1)
     */
        /** @brief BUSYD0END not cleared */
    constexpr std::uint32_t SDMMC_ICR_BUSYD0ENDC_B_0x0 = 0;
        /** @brief BUSYD0END cleared */
    constexpr std::uint32_t SDMMC_ICR_BUSYD0ENDC_B_0x1 = 1;

    /** @brief SDIOIT flag clear bit Set by software to clear the SDIOIT flag. */
    using SDMMC_ICR_SDIOITC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDIOIT not cleared (value: 0)
     *          - B_0x1: SDIOIT cleared (value: 1)
     */
        /** @brief SDIOIT not cleared */
    constexpr std::uint32_t SDMMC_ICR_SDIOITC_B_0x0 = 0;
        /** @brief SDIOIT cleared */
    constexpr std::uint32_t SDMMC_ICR_SDIOITC_B_0x1 = 1;

    /** @brief ACKFAIL flag clear bit Set by software to clear the ACKFAIL flag. */
    using SDMMC_ICR_ACKFAILC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACKFAIL not cleared (value: 0)
     *          - B_0x1: ACKFAIL cleared (value: 1)
     */
        /** @brief ACKFAIL not cleared */
    constexpr std::uint32_t SDMMC_ICR_ACKFAILC_B_0x0 = 0;
        /** @brief ACKFAIL cleared */
    constexpr std::uint32_t SDMMC_ICR_ACKFAILC_B_0x1 = 1;

    /** @brief ACKTIMEOUT flag clear bit Set by software to clear the ACKTIMEOUT flag. */
    using SDMMC_ICR_ACKTIMEOUTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACKTIMEOUT not cleared (value: 0)
     *          - B_0x1: ACKTIMEOUT cleared (value: 1)
     */
        /** @brief ACKTIMEOUT not cleared */
    constexpr std::uint32_t SDMMC_ICR_ACKTIMEOUTC_B_0x0 = 0;
        /** @brief ACKTIMEOUT cleared */
    constexpr std::uint32_t SDMMC_ICR_ACKTIMEOUTC_B_0x1 = 1;

    /** @brief VSWEND flag clear bit Set by software to clear the VSWEND flag. */
    using SDMMC_ICR_VSWENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VSWEND not cleared (value: 0)
     *          - B_0x1: VSWEND cleared (value: 1)
     */
        /** @brief VSWEND not cleared */
    constexpr std::uint32_t SDMMC_ICR_VSWENDC_B_0x0 = 0;
        /** @brief VSWEND cleared */
    constexpr std::uint32_t SDMMC_ICR_VSWENDC_B_0x1 = 1;

    /** @brief CKSTOP flag clear bit Set by software to clear the CKSTOP flag. */
    using SDMMC_ICR_CKSTOPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CKSTOP not cleared (value: 0)
     *          - B_0x1: CKSTOP cleared (value: 1)
     */
        /** @brief CKSTOP not cleared */
    constexpr std::uint32_t SDMMC_ICR_CKSTOPC_B_0x0 = 0;
        /** @brief CKSTOP cleared */
    constexpr std::uint32_t SDMMC_ICR_CKSTOPC_B_0x1 = 1;

    /** @brief IDMA transfer error clear bit Set by software to clear the IDMATE flag. */
    using SDMMC_ICR_IDMATEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IDMATE not cleared (value: 0)
     *          - B_0x1: IDMATE cleared (value: 1)
     */
        /** @brief IDMATE not cleared */
    constexpr std::uint32_t SDMMC_ICR_IDMATEC_B_0x0 = 0;
        /** @brief IDMATE cleared */
    constexpr std::uint32_t SDMMC_ICR_IDMATEC_B_0x1 = 1;

    /** @brief IDMA buffer transfer complete clear bit Set by software to clear the IDMABTC flag. */
    using SDMMC_ICR_IDMABTCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IDMABTC not cleared (value: 0)
     *          - B_0x1: IDMABTC cleared (value: 1)
     */
        /** @brief IDMABTC not cleared */
    constexpr std::uint32_t SDMMC_ICR_IDMABTCC_B_0x0 = 0;
        /** @brief IDMABTC cleared */
    constexpr std::uint32_t SDMMC_ICR_IDMABTCC_B_0x1 = 1;

    /** @brief SDMMC mask register */
    using SDMMC_MASKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by command CRC failure. */
    using SDMMC_MASKR_CCRCFAILIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command CRC fail interrupt disabled (value: 0)
     *          - B_0x1: Command CRC fail interrupt enabled (value: 1)
     */
        /** @brief Command CRC fail interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_CCRCFAILIE_B_0x0 = 0;
        /** @brief Command CRC fail interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_CCRCFAILIE_B_0x1 = 1;

    /** @brief Data CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by data CRC failure. */
    using SDMMC_MASKR_DCRCFAILIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data CRC fail interrupt disabled (value: 0)
     *          - B_0x1: Data CRC fail interrupt enabled (value: 1)
     */
        /** @brief Data CRC fail interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_DCRCFAILIE_B_0x0 = 0;
        /** @brief Data CRC fail interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_DCRCFAILIE_B_0x1 = 1;

    /** @brief Command timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by command timeout. */
    using SDMMC_MASKR_CTIMEOUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command timeout interrupt disabled (value: 0)
     *          - B_0x1: Command timeout interrupt enabled (value: 1)
     */
        /** @brief Command timeout interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_CTIMEOUTIE_B_0x0 = 0;
        /** @brief Command timeout interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_CTIMEOUTIE_B_0x1 = 1;

    /** @brief Data timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by data timeout. */
    using SDMMC_MASKR_DTIMEOUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data timeout interrupt disabled (value: 0)
     *          - B_0x1: Data timeout interrupt enabled (value: 1)
     */
        /** @brief Data timeout interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_DTIMEOUTIE_B_0x0 = 0;
        /** @brief Data timeout interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_DTIMEOUTIE_B_0x1 = 1;

    /** @brief Tx FIFO underrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO underrun error. */
    using SDMMC_MASKR_TXUNDERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx FIFO underrun error interrupt disabled (value: 0)
     *          - B_0x1: Tx FIFO underrun error interrupt enabled (value: 1)
     */
        /** @brief Tx FIFO underrun error interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_TXUNDERRIE_B_0x0 = 0;
        /** @brief Tx FIFO underrun error interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_TXUNDERRIE_B_0x1 = 1;

    /** @brief Rx FIFO overrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO overrun error. */
    using SDMMC_MASKR_RXOVERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO overrun error interrupt disabled (value: 0)
     *          - B_0x1: Rx FIFO overrun error interrupt enabled (value: 1)
     */
        /** @brief Rx FIFO overrun error interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_RXOVERRIE_B_0x0 = 0;
        /** @brief Rx FIFO overrun error interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_RXOVERRIE_B_0x1 = 1;

    /** @brief Command response received interrupt enable Set and cleared by software to enable/disable interrupt caused by receiving command response. */
    using SDMMC_MASKR_CMDRENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command response received interrupt disabled (value: 0)
     *          - B_0x1: command Response received interrupt enabled (value: 1)
     */
        /** @brief Command response received interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_CMDRENDIE_B_0x0 = 0;
        /** @brief command Response received interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_CMDRENDIE_B_0x1 = 1;

    /** @brief Command sent interrupt enable Set and cleared by software to enable/disable interrupt caused by sending command. */
    using SDMMC_MASKR_CMDSENTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command sent interrupt disabled (value: 0)
     *          - B_0x1: Command sent interrupt enabled (value: 1)
     */
        /** @brief Command sent interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_CMDSENTIE_B_0x0 = 0;
        /** @brief Command sent interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_CMDSENTIE_B_0x1 = 1;

    /** @brief Data end interrupt enable Set and cleared by software to enable/disable interrupt caused by data end. */
    using SDMMC_MASKR_DATAENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data end interrupt disabled (value: 0)
     *          - B_0x1: Data end interrupt enabled (value: 1)
     */
        /** @brief Data end interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_DATAENDIE_B_0x0 = 0;
        /** @brief Data end interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_DATAENDIE_B_0x1 = 1;

    /** @brief Data hold interrupt enable Set and cleared by software to enable/disable the interrupt generated when sending new data is hold in the DPSM Wait_S state. */
    using SDMMC_MASKR_DHOLDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data hold interrupt disabled (value: 0)
     *          - B_0x1: Data hold interrupt enabled (value: 1)
     */
        /** @brief Data hold interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_DHOLDIE_B_0x0 = 0;
        /** @brief Data hold interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_DHOLDIE_B_0x1 = 1;

    /** @brief Data block end interrupt enable Set and cleared by software to enable/disable interrupt caused by data block end. */
    using SDMMC_MASKR_DBCKENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data block end interrupt disabled (value: 0)
     *          - B_0x1: Data block end interrupt enabled (value: 1)
     */
        /** @brief Data block end interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_DBCKENDIE_B_0x0 = 0;
        /** @brief Data block end interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_DBCKENDIE_B_0x1 = 1;

    /** @brief Data transfer aborted interrupt enable Set and cleared by software to enable/disable interrupt caused by a data transfer being aborted. */
    using SDMMC_MASKR_DABORTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data transfer abort interrupt disabled (value: 0)
     *          - B_0x1: Data transfer abort interrupt enabled (value: 1)
     */
        /** @brief Data transfer abort interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_DABORTIE_B_0x0 = 0;
        /** @brief Data transfer abort interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_DABORTIE_B_0x1 = 1;

    /** @brief Tx FIFO half empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO half empty. */
    using SDMMC_MASKR_TXFIFOHEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx FIFO half empty interrupt disabled (value: 0)
     *          - B_0x1: Tx FIFO half empty interrupt enabled (value: 1)
     */
        /** @brief Tx FIFO half empty interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_TXFIFOHEIE_B_0x0 = 0;
        /** @brief Tx FIFO half empty interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_TXFIFOHEIE_B_0x1 = 1;

    /** @brief Rx FIFO half full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO half full. */
    using SDMMC_MASKR_RXFIFOHFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO half full interrupt disabled (value: 0)
     *          - B_0x1: Rx FIFO half full interrupt enabled (value: 1)
     */
        /** @brief Rx FIFO half full interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_RXFIFOHFIE_B_0x0 = 0;
        /** @brief Rx FIFO half full interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_RXFIFOHFIE_B_0x1 = 1;

    /** @brief Rx FIFO full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO full. */
    using SDMMC_MASKR_RXFIFOFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO full interrupt disabled (value: 0)
     *          - B_0x1: Rx FIFO full interrupt enabled (value: 1)
     */
        /** @brief Rx FIFO full interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_RXFIFOFIE_B_0x0 = 0;
        /** @brief Rx FIFO full interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_RXFIFOFIE_B_0x1 = 1;

    /** @brief Tx FIFO empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO empty. */
    using SDMMC_MASKR_TXFIFOEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx FIFO empty interrupt disabled (value: 0)
     *          - B_0x1: Tx FIFO empty interrupt enabled (value: 1)
     */
        /** @brief Tx FIFO empty interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_TXFIFOEIE_B_0x0 = 0;
        /** @brief Tx FIFO empty interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_TXFIFOEIE_B_0x1 = 1;

    /** @brief BUSYD0END interrupt enable Set and cleared by software to enable/disable the interrupt generated when SDMMC_D0 signal changes from busy to NOT busy following a CMD response. */
    using SDMMC_MASKR_BUSYD0ENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSYD0END interrupt disabled (value: 0)
     *          - B_0x1: BUSYD0END interrupt enabled (value: 1)
     */
        /** @brief BUSYD0END interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_BUSYD0ENDIE_B_0x0 = 0;
        /** @brief BUSYD0END interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_BUSYD0ENDIE_B_0x1 = 1;

    /** @brief SDIO mode interrupt received interrupt enable Set and cleared by software to enable/disable the interrupt generated when receiving the SDIO mode interrupt. */
    using SDMMC_MASKR_SDIOITIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDIO Mode interrupt received interrupt disabled (value: 0)
     *          - B_0x1: SDIO Mode interrupt received interrupt enabled (value: 1)
     */
        /** @brief SDIO Mode interrupt received interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_SDIOITIE_B_0x0 = 0;
        /** @brief SDIO Mode interrupt received interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_SDIOITIE_B_0x1 = 1;

    /** @brief Acknowledgment Fail interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment Fail. */
    using SDMMC_MASKR_ACKFAILIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acknowledgment Fail interrupt disabled (value: 0)
     *          - B_0x1: Acknowledgment Fail interrupt enabled (value: 1)
     */
        /** @brief Acknowledgment Fail interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_ACKFAILIE_B_0x0 = 0;
        /** @brief Acknowledgment Fail interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_ACKFAILIE_B_0x1 = 1;

    /** @brief Acknowledgment timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment timeout. */
    using SDMMC_MASKR_ACKTIMEOUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acknowledgment timeout interrupt disabled (value: 0)
     *          - B_0x1: Acknowledgment timeout interrupt enabled (value: 1)
     */
        /** @brief Acknowledgment timeout interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_ACKTIMEOUTIE_B_0x0 = 0;
        /** @brief Acknowledgment timeout interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_ACKTIMEOUTIE_B_0x1 = 1;

    /** @brief Voltage switch critical timing section completion interrupt enable Set and cleared by software to enable/disable the interrupt generated when voltage switch critical timing section completion. */
    using SDMMC_MASKR_VSWENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage switch critical timing section completion interrupt disabled (value: 0)
     *          - B_0x1: Voltage switch critical timing section completion interrupt enabled (value: 1)
     */
        /** @brief Voltage switch critical timing section completion interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_VSWENDIE_B_0x0 = 0;
        /** @brief Voltage switch critical timing section completion interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_VSWENDIE_B_0x1 = 1;

    /** @brief Voltage Switch clock stopped interrupt enable Set and cleared by software to enable/disable interrupt caused by Voltage Switch clock stopped. */
    using SDMMC_MASKR_CKSTOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage Switch clock stopped interrupt disabled (value: 0)
     *          - B_0x1: Voltage Switch clock stopped interrupt enabled (value: 1)
     */
        /** @brief Voltage Switch clock stopped interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_CKSTOPIE_B_0x0 = 0;
        /** @brief Voltage Switch clock stopped interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_CKSTOPIE_B_0x1 = 1;

    /** @brief IDMA buffer transfer complete interrupt enable Set and cleared by software to enable/disable the interrupt generated when the IDMA has transferred all data belonging to a memory buffer. */
    using SDMMC_MASKR_IDMABTCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IDMA buffer transfer complete interrupt disabled (value: 0)
     *          - B_0x1: IDMA buffer transfer complete interrupt enabled (value: 1)
     */
        /** @brief IDMA buffer transfer complete interrupt disabled */
    constexpr std::uint32_t SDMMC_MASKR_IDMABTCIE_B_0x0 = 0;
        /** @brief IDMA buffer transfer complete interrupt enabled */
    constexpr std::uint32_t SDMMC_MASKR_IDMABTCIE_B_0x1 = 1;

    /** @brief SDMMC acknowledgment timer register */
    using SDMMC_ACKTIMER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot acknowledgment timeout period This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). Boot acknowledgment timeout period expressed in card bus clock periods. */
    using SDMMC_ACKTIMER_ACKTIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC DMA control register */
    using SDMMC_IDMACTRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA enable This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_IDMACTRLR_IDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IDMA disabled (value: 0)
     *          - B_0x1: IDMA enabled (value: 1)
     */
        /** @brief IDMA disabled */
    constexpr std::uint32_t SDMMC_IDMACTRLR_IDMAEN_B_0x0 = 0;
        /** @brief IDMA enabled */
    constexpr std::uint32_t SDMMC_IDMACTRLR_IDMAEN_B_0x1 = 1;

    /** @brief Buffer mode selection This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_IDMACTRLR_IDMABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single buffer mode. (value: 0)
     *          - B_0x1: Linked list mode. (value: 1)
     */
        /** @brief Single buffer mode. */
    constexpr std::uint32_t SDMMC_IDMACTRLR_IDMABMODE_B_0x0 = 0;
        /** @brief Linked list mode. */
    constexpr std::uint32_t SDMMC_IDMACTRLR_IDMABMODE_B_0x1 = 1;

    /** @brief SDMMC IDMA buffer size register */
    using SDMMC_IDMABSIZER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of bytes per buffer This 12-bit value must be multiplied by 8 to get the size of the buffer in 32-bit words and by 32 to get the size of the buffer in bytes. Example: IDMABNDT = 0x001: buffer size = 8 words = 32 bytes. Example: IDMABNDT = 0x800: buffer size = 16384 words = 64 Kbyte. These bits can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_IDMABSIZER_IDMABNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC IDMA buffer base address register */
    using SDMMC_IDMABASER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Buffer memory base address bits [31:2], must be word aligned (bit [1:0] are always 0 and read only) This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1). */
    using SDMMC_IDMABASER_IDMABASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC IDMA linked list address register */
    using SDMMC_IDMALAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Word aligned linked list item address offset Linked list item offset pointer to the base of the next linked list item structure. Linked list item base address is IDMABA + IDMALA. These bits can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_IDMALAR_IDMALA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge linked list buffer ready This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). This bit is not taken into account when starting the first linked list buffer from the software programmed register information. ABR is only taken into account on subsequent loaded linked list items. */
    using SDMMC_IDMALAR_ABR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Loaded linked list buffer is not ready (this causes a linked list IDMA transfer error to be generated). (value: 0)
     *          - B_0x1: Loaded linked list buffer ready acknowledge. Linked list buffer data are transfered by IDMA. (value: 1)
     */
        /** @brief Loaded linked list buffer is not ready (this causes a linked list IDMA transfer error to be generated). */
    constexpr std::uint32_t SDMMC_IDMALAR_ABR_B_0x0 = 0;
        /** @brief Loaded linked list buffer ready acknowledge. Linked list buffer data are transfered by IDMA. */
    constexpr std::uint32_t SDMMC_IDMALAR_ABR_B_0x1 = 1;

    /** @brief Update SDMMC_IDMABSIZE from the next linked list when in linked list mode (SDMMC_IDMACTRLR.IDMABMODE select linked list mode and ULA = 1) This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_IDMALAR_ULS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC_IDMABSIZER is not to be updated from next linked list table. (value: 0)
     *          - B_0x1: SDMMC_IDMABSIZER is to be updated from next linked list table. (value: 1)
     */
        /** @brief SDMMC_IDMABSIZER is not to be updated from next linked list table. */
    constexpr std::uint32_t SDMMC_IDMALAR_ULS_B_0x0 = 0;
        /** @brief SDMMC_IDMABSIZER is to be updated from next linked list table. */
    constexpr std::uint32_t SDMMC_IDMALAR_ULS_B_0x1 = 1;

    /** @brief Update SDMMC_IDMALAR from linked list when in linked list mode (SDMMC_IDMACTRLR.IDMABMODE select linked list mode) This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_IDMALAR_ULA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC_IDMALAR is not to be updated, last linked list item. (value: 0)
     *          - B_0x1: SDMMC_IDMALAR is to be updated from linked list table. (value: 1)
     */
        /** @brief SDMMC_IDMALAR is not to be updated, last linked list item. */
    constexpr std::uint32_t SDMMC_IDMALAR_ULA_B_0x0 = 0;
        /** @brief SDMMC_IDMALAR is to be updated from linked list table. */
    constexpr std::uint32_t SDMMC_IDMALAR_ULA_B_0x1 = 1;

    /** @brief SDMMC IDMA linked list memory base register */
    using SDMMC_IDMABAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Word aligned Linked list memory base address Linked list memory base pointer. These bits can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using SDMMC_IDMABAR_IDMABA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 0 */
    using SDMMC_FIFOR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR0_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 1 */
    using SDMMC_FIFOR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR1_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 2 */
    using SDMMC_FIFOR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR2_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 3 */
    using SDMMC_FIFOR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR3_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 4 */
    using SDMMC_FIFOR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR4_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 5 */
    using SDMMC_FIFOR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR5_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 6 */
    using SDMMC_FIFOR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR6_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 7 */
    using SDMMC_FIFOR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR7_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 8 */
    using SDMMC_FIFOR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR8_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 9 */
    using SDMMC_FIFOR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR9_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 10 */
    using SDMMC_FIFOR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR10_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 11 */
    using SDMMC_FIFOR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR11_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 12 */
    using SDMMC_FIFOR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR12_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 13 */
    using SDMMC_FIFOR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR13_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 14 */
    using SDMMC_FIFOR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR14_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC data FIFO registers 15 */
    using SDMMC_FIFOR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT = 1). The FIFO data occupies 16 entries of 32-bit words. */
    using SDMMC_FIFOR15_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
