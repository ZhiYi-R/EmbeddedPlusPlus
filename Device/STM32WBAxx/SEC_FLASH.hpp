/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBAXX_SEC_FLASH_HPP
#define EMBEDDED_PP_STM32WBAXX_SEC_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Flash */
namespace STM32WBAxx::SEC_FLASH {

    /** @brief FLASH access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Latency These bits represent the ratio between the HCLK (AHB clock) period and the Flash memory access time. ... */
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

    /** @brief Prefetch enable This bit enables the prefetch buffer in the embedded Flash memory. */
    using FLASH_ACR_PRFTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Prefetch disabled (value: 0)
     *          - B_0x1: Prefetch enabled (value: 1)
     */
        /** @brief Prefetch disabled */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x0 = 0;
        /** @brief Prefetch enabled */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x1 = 1;

    /** @brief Low-power read mode This bit puts the Flash memory in low-power read mode. */
    using FLASH_ACR_LPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash not in low-power read mode (value: 0)
     *          - B_0x1: Flash in low-power read mode (value: 1)
     */
        /** @brief Flash not in low-power read mode */
    constexpr std::uint32_t FLASH_ACR_LPM_B_0x0 = 0;
        /** @brief Flash in low-power read mode */
    constexpr std::uint32_t FLASH_ACR_LPM_B_0x1 = 1;

    /** @brief Bank 1 power-down mode request This bit is write-protected with FLASH_PDKEY1R. This bit requests bank 1 to enter power-down mode. When bank 1 enters power-down mode, this bit is cleared by hardware and the PDKEY1R is locked. */
    using FLASH_ACR_PDREQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request for bank 1 to enter power-down mode (value: 0)
     *          - B_0x1: Bank 1 requested to enter power-down mode (value: 1)
     */
        /** @brief No request for bank 1 to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ1_B_0x0 = 0;
        /** @brief Bank 1 requested to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ1_B_0x1 = 1;

    /** @brief Bank 2 power-down mode request This bit is write-protected with FLASH_PDKEY2R. This bit requests bank 2 to enter power-down mode. When bank 2 enters power-down mode, this bit is cleared by hardware and the PDKEY2R is locked. */
    using FLASH_ACR_PDREQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request for bank 2 to enter power-down mode (value: 0)
     *          - B_0x1: Bank 2 requested to enter power-down mode (value: 1)
     */
        /** @brief No request for bank 2 to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ2_B_0x0 = 0;
        /** @brief Bank 2 requested to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ2_B_0x1 = 1;

    /** @brief Flash memory power-down mode during Sleep mode This bit determines whether the Flash memory is in power-down mode or Idle mode when the device is in Sleep mode. The Flash must not be put in power-down while a program or an erase operation is on-going. */
    using FLASH_ACR_SLEEP_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash in Idle mode during Sleep mode (value: 0)
     *          - B_0x1: Flash in power-down mode during Sleep mode (value: 1)
     */
        /** @brief Flash in Idle mode during Sleep mode */
    constexpr std::uint32_t FLASH_ACR_SLEEP_PD_B_0x0 = 0;
        /** @brief Flash in power-down mode during Sleep mode */
    constexpr std::uint32_t FLASH_ACR_SLEEP_PD_B_0x1 = 1;

