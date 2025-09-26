/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA54_SEC_FLASH_HPP
#define EMBEDDED_PP_STM32WBA54_SEC_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Embedded Flash memory */
namespace STM32WBA54::SEC_FLASH {

    /** @brief FLASH access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Latency These bits represent the ratio between the AHB hclk1 clock period and the Flash memory access time. Access to the bit can be secured by RCC SYSCLKSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with FLASH SPRIV or when non-secure with FLASH NSPRIV. ... Note: Before entering Stop 1 mode software must set FLASH wait state latency to at least 1. */
    using FLASH_ACR_LATENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Zero wait state (value: 0)
     *          - B_0x1: One wait state (value: 1)
     *          - B_0x2: Two wait states (value: 2)
     *          - B_0xF: Fifteen wait states (value: 15)
     */
        /** @brief Zero wait state */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x0 = 0;
        /** @brief One wait state */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x1 = 1;
        /** @brief Two wait states */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x2 = 2;
        /** @brief Fifteen wait states */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0xF = 15;

    /** @brief Prefetch enable This bit enables the prefetch buffer in the embedded Flash memory. This bit can be protected against unprivileged access by FLASH NSPRIV. */
    using FLASH_ACR_PRFTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Prefetch disabled (value: 0)
     *          - B_0x1: Prefetch enabled (value: 1)
     */
        /** @brief Prefetch disabled */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x0 = 0;
        /** @brief Prefetch enabled */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x1 = 1;

    /** @brief Low-power read mode This bit puts the Flash memory in low-power read mode. Access to the bit can be secured by PWR LPMSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with FLASH SPRIV or when non-secure with FLASH NSPRIV. This bit can't be written when a Flash program or erase operation is busy (BSY = 1) or when the write buffer is not empty (WDW = 1). Changing this bit while a Flash program or erase operation is busy (BSY = 1) is rejected. */
    using FLASH_ACR_LPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash not in low-power read mode (value: 0)
     *          - B_0x1: Flash in low-power read mode (value: 1)
     */
        /** @brief Flash not in low-power read mode */
    constexpr std::uint32_t FLASH_ACR_LPM_B_0x0 = 0;
        /** @brief Flash in low-power read mode */
    constexpr std::uint32_t FLASH_ACR_LPM_B_0x1 = 1;

    /** @brief Flash power-down mode request This bit requests Flash to enter power-down mode. When Flash enters power-down mode, this bit is cleared by hardware and the PDKEYR is locked. This bit is write-protected with FLASH_PDKEYR. Access to the bit can be secured by PWR LPMSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with FLASH SPRIV or when non-secure with FLASH NSPRIV. */
    using FLASH_ACR_PDREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request for Flash to enter power-down mode (value: 0)
     *          - B_0x1: Flash requested to enter power-down mode (value: 1)
     */
        /** @brief No request for Flash to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ_B_0x0 = 0;
        /** @brief Flash requested to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ_B_0x1 = 1;

    /** @brief Flash memory power-down mode during Sleep mode This bit determines whether the Flash memory is in power-down mode or Idle mode when the device is in Sleep mode. Access to the bit can be secured by PWR LPMSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with FLASH SPRIV or when non-secure with FLASH NSPRIV. The Flash must not be put in power-down while a program or an erase operation is ongoing. */
    using FLASH_ACR_SLEEP_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash in Idle mode during Sleep mode (value: 0)
     *          - B_0x1: Flash in power-down mode during Sleep mode (value: 1)
     */
        /** @brief Flash in Idle mode during Sleep mode */
    constexpr std::uint32_t FLASH_ACR_SLEEP_PD_B_0x0 = 0;
        /** @brief Flash in power-down mode during Sleep mode */
    constexpr std::uint32_t FLASH_ACR_SLEEP_PD_B_0x1 = 1;

