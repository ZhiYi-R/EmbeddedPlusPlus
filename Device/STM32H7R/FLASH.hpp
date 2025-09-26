/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_FLASH_HPP
#define EMBEDDED_PP_STM32H7R_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Embedded Flash memory */
namespace STM32H7R::FLASH {

    /** @brief Access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read latency These bits are used to control the number of wait states used during read operations on both non-volatile memory banks. The application software has to program them to the correct value depending on the embedded Flash memory interface frequency and voltage conditions. Please refer to Table 27 for details. ... Note: Embedded Flash does not verify that the configuration is correct. */
    using FLASH_ACR_LATENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: zero wait state used to read a word from non-volatile memory (value: 0)
     *          - B_0x1: one wait state used to read a word from non-volatile memory (value: 1)
     *          - B_0x2: two wait states used to read a word from non-volatile memory (value: 2)
     *          - B_0x7: six wait states used to read a word from non-volatile memory (value: 7)
     *          - B_0xF: fifteen wait states used to read from non-volatile memory (value: 15)
     */
        /** @brief zero wait state used to read a word from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x0 = 0;
        /** @brief one wait state used to read a word from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x1 = 1;
        /** @brief two wait states used to read a word from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x2 = 2;
        /** @brief six wait states used to read a word from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x7 = 7;
        /** @brief fifteen wait states used to read from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0xF = 15;

    /** @brief Flash signal delay These bits are used to control the delay between non-volatile memory signals during programming operations. Application software has to program them to the correct value depending on the embedded Flash memory interface frequency. Please refer to Table 27 for details. Note: Embedded Flash does not verify that the configuration is correct. */
    using FLASH_ACR_WRHIGHFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH control key register */
    using FLASH_KEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control unlock key Following values must be written to FLASH_KEYR consecutively to unlock FLASH_CR register: 1st key = 0x4567 0123 2nd key = 0xCDEF 89AB Reads to this register returns zero. If above sequence is wrong or performed twice, the FLASH_CR register is locked until the next system reset, and access to it generates a bus error. */
    using FLASH_KEYR_CUKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH control register */
    using FLASH_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration lock bit When this bit is set write to all other bits in this register, and to FLASH_IER register, are ignored. Clearing this bit requires the correct write sequence to FLASH_KEYR register (see this register for details). If a wrong sequence is executed, or if the unlock sequence is performed twice, this bit remains locked until the next system reset. During the write access to set LOCK bit from 0 to 1, it is possible to change the other bits of this register. */
    using FLASH_CR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_CR and FLASH_IER registers are unlocked (value: 0)
     *          - B_0x1: Writes to FLASH_IER, and to other bits than LOCK in FLASH_CR, are ignored (value: 1)
     */
        /** @brief FLASH_CR and FLASH_IER registers are unlocked */
    constexpr std::uint32_t FLASH_CR_LOCK_B_0x0 = 0;
        /** @brief Writes to FLASH_IER, and to other bits than LOCK in FLASH_CR, are ignored */
    constexpr std::uint32_t FLASH_CR_LOCK_B_0x1 = 1;

    /** @brief Internal buffer control bit Setting this bit enables internal buffer for write operations. This allows preparing program operations even if a sector or bank erase is ongoing. When PG is cleared, the internal buffer is disabled for write operations, and all the data stored in the buffer but not sent to the operation queue are lost. */
    using FLASH_CR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal buffer disabled for write operations (value: 0)
     *          - B_0x1: Internal buffer enabled for write operations (value: 1)
     */
        /** @brief Internal buffer disabled for write operations */
    constexpr std::uint32_t FLASH_CR_PG_B_0x0 = 0;
        /** @brief Internal buffer enabled for write operations */
    constexpr std::uint32_t FLASH_CR_PG_B_0x1 = 1;

    /** @brief Sector erase request Setting this bit requests a sector erase. Write protection error is triggered when a sector erase is required on at least one protected sector. BER has a higher priority than SER: if both bits are set, the embedded Flash memory executes a bank erase. */
    using FLASH_CR_SER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sector erase not requested (value: 0)
     *          - B_0x1: Sector erase requested (value: 1)
     */
        /** @brief Sector erase not requested */
    constexpr std::uint32_t FLASH_CR_SER_B_0x0 = 0;
        /** @brief Sector erase requested */
    constexpr std::uint32_t FLASH_CR_SER_B_0x1 = 1;

    /** @brief Bank erase request Setting this bit requests a bank erase operation (user Flash memory only). Write protection error is triggered when a bank erase is required and some sectors are protected. BER has a higher priority than SER: if both are set, the embedded Flash memory executes a bank erase. */
    using FLASH_CR_BER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank erase is not requested (value: 0)
     *          - B_0x1: Bank erase is requested. Actual erase is started setting START bit in this register. (value: 1)
     */
        /** @brief Bank erase is not requested */
    constexpr std::uint32_t FLASH_CR_BER_B_0x0 = 0;
        /** @brief Bank erase is requested. Actual erase is started setting START bit in this register. */
    constexpr std::uint32_t FLASH_CR_BER_B_0x1 = 1;

    /** @brief Force write This bit forces a write operation even if the write buffer is not full. In this case all bits not written are set by hardware. The embedded Flash memory resets FW when the corresponding operation has been acknowledged. Note: Using a force-write operation prevents the application from updating later the missing bits with something else than 1, because it is likely that it will lead to permanent ECC error. Write forcing is effective only if the write buffer is not empty (in particular, FW does not start several write operations when the force-write operations are performed consecutively). */
    using FLASH_CR_FW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase start control bit This bit is used to start a sector erase or a bank erase operation. The embedded Flash memory resets START when the corresponding operation has been acknowledged. The user application cannot access any embedded Flash memory register until the operation is acknowledged. */
    using FLASH_CR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sector erase selection number These bits are used to select the target sector for an erase operation (they are unused otherwise). ... */
    using FLASH_CR_SSN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sector 0 (value: 0)
     *          - B_0x1: Sector 1 (value: 1)
     */
        /** @brief Sector 0 */
    constexpr std::uint32_t FLASH_CR_SSN_B_0x0 = 0;
        /** @brief Sector 1 */
    constexpr std::uint32_t FLASH_CR_SSN_B_0x1 = 1;

    /** @brief Program Enable for OTP Area Set this bit to enable write operations to OTP area. */
    using FLASH_CR_PG_OTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC enable Setting this bit enables the CRC calculation. CRC_EN does not start CRC calculation but enables CRC configuration through FLASH_CRCCR register. When CRC calculation is performed it can be disabled by clearing CRC_EN bit. Doing so sets CRCDATA to 0x0, clears CRC configuration and resets the content of FLASH_CRCDATAR register. */
    using FLASH_CR_CRC_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All banks select bit When this bit is set the erase is done on all Flash Memory sectors. ALL_BANKS is used only if a bank erase is required (BER=1). In all others operations, this control bit is ignored. */
    using FLASH_CR_ALL_BANKS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH status register */
    using FLASH_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy flag This bit is set when an effective write, erase or option byte change operation is ongoing. It is possible to know what type of operation is being executed reading the flags IS_PROGRAM, IS_ERASE and IS_OPTCHANGE. BUSY cannot be cleared by application. It is automatically reset by hardware every time a step in a write, erase or option byte change operation completes. It is not recommended to do software polling on BUSY to know when one operation completed because, depending of operation, more pulses are possible for one only operation. For software polling it is therefore better to use QW flag or to check the EOPF flag. */
    using FLASH_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No programming, erase or option byte change operation are being executed (value: 0)
     *          - B_0x1: Programming, erase or option byte change operation are being executed. See flags IS_PROGRAM, IS_ERASE and IS_OPTCHANGE for details. (value: 1)
     */
        /** @brief No programming, erase or option byte change operation are being executed */
    constexpr std::uint32_t FLASH_SR_BUSY_B_0x0 = 0;
        /** @brief Programming, erase or option byte change operation are being executed. See flags IS_PROGRAM, IS_ERASE and IS_OPTCHANGE for details. */
    constexpr std::uint32_t FLASH_SR_BUSY_B_0x1 = 1;