    /** @brief FLASH non-secure key register */
    using FLASH_NSKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory non-secure key */
    using FLASH_NSKEYR_NSKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure key register */
    using FLASH_SECKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory secure key */
    using FLASH_SECKEYR_SECKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option key register */
    using FLASH_OPTKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option byte key */
    using FLASH_OPTKEYR_OPTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH bank 1 power-down key register */
    using FLASH_PDKEY1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 power-down key */
    using FLASH_PDKEY1R_PDKEY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH bank 2 power-down key register */
    using FLASH_PDKEY2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 power-down key */
    using FLASH_PDKEY2R_PDKEY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure status register */
    using FLASH_NSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure end of operation */
    using FLASH_NSSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure operation error */
    using FLASH_NSSR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming error This bit is set by hardware when a non-secure quad-word address to be programmed contains a value different from all 1 before programming, except if the data to write is all 0. This bit is cleared by writing 1. */
    using FLASH_NSSR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure write protection error This bit is set by hardware when an non-secure address to be erased/programmed belongs to a write-protected part (by WRP, HDP or RDP level 1) of the Flash memory. This bit is cleared by writing 1. Refer to for full conditions of error flag setting. */
    using FLASH_NSSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming alignment error This bit is set by hardware when the first word to be programmed is not aligned with a quad-word address, or the second, third or forth word does not belong to the same quad-word address. This bit is cleared by writing 1. */
    using FLASH_NSSR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure size error This bit is set by hardware when the size of the access is a byte or half-word during a non-secure program sequence. Only quad-word programming is allowed by means of successive word accesses. This bit is cleared by writing 1. */
    using FLASH_NSSR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming sequence error This bit is set by hardware when programming sequence is not correct. It is cleared by writing 1. Refer to for full conditions of error flag setting. */
    using FLASH_NSSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option write error This bit is set by hardware when the options bytes are written with an invalid configuration. It is cleared by writing 1. Refer to for full conditions of error flag setting. */
    using FLASH_NSSR_OPTWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure busy This indicates that a Flash memory secure or non-secure operation is in progress. This bit is set at the beginning of a Flash operation and reset when the operation finishes or when an error occurs. */
    using FLASH_NSSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure wait data to write This bit indicates that the Flash memory write buffer has been written by a secure or non-secure operation. It is set when the first data is stored in the buffer and cleared when the write is performed in the Flash memory. */
    using FLASH_NSSR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 lock This bit indicates that the OEM1 RDP key read during the OBL is not virgin. When set, the OEM1 RDP lock mechanism is active. */
    using FLASH_NSSR_OEM1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 lock This bit indicates that the OEM2 RDP key read during the OBL is not virgin. When set, the OEM2 RDP lock mechanism is active. */
    using FLASH_NSSR_OEM2LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 in power-down mode This bit indicates that the Flash memory bank 1 is in power-down state. It is reset when bank 1 is in normal mode or being awaken. */
    using FLASH_NSSR_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 in power-down mode This bit indicates that the Flash memory bank 2 is in power-down state. It is reset when bank 2 is in normal mode or being awaken. */
    using FLASH_NSSR_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure status register */
    using FLASH_SECSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure end of operation This bit is set by hardware when one or more Flash memory secure operation (program/erase) has been completed successfully. This bit is set only if the secure end of operation interrupts are enabled (EOPIE = 1 in FLASH_SECCR). This bit is cleared by writing 1. */
    using FLASH_SECSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure operation error This bit is set by hardware when a Flash memory secure operation (program/erase) completes unsuccessfully. This bit is set only if secure error interrupts are enabled (SECERRIE = 1). This bit is cleared by writing 1. */
    using FLASH_SECSR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming error This bit is set by hardware when a secure quad-word address to be programmed contains a value different from all 1 before programming, except if the data to write is all 0. This bit is cleared by writing 1. */
    using FLASH_SECSR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure write protection error This bit is set by hardware when an secure address to be erased/programmed belongs to a write-protected part (by WRP, PCROP, HDP or RDP level 1) of the Flash memory.This bit is cleared by writing 1. Refer to for full conditions of error flag setting. */
    using FLASH_SECSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming alignment error This bit is set by hardware when the first word to be programmed is not aligned with a quad-word address, or the second, third or forth word does not belong to the same quad-word address.This bit is cleared by writing 1. */
    using FLASH_SECSR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure size error This bit is set by hardware when the size of the access is a byte or half-word during a secure program sequence. Only quad-word programming is allowed by means of successive word accesses.This bit is cleared by writing 1. */
    using FLASH_SECSR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming sequence error This bit is set by hardware when programming sequence is not correct. It is cleared by writing 1. Refer to for full conditions of error flag setting. */
    using FLASH_SECSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure busy This bit indicates that a Flash memory secure or non-secure operation is in progress. This is set on the beginning of a Flash operation and reset when the operation finishes or when an error occurs. */
    using FLASH_SECSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure wait data to write This bit indicates that the Flash memory write buffer has been written by a secure or non-secure operation. It is set when the first data is stored in the buffer and cleared when the write is performed in the Flash memory. */
    using FLASH_SECSR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure control register */
    using FLASH_NSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming */
    using FLASH_NSCR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure Flash programming disabled (value: 0)
     *          - B_0x1: Non-secure Flash programming enabled (value: 1)
     */
        /** @brief Non-secure Flash programming disabled */
    constexpr std::uint32_t FLASH_NSCR_PG_B_0x0 = 0;
        /** @brief Non-secure Flash programming enabled */
    constexpr std::uint32_t FLASH_NSCR_PG_B_0x1 = 1;

    /** @brief Non-secure page erase */
    using FLASH_NSCR_PER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure page erase disabled (value: 0)
     *          - B_0x1: Non-secure page erase enabled (value: 1)
     */
        /** @brief Non-secure page erase disabled */
    constexpr std::uint32_t FLASH_NSCR_PER_B_0x0 = 0;
        /** @brief Non-secure page erase enabled */
    constexpr std::uint32_t FLASH_NSCR_PER_B_0x1 = 1;

    /** @brief Non-secure bank 1 mass erase This bit triggers the bank 1 non-secure mass erase (all bank 1 user pages) when set. */
    using FLASH_NSCR_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure page number selection These bits select the page to erase. ... */
    using FLASH_NSCR_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure bank selection for page erase */
    using FLASH_NSCR_BKER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 selected for non-secure page erase (value: 0)
     *          - B_0x1: Bank 2 selected for non-secure page erase (value: 1)
     */
        /** @brief Bank 1 selected for non-secure page erase */
    constexpr std::uint32_t FLASH_NSCR_BKER_B_0x0 = 0;
        /** @brief Bank 2 selected for non-secure page erase */
    constexpr std::uint32_t FLASH_NSCR_BKER_B_0x1 = 1;