    /** @brief FLASH key register */
    using FLASH_NSKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory non-secure key The following values must be written consecutively to unlock the FLASH_NSCR1 register, allowing the Flash memory non-secure programming/erasing operations: KEY1: 0x45670123 KEY2: 0xCDEF89AB */
    using FLASH_NSKEYR_NSKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure key register */
    using FLASH_SECKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory secure key The following values must be written consecutively to unlock the FLASH_SECCR1 register, allowing the Flash memory secure programming/erasing operations: KEY1: 0x45670123 KEY2: 0xCDEF89AB */
    using FLASH_SECKEYR_SECKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option key register */
    using FLASH_OPTKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option byte key The LOCK bit in the FLASH_NSCR1 must be cleared before doing the unlock sequence for OPTLOCK bit. The following values must be written consecutively to unlock the FLASH_NSCR1.OPTSTRT and OBL_LAUNCH register bits concerning user option operations: KEY1: 0x08192A3B KEY2: 0x4C5D6E7F */
    using FLASH_OPTKEYR_OPTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH power-down key register */
    using FLASH_PDKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash power-down key The following values must be written consecutively to unlock the PDREQ bit in FLASH_ACR: PDKEY_1: 0x04152637 PDKEY_2: 0xFAFBFCFD */
    using FLASH_PDKEYR_PDKEY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH status register */
    using FLASH_NSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure end of operation This bit is set by hardware when one or more Flash memory non-secure operation (program/erase) has been completed successfully. This bit is set only if the non-secure end of operation interrupts are enabled (EOPIE = 1 in FLASH_NSCR1). This bit is cleared by writing1. */
    using FLASH_NSSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure operation error This bit is set by hardware when a Flash memory non-secure operation (program/erase) completes unsuccessfully. This bit is set only if non-secure error interrupts are enabled (NSERRIE = 1). This bit is cleared by writing 1. */
    using FLASH_NSSR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming error This bit is set by hardware when a non-secure quad-word address to be programmed contains a value different from all 1 before programming, except if the data to write is all 0. This bit is cleared by writing 1. */
    using FLASH_NSSR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure write protection error This bit is set by hardware when a non-secure address to be erased/programmed belongs to a write-protected part (by WRP or HDP) of the Flash memory. This bit is cleared by writing 1. Refer to Section7.3.10: Flash memory errors flags for full conditions of error flag setting. */
    using FLASH_NSSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming alignment error This bit is set by hardware when the first word to be programmed is not aligned with a quad-word address, or the second, third or forth word does not belong to the same quad-word address. This bit is cleared by writing 1. */
    using FLASH_NSSR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure size error This bit is set by hardware when the size of the access is a byte or half-word during a non-secure program sequence. Only quad-word programming is allowed by means of successive word accesses. This bit is cleared by writing 1. */
    using FLASH_NSSR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming sequence error This bit is set by hardware when programming sequence is not correct. It is cleared by writing 1. Refer to Section7.3.10: Flash memory errors flags for full conditions of error flag setting. */
    using FLASH_NSSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option write error This bit is set by hardware when the options bytes are written with an invalid configuration or when modifying options in RDP level 2.. It is cleared by writing 1. Refer to Section7.3.10: Flash memory errors flags for full conditions of error flag setting. */
    using FLASH_NSSR_OPTWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure busy This indicates that a Flash memory secure or non-secure operation is in progress. This bit is set at the beginning of a Flash operation and reset when the operation finishes or when an error occurs. */
    using FLASH_NSSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure wait data to write This bit indicates that the Flash memory write buffer has been written by a secure or non-secure operation. It is set when the first data is stored in the buffer and cleared when the write is performed in the Flash memory. */
    using FLASH_NSSR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 key RDP lock This bit indicates that the OEM1 key read during the OBL is not virgin. When set, the OEM1 key RDP lock mechanism is active. */
    using FLASH_NSSR_OEM1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 key RDP lock This bit indicates that the OEM2 key read during the OBL is not virgin. When set, the OEM2 key RDP lock mechanism is active. */
    using FLASH_NSSR_OEM2LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash in power-down mode This bit indicates that the Flash memory is in power-down state. It is reset when Flash is in normal mode or being awaken. */
    using FLASH_NSSR_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure status register */
    using FLASH_SECSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure end of operation This bit is set by hardware when one or more Flash memory secure operation (program/erase) has been completed successfully. This bit is set only if the secure end of operation interrupts are enabled (EOPIE = 1 in FLASH_SECCR1). This bit is cleared by writing1. */
    using FLASH_SECSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure operation error This bit is set by hardware when a Flash memory secure operation (program/erase) completes unsuccessfully. This bit is set only if secure error interrupts are enabled (SECERRIE = 1). This bit is cleared by writing 1. */
    using FLASH_SECSR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming error This bit is set by hardware when a secure quad-word address to be programmed contains a value different from all 1 before programming, except if the data to write is all 0. This bit is cleared by writing 1. */
    using FLASH_SECSR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure write protection error This bit is set by hardware when an secure address to be erased/programmed belongs to a write-protected part (by WRP or HDP) of the Flash memory. This bit is cleared by writing 1. Refer to Section7.3.10: Flash memory errors flags for full conditions of error flag setting. */
    using FLASH_SECSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming alignment error This bit is set by hardware when the first word to be programmed is not aligned with a quad-word address, or the second, third or forth word does not belong to the same quad-word address.This bit is cleared by writing 1. */
    using FLASH_SECSR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure size error This bit is set by hardware when the size of the access is a byte or half-word during a secure program sequence. Only quad-word programming is allowed by means of successive word accesses.This bit is cleared by writing 1. */
    using FLASH_SECSR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming sequence error This bit is set by hardware when programming sequence is not correct. It is cleared by writing 1. Refer to Section7.3.10: Flash memory errors flags for full conditions of error flag setting. */
    using FLASH_SECSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure busy This bit indicates that a Flash memory secure or non-secure operation is in progress. This is set on the beginning of a Flash operation and reset when the operation finishes or when an error occurs. */
    using FLASH_SECSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure wait data to write This bit indicates that the Flash memory write buffer has been written by a secure or non-secure operation. It is set when the first data is stored in the buffer and cleared when the write is performed in the Flash memory. */
    using FLASH_SECSR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH control register */
    using FLASH_NSCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming */
    using FLASH_NSCR1_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure Flash programming disabled (value: 0)
     *          - B_0x1: Non-secure Flash programming enabled (value: 1)
     */
        /** @brief Non-secure Flash programming disabled */
    constexpr std::uint32_t FLASH_NSCR1_PG_B_0x0 = 0;
        /** @brief Non-secure Flash programming enabled */
    constexpr std::uint32_t FLASH_NSCR1_PG_B_0x1 = 1;