    /** @brief Write buffer not empty flag This bit is set when the embedded Flash memory is waiting for new data to complete the write buffer. In this state, the write buffer is not empty. WBNE is reset by hardware each time the write buffer is complete or the write buffer is emptied following one of the event below: the application software forces the write operation using FW bit in FLASH_CR the embedded Flash memory detects an error that involves data loss the application software has disabled write operations This bit cannot be forced to 0. To reset it, clear the write buffer by performing any of the above listed actions, or send the missing data. */
    using FLASH_SR_WBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write buffer empty or full (value: 0)
     *          - B_0x1: Write buffer waiting data to complete (value: 1)
     */
        /** @brief Write buffer empty or full */
    constexpr std::uint32_t FLASH_SR_WBNE_B_0x0 = 0;
        /** @brief Write buffer waiting data to complete */
    constexpr std::uint32_t FLASH_SR_WBNE_B_0x1 = 1;

    /** @brief Wait queue flag This bit is set when a write, erase or option byte change operation is pending in the command queue buffer. It is not possible to know what type of programming operation is present in the queue. This flag is reset by hardware when all write, erase or option byte change operations have been executed and thus removed from the waiting queue(s). This bit cannot be forced to 0. It is reset after a deterministic time if no other operations are requested. */
    using FLASH_SR_QW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No write, erase or option byte change operations waiting in the operation queues (value: 0)
     *          - B_0x1: At least one write, erase or option byte change operation is waiting in the operation queue (value: 1)
     */
        /** @brief No write, erase or option byte change operations waiting in the operation queues */
    constexpr std::uint32_t FLASH_SR_QW_B_0x0 = 0;
        /** @brief At least one write, erase or option byte change operation is waiting in the operation queue */
    constexpr std::uint32_t FLASH_SR_QW_B_0x1 = 1;

    /** @brief CRC busy flag This bit is set when a CRC calculation is ongoing. This bit cannot be forced to 0. The user must wait until the CRC calculation has completed or disable CRC computation using CRC_EN bit in FLASH_CR register. */
    using FLASH_SR_CRC_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No CRC calculation ongoing (value: 0)
     *          - B_0x1: CRC calculation ongoing (value: 1)
     */
        /** @brief No CRC calculation ongoing */
    constexpr std::uint32_t FLASH_SR_CRC_BUSY_B_0x0 = 0;
        /** @brief CRC calculation ongoing */
    constexpr std::uint32_t FLASH_SR_CRC_BUSY_B_0x1 = 1;

    /** @brief Is a program This bit is set together with BUSY when a program operation is ongoing. It is cleared when BUSY is cleared. This flag can also raise with IS_OPTCHANGE, because an program operation can happen during an option change. */
    using FLASH_SR_IS_PROGRAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Is an erase This bit is set together with BUSY when an erase operation is ongoing. It is cleared when BUSY is cleared. This flag can also raise with IS_OPTCHANGE, because an erase operation can happen during an option change. */
    using FLASH_SR_IS_ERASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Is an option change This bit is set together with BUSY when an option change operation is ongoing. It is cleared when BUSY is cleared. This flag can also raise with IS_PROGRAM or IS_ERASE, because a program or erase step is ongoing during option change. */
    using FLASH_SR_IS_OPTCHANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Root code check flag This bit returns the status of the root code check performed following the first access to the Flash. This bit is cleared with RCHECKF bit in FLASH_FCR (optional). */
    using FLASH_SR_RCHECKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Root code check is fail. Reads to Flash returns zero, writes are ignored. (value: 0)
     *          - B_0x1: Root code check is pass. (value: 1)
     */
        /** @brief Root code check is fail. Reads to Flash returns zero, writes are ignored. */
    constexpr std::uint32_t FLASH_SR_RCHECKF_B_0x0 = 0;
        /** @brief Root code check is pass. */
    constexpr std::uint32_t FLASH_SR_RCHECKF_B_0x1 = 1;

    /** @brief FLASH status register */
    using FLASH_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Root code check flag clear Set this bit to clear RCHECKF bit in FLASH_SR. */
    using FLASH_FCR_RCHECKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH interrupt enable register */
    using FLASH_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End-of-program interrupt control bit */
    using FLASH_IER_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when OEPF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when OEPF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when OEPF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_EOPIE_B_0x0 = 0;
        /** @brief An interrupt is generated when OEPF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_EOPIE_B_0x1 = 1;

    /** @brief Write protection error interrupt enable bit */
    using FLASH_IER_WRPERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when WRPERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when WRPERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when WRPERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_WRPERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when WRPERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_WRPERRIE_B_0x1 = 1;

    /** @brief Programming sequence error interrupt enable bit */
    using FLASH_IER_PGSERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when PGSERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when PGSERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when PGSERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_PGSERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when PGSERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_PGSERRIE_B_0x1 = 1;

    /** @brief Strobe error interrupt enable bit */
    using FLASH_IER_STRBERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when STRBERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when STRBERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when STRBERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_STRBERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when STRBERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_STRBERRIE_B_0x1 = 1;

    /** @brief Option byte loading error interrupt enable bit */
    using FLASH_IER_OBLERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when OBLERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when OBLERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when OBLERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_OBLERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when OBLERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_OBLERRIE_B_0x1 = 1;

    /** @brief Inconsistency error interrupt enable bit */
    using FLASH_IER_INCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when INCERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when INCERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when INCERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_INCERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when INCERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_INCERRIE_B_0x1 = 1;

    /** @brief Read security error interrupt enable bit */
    using FLASH_IER_RDSERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when RDSERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when RDSERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when RDSERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_RDSERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when RDSERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_RDSERRIE_B_0x1 = 1;

    /** @brief ECC single correction error interrupt enable bit */
    using FLASH_IER_SNECCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when SNECCERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when SNECCERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when SNECCERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_SNECCERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when SNECCERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_SNECCERRIE_B_0x1 = 1;

    /** @brief ECC double detection error interrupt enable bit */
    using FLASH_IER_DBECCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when DBECCERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when DBECCERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when DBECCERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_DBECCERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when DBECCERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_DBECCERRIE_B_0x1 = 1;

    /** @brief CRC end of calculation interrupt enable bit */
    using FLASH_IER_CRCENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when CRCEN bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when CRCEN bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when CRCEN bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_CRCENDIE_B_0x0 = 0;
        /** @brief An interrupt is generated when CRCEN bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_CRCENDIE_B_0x1 = 1;

    /** @brief CRC read error interrupt enable bit */
    using FLASH_IER_CRCRDERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when CRCRDERRF bit is set in FLASH_ISR register (value: 0)
     *          - B_0x1: An interrupt is generated when CRCRDERRF bit is set in FLASH_ISR register (value: 1)
     */
        /** @brief No interrupt is generated when CRCRDERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_CRCRDERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when CRCRDERRF bit is set in FLASH_ISR register */
    constexpr std::uint32_t FLASH_IER_CRCRDERRIE_B_0x1 = 1;