    /** @brief Non-secure burst write programming mode When set, this bit selects the burst write programming mode. */
    using FLASH_NSCR_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure bank 2 mass erase This bit triggers the bank 2 non-secure mass erase (all bank 2 user pages) when set. */
    using FLASH_NSCR_MER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure start This bit triggers a non-secure erase operation when set. If MER1, MER2 and PER bits are reset and the STRT bit is set, the PGSERR bit in FLASH_NSSR is set (this condition is forbidden). This bit is set only by software and is cleared when the BSY bit is cleared in FLASH_NSSR. */
    using FLASH_NSCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Options modification start This bit triggers an options operation when set. It can not be written if OPTLOCK bit is set. This bit is set only by software, and is cleared when the BSY bit is cleared in FLASH_NSSR. */
    using FLASH_NSCR_OPTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure end of operation interrupt enable This bit enables the interrupt generation when the EOP bit in the FLASH_NSSR is set to 1. */
    using FLASH_NSCR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure EOP Interrupt disabled (value: 0)
     *          - B_0x1: Non-secure EOP Interrupt enabled (value: 1)
     */
        /** @brief Non-secure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_NSCR_EOPIE_B_0x0 = 0;
        /** @brief Non-secure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_NSCR_EOPIE_B_0x1 = 1;

    /** @brief Non-secure error interrupt enable This bit enables the interrupt generation when the OPERR bit in the FLASH_NSSR is set to 1. */
    using FLASH_NSCR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: Non-secure OPERR error interrupt enabled (value: 1)
     */
        /** @brief Non-secure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_NSCR_ERRIE_B_0x0 = 0;
        /** @brief Non-secure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_NSCR_ERRIE_B_0x1 = 1;

    /** @brief Force the option byte loading When set to 1, this bit forces the option byte reloading. This bit is cleared only when the option byte loading is complete. It cannot be written if OPTLOCK is set. */
    using FLASH_NSCR_OBL_LAUNCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Option byte loading complete (value: 0)
     *          - B_0x1: Option byte loading requested (value: 1)
     */
        /** @brief Option byte loading complete */
    constexpr std::uint32_t FLASH_NSCR_OBL_LAUNCH_B_0x0 = 0;
        /** @brief Option byte loading requested */
    constexpr std::uint32_t FLASH_NSCR_OBL_LAUNCH_B_0x1 = 1;

    /** @brief Option lock This bit is set only. When set, all bits concerning user options in FLASH_NSCR register are locked. This bit is cleared by hardware after detecting the unlock sequence. The LOCK bit in the FLASH_NSCR must be cleared before doing the unlock sequence for OPTLOCK bit. In case of an unsuccessful unlock operation, this bit remains set until the next reset. */
    using FLASH_NSCR_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure lock This bit is set only. When set, the FLASH_NSCR register is locked. It is cleared by hardware after detecting the unlock sequence in FLASH_NSKEYR register. In case of an unsuccessful unlock operation, this bit remains set until the next system reset. */
    using FLASH_NSCR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure control register */
    using FLASH_SECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming */
    using FLASH_SECCR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure Flash programming disabled (value: 0)
     *          - B_0x1: Secure Flash programming enabled (value: 1)
     */
        /** @brief Secure Flash programming disabled */
    constexpr std::uint32_t FLASH_SECCR_PG_B_0x0 = 0;
        /** @brief Secure Flash programming enabled */
    constexpr std::uint32_t FLASH_SECCR_PG_B_0x1 = 1;

    /** @brief Secure page erase */
    using FLASH_SECCR_PER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure page erase disabled (value: 0)
     *          - B_0x1: Secure page erase enabled (value: 1)
     */
        /** @brief Secure page erase disabled */
    constexpr std::uint32_t FLASH_SECCR_PER_B_0x0 = 0;
        /** @brief Secure page erase enabled */
    constexpr std::uint32_t FLASH_SECCR_PER_B_0x1 = 1;

    /** @brief Secure bank 1 mass erase This bit triggers the bank 1 secure mass erase (all bank 1 user pages) when set. */
    using FLASH_SECCR_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure page number selection These bits select the page to erase: ... */
    using FLASH_SECCR_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure bank selection for page erase */
    using FLASH_SECCR_BKER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 selected for secure page erase (value: 0)
     *          - B_0x1: Bank 2 selected for secure page erase (value: 1)
     */
        /** @brief Bank 1 selected for secure page erase */
    constexpr std::uint32_t FLASH_SECCR_BKER_B_0x0 = 0;
        /** @brief Bank 2 selected for secure page erase */
    constexpr std::uint32_t FLASH_SECCR_BKER_B_0x1 = 1;