    /** @brief Non-secure page erase */
    using FLASH_NSCR1_PER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure page erase disabled (value: 0)
     *          - B_0x1: Non-secure page erase enabled (value: 1)
     */
        /** @brief Non-secure page erase disabled */
    constexpr std::uint32_t FLASH_NSCR1_PER_B_0x0 = 0;
        /** @brief Non-secure page erase enabled */
    constexpr std::uint32_t FLASH_NSCR1_PER_B_0x1 = 1;

    /** @brief Non-secure Flash mass erase This bit triggers the Flash non-secure mass erase (all Flash user pages) when set. */
    using FLASH_NSCR1_MER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure page number selection These bits select the page to erase. ... Note that bit 9 is reserved on STM32WBA5xEx devices. */
    using FLASH_NSCR1_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     *          - B_0x7F: page 127 (value: 127)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_NSCR1_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_NSCR1_PNB_B_0x1 = 1;
        /** @brief page 127 */
    constexpr std::uint32_t FLASH_NSCR1_PNB_B_0x7F = 127;

    /** @brief Non-secure burst write programming mode When set, this bit selects the burst write programming mode. */
    using FLASH_NSCR1_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure operation start This bit triggers a non-secure erase operation when set. If MER and PER bits are reset and the STRT bit is set, the PGSERR bit in FLASH_NSSR is set (this condition is forbidden). This bit is set only by software and is cleared when the BSY bit is cleared in FLASH_NSSR. */
    using FLASH_NSCR1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Options modification start This bit triggers an option bytes erase and program operation when set. This bit is write-protected with OPTLOCK.. This bit is set only by software, and is cleared when the BSY bit is cleared in FLASH_NSSR. */
    using FLASH_NSCR1_OPTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure end of operation interrupt enable This bit enables the interrupt generation when the EOP bit in the FLASH_NSSR is set to 1. */
    using FLASH_NSCR1_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure EOP Interrupt disabled (value: 0)
     *          - B_0x1: Non-secure EOP Interrupt enabled (value: 1)
     */
        /** @brief Non-secure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_NSCR1_EOPIE_B_0x0 = 0;
        /** @brief Non-secure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_NSCR1_EOPIE_B_0x1 = 1;

    /** @brief Non-secure error interrupt enable This bit enables the interrupt generation when the OPERR bit in the FLASH_NSSR is set to 1. */
    using FLASH_NSCR1_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: Non-secure OPERR error interrupt enabled (value: 1)
     */
        /** @brief Non-secure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_NSCR1_ERRIE_B_0x0 = 0;
        /** @brief Non-secure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_NSCR1_ERRIE_B_0x1 = 1;

    /** @brief Force the option byte loading When set to 1, this bit forces the option byte reloading. This bit is cleared only when the option byte loading is complete. This bit is write-protected with OPTLOCK. Note: The LSE oscillator must be disabled, LSEON = 0 and LSERDY = 0, before starting OBL_LAUNCH. */
    using FLASH_NSCR1_OBL_LAUNCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Option byte loading complete (value: 0)
     *          - B_0x1: Option byte loading requested (value: 1)
     */
        /** @brief Option byte loading complete */
    constexpr std::uint32_t FLASH_NSCR1_OBL_LAUNCH_B_0x0 = 0;
        /** @brief Option byte loading requested */
    constexpr std::uint32_t FLASH_NSCR1_OBL_LAUNCH_B_0x1 = 1;

    /** @brief Option lock This bit is set only. When set, the FLASH_NSCR1.OPTSRT and OBL_LAUNCH bits concerning user options write access is locked. This bit is cleared by hardware after detecting the unlock sequence in FLASH_OPTKEYR. The FLASH_NSCR1.LOCK bit must be cleared before doing the FLASH_OPTKEYR unlock sequence. In case of an unsuccessful unlock operation, this bit remains set until the next reset. */
    using FLASH_NSCR1_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure lock This bit is set only. When set, the FLASH_NSCR1 register write access is locked. This bit is cleared by hardware after detecting the unlock sequence in FLASH_NSKEYR. In case of an unsuccessful unlock operation, this bit remains set until the next system reset. */
    using FLASH_NSCR1_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure control register */
    using FLASH_SECCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming */
    using FLASH_SECCR1_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure Flash programming disabled (value: 0)
     *          - B_0x1: Secure Flash programming enabled (value: 1)
     */
        /** @brief Secure Flash programming disabled */
    constexpr std::uint32_t FLASH_SECCR1_PG_B_0x0 = 0;
        /** @brief Secure Flash programming enabled */
    constexpr std::uint32_t FLASH_SECCR1_PG_B_0x1 = 1;