    /** @brief FLASH interrupt status register */
    using FLASH_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End-of-program flag This bit is set when a programming operation completes. An interrupt is generated if the EOPIE is set. It is not necessary to reset EOPF before starting a new operation. Setting EOPF bit in FLASH_ICR register clears this bit. */
    using FLASH_ISR_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No programming operation completed (value: 0)
     *          - B_0x1: A programming operation completed (value: 1)
     */
        /** @brief No programming operation completed */
    constexpr std::uint32_t FLASH_ISR_EOPF_B_0x0 = 0;
        /** @brief A programming operation completed */
    constexpr std::uint32_t FLASH_ISR_EOPF_B_0x1 = 1;

    /** @brief Write protection error flag This bit is set when a protection error occurs during a program operation. An interrupt is also generated if the WRPERRIE is set. Setting WRPERRF bit in FLASH_ICR register clears this bit. */
    using FLASH_ISR_WRPERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No write protection error occurred (value: 0)
     *          - B_0x1: A write protection error occurred (value: 1)
     */
        /** @brief No write protection error occurred */
    constexpr std::uint32_t FLASH_ISR_WRPERRF_B_0x0 = 0;
        /** @brief A write protection error occurred */
    constexpr std::uint32_t FLASH_ISR_WRPERRF_B_0x1 = 1;

    /** @brief Programming sequence error flag This bit is set when a sequence error occurs. An interrupt is generated if the PGSERRIE bit is set. Setting PGSERRF bit in FLASH_ICR register clears this bit. */
    using FLASH_ISR_PGSERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sequence error occurred (value: 0)
     *          - B_0x1: Asequence error occurred (value: 1)
     */
        /** @brief No sequence error occurred */
    constexpr std::uint32_t FLASH_ISR_PGSERRF_B_0x0 = 0;
        /** @brief Asequence error occurred */
    constexpr std::uint32_t FLASH_ISR_PGSERRF_B_0x1 = 1;

    /** @brief Strobe error flag This bit is set when a strobe error occurs (when the master attempts to write several times the same byte in the write buffer). An interrupt is generated if the STRBERRIE bit is set. Setting STRBERRF bit in FLASH_ICR register clears this bit. */
    using FLASH_ISR_STRBERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No strobe error occurred (value: 0)
     *          - B_0x1: Astrobe error occurred (value: 1)
     */
        /** @brief No strobe error occurred */
    constexpr std::uint32_t FLASH_ISR_STRBERRF_B_0x0 = 0;
        /** @brief Astrobe error occurred */
    constexpr std::uint32_t FLASH_ISR_STRBERRF_B_0x1 = 1;

    /** @brief Option byte loading error flag This bit is set when an error is found during the option byte loading sequence. An interrupt is generated if OBLERRIE is set. Setting OBLERRF bit in the FLASH_ICR register clears this bit. */
    using FLASH_ISR_OBLERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error found during option byte loading sequence (value: 0)
     *          - B_0x1: Some errors found during option byte loading sequence (value: 1)
     */
        /** @brief No error found during option byte loading sequence */
    constexpr std::uint32_t FLASH_ISR_OBLERRF_B_0x0 = 0;
        /** @brief Some errors found during option byte loading sequence */
    constexpr std::uint32_t FLASH_ISR_OBLERRF_B_0x1 = 1;

    /** @brief Inconsistency error flag This bit is set when a inconsistency error occurs. An interrupt is generated if INCERRIE is set. Setting INCERRF bit in the FLASH_ICR register clears this bit. */
    using FLASH_ISR_INCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No inconsistency error occurred (value: 0)
     *          - B_0x1: A inconsistency error occurred (value: 1)
     */
        /** @brief No inconsistency error occurred */
    constexpr std::uint32_t FLASH_ISR_INCERRF_B_0x0 = 0;
        /** @brief A inconsistency error occurred */
    constexpr std::uint32_t FLASH_ISR_INCERRF_B_0x1 = 1;

    /** @brief Read security error flag This bit is set when a read security error occurs (read access to hide protected area with incorrect hide protection level). An interrupt is generated if RDSERRIE is set. Setting RDSERRF bit in FLASH_ICR register clears this bit. */
    using FLASH_ISR_RDSERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No security error occurred (value: 0)
     *          - B_0x1: A security error occurred (value: 1)
     */
        /** @brief No security error occurred */
    constexpr std::uint32_t FLASH_ISR_RDSERRF_B_0x0 = 0;
        /** @brief A security error occurred */
    constexpr std::uint32_t FLASH_ISR_RDSERRF_B_0x1 = 1;

    /** @brief ECC single error flag This bit is set when an ECC single correction error occurs during a read operation. An interrupt is generated if SNECCERRIE is set. Setting SNECCERRF bit in FLASH_ICR register clears this bit. */
    using FLASH_ISR_SNECCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ECC single correction error occurred (value: 0)
     *          - B_0x1: ECC single correction error occurred (value: 1)
     */
        /** @brief No ECC single correction error occurred */
    constexpr std::uint32_t FLASH_ISR_SNECCERRF_B_0x0 = 0;
        /** @brief ECC single correction error occurred */
    constexpr std::uint32_t FLASH_ISR_SNECCERRF_B_0x1 = 1;

    /** @brief ECC double error flag This bit is set when an ECC double detection error occurs during a read operation. An interrupt is generated if DBECCERRIE is set. Setting DBECCERRF bit in FLASH_ICR register clears this bit. */
    using FLASH_ISR_DBECCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ECC double detection error occurred (value: 0)
     *          - B_0x1: ECC double detection error occurred (value: 1)
     */
        /** @brief No ECC double detection error occurred */
    constexpr std::uint32_t FLASH_ISR_DBECCERRF_B_0x0 = 0;
        /** @brief ECC double detection error occurred */
    constexpr std::uint32_t FLASH_ISR_DBECCERRF_B_0x1 = 1;

    /** @brief CRC end flag This bit is set when the CRC computation has completed. An interrupt is generated if CRCENDIE is set. It is not necessary to reset CRCEND before restarting CRC computation. Setting CRCENDF bit in FLASH_ICR register clears this bit. */
    using FLASH_ISR_CRCENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC computation not complete (value: 0)
     *          - B_0x1: CRC computation complete (value: 1)
     */
        /** @brief CRC computation not complete */
    constexpr std::uint32_t FLASH_ISR_CRCENDF_B_0x0 = 0;
        /** @brief CRC computation complete */
    constexpr std::uint32_t FLASH_ISR_CRCENDF_B_0x1 = 1;

    /** @brief CRC read error flag This bit is set when a word is found read protected during a CRC operation. An interrupt is generated if CRCRDIE is set. Setting CRCRDERRF bit in FLASH_ICR register clears this bit. This flag is valid only when CRCEND bit is set. */
    using FLASH_ISR_CRCRDERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No protected area detected inside addresses read by CRC (value: 0)
     *          - B_0x1: At least one protected area has been detected inside address read by CRC. As a result CRC result is very likely incorrect. (value: 1)
     */
        /** @brief No protected area detected inside addresses read by CRC */
    constexpr std::uint32_t FLASH_ISR_CRCRDERRF_B_0x0 = 0;
        /** @brief At least one protected area has been detected inside address read by CRC. As a result CRC result is very likely incorrect. */
    constexpr std::uint32_t FLASH_ISR_CRCRDERRF_B_0x1 = 1;