    /** @brief Secure burst write programming mode When set, this bit selects the burst write programming mode. */
    using FLASH_SECCR_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure bank 2 mass erase This bit triggers the bank 2 secure mass erase (all bank 2 user pages) when set. */
    using FLASH_SECCR_MER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure start This bit triggers a secure erase operation when set. If MER1, MER2 and PER bits are reset and the STRT bit is set, the PGSERR in the FLASH_SECSR is set (this condition is forbidden). This bit is set only by software and is cleared when the BSY bit is cleared in FLASH_SECSR. */
    using FLASH_SECCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure End of operation interrupt enable This bit enables the interrupt generation when the EOP bit in the FLASH_SECSR is set to 1. */
    using FLASH_SECCR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure EOP Interrupt disabled (value: 0)
     *          - B_0x1: Secure EOP Interrupt enabled (value: 1)
     */
        /** @brief Secure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_SECCR_EOPIE_B_0x0 = 0;
        /** @brief Secure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_SECCR_EOPIE_B_0x1 = 1;

    /** @brief Secure error interrupt enable */
    using FLASH_SECCR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: Secure OPERR error interrupt enabled (value: 1)
     */
        /** @brief Secure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_SECCR_ERRIE_B_0x0 = 0;
        /** @brief Secure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_SECCR_ERRIE_B_0x1 = 1;

    /** @brief Secure PCROP read error interrupt enable */
    using FLASH_SECCR_RDERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory security state invert This bit inverts the Flash memory security state. */
    using FLASH_SECCR_INV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure lock This bit is set only. When set, the FLASH_SECCR register is locked. It is cleared by hardware after detecting the unlock sequence in FLASH_SECKEYR register. In case of an unsuccessful unlock operation, this bit remains set until the next system reset. */
    using FLASH_SECCR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC register */
    using FLASH_ECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail address */
    using FLASH_ECCR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail bank */
    using FLASH_ECCR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 (value: 0)
     *          - B_0x1: Bank 2 (value: 1)
     */
        /** @brief Bank 1 */
    constexpr std::uint32_t FLASH_ECCR_BK_ECC_B_0x0 = 0;
        /** @brief Bank 2 */
    constexpr std::uint32_t FLASH_ECCR_BK_ECC_B_0x1 = 1;

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
    /** @brief Interrupted operation address This field indicates which address in the Flash memory was accessed when reset occurred. The address is given by bank from address 0x0 0000 to 0xF FFF0. */
    using FLASH_OPSR_ADDR_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation bank This bit indicates which Flash memory bank was accessed when reset occurred */
    using FLASH_OPSR_BK_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 (value: 0)
     *          - B_0x1: Bank 2 (value: 1)
     */
        /** @brief Bank 1 */
    constexpr std::uint32_t FLASH_OPSR_BK_OP_B_0x0 = 0;
        /** @brief Bank 2 */
    constexpr std::uint32_t FLASH_OPSR_BK_OP_B_0x1 = 1;

    /** @brief Operation in system Flash memory interrupted This bit indicates that the reset occurred during an operation in the system Flash memory. */
    using FLASH_OPSR_SYSF_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory operation code This field indicates which Flash memory operation has been interrupted by a system reset: */
    using FLASH_OPSR_CODE_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Flash operation interrupted by previous reset (value: 0)
     *          - B_0x1: Single write operation interrupted (value: 1)
     *          - B_0x2: Burst write operation interrupted (value: 2)
     *          - B_0x3: Page erase operation interrupted (value: 3)
     *          - B_0x4: Bank erase operation interrupted (value: 4)
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
        /** @brief Bank erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x4 = 4;
        /** @brief Mass erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x5 = 5;
        /** @brief Option change operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x6 = 6;

    /** @brief FLASH option register */
    using FLASH_OPTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Readout protection level Others: Level 1 (memories readout protection active) Note: Refer to for more details. */
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

    /** @brief BOR reset level These bits contain the VDD supply level threshold that activates/releases the reset. */
    using FLASH_OPTR_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR level 0 (reset level threshold around 1.7 V) (value: 0)
     *          - B_0x1: BOR level 1 (reset level threshold around 2.0 V) (value: 1)
     *          - B_0x2: BOR level 2 (reset level threshold around 2.2 V) (value: 2)
     *          - B_0x3: BOR level 3 (reset level threshold around 2.5 V) (value: 3)
     *          - B_0x4: BOR level 4 (reset level threshold around 2.8 V) (value: 4)
     */
        /** @brief BOR level 0 (reset level threshold around 1.7 V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x0 = 0;
        /** @brief BOR level 1 (reset level threshold around 2.0 V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x1 = 1;
        /** @brief BOR level 2 (reset level threshold around 2.2 V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x2 = 2;
        /** @brief BOR level 3 (reset level threshold around 2.5 V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x3 = 3;
        /** @brief BOR level 4 (reset level threshold around 2.8 V) */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x4 = 4;