    /** @brief Secure page erase */
    using FLASH_SECCR1_PER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure page erase disabled (value: 0)
     *          - B_0x1: Secure page erase enabled (value: 1)
     */
        /** @brief Secure page erase disabled */
    constexpr std::uint32_t FLASH_SECCR1_PER_B_0x0 = 0;
        /** @brief Secure page erase enabled */
    constexpr std::uint32_t FLASH_SECCR1_PER_B_0x1 = 1;

    /** @brief Secure Flash mass erase This bit triggers the Flash secure mass erase (all Flash user pages) when set. */
    using FLASH_SECCR1_MER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure page number selection These bits select the page to erase: ... Note that bit 9 is reserved on STM32WBA5xEx devices. */
    using FLASH_SECCR1_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     *          - B_0x7F: page 127 (value: 127)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_SECCR1_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_SECCR1_PNB_B_0x1 = 1;
        /** @brief page 127 */
    constexpr std::uint32_t FLASH_SECCR1_PNB_B_0x7F = 127;

    /** @brief Secure burst write programming mode When set, this bit selects the burst write programming mode. */
    using FLASH_SECCR1_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure start This bit triggers a secure erase operation when set. If MER and PER bits are reset and the STRT bit is set, the PGSERR in the FLASH_SECSR is set (this condition is forbidden). This bit is set only by software and is cleared when the BSY bit is cleared in FLASH_SECSR. */
    using FLASH_SECCR1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure End of operation interrupt enable This bit enables the interrupt generation when the EOP bit in FLASH_SECSR is set to 1. */
    using FLASH_SECCR1_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure EOP Interrupt disabled (value: 0)
     *          - B_0x1: Secure EOP Interrupt enabled (value: 1)
     */
        /** @brief Secure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_SECCR1_EOPIE_B_0x0 = 0;
        /** @brief Secure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_SECCR1_EOPIE_B_0x1 = 1;

    /** @brief Secure error interrupt enable This bit enables the interrupt generation when the OPERR bit in FLASH_SECSR is set to 1. */
    using FLASH_SECCR1_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: Secure OPERR error interrupt enabled (value: 1)
     */
        /** @brief Secure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_SECCR1_ERRIE_B_0x0 = 0;
        /** @brief Secure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_SECCR1_ERRIE_B_0x1 = 1;

    /** @brief Flash memory security state invert This bit inverts the Flash memory security state. */
    using FLASH_SECCR1_INV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure lock This bit is set only. When set, the FLASH_SECCR1 register is locked. It is cleared by hardware after detecting the unlock sequence in FLASH_SECKEYR register. In case of an unsuccessful unlock operation, this bit remains set until the next system reset. */
    using FLASH_SECCR1_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC register */
    using FLASH_ECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail address This field indicates which address is concerned by the ECC error correction or by the double ECC error detection. The address is given relative to Flash base address, from offset 0x00000 to 0xFFFF0. Note that bit 19 is reserved on STM32WBAxEx devices. */
    using FLASH_ECCR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System Flash memory ECC fail This bit indicates that the ECC error correction or double ECC error detection is located in the system Flash memory. */
    using FLASH_ECCR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC correction interrupt enable This bit enables the interrupt generation when the ECCC bit in the FLASH_ECCR register is set. */
    using FLASH_ECCR_ECCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECCC interrupt disabled (value: 0)
     *          - B_0x1: ECCC interrupt enabled. (value: 1)
     */
        /** @brief ECCC interrupt disabled */
    constexpr std::uint32_t FLASH_ECCR_ECCIE_B_0x0 = 0;
        /** @brief ECCC interrupt enabled. */
    constexpr std::uint32_t FLASH_ECCR_ECCIE_B_0x1 = 1;

    /** @brief ECC correction This bit is set by hardware when one ECC error has been detected and corrected (only if ECCC and ECCD were previously cleared). An interrupt is generated if ECCIE is set. This bit is cleared by writing 1. */
    using FLASH_ECCR_ECCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC detection This bit is set by hardware when two ECC errors have been detected (only if ECCC and ECCD were previously cleared). When this bit is set, a NMI is generated. This bit is cleared by writing 1. */
    using FLASH_ECCR_ECCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH operation status register */
    using FLASH_OPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation address This field indicates which address in the Flash memory was accessed when reset occurred. The address is given relative to the Flash base address, from offset 0x00000 to 0xFFFF0. Note that bit 19 is reserved on STM32WBAxEx devices. */
    using FLASH_OPSR_ADDR_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation in system Flash memory interrupted This bit indicates that the reset occurred during an operation in the system Flash memory. */
    using FLASH_OPSR_SYSF_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory operation code This field indicates which Flash memory operation has been interrupted by a system reset: */
    using FLASH_OPSR_CODE_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Flash operation interrupted by previous reset (value: 0)
     *          - B_0x1: Single write operation interrupted (value: 1)
     *          - B_0x2: Burst write operation interrupted (value: 2)
     *          - B_0x3: Page erase operation interrupted (value: 3)
     *          - B_0x5: Mass erase operation interrupted (value: 5)
     *          - B_0x6: Option change operation interrupted (value: 6)
     */
        /** @brief No Flash operation interrupted by previous reset */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x0 = 0;
        /** @brief Single write operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x1 = 1;
        /** @brief Burst write operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x2 = 2;
        /** @brief Page erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x3 = 3;
        /** @brief Mass erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x5 = 5;
        /** @brief Option change operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x6 = 6;

    /** @brief FLASH control 2 register */
    using FLASH_NSCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Program suspend request */
    using FLASH_NSCR2_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: program suspend disabled (value: 0)
     *          - B_0x1: program suspend requested (enabled) (value: 1)
     */
        /** @brief program suspend disabled */
    constexpr std::uint32_t FLASH_NSCR2_PS_B_0x0 = 0;
        /** @brief program suspend requested (enabled) */
    constexpr std::uint32_t FLASH_NSCR2_PS_B_0x1 = 1;

