/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H755_CM4_SDMMC2_HPP
#define EMBEDDED_PP_STM32H755_CM4_SDMMC2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SDMMC1 */
namespace STM32H755_CM4::SDMMC2 {

    /** @brief SDMMC power control register */
    using POWER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC state control bits. These bits can only be written when the SDMMC is not in the power-on state (PWRCTRL?11). These bits are used to define the functional state of the SDMMC signals: Any further write will be ignored, PWRCTRL value will keep 11. */
    using POWER_PWRCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage switch sequence start. This bit is used to start the timing critical section of the voltage switch sequence: */
    using POWER_VSWITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage switch procedure enable. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). This bit is used to stop the SDMMC_CK after the voltage switch command response: */
    using POWER_VSWITCHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data and command direction signals polarity selection. This bit can only be written when the SDMMC is in the power-off state (PWRCTRL = 00). */
    using POWER_DIRPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_CLKCR register controls the SDMMC_CK output clock, the SDMMC_RX_CLK receive clock, and the bus width. */
    using CLKCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock divide factor This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). This field defines the divide factor between the input clock (SDMMCCLK) and the output clock (SDMMC_CK): SDMMC_CK frequency = SDMMCCLK / [2 * CLKDIV]. 0xx: etc.. xxx: etc.. */
    using CLKCR_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power saving configuration bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) For power saving, the SDMMC_CK clock output can be disabled when the bus is idle by setting PWRSAV: */
    using CLKCR_PWRSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wide bus mode enable bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) */
    using CLKCR_WIDBUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC_CK dephasing selection bit for data and Command. This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). When clock division = 1 (CLKDIV = 0), this bit has no effect. Data and Command change on SDMMC_CK falling edge. When clock division &gt;1 (CLKDIV &gt; 0) &amp; DDR = 0: - SDMMC_CK edge occurs on SDMMCCLK rising edge. When clock division >1 (CLKDIV > 0) & DDR = 1: - Data changed on the SDMMCCLK falling edge succeeding a SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK rising edge. - Data changed on the SDMMC_CK falling edge succeeding a SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK rising edge. */
    using CLKCR_NEGEDGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware flow control enable This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) When Hardware flow control is enabled, the meaning of the TXFIFOE and RXFIFOF flags change, please see SDMMC status register definition in Section56.8.11. */
    using CLKCR_HWFC_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data rate signaling selection This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) DDR rate shall only be selected with 4-bit or 8-bit wide bus mode. (WIDBUS &gt; 00). DDR = 1 has no effect when WIDBUS = 00 (1-bit wide bus). DDR rate shall only be selected with clock division &gt;1. (CLKDIV &gt; 0) */
    using CLKCR_DDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus speed mode selection between DS, HS, SDR12, SDR25 and SDR50, DDR50, SDR104. This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) */
    using CLKCR_BUSSPEED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive clock selection. These bits can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) */
    using CLKCR_SELCLKRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_ARGR register contains a 32-bit command argument, which is sent to a card as part of a command message. */
    using ARGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command argument. These bits can only be written by firmware when CPSM is disabled (CPSMEN = 0). Command argument sent to a card as part of a command message. If a command contains an argument, it must be loaded into this register before writing a command to the command register. */
    using ARGR_CMDARG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_CMDR register contains the command index and command type bits. The command index is sent to a card as part of a command message. The command type bits control the command path state machine (CPSM). */
    using CMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command index. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). The command index is sent to the card as part of a command message. */
    using CMDR_CMDINDEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The CPSM treats the command as a data transfer command, stops the interrupt period, and signals DataEnable to the DPSM This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues an end of interrupt period and issues DataEnable signal to the DPSM when the command is sent. */
    using CMDR_CMDTRANS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The CPSM treats the command as a Stop Transmission command and signals Abort to the DPSM. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues the Abort signal to the DPSM when the command is sent. */
    using CMDR_CMDSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wait for response bits. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). They are used to configure whether the CPSM is to wait for a response, and if yes, which kind of response. */
    using CMDR_WAITRESP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPSM waits for interrupt request. If this bit is set, the CPSM disables command timeout and waits for an card interrupt request (Response). If this bit is cleared in the CPSM Wait state, will cause the abort of the interrupt mode. */
    using CMDR_WAITINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPSM Waits for end of data transfer (CmdPend internal signal) from DPSM. This bit when set, the CPSM waits for the end of data transfer trigger before it starts sending a command. WAITPEND is only taken into account when DTMODE = MMC stream data transfer, WIDBUS = 1-bit wide bus mode, DPSMACT = 1 and DTDIR = from host to card. */
    using CMDR_WAITPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command path state machine (CPSM) Enable bit This bit is written 1 by firmware, and cleared by hardware when the CPSM enters the Idle state. If this bit is set, the CPSM is enabled. When DTEN = 1, no command will be transfered nor boot procedure will be started. CPSMEN is cleared to 0. */
    using CMDR_CPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hold new data block transmission and reception in the DPSM. If this bit is set, the DPSM will not move from the Wait_S state to the Send state or from the Wait_R state to the Receive state. */
    using CMDR_DTHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the boot mode procedure to be used. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0) */
    using CMDR_BOOTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable boot mode procedure. */
    using CMDR_BOOTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The CPSM treats the command as a Suspend or Resume command and signals interrupt period start/end. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). CMDSUSPEND = 1 and CMDTRANS = 0 Suspend command, start interrupt period when response bit BS=0. CMDSUSPEND = 1 and CMDTRANS = 1 Resume command with data, end interrupt period when response bit DF=1. */
    using CMDR_CMDSUSPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response. */
    using RESP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief see Table 432 */
    using RESP1R_CARDSTATUS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response. */
    using RESP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief see Table404. */
    using RESP2R_CARDSTATUS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response. */
    using RESP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief see Table404. */
    using RESP3R_CARDSTATUS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response. */
    using RESP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief see Table404. */
    using RESP4R_CARDSTATUS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_DTIMER register contains the data timeout period, in card bus clock periods. A counter loads the value from the SDMMC_DTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_R or Busy state. If the timer reaches 0 while the DPSM is in either of these states, the timeout status flag is set. */
    using DTIMER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data and R1b busy timeout period This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). Data and R1b busy timeout period expressed in card bus clock periods. */
    using DTIMER_DATATIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_DLENR register contains the number of data bytes to be transferred. The value is loaded into the data counter when data transfer starts. */
    using DLENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data length value This register can only be written by firmware when DPSM is inactive (DPSMACT = 0). Number of data bytes to be transferred. When DDR = 1 DATALENGTH is truncated to a multiple of 2. (The last odd byte is not transfered) When DATALENGTH = 0 no data will be transfered, when requested by a CPSMEN and CMDTRANS = 1 also no command will be transfered. DTEN and CPSMEN are cleared to 0. */
    using DLENR_DATALENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_DCTRL register control the data path state machine (DPSM). */
    using DCTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer enable bit This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). This bit is cleared by Hardware when data transfer completes. This bit shall only be used to transfer data when no associated data transfer command is used, i.e. shall not be used with SD or eMMC cards. */
    using DCTRL_DTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer direction selection This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using DCTRL_DTDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using DCTRL_DTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data block size This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). Define the data block length when the block data transfer mode is selected: When DATALENGTH is not a multiple of DBLOCKSIZE, the transfered data is truncated at a multiple of DBLOCKSIZE. (Any remain data will not be transfered.) When DDR = 1, DBLOCKSIZE = 0000 shall not be used. (No data will be transfered) */
    using DCTRL_DBLOCKSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read wait start. If this bit is set, read wait operation starts. */
    using DCTRL_RWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read wait stop This bit is written by firmware and auto cleared by hardware when the DPSM moves from the READ_WAIT state to the WAIT_R or IDLE state. */
    using DCTRL_RWSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read wait mode. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using DCTRL_RWMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD I/O interrupt enable functions This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). If this bit is set, the DPSM enables the SD I/O card specific interrupt operation. */
    using DCTRL_SDIOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the reception of the boot acknowledgment. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using DCTRL_BOOTACKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO reset, will flush any remaining data. This bit can only be written by firmware when IDMAEN= 0 and DPSM is active (DPSMACT = 1). This bit will only take effect when a transfer error or transfer hold occurs. */
    using DCTRL_FIFORST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_DCNTR register loads the value from the data length register (see SDMMC_DLENR) when the DPSM moves from the Idle state to the Wait_R or Wait_S state. As data is transferred, the counter decrements the value until it reaches 0. The DPSM then moves to the Idle state and when there has been no error, the data status end flag (DATAEND) is set. */
    using DCNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data count value When read, the number of remaining data bytes to be transferred is returned. Write has no effect. */
    using DCNTR_DATACOUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_STAR register is a read-only register. It contains two types of flag:Static flags (bits [29,21,11:0]): these bits remain asserted until they are cleared by writing to the SDMMC interrupt Clear register (see SDMMC_ICR)Dynamic flags (bits [20:12]): these bits change state depending on the state of the underlying logic (for example, FIFO full and empty flags are asserted and de-asserted as data while written to the FIFO) */
    using STAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command response received (CRC check failed). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_CCRCFAIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data block sent/received (CRC check failed). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_DCRCFAIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command response timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. The Command Timeout period has a fixed value of 64 SDMMC_CK clock periods. */
    using STAR_CTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_DTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO underrun error or IDMA read transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_TXUNDERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received FIFO overrun error or IDMA write transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_RXOVERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command response received (CRC check passed, or no CRC). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_CMDREND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command sent (no response required). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_CMDSENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer ended correctly. (data counter, DATACOUNT is zero and no errors occur). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_DATAEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer Hold. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_DHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data block sent/received. (CRC check passed) and DPSM moves to the READWAIT state. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_DBCKEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer aborted by CMD12. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_DABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data path state machine active, i.e. not in Idle state. This is a hardware status flag only, does not generate an interrupt. */
    using STAR_DPSMACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command path state machine active, i.e. not in Idle state. This is a hardware status flag only, does not generate an interrupt. */
    using STAR_CPSMACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO half empty At least half the number of words can be written into the FIFO. This bit is cleared when the FIFO becomes half+1 full. */
    using STAR_TXFIFOHE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive FIFO half full There are at least half the number of words in the FIFO. This bit is cleared when the FIFO becomes half+1 empty. */
    using STAR_RXFIFOHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO full This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes empty. */
    using STAR_TXFIFOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive FIFO full This bit is cleared when one FIFO location becomes empty. */
    using STAR_RXFIFOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This bit is cleared when one FIFO location becomes full. */
    using STAR_TXFIFOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive FIFO empty This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes full. */
    using STAR_RXFIFOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inverted value of SDMMC_D0 line (Busy), sampled at the end of a CMD response and a second time 2 SDMMC_CK cycles after the CMD response. This bit is reset to not busy when the SDMMCD0 line changes from busy to not busy. This bit does not signal busy due to data transfer. This is a hardware status flag only, it does not generate an interrupt. */
    using STAR_BUSYD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief end of SDMMC_D0 Busy following a CMD response detected. This indicates only end of busy following a CMD response. This bit does not signal busy due to data transfer. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_BUSYD0END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDIO interrupt received. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_SDIOIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot acknowledgment received (boot acknowledgment check fail). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_ACKFAIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot acknowledgment timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_ACKTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage switch critical timing section completion. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_VSWEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC_CK stopped in Voltage switch procedure. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_CKSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_IDMATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA buffer transfer complete. interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. */
    using STAR_IDMABTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_ICR register is a write-only register. Writing a bit with 1 clears the corresponding bit in the SDMMC_STAR status register. */
    using ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCRCFAIL flag clear bit Set by software to clear the CCRCFAIL flag. */
    using ICR_CCRCFAILC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCRCFAIL flag clear bit Set by software to clear the DCRCFAIL flag. */
    using ICR_DCRCFAILC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTIMEOUT flag clear bit Set by software to clear the CTIMEOUT flag. */
    using ICR_CTIMEOUTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTIMEOUT flag clear bit Set by software to clear the DTIMEOUT flag. */
    using ICR_DTIMEOUTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXUNDERR flag clear bit Set by software to clear TXUNDERR flag. */
    using ICR_TXUNDERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXOVERR flag clear bit Set by software to clear the RXOVERR flag. */
    using ICR_RXOVERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMDREND flag clear bit Set by software to clear the CMDREND flag. */
    using ICR_CMDRENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMDSENT flag clear bit Set by software to clear the CMDSENT flag. */
    using ICR_CMDSENTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATAEND flag clear bit Set by software to clear the DATAEND flag. */
    using ICR_DATAENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHOLD flag clear bit Set by software to clear the DHOLD flag. */
    using ICR_DHOLDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBCKEND flag clear bit Set by software to clear the DBCKEND flag. */
    using ICR_DBCKENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DABORT flag clear bit Set by software to clear the DABORT flag. */
    using ICR_DABORTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSYD0END flag clear bit Set by software to clear the BUSYD0END flag. */
    using ICR_BUSYD0ENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDIOIT flag clear bit Set by software to clear the SDIOIT flag. */
    using ICR_SDIOITC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACKFAIL flag clear bit Set by software to clear the ACKFAIL flag. */
    using ICR_ACKFAILC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACKTIMEOUT flag clear bit Set by software to clear the ACKTIMEOUT flag. */
    using ICR_ACKTIMEOUTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VSWEND flag clear bit Set by software to clear the VSWEND flag. */
    using ICR_VSWENDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKSTOP flag clear bit Set by software to clear the CKSTOP flag. */
    using ICR_CKSTOPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA transfer error clear bit Set by software to clear the IDMATE flag. */
    using ICR_IDMATEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA buffer transfer complete clear bit Set by software to clear the IDMABTC flag. */
    using ICR_IDMABTCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The interrupt mask register determines which status flags generate an interrupt request by setting the corresponding bit to 1. */
    using MASKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by command CRC failure. */
    using MASKR_CCRCFAILIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by data CRC failure. */
    using MASKR_DCRCFAILIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by command timeout. */
    using MASKR_CTIMEOUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by data timeout. */
    using MASKR_DTIMEOUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO underrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO underrun error. */
    using MASKR_TXUNDERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO overrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO overrun error. */
    using MASKR_RXOVERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command response received interrupt enable Set and cleared by software to enable/disable interrupt caused by receiving command response. */
    using MASKR_CMDRENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command sent interrupt enable Set and cleared by software to enable/disable interrupt caused by sending command. */
    using MASKR_CMDSENTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data end interrupt enable Set and cleared by software to enable/disable interrupt caused by data end. */
    using MASKR_DATAENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data hold interrupt enable Set and cleared by software to enable/disable the interrupt generated when sending new data is hold in the DPSM Wait_S state. */
    using MASKR_DHOLDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data block end interrupt enable Set and cleared by software to enable/disable interrupt caused by data block end. */
    using MASKR_DBCKENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data transfer aborted interrupt enable Set and cleared by software to enable/disable interrupt caused by a data transfer being aborted. */
    using MASKR_DABORTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO half empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO half empty. */
    using MASKR_TXFIFOHEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO half full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO half full. */
    using MASKR_RXFIFOHFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO full. */
    using MASKR_RXFIFOFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO empty. */
    using MASKR_TXFIFOEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSYD0END interrupt enable Set and cleared by software to enable/disable the interrupt generated when SDMMC_D0 signal changes from busy to NOT busy following a CMD response. */
    using MASKR_BUSYD0ENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDIO mode interrupt received interrupt enable Set and cleared by software to enable/disable the interrupt generated when receiving the SDIO mode interrupt. */
    using MASKR_SDIOITIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledgment Fail interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment Fail. */
    using MASKR_ACKFAILIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledgment timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment timeout. */
    using MASKR_ACKTIMEOUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage switch critical timing section completion interrupt enable Set and cleared by software to enable/disable the interrupt generated when voltage switch critical timing section completion. */
    using MASKR_VSWENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage Switch clock stopped interrupt enable Set and cleared by software to enable/disable interrupt caused by Voltage Switch clock stopped. */
    using MASKR_CKSTOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA buffer transfer complete interrupt enable Set and cleared by software to enable/disable the interrupt generated when the IDMA has transferred all data belonging to a memory buffer. */
    using MASKR_IDMABTCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_ACKTIMER register contains the acknowledgment timeout period, in SDMMC_CK bus clock periods. A counter loads the value from the SDMMC_ACKTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_Ack state. If the timer reaches 0 while the DPSM is in this states, the acknowledgment timeout status flag is set. */
    using ACKTIMER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot acknowledgment timeout period This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). Boot acknowledgment timeout period expressed in card bus clock periods. */
    using ACKTIMER_ACKTIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The receive and transmit FIFOs can be read or written as 32-bit wide registers. The FIFOs contain 32 entries on 32 sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. */
    using IDMACTRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDMA enable This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using IDMACTRLR_IDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Buffer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using IDMACTRLR_IDMABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Double buffer mode active buffer indication This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). When IDMA is enabled this bit is toggled by hardware. */
    using IDMACTRLR_IDMABACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_IDMABSIZER register contains the buffers size when in double buffer configuration. */
    using IDMABSIZER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of transfers per buffer. This 8-bit value shall be multiplied by 8 to get the size of the buffer in 32-bit words and by 32 to get the size of the buffer in bytes. Example: IDMABNDT = 0x01: buffer size = 8 words = 32 bytes. These bits can only be written by firmware when DPSM is inactive (DPSMACT = 0). */
    using IDMABSIZER_IDMABNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_IDMABASE0R register contains the memory buffer base address in single buffer configuration and the buffer 0 base address in double buffer configuration. */
    using IDMABASE0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Buffer 0 memory base address bits [31:2], shall be word aligned (bit [1:0] are always 0 and read only). This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1) and memory buffer 0 is inactive (IDMABACT = 1). */
    using IDMABASE0R_IDMABASE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The SDMMC_IDMABASE1R register contains the double buffer configuration second buffer memory base address. */
    using IDMABASE1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Buffer 1 memory base address, shall be word aligned (bit [1:0] are always 0 and read only). This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1) and memory buffer 1 is inactive (IDMABACT = 0). */
    using IDMABASE1R_IDMABASE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated. */
    using FIFOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT=1). The FIFO data occupies 16 entries of 32-bit words. */
    using FIFOR_FIFODATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC command response register */
    using RESPCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response command index */
    using RESPCMDR_RESPCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