    /** @brief Reset generation in Stop mode */
    using FLASH_OPTR_nRST_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Stop mode (value: 0)
     *          - B_0x1: No reset generated when entering the Stop mode (value: 1)
     */
        /** @brief Reset generated when entering the Stop mode */
    constexpr std::uint32_t FLASH_OPTR_nRST_STOP_B_0x0 = 0;
        /** @brief No reset generated when entering the Stop mode */
    constexpr std::uint32_t FLASH_OPTR_nRST_STOP_B_0x1 = 1;

    /** @brief Reset generation in Standby mode */
    using FLASH_OPTR_nRST_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Standby mode (value: 0)
     *          - B_0x1: No reset generate when entering the Standby mode (value: 1)
     */
        /** @brief Reset generated when entering the Standby mode */
    constexpr std::uint32_t FLASH_OPTR_nRST_STDBY_B_0x0 = 0;
        /** @brief No reset generate when entering the Standby mode */
    constexpr std::uint32_t FLASH_OPTR_nRST_STDBY_B_0x1 = 1;

    /** @brief Reset generation in Shutdown mode */
    using FLASH_OPTR_nRST_SHDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Shutdown mode (value: 0)
     *          - B_0x1: No reset generated when entering the Shutdown mode (value: 1)
     */
        /** @brief Reset generated when entering the Shutdown mode */
    constexpr std::uint32_t FLASH_OPTR_nRST_SHDW_B_0x0 = 0;
        /** @brief No reset generated when entering the Shutdown mode */
    constexpr std::uint32_t FLASH_OPTR_nRST_SHDW_B_0x1 = 1;

    /** @brief SRAM1, SRAM3 and SRAM4 erase upon system reset */
    using FLASH_OPTR_SRAM1345_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1, SRAM3 and SRAM4 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM1, SRAM3 and SRAM4 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM1, SRAM3 and SRAM4 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM1345_RST_B_0x0 = 0;
        /** @brief SRAM1, SRAM3 and SRAM4 not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM1345_RST_B_0x1 = 1;

    /** @brief Independent watchdog selection */
    using FLASH_OPTR_IWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware independent watchdog selected (value: 0)
     *          - B_0x1: Software independent watchdog selected (value: 1)
     */
        /** @brief Hardware independent watchdog selected */
    constexpr std::uint32_t FLASH_OPTR_IWDG_SW_B_0x0 = 0;
        /** @brief Software independent watchdog selected */
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

    /** @brief Swap banks */
    using FLASH_OPTR_SWAP_BANK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 and bank 2 addresses not swapped (value: 0)
     *          - B_0x1: Bank 1 and bank 2 addresses swapped (value: 1)
     */
        /** @brief Bank 1 and bank 2 addresses not swapped */
    constexpr std::uint32_t FLASH_OPTR_SWAP_BANK_B_0x0 = 0;
        /** @brief Bank 1 and bank 2 addresses swapped */
    constexpr std::uint32_t FLASH_OPTR_SWAP_BANK_B_0x1 = 1;

    /** @brief Dual-bank on 1-Mbyte and 512-Kbyte Flash memory devices */
    using FLASH_OPTR_DUALBANK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single bank Flash with contiguous address in bank 1 (value: 0)
     *          - B_0x1: Dual-bank Flash with contiguous addresses (value: 1)
     */
        /** @brief Single bank Flash with contiguous address in bank 1 */
    constexpr std::uint32_t FLASH_OPTR_DUALBANK_B_0x0 = 0;
        /** @brief Dual-bank Flash with contiguous addresses */
    constexpr std::uint32_t FLASH_OPTR_DUALBANK_B_0x1 = 1;

    /** @brief Backup RAM ECC detection and correction enable */
    using FLASH_OPTR_BKPRAM_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM ECC check enabled (value: 0)
     *          - B_0x1: Backup RAM ECC check disabled (value: 1)
     */
        /** @brief Backup RAM ECC check enabled */
    constexpr std::uint32_t FLASH_OPTR_BKPRAM_ECC_B_0x0 = 0;
        /** @brief Backup RAM ECC check disabled */
    constexpr std::uint32_t FLASH_OPTR_BKPRAM_ECC_B_0x1 = 1;

    /** @brief SRAM3 ECC detection and correction enable */
    using FLASH_OPTR_SRAM3_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 ECC check enabled (value: 0)
     *          - B_0x1: SRAM3 ECC check disabled (value: 1)
     */
        /** @brief SRAM3 ECC check enabled */
    constexpr std::uint32_t FLASH_OPTR_SRAM3_ECC_B_0x0 = 0;
        /** @brief SRAM3 ECC check disabled */
    constexpr std::uint32_t FLASH_OPTR_SRAM3_ECC_B_0x1 = 1;