    /** @brief Erase suspend request */
    using FLASH_NSCR2_ES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: erase suspend disabled (value: 0)
     *          - B_0x1: erase suspend requested (enabled) (value: 1)
     */
        /** @brief erase suspend disabled */
    constexpr std::uint32_t FLASH_NSCR2_ES_B_0x0 = 0;
        /** @brief erase suspend requested (enabled) */
    constexpr std::uint32_t FLASH_NSCR2_ES_B_0x1 = 1;

    /** @brief FLASH secure control 2 register */
    using FLASH_SECCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Program suspend request */
    using FLASH_SECCR2_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: program suspend disabled (value: 0)
     *          - B_0x1: program suspend requested (enabled) (value: 1)
     */
        /** @brief program suspend disabled */
    constexpr std::uint32_t FLASH_SECCR2_PS_B_0x0 = 0;
        /** @brief program suspend requested (enabled) */
    constexpr std::uint32_t FLASH_SECCR2_PS_B_0x1 = 1;

    /** @brief Erase suspend request */
    using FLASH_SECCR2_ES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: erase suspend disabled (value: 0)
     *          - B_0x1: erase suspend requested (enabled) (value: 1)
     */
        /** @brief erase suspend disabled */
    constexpr std::uint32_t FLASH_SECCR2_ES_B_0x0 = 0;
        /** @brief erase suspend requested (enabled) */
    constexpr std::uint32_t FLASH_SECCR2_ES_B_0x1 = 1;

    /** @brief FLASH option register */
    using FLASH_OPTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Readout protection level Others: Level 1 (memories readout protection active) Note: Refer to Section7.6.2: Readout protection (RDP) for more details. */
    using FLASH_OPTR_RDP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xAA: Level 0 (readout protection not active) (value: 170)
     *          - B_0x55: Level 0.5 (readout protection not active, only non-secure debug access is possible). Only available when TrustZone is active (TZEN=1) (value: 85)
     *          - B_0xCC: Level 2 (chip readout protection active) (value: 204)
     */
        /** @brief Level 0 (readout protection not active) */
    constexpr std::uint32_t FLASH_OPTR_RDP_B_0xAA = 170;
        /** @brief Level 0.5 (readout protection not active, only non-secure debug access is possible). Only available when TrustZone is active (TZEN=1) */
    constexpr std::uint32_t FLASH_OPTR_RDP_B_0x55 = 85;
        /** @brief Level 2 (chip readout protection active) */
    constexpr std::uint32_t FLASH_OPTR_RDP_B_0xCC = 204;

    /** @brief BOR reset level These bits contain the VsubDD/sub supply level threshold that activates/releases the reset. */
    using FLASH_OPTR_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR level 0 (reset level threshold around 1.7V) (value: 0)
     *          - B_0x1: BOR level 1 (reset level threshold around 2.0V) (value: 1)
     *          - B_0x2: BOR level 2 (reset level threshold around 2.2V) (value: 2)
     *          - B_0x3: BOR level 3 (reset level threshold around 2.5V) (value: 3)
     *          - B_0x4: BOR level 4 (reset level threshold around 2.8V) (value: 4)
     */
        /** @brief BOR level 0 (reset level threshold around 1.7V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x0 = 0;
        /** @brief BOR level 1 (reset level threshold around 2.0V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x1 = 1;
        /** @brief BOR level 2 (reset level threshold around 2.2V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x2 = 2;
        /** @brief BOR level 3 (reset level threshold around 2.5V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x3 = 3;
        /** @brief BOR level 4 (reset level threshold around 2.8V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x4 = 4;

    /** @brief Reset generation in Stop mode */
    using FLASH_OPTR_NRST_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Stop mode (value: 0)
     *          - B_0x1: No reset generated when entering the Stop mode (value: 1)
     */
        /** @brief Reset generated when entering the Stop mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STOP_B_0x0 = 0;
        /** @brief No reset generated when entering the Stop mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STOP_B_0x1 = 1;

    /** @brief Reset generation in Standby mode */
    using FLASH_OPTR_NRST_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Standby mode (value: 0)
     *          - B_0x1: No reset generated when entering the Standby mode (value: 1)
     */
        /** @brief Reset generated when entering the Standby mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STDBY_B_0x0 = 0;
        /** @brief No reset generated when entering the Standby mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STDBY_B_0x1 = 1;

    /** @brief SRAM1 erase upon system reset */
    using FLASH_OPTR_SRAM1_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM1 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM1erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM1_RST_B_0x0 = 0;
        /** @brief SRAM1 not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM1_RST_B_0x1 = 1;

    /** @brief Independent watchdog enable selection */
    using FLASH_OPTR_IWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware mode, independent watchdog started automatically be hardware on reset selected (value: 0)
     *          - B_0x1: Software mode, independent watchdog started by software command selected (value: 1)
     */
        /** @brief Hardware mode, independent watchdog started automatically be hardware on reset selected */
    constexpr std::uint32_t FLASH_OPTR_IWDG_SW_B_0x0 = 0;
        /** @brief Software mode, independent watchdog started by software command selected */
    constexpr std::uint32_t FLASH_OPTR_IWDG_SW_B_0x1 = 1;