    /** @brief FLASH interrupt clear register */
    using FLASH_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End-of-program flag clear Setting this bit clears EOPF flag in FLASH_ISR register. */
    using FLASH_ICR_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write protection error flag clear Setting this bit clears WRPERRF flag in FLASH_ISR register. */
    using FLASH_ICR_WRPERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programming sequence error flag clear Setting this bit clears PGSERRF flag in FLASH_ISR register. */
    using FLASH_ICR_PGSERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Strobe error flag clear Setting this bit clears STRBERRF flag in FLASH_ISR register. */
    using FLASH_ICR_STRBERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option byte loading error flag clear Setting this bit clears OBLERRF flag in FLASH_ISR register. */
    using FLASH_ICR_OBLERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inconsistency error flag clear Setting this bit clears INCERRF flag in FLASH_ISR register. */
    using FLASH_ICR_INCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read security error flag clear Setting this bit clears RDSERRF flag in FLASH_ISR register. */
    using FLASH_ICR_RDSERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error flag clear Setting this bit clears SNECCERRF flag in FLASH_ISR register. If the DBECCERRF flag of FLASH_ISR register is also cleared, FLASH_ECCFAR register is reset to zero as well. */
    using FLASH_ICR_SNECCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC double error flag clear Setting this bit clears DBECCERRF flag in FLASH_ISR register. If the SNECCERRF flag of FLASH_ISR register is also cleared, FLASH_ECCFAR register is reset to zero as well. */
    using FLASH_ICR_DBECCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC end flag clear Setting this bit clears CRCENDF flag in FLASH_ISR register. */
    using FLASH_ICR_CRCENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC error flag clear Setting this bit clears CRCRDERRF flag in FLASH_ISR register. */
    using FLASH_ICR_CRCRDERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH CRC control register */
    using FLASH_CRCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC sector number CRC_SECT is used to select one user Flash sectors to be added to the list of sectors on which the CRC is calculated. The CRC can be computed either between two addresses (using registers FLASH_CRCSADDR and FLASH_CRCEADDR) or on a list of sectors using this register. If this latter option is selected, it is possible to add a sector to the list of sectors by programming the sector number in CRC_SECT and then setting ADD_SECT bit. The list of sectors can be erased either by setting CLEAN_SECT bit or by disabling the CRC computation. ... */
    using FLASH_CRCCR_CRC_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector 0 for CRC (value: 0)
     *          - B_0x1: sector 1 for CRC (value: 1)
     */
        /** @brief sector 0 for CRC */
    constexpr std::uint32_t FLASH_CRCCR_CRC_SECT_B_0x0 = 0;
        /** @brief sector 1 for CRC */
    constexpr std::uint32_t FLASH_CRCCR_CRC_SECT_B_0x1 = 1;

    /** @brief CRC sector mode select bit When this bit is set the CRC calculation is performed at sector level, on the sectors present in the list of sectors. To add a sector to this list, use ADD_SECT and CRC_SECT bits. To clean the list, use CLEAN_SECT bit. When CRC_BY_SECT is cleared the CRC calculation is performed on all addresses defined between start and end addresses defined in FLASH_CRCSADDR and FLASH_CRCEADDR registers. */
    using FLASH_CRCCR_CRC_BY_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC sector select bit When this bit is set the sector whose number is written in CRC_SECT is added to the list of sectors on which the CRC is calculated. */
    using FLASH_CRCCR_ADD_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC sector list clear bit When this bit is set the list of sectors on which the CRC is calculated is cleared. */
    using FLASH_CRCCR_CLEAN_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC start bit START_CRC bit triggers a CRC calculation using the current configuration. No CRC calculation can launched when an option byte change operation is ongoing because all read accesses to embedded Flash memory registers are put on hold until the option byte change operation has completed. This bit is cleared when CRC computation starts. */
    using FLASH_CRCCR_START_CRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC clear bit Setting CLEAN_CRC to 1 clears the current CRC result stored in the FLASH_CRCDATAR register. */
    using FLASH_CRCCR_CLEAN_CRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC burst size CRC_BURST bits set the size of the bursts that are generated by the CRC calculation unit. A Flash word is 128-bit. */
    using FLASH_CRCCR_CRC_BURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: every burst has a size of 4 Flash words (64 Bytes) (value: 0)
     *          - B_0x1: every burst has a size of 16 Flash words (256 Bytes) (value: 1)
     *          - B_0x2: every burst has a size of 64 Flash words (1 Kbytes) (value: 2)
     *          - B_0x3: every burst has a size of 256 Flash words (4 Kbytes) (value: 3)
     */
        /** @brief every burst has a size of 4 Flash words (64 Bytes) */
    constexpr std::uint32_t FLASH_CRCCR_CRC_BURST_B_0x0 = 0;
        /** @brief every burst has a size of 16 Flash words (256 Bytes) */
    constexpr std::uint32_t FLASH_CRCCR_CRC_BURST_B_0x1 = 1;
        /** @brief every burst has a size of 64 Flash words (1 Kbytes) */
    constexpr std::uint32_t FLASH_CRCCR_CRC_BURST_B_0x2 = 2;
        /** @brief every burst has a size of 256 Flash words (4 Kbytes) */
    constexpr std::uint32_t FLASH_CRCCR_CRC_BURST_B_0x3 = 3;

    /** @brief All sectors selection When this bit is set all the sectors in user Flash are added to list of sectors on which the CRC shall be calculated. This bit is cleared when CRC computation starts. */
    using FLASH_CRCCR_ALL_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH CRC start address register */
    using FLASH_CRCSADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC start address This register is used when CRC_BY_SECT is cleared. It must be programmed to the address of the first Flash word to use for the CRC calculation, done burst by burst. CRC computation starts at an address aligned to the burst size defined in CRC_BURST of FLASH_CRCCR register. Hence least significant bits [5:0] of the address are set by hardware to 0 (minimum burst size= 64 bytes). The address is relative to the Flash bank. */
    using FLASH_CRCSADDR_CRC_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH CRC end address register */
    using FLASH_CRCEADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC end address This register is used when CRC_BY_SECT is cleared. It must be programmed to the address of the Flash word starting the last burst of the CRC calculation. The burst size is defined in CRC_BURST of FLASH_CRCCR register. The least significant bits [5:0] of the address are set by hardware to 0 (minimum burst size= 64 bytes). The address is relative to the Flash bank. */
    using FLASH_CRCEADDR_CRC_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH CRC data register */
    using FLASH_CRCDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC result This bitfield contains the result of the last CRC calculation. The value is valid only when CRC calculation completed (CRCENDF is set in FLASH_ISR register). CRC_DATA is cleared when CRC_EN is cleared in FLASH_CR register (CRC disabled), or when CLEAN_CRC bit is set in FLASH_CRCCR register. */
    using FLASH_CRCDATAR_CRC_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC single error fail address */
    using FLASH_ECCSFADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error correction fail address When a single ECC error correction occurs during a read operation, the SEC_FADD bitfield contains the system bus address that generated the error. This register is automatically cleared when SNECCERRF flag that generated the error is cleared. Note that only the first address that generated an ECC single error correction error is saved in this register. */
    using FLASH_ECCSFADDR_SEC_FADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC double error fail address */
    using FLASH_ECCDFADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC double error detection fail address When a double ECC detection occurs during a read operation, the DED_FADD bitfield contains the system bus address that generated the error. This register is automatically cleared when the DBECCERRF flag that generated the error is cleared. Note that only the first address that generated an ECC double error detection error is saved in this register. */
    using FLASH_ECCDFADDR_DED_FADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH options key register */
    using FLASH_OPTKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Options configuration unlock key Following values must be written to FLASH_OPTKEYR consecutively to unlock FLASH_OPTCR register: 1st key = 0x0819 2A3B 2nd key = 0x4C5D 6E7F Reads to this register returns zero. If above sequence is performed twice locks up the corresponding register/bit until the next system reset, and generates a bus error. */
    using FLASH_OPTKEYR_OCUKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH options control register */
    using FLASH_OPTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Options lock When this bit is set write to all other bits in this register, and write to OTP words, option bytes and option bytes keys control registers, are ignored. Clearing this bit requires the correct write sequence to FLASH_OPTKEYR register (see this register for details). If a wrong sequence is executed, or the unlock sequence is performed twice, this bit remains locked until next system reset. During the write access to set LOCK bit from 0 to 1, it is possible to change the other bits of this register. */
    using FLASH_OPTCR_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTP words, FLASH_OPTCR, FLASH_OBKCR and FLASH_xxSRP registers are unlocked (value: 0)
     *          - B_0x1: Writes to OTP words, FLASH_OBKCR, FLASH_xxSRP and to other bits than OPTLOCK in FLASH_OPTCR, are ignored (value: 1)
     */
        /** @brief OTP words, FLASH_OPTCR, FLASH_OBKCR and FLASH_xxSRP registers are unlocked */
    constexpr std::uint32_t FLASH_OPTCR_OPTLOCK_B_0x0 = 0;
        /** @brief Writes to OTP words, FLASH_OBKCR, FLASH_xxSRP and to other bits than OPTLOCK in FLASH_OPTCR, are ignored */
    constexpr std::uint32_t FLASH_OPTCR_OPTLOCK_B_0x1 = 1;