    /** @brief SRAM2 ECC detection and correction enable */
    using FLASH_OPTR_SRAM2_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 ECC check enabled (value: 0)
     *          - B_0x1: SRAM2 ECC check disabled (value: 1)
     */
        /** @brief SRAM2 ECC check enabled */
    constexpr std::uint32_t FLASH_OPTR_SRAM2_ECC_B_0x0 = 0;
        /** @brief SRAM2 ECC check disabled */
    constexpr std::uint32_t FLASH_OPTR_SRAM2_ECC_B_0x1 = 1;

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
    using FLASH_OPTR_nSWBOOT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOOT0 taken from the option bit nBOOT0 (value: 0)
     *          - B_0x1: BOOT0 taken from PH3/BOOT0 pin (value: 1)
     */
        /** @brief BOOT0 taken from the option bit nBOOT0 */
    constexpr std::uint32_t FLASH_OPTR_nSWBOOT0_B_0x0 = 0;
        /** @brief BOOT0 taken from PH3/BOOT0 pin */
    constexpr std::uint32_t FLASH_OPTR_nSWBOOT0_B_0x1 = 1;

    /** @brief nBOOT0 option bit */
    using FLASH_OPTR_nBOOT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: nBOOT0 = 0 (value: 0)
     *          - B_0x1: nBOOT0 = 1 (value: 1)
     */
        /** @brief nBOOT0 = 0 */
    constexpr std::uint32_t FLASH_OPTR_nBOOT0_B_0x0 = 0;
        /** @brief nBOOT0 = 1 */
    constexpr std::uint32_t FLASH_OPTR_nBOOT0_B_0x1 = 1;

    /** @brief PA15 pull-up enable */
    using FLASH_OPTR_PA15_PUPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB power delivery dead-battery enabled/TDI pull-up deactivated (value: 0)
     *          - B_0x1: USB power delivery dead-battery disabled/TDI pull-up activated (value: 1)
     */
        /** @brief USB power delivery dead-battery enabled/TDI pull-up deactivated */
    constexpr std::uint32_t FLASH_OPTR_PA15_PUPEN_B_0x0 = 0;
        /** @brief USB power delivery dead-battery disabled/TDI pull-up activated */
    constexpr std::uint32_t FLASH_OPTR_PA15_PUPEN_B_0x1 = 1;