    /** @brief Independent watchdog counter freeze in Stop mode */
    using FLASH_OPTR_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog counter frozen in Stop mode (value: 0)
     *          - B_0x1: Independent watchdog counter running in Stop mode (value: 1)
     */
        /** @brief Independent watchdog counter frozen in Stop mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STOP_B_0x0 = 0;
        /** @brief Independent watchdog counter running in Stop mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STOP_B_0x1 = 1;

    /** @brief Independent watchdog counter freeze in Standby mode */
    using FLASH_OPTR_IWDG_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog counter frozen in Standby mode (value: 0)
     *          - B_0x1: Independent watchdog counter running in Standby mode (value: 1)
     */
        /** @brief Independent watchdog counter frozen in Standby mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STDBY_B_0x0 = 0;
        /** @brief Independent watchdog counter running in Standby mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STDBY_B_0x1 = 1;

    /** @brief Window watchdog selection */
    using FLASH_OPTR_WWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware window watchdog selected (value: 0)
     *          - B_0x1: Software window watchdog selected (value: 1)
     */
        /** @brief Hardware window watchdog selected */
    constexpr std::uint32_t FLASH_OPTR_WWDG_SW_B_0x0 = 0;
        /** @brief Software window watchdog selected */
    constexpr std::uint32_t FLASH_OPTR_WWDG_SW_B_0x1 = 1;

    /** @brief SRAM2 parity check enable */
    using FLASH_OPTR_SRAM2_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 parity check enabled (value: 0)
     *          - B_0x1: SRAM2 parity check disabled (value: 1)
     */
        /** @brief SRAM2 parity check enabled */
    constexpr std::uint32_t FLASH_OPTR_SRAM2_PE_B_0x0 = 0;
        /** @brief SRAM2 parity check disabled */
    constexpr std::uint32_t FLASH_OPTR_SRAM2_PE_B_0x1 = 1;

    /** @brief SRAM2 erase when system reset */
    using FLASH_OPTR_SRAM2_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM2 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM2 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM2_RST_B_0x0 = 0;
        /** @brief SRAM2 not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM2_RST_B_0x1 = 1;

    /** @brief Software BOOT0 */
    using FLASH_OPTR_NSWBOOT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOOT0 taken from the option bit NBOOT0 (value: 0)
     *          - B_0x1: BOOT0 taken from PH3/BOOT0 pin (value: 1)
     */
        /** @brief BOOT0 taken from the option bit NBOOT0 */
    constexpr std::uint32_t FLASH_OPTR_NSWBOOT0_B_0x0 = 0;
        /** @brief BOOT0 taken from PH3/BOOT0 pin */
    constexpr std::uint32_t FLASH_OPTR_NSWBOOT0_B_0x1 = 1;

    /** @brief NBOOT0 option bit */
    using FLASH_OPTR_NBOOT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBOOT0 = 0 (value: 0)
     *          - B_0x1: NBOOT0 = 1 (value: 1)
     */
        /** @brief NBOOT0 = 0 */
    constexpr std::uint32_t FLASH_OPTR_NBOOT0_B_0x0 = 0;
        /** @brief NBOOT0 = 1 */
    constexpr std::uint32_t FLASH_OPTR_NBOOT0_B_0x1 = 1;

    /** @brief Global TrustZone security enable */
    using FLASH_OPTR_TZEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Global TrustZone security disabled (value: 0)
     *          - B_0x1: Global TrustZone security enabled (value: 1)
     */
        /** @brief Global TrustZone security disabled */
    constexpr std::uint32_t FLASH_OPTR_TZEN_B_0x0 = 0;
        /** @brief Global TrustZone security enabled */
    constexpr std::uint32_t FLASH_OPTR_TZEN_B_0x1 = 1;