    /** @brief Program options */
    using FLASH_OPTCR_PG_OPT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update operations to user option bytes and option byte keys do not start (value: 0)
     *          - B_0x1: Write operation to user option bytes and option byte keys is enabled (value: 1)
     */
        /** @brief Update operations to user option bytes and option byte keys do not start */
    constexpr std::uint32_t FLASH_OPTCR_PG_OPT_B_0x0 = 0;
        /** @brief Write operation to user option bytes and option byte keys is enabled */
    constexpr std::uint32_t FLASH_OPTCR_PG_OPT_B_0x1 = 1;

    /** @brief Key valid error interrupt enable bit This bit controls if an interrupt has to be generated when KVEF is set in FLASH_OPTISR. */
    using FLASH_OPTCR_KVEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated when a key valid error occurs (value: 0)
     *          - B_0x1: an interrupt is generated when a key valid error occurs (value: 1)
     */
        /** @brief no interrupt is generated when a key valid error occurs */
    constexpr std::uint32_t FLASH_OPTCR_KVEIE_B_0x0 = 0;
        /** @brief an interrupt is generated when a key valid error occurs */
    constexpr std::uint32_t FLASH_OPTCR_KVEIE_B_0x1 = 1;

    /** @brief Key transfer error interrupt enable bit This bit controls if an interrupt has to be generated when KTEF is set in FLASH_OPTISR. */
    using FLASH_OPTCR_KTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated when a key transfer error occurs (value: 0)
     *          - B_0x1: an interrupt is generated when a key transfer error occurs (value: 1)
     */
        /** @brief no interrupt is generated when a key transfer error occurs */
    constexpr std::uint32_t FLASH_OPTCR_KTEIE_B_0x0 = 0;
        /** @brief an interrupt is generated when a key transfer error occurs */
    constexpr std::uint32_t FLASH_OPTCR_KTEIE_B_0x1 = 1;

    /** @brief Option byte change error interrupt enable bit This bit controls if an interrupt has to be generated when an error occurs during an option byte change. */
    using FLASH_OPTCR_OPTERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated when an error occurs during an option byte change (value: 0)
     *          - B_0x1: an interrupt is generated when and error occurs during an option byte change. (value: 1)
     */
        /** @brief no interrupt is generated when an error occurs during an option byte change */
    constexpr std::uint32_t FLASH_OPTCR_OPTERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated when and error occurs during an option byte change. */
    constexpr std::uint32_t FLASH_OPTCR_OPTERRIE_B_0x1 = 1;

    /** @brief FLASH options interrupt status register */
    using FLASH_OPTISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key valid error flag This bit is set when loading an unknown or corrupted option byte key. More specifically: Embedded Flash did not find an option byte key that corresponds to the given OBKINDEX[4:0] and the requested HDPL (optionally modified by NEXTKL[1:0]). It can happen for example when requested key has not being provisioned. A double error detection was found when loading the requested option byte key. In this case, if this key is provisioned again the error should disappear. When KVEF is set write to START bit in FLASH_OBKCR is ignored. An interrupt is generated when this flag is raised if the KVEIE bit of FLASH_OPTCR register is set. Setting KVEF bit of register FLASH_OPTICR clears this bit. */
    using FLASH_OPTISR_KVEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key transfer error flag This bit is set when embedded Flash signals an error to the SAES peripheral. It happens when the key size (128-bit or 256-bit) is not matching between embedded Flash OBKSIZE[1:0] and KEYSIZE bit in SAES_CR register. It also happen when an ECC dual error detection occurred while embedded Flash loaded an option byte key for the SAES peripheral. When KTEF is set write to START bit in FLASH_OBKCR is ignored. An interrupt is generated when this flag is raised if the KTEIE bit of FLASH_OPTCR register is set. Setting KTEF bit of register FLASH_OPTICR clears this bit. */
    using FLASH_OPTISR_KTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option byte change error flag When OPTERRF is set, the option byte change operation did not successfully complete. An interrupt is generated when this flag is raised if the OPTERRIE bit of FLASH_OPTCR register is set. Setting OPTERRF of register FLASH_OPTICR clears this bit. */
    using FLASH_OPTISR_OPTERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No option byte change errors occurred (value: 0)
     *          - B_0x1: One or more errors occurred during an option byte change operation. (value: 1)
     */
        /** @brief No option byte change errors occurred */
    constexpr std::uint32_t FLASH_OPTISR_OPTERRF_B_0x0 = 0;
        /** @brief One or more errors occurred during an option byte change operation. */
    constexpr std::uint32_t FLASH_OPTISR_OPTERRF_B_0x1 = 1;

    /** @brief FLASH options interrupt clear register */
    using FLASH_OPTICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief key valid error flag Set this bit to clear KVEF flag in FLASH_OPTISR register. */
    using FLASH_OPTICR_KVEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief key transfer error flag Set this bit to clear KTEF flag in FLASH_OPTISR register. */
    using FLASH_OPTICR_KTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option byte change error flag Set this bit to clear OPTERRF flag in FLASH_OPTISR register. */
    using FLASH_OPTICR_OPTERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option byte key control register */
    using FLASH_OBKCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option byte key index This bitfield represents the index of the option byte key in a given hide protection level. Reading keys with index lower that 8, the value is not be available in OBKDRx registers. It is instead sent directly to SAES peripheral. All others keys can be read using OBKDRx registers. Up to 32 keys can be provisioned per hide protection level (0, 1 or 2), provided there is enough space left in the Flash to store them. */
    using FLASH_OBKCR_OBKINDEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Next key level 10 or 11: reserved */
    using FLASH_OBKCR_NEXTKL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OBKINDEX represents the index of the option byte key stored for the hide protection level indicated in SBS_HDPLSR. (value: 0)
     *          - B_0x1: OBKINDEX represents the index of the option byte key stored for the hide protection level indicated in SBS_HDPLSR plus one (e.g. if HDPL=1 in SBS_HDPLR the key of level 2 is selected). (value: 1)
     */
        /** @brief OBKINDEX represents the index of the option byte key stored for the hide protection level indicated in SBS_HDPLSR. */
    constexpr std::uint32_t FLASH_OBKCR_NEXTKL_B_0x0 = 0;
        /** @brief OBKINDEX represents the index of the option byte key stored for the hide protection level indicated in SBS_HDPLSR plus one (e.g. if HDPL=1 in SBS_HDPLR the key of level 2 is selected). */
    constexpr std::uint32_t FLASH_OBKCR_NEXTKL_B_0x1 = 1;