    /** @brief High-speed IO at low VDD voltage configuration bit This bit can be set only with VDD below 2.5V */
    using FLASH_OPTR_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.5 V) (value: 0)
     *          - B_0x1: High-speed IO at low VDD voltage feature enabled (VDD remains below 2.5 V) (value: 1)
     */
        /** @brief High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.5 V) */
    constexpr std::uint32_t FLASH_OPTR_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDD voltage feature enabled (VDD remains below 2.5 V) */
    constexpr std::uint32_t FLASH_OPTR_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low VDDIO2 voltage configuration bit This bit can be set only with VDDIO2 below 2.5 V. */
    using FLASH_OPTR_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDDIO2 voltage feature disabled (VDDIO2 can exceed 2.5 V) (value: 0)
     *          - B_0x1: High-speed IO at low VDDIO2 voltage feature enabled (VDDIO2 remains below 2.5 V) (value: 1)
     */
        /** @brief High-speed IO at low VDDIO2 voltage feature disabled (VDDIO2 can exceed 2.5 V) */
    constexpr std::uint32_t FLASH_OPTR_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDDIO2 voltage feature enabled (VDDIO2 remains below 2.5 V) */
    constexpr std::uint32_t FLASH_OPTR_IO_VDDIO2_HSLV_B_0x1 = 1;

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

    /** @brief FLASH non-secure boot address 0 register */
    using FLASH_NSBOOTADD0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure boot base address 0 The non-secure boot memory address can be programmed to any address in the valid address range with a granularity of 128 bytes. These bits correspond to address [31:7]. The NSBOOTADD0 option bytes are selected following the BOOT0 pin or nSWBOOT0 state. Examples: NSBOOTADD0[24:0] = 0x0100000: Boot from non-secure Flash memory (0x0800 0000) NSBOOTADD0[24:0] = 0x017F200: Boot from system memory bootloader (0x0BF9 0000) NSBOOTADD0[24:0] = 0x0400000: Boot from non-secure SRAM1 on S-Bus (0x2000 0000) */
    using FLASH_NSBOOTADD0R_NSBOOTADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure boot address 1 register */
    using FLASH_NSBOOTADD1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure boot address 1 The non-secure boot memory address can be programmed to any address in the valid address range with a granularity of 128 bytes. These bits correspond to address [31:7]. The NSBOOTADD0 option bytes are selected following the BOOT0 pin or nSWBOOT0 state. Examples: NSBOOTADD1[24:0] = 0x0100000: Boot from non-secure Flash memory (0x0800 0000) NSBOOTADD1[24:0] = 0x017F200: Boot from system memory bootloader (0x0BF9 0000) NSBOOTADD1[24:0] = 0x0400000: Boot from non-secure SRAM1 on S-Bus (0x2000 0000) */
    using FLASH_NSBOOTADD1R_NSBOOTADD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot address 0 register */
    using FLASH_SECBOOTADD0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot lock When set, the boot is always forced to base address value programmed in SECBOOTADD0[24:0] option bytes whatever the boot selection option. When set, this bit can only be cleared by an RDP at level 0. */
    using FLASH_SECBOOTADD0R_BOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure boot base address 0 The secure boot memory address can be programmed to any address in the valid address range with a granularity of 128 bytes. This bits correspond to address [31:7] The SECBOOTADD0 option bytes are selected following the BOOT0 pin or nSWBOOT0 state. Examples: SECBOOTADD0[24:0] = 0x018 0000: Boot from secure Flash memory (0x0C00 0000) SECBOOTADD0[24:0] = 0x01F F000: Boot from RSS (0x0FF8 0000) SECBOOTADD0[24:0] = 0x060 0000: Boot from secure SRAM1 on S-Bus (0x3000 0000) */
    using FLASH_SECBOOTADD0R_SECBOOTADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark1 register 1 */
    using FLASH_SECWM1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start page of first secure area This field contains the first page of the secure area in bank 1. */
    using FLASH_SECWM1R1_SECWM1_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of first secure area This field contains the last page of the secure area in bank 1. */
    using FLASH_SECWM1R1_SECWM1_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark1 register 2 */
    using FLASH_SECWM1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of first hide protection area This field contains the last page of the HDP area in bank 1. */
    using FLASH_SECWM1R2_HDP1_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hide protection first area enable */
    using FLASH_SECWM1R2_HDP1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HDP area 1 (value: 0)
     *          - B_0x1: HDP first area enabled (value: 1)
     */
        /** @brief No HDP area 1 */
    constexpr std::uint32_t FLASH_SECWM1R2_HDP1EN_B_0x0 = 0;
        /** @brief HDP first area enabled */
    constexpr std::uint32_t FLASH_SECWM1R2_HDP1EN_B_0x1 = 1;

    /** @brief FLASH WRP1 area A address register */
    using FLASH_WRP1AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief bank 1 WPR first area A start page This field contains the first page of the first WPR area for bank 1. */
    using FLASH_WRP1AR_WRP1A_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WPR first area A end page This field contains the last page of the first WPR area in bank 1. */
    using FLASH_WRP1AR_WRP1A_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WPR first area A unlock */
    using FLASH_WRP1AR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRP1A start and end pages locked (value: 0)
     *          - B_0x1: WRP1A start and end pages unlocked (value: 1)
     */
        /** @brief WRP1A start and end pages locked */
    constexpr std::uint32_t FLASH_WRP1AR_UNLOCK_B_0x0 = 0;
        /** @brief WRP1A start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRP1AR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH WRP1 area B address register */
    using FLASH_WRP1BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WRP second area B start page This field contains the first page of the second WRP area for bank 1. */
    using FLASH_WRP1BR_WRP1B_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WRP second area B end page This field contains the last page of the second WRP area in bank 1. */
    using FLASH_WRP1BR_WRP1B_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WPR second area B unlock */
    using FLASH_WRP1BR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRP1B start and end pages locked (value: 0)
     *          - B_0x1: WRP1B start and end pages unlocked (value: 1)
     */
        /** @brief WRP1B start and end pages locked */
    constexpr std::uint32_t FLASH_WRP1BR_UNLOCK_B_0x0 = 0;
        /** @brief WRP1B start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRP1BR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH secure watermark2 register 1 */
    using FLASH_SECWM2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start page of second secure area This field contains the first page of the secure area in bank 2. */
    using FLASH_SECWM2R1_SECWM2_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of second secure area This field contains the last page of the secure area in bank 2. */
    using FLASH_SECWM2R1_SECWM2_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark2 register 2 */
    using FLASH_SECWM2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of hide protection second area HDP2_PEND contains the last page of the HDP area in bank 2. */
    using FLASH_SECWM2R2_HDP2_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hide protection second area enable */
    using FLASH_SECWM2R2_HDP2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HDP area 2 (value: 0)
     *          - B_0x1: HDP second area is enabled. (value: 1)
     */
        /** @brief No HDP area 2 */
    constexpr std::uint32_t FLASH_SECWM2R2_HDP2EN_B_0x0 = 0;
        /** @brief HDP second area is enabled. */
    constexpr std::uint32_t FLASH_SECWM2R2_HDP2EN_B_0x1 = 1;

    /** @brief FLASH WPR2 area A address register */
    using FLASH_WRP2AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR first area A start page This field contains the first page of the first WRP area for bank 2. */
    using FLASH_WRP2AR_WRP2A_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR first area A end page This field contains the last page of the first WRP area in bank 2. */
    using FLASH_WRP2AR_WRP2A_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR first area A unlock */
    using FLASH_WRP2AR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRP2A start and end pages locked (value: 0)
     *          - B_0x1: WRP2A start and end pages unlocked (value: 1)
     */
        /** @brief WRP2A start and end pages locked */
    constexpr std::uint32_t FLASH_WRP2AR_UNLOCK_B_0x0 = 0;
        /** @brief WRP2A start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRP2AR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH WPR2 area B address register */
    using FLASH_WRP2BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR second area B start page This field contains the first page of the second WRP area for bank 2. */
    using FLASH_WRP2BR_WRP2B_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR second area B end page This field contains the last page of the second WRP area in bank 2. */
    using FLASH_WRP2BR_WRP2B_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR second area B unlock */
    using FLASH_WRP2BR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRP2B start and end pages locked (value: 0)
     *          - B_0x1: WRP2B start and end pages unlocked (value: 1)
     */
        /** @brief WRP2B start and end pages locked */
    constexpr std::uint32_t FLASH_WRP2BR_UNLOCK_B_0x0 = 0;
        /** @brief WRP2B start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRP2BR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH OEM1 key register 1 */
    using FLASH_OEM1KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 least significant bytes key */
    using FLASH_OEM1KEYR1_OEM1KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM1 key register 2 */
    using FLASH_OEM1KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 most significant bytes key */
    using FLASH_OEM1KEYR2_OEM1KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM2 key register 1 */
    using FLASH_OEM2KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 least significant bytes key */
    using FLASH_OEM2KEYR1_OEM2KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM2 key register 2 */
    using FLASH_OEM2KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 most significant bytes key */
    using FLASH_OEM2KEYR2_OEM2KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 1 */
    using FLASH_SEC1BBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR1_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 2 */
    using FLASH_SEC1BBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR2_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 3 */
    using FLASH_SEC1BBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR3_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 4 */
    using FLASH_SEC1BBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC1BBR4_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 1 */
    using FLASH_SEC2BBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR1_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 2 */
    using FLASH_SEC2BBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR2_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 3 */
    using FLASH_SEC2BBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR3_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 4 */
    using FLASH_SEC2BBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page secure/non-secure attribution */
    using FLASH_SEC2BBR4_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure HDP control register */
    using FLASH_SECHDPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP1 area access disable When set, this bit is only cleared by a system reset. */
    using FLASH_SECHDPCR_HDP1_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access to HDP1 area granted (value: 0)
     *          - B_0x1: Access to HDP1 area denied (SECWM1Ry option bytes modification blocked - refer to ) (value: 1)
     */
        /** @brief Access to HDP1 area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1_ACCDIS_B_0x0 = 0;
        /** @brief Access to HDP1 area denied (SECWM1Ry option bytes modification blocked - refer to ) */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1_ACCDIS_B_0x1 = 1;

    /** @brief HDP2 area access disable When set, this bit is only cleared by a system reset. */
    using FLASH_SECHDPCR_HDP2_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access to HDP2 area granted (value: 0)
     *          - B_0x1: Access to HDP2 area denied (SECWM2Ry option bytes modification bocked -refer to ) (value: 1)
     */
        /** @brief Access to HDP2 area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP2_ACCDIS_B_0x0 = 0;
        /** @brief Access to HDP2 area denied (SECWM2Ry option bytes modification bocked -refer to ) */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP2_ACCDIS_B_0x1 = 1;

    /** @brief FLASH privilege configuration register */
    using FLASH_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged protection for secure registers This bit can be accessed only when TrustZone is enabled (TZEN = 1). This bit can be read by both privileged or unprivileged, secure and non-secure access. The SPRIV bit can be written only by a secure privileged access. A non-secure write access on SPRIV bit is ignored. A secure unprivileged write access on SPRIV bit is ignored. */
    using FLASH_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure Flash registers can be read and written by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Secure Flash registers can be read and written by privileged access only. (value: 1)
     */
        /** @brief Secure Flash registers can be read and written by privileged or unprivileged access. */
    constexpr std::uint32_t FLASH_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Secure Flash registers can be read and written by privileged access only. */
    constexpr std::uint32_t FLASH_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief Privileged protection for non-secure registers This bit can be read by both privileged or unprivileged, secure and non-secure access. The NSPRIV bit can be written by a secure or non-secure privileged access. A secure or non-secure unprivileged write access on NSPRIV bit is ignored. */
    using FLASH_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure Flash registers can be read and written by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Non-secure Flash registers can be read and written by privileged access only. (value: 1)
     */
        /** @brief Non-secure Flash registers can be read and written by privileged or unprivileged access. */
    constexpr std::uint32_t FLASH_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Non-secure Flash registers can be read and written by privileged access only. */
    constexpr std::uint32_t FLASH_PRIVCFGR_NSPRIV_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 1 register 1 */
    using FLASH_PRIV1BBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR1_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 2 */
    using FLASH_PRIV1BBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR2_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 3 */
    using FLASH_PRIV1BBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR3_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 4 */
    using FLASH_PRIV1BBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV1BBR4_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 1 */
    using FLASH_PRIV2BBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR1_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 2 */
    using FLASH_PRIV2BBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR2_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 3 */
    using FLASH_PRIV2BBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR3_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 4 */
    using FLASH_PRIV2BBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief page privileged/unprivileged attribution */
    using FLASH_PRIV2BBR4_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