    /** @brief FLASH boot address 0 register */
    using FLASH_NSBOOTADD0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure boot base address 0 This address is only used when TZEN = 0. The non-secure boot memory address can be programmed to any address in the valid address range (see Table 28: Boot space versus RDP protection) with a granularity of 128 bytes. These bits correspond to address [31:7]. The NSBOOTADD0 option bytes are selected following the BOOT0 pin or NSWBOOT0 state. Examples: NSBOOTADD0[24:0] = 0x0100000: Boot from Flash memory (0x0800 0000) NSBOOTADD0[24:0] = 0x017F100: Boot from system memory bootloader (0x0BF8 8000) NSBOOTADD0[24:0] = 0x0400200: Boot from SRAM2 on S-Bus (0x2001 0000) */
    using FLASH_NSBOOTADD0R_NSBOOTADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH boot address 1 register */
    using FLASH_NSBOOTADD1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure boot address 1 This address is only used when TZEN = 0. The non-secure boot memory address can be programmed to any address in the valid address range (see Table 28: Boot space versus RDP protection) with a granularity of 128 bytes. These bits correspond to address [31:7]. The NSBOOTADD0 option bytes are selected following the BOOT0 pin or NSWBOOT0 state. Examples: NSBOOTADD1[24:0] = 0x0100000: Boot from Flash memory (0x0800 0000) NSBOOTADD1[24:0] = 0x017F100: Boot from system memory bootloader (0x0BF8 8000) NSBOOTADD1[24:0] = 0x0400200: Boot from SRAM2 (0x2001 0000) */
    using FLASH_NSBOOTADD1R_NSBOOTADD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot address 0 register */
    using FLASH_SECBOOTADD0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot lock This lock is only used when TZEN = 0. When set, the boot is always forced to base address value programmed in SECBOOTADD0[24:0] option bytes whatever the boot selection option. When set, this bit can only be cleared by an RDP regression level 1 to level 0. */
    using FLASH_SECBOOTADD0R_BOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure boot base address 0 This address is only used when TZEN = 1. The secure boot memory address can be programmed to any address in the valid address range (see Table28: Boot space versus RDP protection) with a granularity of 128 bytes. This bits correspond to address [31:7] The SECBOOTADD0 option bytes are selected following the BOOT0 pin or NSWBOOT0 state. Examples: SECBOOTADD0[24:0] = 0x018 0000: Boot from secure user Flash memory (0x0C00 0000) SECBOOTADD0[24:0] = 0x01F F000: Boot from RSS system Flash memory (0x0FF8 0000) SECBOOTADD0[24:0] = 0x060 0000: Boot from secure SRAM1 on S-Bus (0x3000 0000) */
    using FLASH_SECBOOTADD0R_SECBOOTADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark register 1 */
    using FLASH_SECWMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start page of secure area This field contains the first page of the secure area. */
    using FLASH_SECWMR1_SECWM_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of secure area This field contains the last page of the secure area. */
    using FLASH_SECWMR1_SECWM_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark register 2 */
    using FLASH_SECWMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of secure hide protection area This field contains the last page of the secure HDP area. */
    using FLASH_SECWMR2_HDP_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure Hide protection area enable */
    using FLASH_SECWMR2_HDPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No secure HDP area (value: 0)
     *          - B_0x1: Secure HDP area enabled (value: 1)
     */
        /** @brief No secure HDP area */
    constexpr std::uint32_t FLASH_SECWMR2_HDPEN_B_0x0 = 0;
        /** @brief Secure HDP area enabled */
    constexpr std::uint32_t FLASH_SECWMR2_HDPEN_B_0x1 = 1;

    /** @brief FLASH WRP area A address register */
    using FLASH_WRPAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR area A start page This field contains the first page of the WPR area A. Note that bit 6 is reserved on STM32WBAxEx devices. */
    using FLASH_WRPAR_WRPA_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR area A end page This field contains the last page of the WPR area A. Note that bit 22 is reserved on STM32WBAxEx devices. */
    using FLASH_WRPAR_WRPA_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR area A unlock */
    using FLASH_WRPAR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRPA start and end pages locked (value: 0)
     *          - B_0x1: WRPA start and end pages unlocked (value: 1)
     */
        /** @brief WRPA start and end pages locked */
    constexpr std::uint32_t FLASH_WRPAR_UNLOCK_B_0x0 = 0;
        /** @brief WRPA start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRPAR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH WRP area B address register */
    using FLASH_WRPBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP area B start page This field contains the first page of the WRP area B. Note that bit 6 is reserved on STM32WBAxEx devices. */
    using FLASH_WRPBR_WRPB_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP area B end page This field contains the last page of the WRP area B. Note that bit 22 is reserved on STM32WBAxEx devices. */
    using FLASH_WRPBR_WRPB_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR area B unlock */
    using FLASH_WRPBR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRPB start and end pages locked (value: 0)
     *          - B_0x1: WRPB start and end pages unlocked (value: 1)
     */
        /** @brief WRPB start and end pages locked */
    constexpr std::uint32_t FLASH_WRPBR_UNLOCK_B_0x0 = 0;
        /** @brief WRPB start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRPBR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH OEM1 key register 1 */
    using FLASH_OEM1KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 key least significant bytes */
    using FLASH_OEM1KEYR1_OEM1KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM1 key register 2 */
    using FLASH_OEM1KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 key most significant bytes */
    using FLASH_OEM1KEYR2_OEM1KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM2 key register 1 */
    using FLASH_OEM2KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 key least significant bytes */
    using FLASH_OEM2KEYR1_OEM2KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM2 key register 2 */
    using FLASH_OEM2KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 key most significant bytes */
    using FLASH_OEM2KEYR2_OEM2KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based register 1 */
    using FLASH_SECBBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB0_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB1_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB2_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB3_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB4_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB5_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB6_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB7_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB8_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB9_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB10_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB11_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB12_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB13_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB14_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB15_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB16_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB17_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB18_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB19_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB20_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB21_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB22_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB23_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB24_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB25_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB26_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB27_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB28_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB29_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB30_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR1_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR1_SECBB31_B_0x1 = 1;