    /** @brief Option byte key size Application must use this bitfield to specify how many bits must be used for the new key. Embedded Flash ignores OBKSIZE during read of option keys because size is stored with the key. */
    using FLASH_OBKCR_OBKSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Key size is 32 bits (value: 0)
     *          - B_0x1: Key size is 64 bits (value: 1)
     *          - B_0x2: Key size is 128 bits (value: 2)
     *          - B_0x3: Key size is 256 bits (value: 3)
     */
        /** @brief Key size is 32 bits */
    constexpr std::uint32_t FLASH_OBKCR_OBKSIZE_B_0x0 = 0;
        /** @brief Key size is 64 bits */
    constexpr std::uint32_t FLASH_OBKCR_OBKSIZE_B_0x1 = 1;
        /** @brief Key size is 128 bits */
    constexpr std::uint32_t FLASH_OBKCR_OBKSIZE_B_0x2 = 2;
        /** @brief Key size is 256 bits */
    constexpr std::uint32_t FLASH_OBKCR_OBKSIZE_B_0x3 = 3;

    /** @brief Key program This bit must be set to write option byte keys (keys are read otherwise). */
    using FLASH_OBKCR_KEYPROG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read key. Result of the operation is stored in FLASH_OBKDRx registers, if applicable. (value: 0)
     *          - B_0x1: Program key if PG_OPT is set in FLASH_OPTCR register, and KDREF flag is cleared in FLASH_OPTISR register. Correct key information must be stored in FLASH_OBKDRx register before setting PROG and START bits. (value: 1)
     */
        /** @brief Read key. Result of the operation is stored in FLASH_OBKDRx registers, if applicable. */
    constexpr std::uint32_t FLASH_OBKCR_KEYPROG_B_0x0 = 0;
        /** @brief Program key if PG_OPT is set in FLASH_OPTCR register, and KDREF flag is cleared in FLASH_OPTISR register. Correct key information must be stored in FLASH_OBKDRx register before setting PROG and START bits. */
    constexpr std::uint32_t FLASH_OBKCR_KEYPROG_B_0x1 = 1;

    /** @brief Key option start This bit is used to start the option byte key operation defined by the PROG bit. The embedded Flash memory resets START when the corresponding operation has been acknowledged. */
    using FLASH_OBKCR_KEYSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes key data register 0 */
    using FLASH_OBKDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief option byte key data, bits [31+x:0+x] Data register used in conjunction with FLASH_OBKCR register. Reading this register (read value once), or incrementing HDPL value in SBS peripheral automatically clears OBKDATA to 0x0. Writing this register prevents reading OBKDATA until option byte key programming sequence is completed. */
    using FLASH_OBKDR0_OBKDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes key data register 1 */
    using FLASH_OBKDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief option byte key data, bits [31+x:0+x] Data register used in conjunction with FLASH_OBKCR register. Reading this register (read value once), or incrementing HDPL value in SBS peripheral automatically clears OBKDATA to 0x0. Writing this register prevents reading OBKDATA until option byte key programming sequence is completed. */
    using FLASH_OBKDR1_OBKDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes key data register 2 */
    using FLASH_OBKDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief option byte key data, bits [31+x:0+x] Data register used in conjunction with FLASH_OBKCR register. Reading this register (read value once), or incrementing HDPL value in SBS peripheral automatically clears OBKDATA to 0x0. Writing this register prevents reading OBKDATA until option byte key programming sequence is completed. */
    using FLASH_OBKDR2_OBKDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes key data register 3 */
    using FLASH_OBKDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief option byte key data, bits [31+x:0+x] Data register used in conjunction with FLASH_OBKCR register. Reading this register (read value once), or incrementing HDPL value in SBS peripheral automatically clears OBKDATA to 0x0. Writing this register prevents reading OBKDATA until option byte key programming sequence is completed. */
    using FLASH_OBKDR3_OBKDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes key data register 4 */
    using FLASH_OBKDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief option byte key data, bits [31+x:0+x] Data register used in conjunction with FLASH_OBKCR register. Reading this register (read value once), or incrementing HDPL value in SBS peripheral automatically clears OBKDATA to 0x0. Writing this register prevents reading OBKDATA until option byte key programming sequence is completed. */
    using FLASH_OBKDR4_OBKDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes key data register 5 */
    using FLASH_OBKDR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief option byte key data, bits [31+x:0+x] Data register used in conjunction with FLASH_OBKCR register. Reading this register (read value once), or incrementing HDPL value in SBS peripheral automatically clears OBKDATA to 0x0. Writing this register prevents reading OBKDATA until option byte key programming sequence is completed. */
    using FLASH_OBKDR5_OBKDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes key data register 6 */
    using FLASH_OBKDR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief option byte key data, bits [31+x:0+x] Data register used in conjunction with FLASH_OBKCR register. Reading this register (read value once), or incrementing HDPL value in SBS peripheral automatically clears OBKDATA to 0x0. Writing this register prevents reading OBKDATA until option byte key programming sequence is completed. */
    using FLASH_OBKDR6_OBKDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes key data register 7 */
    using FLASH_OBKDR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief option byte key data, bits [31+x:0+x] Data register used in conjunction with FLASH_OBKCR register. Reading this register (read value once), or incrementing HDPL value in SBS peripheral automatically clears OBKDATA to 0x0. Writing this register prevents reading OBKDATA until option byte key programming sequence is completed. */
    using FLASH_OBKDR7_OBKDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-volatile status register */
    using FLASH_NVSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile state others: invalid configuration. */
    using FLASH_NVSR_NVSTATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: OPEN device (value: 180)
     *          - B_0x51: CLOSED device (value: 81)
     */
        /** @brief OPEN device */
    constexpr std::uint32_t FLASH_NVSR_NVSTATE_B_0xB4 = 180;
        /** @brief CLOSED device */
    constexpr std::uint32_t FLASH_NVSR_NVSTATE_B_0x51 = 81;

    /** @brief FLASH security status register programming */
    using FLASH_NVSRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile state programming Write to change corresponding bits in FLASH_NVSR register: Actual option byte change from close to open is triggered only after memory clear hardware process is confirmed. When NVSTATE=0xB4 (resp. 0x51) writing any other value than 0x51 (resp. 0xB4) triggers an option byte change error (OPTERRF). */
    using FLASH_NVSRP_NVSTATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: OPEN (value: 180)
     *          - B_0x51: CLOSE (value: 81)
     */
        /** @brief OPEN */
    constexpr std::uint32_t FLASH_NVSRP_NVSTATE_B_0xB4 = 180;
        /** @brief CLOSE */
    constexpr std::uint32_t FLASH_NVSRP_NVSTATE_B_0x51 = 81;

    /** @brief FLASH RoT status register */
    using FLASH_ROTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM provisioned device Any other value: device is not provisioned by the OEM. */
    using FLASH_ROTSR_OEM_PROVD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: Device has been provisioned by the OEM (value: 180)
     */
        /** @brief Device has been provisioned by the OEM */
    constexpr std::uint32_t FLASH_ROTSR_OEM_PROVD_B_0xB4 = 180;

    /** @brief Debug authentication method Any other value: no authentication method selected (NotSet). */
    using FLASH_ROTSR_DBG_AUTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: Locked device (no debug allowed) (value: 180)
     *          - B_0x51: Authentication method using ECDSA signature (NIST P256) (value: 81)
     *          - B_0x8A: Authentication method using password (value: 138)
     *          - B_0x6F: Delegated debug (to OEM iRoT code in user Flash) (value: 111)
     */
        /** @brief Locked device (no debug allowed) */
    constexpr std::uint32_t FLASH_ROTSR_DBG_AUTH_B_0xB4 = 180;
        /** @brief Authentication method using ECDSA signature (NIST P256) */
    constexpr std::uint32_t FLASH_ROTSR_DBG_AUTH_B_0x51 = 81;
        /** @brief Authentication method using password */
    constexpr std::uint32_t FLASH_ROTSR_DBG_AUTH_B_0x8A = 138;
        /** @brief Delegated debug (to OEM iRoT code in user Flash) */
    constexpr std::uint32_t FLASH_ROTSR_DBG_AUTH_B_0x6F = 111;

    /** @brief iRoT selection This option is ignored for STM32H7R devices (OEM iRoT is always selected). Any other value: OEM iRoT is selected at boot. */
    using FLASH_ROTSR_IROT_SELECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: ST iRoT is selected at boot (value: 180)
     */
        /** @brief ST iRoT is selected at boot */
    constexpr std::uint32_t FLASH_ROTSR_IROT_SELECT_B_0xB4 = 180;

    /** @brief FLASH RoT status register programming */
    using FLASH_ROTSRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM provisioned device Write to change corresponding bits in FLASH_ROTSR register. Write are ignored if HDPL is greater than 1. */
    using FLASH_ROTSRP_OEM_PROVD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug authentication method programming Write to change corresponding bits in FLASH_ROTSR register. Write are ignored if HDPL is greater than 0. */
    using FLASH_ROTSRP_DBG_AUTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief iRoT selection This option is ignored for STM32H7R devices. Write to change corresponding bits in FLASH_ROTSR register. Write are ignored if HDPL is greater than 1 and if NVSTATE is not 0xB4 (OPEN). */
    using FLASH_ROTSRP_IROT_SELECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OTP lock status register */
    using FLASH_OTPLSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP lock n Block n corresponds to OTP 16-bit word 32 x n to 32 x n + 31. OTPL[n] = 1 indicates that all OTP 16-bit words in OTP Block n are locked and can no longer be programmed. OTPL[n] = 0 indicates that all OTP 16-bit words in OTP Block n are not locked and can still be modified. */
    using FLASH_OTPLSR_OTPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OTP lock status register programming */
    using FLASH_OTPLSRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP lock n programming Write to change corresponding option byte bit in FLASH_OTPLSR. OTPL bits can be only be set, not cleared. */
    using FLASH_OTPLSRP_OTPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write protection status register */
    using FLASH_WRPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write protection for sector n This bit reflects the write protection status of user Flash sector n */
    using FLASH_WRPSR_WRPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector n is write protected (value: 0)
     *          - B_0x1: sector n is not write protected (value: 1)
     */
        /** @brief sector n is write protected */
    constexpr std::uint32_t FLASH_WRPSR_WRPS_B_0x0 = 0;
        /** @brief sector n is not write protected */
    constexpr std::uint32_t FLASH_WRPSR_WRPS_B_0x1 = 1;

    /** @brief FLASH write protection status register programming */
    using FLASH_WRPSRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write protection for sector n programming Write to change corresponding bit in FLASH_WRPSR */
    using FLASH_WRPSRP_WRPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH hide protection status register */
    using FLASH_HDPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hide protection user Flash area start This option sets the start address that contains the first 256-byte block of the hide protection (HDP) area in user Flash area. If HDP_AREA_END=HDP_AREA_START all the sectors are protected. If HDP_AREA_END<HDP_AREA_START no sectors are protected. */
    using FLASH_HDPSR_HDP_AREA_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hide protection user Flash area end This option sets the end address that contains the last 256-byte block of the hide protection (HDP) area in user Flash area. If HDP_AREA_END=HDP_AREA_START all the sectors are protected. If HDP_AREA_END<HDP_AREA_START no sectors are protected. */
    using FLASH_HDPSR_HDP_AREA_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH hide protection status register programming */
    using FLASH_HDPSRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hide protection user Flash area start programming Write to change corresponding option byte bits in FLASH_HDPSR. If HDP_AREA_END=HDP_AREA_START all the sectors are protected. If HDP_AREA_END<HDP_AREA_START no sectors are protected. */
    using FLASH_HDPSRP_HDP_AREA_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hide protection user Flash area end programming Write to change corresponding option byte bits in FLASH_HDPSR. If HDP_AREA_END=HDP_AREA_START all the sectors are protected. If HDP_AREA_END<HDP_AREA_START no sectors are protected. */
    using FLASH_HDPSRP_HDP_AREA_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH epoch status register */
    using FLASH_EPOCHSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Epoch This value is distributed by hardware to the SAES peripheral. */
    using FLASH_EPOCHSR_EPOCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH RoT status register programming */
    using FLASH_EPOCHSRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Epoch programming Write to change corresponding bits in FLASH_EPOCHSR register. */
    using FLASH_EPOCHSRP_EPOCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option byte word 1 status register */
    using FLASH_OBW1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Brownout level These bits reflects the power level that generates a system reset. */
    using FLASH_OBW1SR_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR OFF, POR/PDR reset threshold level is applied (value: 0)
     *          - B_0x1: BOR Level 1, the threshold level is low (around 2.1 V) (value: 1)
     *          - B_0x2: BOR Level 2, the threshold level is medium (around 2.4 V) (value: 2)
     *          - B_0x3: BOR Level 3, the threshold level is high (around 2.7 V) (value: 3)
     */
        /** @brief BOR OFF, POR/PDR reset threshold level is applied */
    constexpr std::uint32_t FLASH_OBW1SR_BOR_LEV_B_0x0 = 0;
        /** @brief BOR Level 1, the threshold level is low (around 2.1 V) */
    constexpr std::uint32_t FLASH_OBW1SR_BOR_LEV_B_0x1 = 1;
        /** @brief BOR Level 2, the threshold level is medium (around 2.4 V) */
    constexpr std::uint32_t FLASH_OBW1SR_BOR_LEV_B_0x2 = 2;
        /** @brief BOR Level 3, the threshold level is high (around 2.7 V) */
    constexpr std::uint32_t FLASH_OBW1SR_BOR_LEV_B_0x3 = 3;

    /** @brief Independent watchdog HW Control */
    using FLASH_OBW1SR_IWDG_HW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: IWDG watchdog is controlled by software (value: 1)
     *          - B_0x0: IWDG watchdog is controller by hardware (value: 0)
     */
        /** @brief IWDG watchdog is controlled by software */
    constexpr std::uint32_t FLASH_OBW1SR_IWDG_HW_B_0x1 = 1;
        /** @brief IWDG watchdog is controller by hardware */
    constexpr std::uint32_t FLASH_OBW1SR_IWDG_HW_B_0x0 = 0;