    /** @brief FLASH secure block based register 2 */
    using FLASH_SECBBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB0_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB1_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB2_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB3_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB4_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB5_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB6_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB7_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB8_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB9_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB10_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB11_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB12_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB13_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB14_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB15_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB16_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB17_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB18_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB19_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB20_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB21_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB22_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB23_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB24_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB25_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB26_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB27_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB28_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB29_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB30_B_0x1 = 1;

    /** @brief page secure/non-secure attribution Each bit is used to set one page security attribution. */
    using FLASH_SECBBR2_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash not block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash block-based secure */
    constexpr std::uint32_t FLASH_SECBBR2_SECBB31_B_0x1 = 1;

    /** @brief FLASH secure HDP control register */
    using FLASH_SECHDPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure HDP area access disable When set, this bit is only cleared by a system reset. */
    using FLASH_SECHDPCR_HDP_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access to secure HDP area granted (value: 0)
     *          - B_0x1: Access to secure HDP area denied (SECWMRx option bytes modification blocked, refer to Rules for modifying specific option bytes) (value: 1)
     */
        /** @brief Access to secure HDP area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP_ACCDIS_B_0x0 = 0;
        /** @brief Access to secure HDP area denied (SECWMRx option bytes modification blocked, refer to Rules for modifying specific option bytes) */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP_ACCDIS_B_0x1 = 1;

    /** @brief FLASH privilege configuration register */
    using FLASH_PRIFCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged protection for secure registers This bit is secure write protected. It can only be written by a secure privileged access when TrustZone is enabled (TZEN=1). */
    using FLASH_PRIFCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure Flash registers can be read and written by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Secure Flash registers can be read and written by privileged access only. (value: 1)
     */
        /** @brief Secure Flash registers can be read and written by privileged or unprivileged access. */
    constexpr std::uint32_t FLASH_PRIFCFGR_SPRIV_B_0x0 = 0;
        /** @brief Secure Flash registers can be read and written by privileged access only. */
    constexpr std::uint32_t FLASH_PRIFCFGR_SPRIV_B_0x1 = 1;

    /** @brief Privileged protection for non-secure registers */
    using FLASH_PRIFCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure Flash registers can be read and written by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Non-secure Flash registers can be read and written by privileged access only. (value: 1)
     */
        /** @brief Non-secure Flash registers can be read and written by privileged or unprivileged access. */
    constexpr std::uint32_t FLASH_PRIFCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Non-secure Flash registers can be read and written by privileged access only. */
    constexpr std::uint32_t FLASH_PRIFCFGR_NSPRIV_B_0x1 = 1;

    /** @brief FLASH privilege block based register 1 */
    using FLASH_PRIVBBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB0_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB1_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB2_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB3_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB4_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB5_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB6_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB7_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB8_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB9_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB10_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB11_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB12_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB13_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB14_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB15_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB16_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB17_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB18_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB19_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB20_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB21_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB22_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB23_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB24_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB25_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB26_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB27_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB28_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB29_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB30_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR1_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR1_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH privilege block based register 2 */
    using FLASH_PRIVBBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB0_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB1_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB2_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB3_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB4_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB5_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB6_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB7_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB8_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB9_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB10_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB11_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB12_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB13_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB14_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB15_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB16_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB17_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB18_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB19_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB20_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB21_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB22_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB23_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB24_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB25_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB26_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB27_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB28_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB29_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB30_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR2_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR2_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH privilege block based register 3 */
    using FLASH_PRIVBBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB0_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB1_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB2_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB3_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB4_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB5_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB6_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB7_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB8_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB9_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB10_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB11_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB12_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB13_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB14_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB15_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB16_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB17_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB18_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB19_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB20_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB21_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB22_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB23_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB24_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB25_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB26_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB27_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB28_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB29_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB30_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR3_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR3_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH privilege block based register 4 */
    using FLASH_PRIVBBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB0_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB1_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB2_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB3_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB4_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB5_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB6_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB7_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB8_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB9_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB10_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB11_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB12_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB13_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB14_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB15_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB16_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB17_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB18_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB19_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB20_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB21_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB22_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB23_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB24_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB25_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB26_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB27_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB28_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB29_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB30_B_0x1 = 1;

    /** @brief page privileged/unprivileged attribution Each bit is used to set one page privilege attribution in Flash. */
    using FLASH_PRIVBBR4_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in Flash accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in Flash only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in Flash accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in Flash only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBBR4_PRIVBB31_B_0x1 = 1;

}

#endif