    /** @brief Reset on stop mode */
    using FLASH_OBW1SR_NRST_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent WDG generates a reset if STOP mode is requested (value: 0)
     *          - B_0x1: Independent WDG does not generate a reset if STOP mode is requested (value: 1)
     */
        /** @brief Independent WDG generates a reset if STOP mode is requested */
    constexpr std::uint32_t FLASH_OBW1SR_NRST_STOP_B_0x0 = 0;
        /** @brief Independent WDG does not generate a reset if STOP mode is requested */
    constexpr std::uint32_t FLASH_OBW1SR_NRST_STOP_B_0x1 = 1;

    /** @brief Reset on standby mode */
    using FLASH_OBW1SR_NRST_STBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent WDG generates a reset if STANDBY mode is requested (value: 0)
     *          - B_0x1: Independent WDG does not generate a reset if STANDBY mode is requested (value: 1)
     */
        /** @brief Independent WDG generates a reset if STANDBY mode is requested */
    constexpr std::uint32_t FLASH_OBW1SR_NRST_STBY_B_0x0 = 0;
        /** @brief Independent WDG does not generate a reset if STANDBY mode is requested */
    constexpr std::uint32_t FLASH_OBW1SR_NRST_STBY_B_0x1 = 1;

    /** @brief XSPIM_P1 High-Speed at Low-Voltage */
    using FLASH_OBW1SR_OCTO1_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O XSPIM_P1 High-Speed option disabled (value: 0)
     *          - B_0x1: I/O XSPIM_P1 High-Speed option enabled (value: 1)
     */
        /** @brief I/O XSPIM_P1 High-Speed option disabled */
    constexpr std::uint32_t FLASH_OBW1SR_OCTO1_HSLV_B_0x0 = 0;
        /** @brief I/O XSPIM_P1 High-Speed option enabled */
    constexpr std::uint32_t FLASH_OBW1SR_OCTO1_HSLV_B_0x1 = 1;

    /** @brief XSPIM_P2 High-Speed at Low-Voltage */
    using FLASH_OBW1SR_OCTO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O XSPIM_P2 High-Speed option disabled (value: 0)
     *          - B_0x1: I/O XSPIM_P2 High-Speed option enabled (value: 1)
     */
        /** @brief I/O XSPIM_P2 High-Speed option disabled */
    constexpr std::uint32_t FLASH_OBW1SR_OCTO2_HSLV_B_0x0 = 0;
        /** @brief I/O XSPIM_P2 High-Speed option enabled */
    constexpr std::uint32_t FLASH_OBW1SR_OCTO2_HSLV_B_0x1 = 1;

    /** @brief IWDG stop mode freeze When set the independent watchdog IWDG is frozen in system Stop mode. */
    using FLASH_OBW1SR_IWDG_FZ_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in Stop mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in Stop mode (value: 1)
     */
        /** @brief Independent watchdog frozen in Stop mode */
    constexpr std::uint32_t FLASH_OBW1SR_IWDG_FZ_STOP_B_0x0 = 0;
        /** @brief Independent watchdog keep running in Stop mode */
    constexpr std::uint32_t FLASH_OBW1SR_IWDG_FZ_STOP_B_0x1 = 1;

    /** @brief IWDG standby mode freeze When set the independent watchdog IWDG is frozen in system Standby mode. */
    using FLASH_OBW1SR_IWDG_FZ_SDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in Standby mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in Standby mode (value: 1)
     */
        /** @brief Independent watchdog frozen in Standby mode */
    constexpr std::uint32_t FLASH_OBW1SR_IWDG_FZ_SDBY_B_0x0 = 0;
        /** @brief Independent watchdog keep running in Standby mode */
    constexpr std::uint32_t FLASH_OBW1SR_IWDG_FZ_SDBY_B_0x1 = 1;

    /** @brief Personalization OK This bit is set on STMicroelectronics production line. */
    using FLASH_OBW1SR_PERSO_OK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O High-Speed at Low-Voltage This bit indicates that the product operates below 2.5 V. */
    using FLASH_OBW1SR_VDDIO_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Product working in the full voltage range, I/O speed optimization at low-voltage disabled (value: 0)
     *          - B_0x1: Product operating below 2.5 V, I/O speed optimization at low-voltage feature allowed (value: 1)
     */
        /** @brief Product working in the full voltage range, I/O speed optimization at low-voltage disabled */
    constexpr std::uint32_t FLASH_OBW1SR_VDDIO_HSLV_B_0x0 = 0;
        /** @brief Product operating below 2.5 V, I/O speed optimization at low-voltage feature allowed */
    constexpr std::uint32_t FLASH_OBW1SR_VDDIO_HSLV_B_0x1 = 1;

    /** @brief FLASH option byte word 1 status register programming */
    using FLASH_OBW1SRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Brownout level Write to change corresponding bits in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Independent watchdog HW Control Write to change corresponding bit in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_IWDG_HW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset on stop mode programming Write to change corresponding bit in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_NRST_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset on standby mode programming Write to change corresponding bit in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_NRST_STBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P1 High-Speed at Low-Voltage Write to change corresponding bit in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_OCTO1_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P2 High-Speed at Low-Voltage programming Write to change corresponding bit in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_OCTO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG stop mode freeze Write to change corresponding bit in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_IWDG_FZ_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG standby mode freeze programming Write to change corresponding bit in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_IWDG_FZ_SDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O High-Speed at Low-Voltage programming Write to change corresponding bit in FLASH_OBW1SR register. */
    using FLASH_OBW1SRP_VDDIO_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option byte word 2 status register */
    using FLASH_OBW2SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITCM SRAM configuration */
    using FLASH_OBW2SR_ITCM_AXI_SHARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTCM SRAM configuration */
    using FLASH_OBW2SR_DTCM_AXI_SHARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC on SRAM */
    using FLASH_OBW2SR_ECC_ON_SRAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C Not I3C */
    using FLASH_OBW2SR_I2C_NI3C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C is selected (value: 0)
     *          - B_0x1: I2C is selected (value: 1)
     */
        /** @brief I3C is selected */
    constexpr std::uint32_t FLASH_OBW2SR_I2C_NI3C_B_0x0 = 0;
        /** @brief I2C is selected */
    constexpr std::uint32_t FLASH_OBW2SR_I2C_NI3C_B_0x1 = 1;

    /** @brief FLASH option byte word 2 status register programming */
    using FLASH_OBW2SRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITCM AXI share programming Write to change corresponding bits in FLASH_OBW2SR register. Bit 2 should be kept to 0: ITCM_AXI_SHARE: = 000 or 011: ITCM 64 Kbytes ITCM_AXI_SHARE = 001: ITCM 128 Kbytes ITCM_AXI_SHARE = 010: ITCM 192 Kbytes */
    using FLASH_OBW2SRP_ITCM_AXI_SHARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTCM AXI share programming Write to change corresponding bits in the FLASH_OBW2SR register. Bit 2 should be kept to 0: DTCM_AXI_SHARE = 000 or 011: DTCM 64 Kbytes DTCM_AXI_SHARE = 001: DTCM 128 Kbytes DTCM_AXI_SHARE = 010: DTCM 192 Kbytes */
    using FLASH_OBW2SRP_DTCM_AXI_SHARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC on SRAM programming Write to change corresponding bit in FLASH_OBW2SR register. */
    using FLASH_OBW2SRP_ECC_ON_SRAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C Not I3C Write to change corresponding bit in FLASH_OBW2SR register. */
    using FLASH_OBW2SRP_I2C_NI3C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
