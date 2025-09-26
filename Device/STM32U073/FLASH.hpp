/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U073_FLASH_HPP
#define EMBEDDED_PP_STM32U073_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Mamba FLASH register block */
namespace STM32U073::FLASH {

    /** @brief FLASH access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory access latency The value in this bitfield represents the number of CPU wait states when accessing the flash memory. Other: Reserved A new write into the bitfield becomes effective when it returns the same value upon read. */
    using FLASH_ACR_LATENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Zero wait states (value: 0)
     *          - B_0x1: One wait state (value: 1)
     */
        /** @brief Zero wait states */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x0 = 0;
        /** @brief One wait state */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x1 = 1;

    /** @brief CPU Prefetch enable */
    using FLASH_ACR_PRFTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CPU Prefetch disabled (value: 0)
     *          - B_0x1: CPU Prefetch enabled (value: 1)
     */
        /** @brief CPU Prefetch disabled */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x0 = 0;
        /** @brief CPU Prefetch enabled */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x1 = 1;

    /** @brief CPU Instruction cache enable */
    using FLASH_ACR_ICEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CPU Instruction cache is disabled (value: 0)
     *          - B_0x1: CPU Instruction cache is enabled (value: 1)
     */
        /** @brief CPU Instruction cache is disabled */
    constexpr std::uint32_t FLASH_ACR_ICEN_B_0x0 = 0;
        /** @brief CPU Instruction cache is enabled */
    constexpr std::uint32_t FLASH_ACR_ICEN_B_0x1 = 1;

    /** @brief CPU Instruction cache reset This bit can be written only when the instruction cache is disabled. */
    using FLASH_ACR_ICRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CPU Instruction cache is not reset (value: 0)
     *          - B_0x1: CPU Instruction cache is reset (value: 1)
     */
        /** @brief CPU Instruction cache is not reset */
    constexpr std::uint32_t FLASH_ACR_ICRST_B_0x0 = 0;
        /** @brief CPU Instruction cache is reset */
    constexpr std::uint32_t FLASH_ACR_ICRST_B_0x1 = 1;

    /** @brief Main flash memory area empty This bit indicates whether the first location of the main flash memory area is erased or has a programmed value. The bit can be set and reset by software. */
    using FLASH_ACR_EMPTY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Main flash memory area programmed (value: 0)
     *          - B_0x1: Main flash memory area empty (value: 1)
     */
        /** @brief Main flash memory area programmed */
    constexpr std::uint32_t FLASH_ACR_EMPTY_B_0x0 = 0;
        /** @brief Main flash memory area empty */
    constexpr std::uint32_t FLASH_ACR_EMPTY_B_0x1 = 1;

    /** @brief Debug access software enable Software may use this bit to enable/disable the debugger read access. */
    using FLASH_ACR_DBG_SWEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Debugger disabled (value: 0)
     *          - B_0x1: Debugger enabled (value: 1)
     */
        /** @brief Debugger disabled */
    constexpr std::uint32_t FLASH_ACR_DBG_SWEN_B_0x0 = 0;
        /** @brief Debugger enabled */
    constexpr std::uint32_t FLASH_ACR_DBG_SWEN_B_0x1 = 1;

    /** @brief FLASH key register */
    using FLASH_KEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH key The following values must be written consecutively to unlock the FLASH control register (FLASH_CR), thus enabling programming/erasing operations: KEY1: 0x4567 0123 KEY2: 0xCDEF 89AB */
    using FLASH_KEYR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option key register */
    using FLASH_OPTKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option byte key The following values must be written consecutively to unlock the flash memory option registers, enabling option byte programming/erasing operations: KEY1: 0x0819 2A3B KEY2: 0x4C5D 6E7F */
    using FLASH_OPTKEYR_OPTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH status register */
    using FLASH_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of operation Set by hardware when one or more flash memory operation (programming / erase) has been completed successfully. This bit is set only if the end of operation interrupts are enabled (EOPIE=1). Cleared by writing 1. */
    using FLASH_SR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation error Set by hardware when a flash memory operation (program / erase) completes unsuccessfully. This bit is set only if error interrupts are enabled (ERRIE=1). Cleared by writing 1. */
    using FLASH_SR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programming error Set by hardware when a double-word address to be programmed contains a value different from '0xFFFF FFFF' before programming, except if the data to write is '0x0000 0000'. Cleared by writing 1. */
    using FLASH_SR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write protection error Set by hardware when an address to be erased/programmed belongs to a write-protected part (by WRP, PCROP or RDP Level 1) of the flash memory. Cleared by writing 1. */
    using FLASH_SR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programming alignment error Set by hardware when the data to program cannot be contained in the same double word (64-bit) flash memory in case of standard programming, or if there is a change of page during fast programming. Cleared by writing 1. */
    using FLASH_SR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size error Set by hardware when the size of the access is a byte or half-word during a program or a fast program sequence. Only double word programming is allowed (consequently: word access). Cleared by writing 1. */
    using FLASH_SR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programming sequence error Set by hardware when a write access to the flash memory is performed by the code while PG or FSTPG have not been set previously. Set also by hardware when PROGERR, SIZERR, PGAERR, WRPERR, MISSERR or FASTERR is set due to a previous programming error. Cleared by writing 1. */
    using FLASH_SR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast programming data miss error In Fast programming mode, 16 double words (128 bytes) must be sent to flash memory successively, and the new data must be sent to the logic control before the current data is fully programmed. MISSERR is set by hardware when the new data is not present in time. Cleared by writing 1. */
    using FLASH_SR_MISSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast programming error Set by hardware when a fast programming sequence (activated by FSTPG) is interrupted due to an error (alignment, size, write protection or data miss). The corresponding status bit (PGAERR, SIZERR, WRPERR or MISSERR) is set at the same time. Cleared by writing 1. */
    using FLASH_SR_FASTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PCROP read error Set by hardware when an address to be read belongs to a read protected area of the flash memory (PCROP protection). An interrupt is generated if RDERRIE is set in FLASH_CR. Cleared by writing 1. */
    using FLASH_SR_RDERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option and Engineering bits loading validity error */
    using FLASH_SR_OPTVERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy This flag indicates that a flash memory operation requested by FLASH control register (FLASH_CR) is in progress. This bit is set at the beginning of the flash memory operation, and cleared when the operation finishes or when an error occurs. */
    using FLASH_SR_BSY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programming or erase configuration busy. This flag is set and cleared by hardware. It is set when the first word is sent for program or when setting the STRT bit of FLASH control register (FLASH_CR) for erase. It is cleared when the flash memory program or erase operation completes or ends with an error. When set, launching any other operation through the FLASH control register (FLASH_CR) is impossible, and must be postponed (a programming or erase operation is ongoing). When cleared, the program and erase settings in the FLASH control register (FLASH_CR) can be modified. */
    using FLASH_SR_CFGBSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH control register */
    using FLASH_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory programming enable */
    using FLASH_CR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t FLASH_CR_PG_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t FLASH_CR_PG_B_0x1 = 1;

    /** @brief Page erase enable */
    using FLASH_CR_PER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t FLASH_CR_PER_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t FLASH_CR_PER_B_0x1 = 1;

    /** @brief Mass erase When set, this bit triggers the mass erase, that is, all user pages. */
    using FLASH_CR_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page number selection These bits select the page to erase: ... Note: Values corresponding to addresses outside the main memory are not allowed. */
    using FLASH_CR_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     *          - B_0xF: page 15 (value: 15)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_CR_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_CR_PNB_B_0x1 = 1;
        /** @brief page 15 */
    constexpr std::uint32_t FLASH_CR_PNB_B_0xF = 15;

    /** @brief Start erase operation This bit triggers an erase operation when set. This bit is possible to set only by software and to clear only by hardware. The hardware clears it when one of BSY1 and BSY2 flags in the FLASH_SR register transits to zero. */
    using FLASH_CR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of modification of option bytes This bit triggers an options operation when set. This bit is set only by software, and is cleared when the BSY1 bit is cleared in FLASH_SR. */
    using FLASH_CR_OPTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast programming enable */
    using FLASH_CR_FSTPG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t FLASH_CR_FSTPG_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t FLASH_CR_FSTPG_B_0x1 = 1;

    /** @brief End-of-operation interrupt enable This bit enables the interrupt generation upon setting the EOP flag in the FLASH_SR register. */
    using FLASH_CR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t FLASH_CR_EOPIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t FLASH_CR_EOPIE_B_0x1 = 1;

    /** @brief Error interrupt enable This bit enables the interrupt generation upon setting the OPERR flag in the FLASH_SR register. */
    using FLASH_CR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t FLASH_CR_ERRIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t FLASH_CR_ERRIE_B_0x1 = 1;

    /** @brief PCROP read error interrupt enable This bit enables the interrupt generation upon setting the RDERR flag in the FLASH_SR register. */
    using FLASH_CR_RDERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t FLASH_CR_RDERRIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t FLASH_CR_RDERRIE_B_0x1 = 1;

    /** @brief Option byte load launch When set, this bit triggers the load of option bytes into option registers. It is automatically cleared upon the completion of the load. The high state of the bit indicates pending option byte load. The bit cannot be cleared by software. It cannot be written as long as OPTLOCK is set. */
    using FLASH_CR_OBL_LAUNCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Securable memory area protection enable This bit enables the protection on securable area, provided that a non-null securable memory area size (SEC_SIZE[4:0]) is defined in option bytes. This bit is possible to set only by software and to clear only through a system reset. */
    using FLASH_CR_SEC_PROT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (securable area accessible) (value: 0)
     *          - B_0x1: Enable (securable area not accessible) (value: 1)
     */
        /** @brief Disable (securable area accessible) */
    constexpr std::uint32_t FLASH_CR_SEC_PROT_B_0x0 = 0;
        /** @brief Enable (securable area not accessible) */
    constexpr std::uint32_t FLASH_CR_SEC_PROT_B_0x1 = 1;

    /** @brief Options Lock This bit is set only. When set, all bits concerning user option in FLASH_CR register and so option page are locked. This bit is cleared by hardware after detecting the unlock sequence. The LOCK bit must be cleared before doing the unlock sequence for OPTLOCK bit. In case of an unsuccessful unlock operation, this bit remains set until the next reset. */
    using FLASH_CR_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH_CR Lock This bit is set only. When set, the FLASH_CR register is locked. It is cleared by hardware after detecting the unlock sequence. In case of an unsuccessful unlock operation, this bit remains set until the next system reset. */
    using FLASH_CR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC register */
    using FLASH_ECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail double-word address offset In case of ECC error or ECC correction detected, this bitfield contains double-word offset (multiple of 64 bits) to main Flash memory. */
    using FLASH_ECCR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System Flash memory ECC fail This bit indicates that the ECC error correction or double ECC error detection is located in the system Flash memory. */
    using FLASH_ECCR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC correction interrupt enable */
    using FLASH_ECCR_ECCCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECCC interrupt disabled (value: 0)
     *          - B_0x1: ECCC interrupt enabled (value: 1)
     */
        /** @brief ECCC interrupt disabled */
    constexpr std::uint32_t FLASH_ECCR_ECCCIE_B_0x0 = 0;
        /** @brief ECCC interrupt enabled */
    constexpr std::uint32_t FLASH_ECCR_ECCCIE_B_0x1 = 1;

    /** @brief ECC correction Set by hardware when one ECC error has been detected and corrected. An interrupt is generated if ECCIE is set. Cleared by writing 1. */
    using FLASH_ECCR_ECCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC detection Set by hardware when two ECC errors have been detected. When this bit is set, a NMI is generated. Cleared by writing 1. */
    using FLASH_ECCR_ECCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option register */
    using FLASH_OPTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read protection level Other: Level 1, memories read protection active */
    using FLASH_OPTR_RDP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xAA: Level 0, read protection not active (value: 170)
     *          - B_0xCC: Level 2, chip read protection active (value: 204)
     */
        /** @brief Level 0, read protection not active */
    constexpr std::uint32_t FLASH_OPTR_RDP_B_0xAA = 170;
        /** @brief Level 2, chip read protection active */
    constexpr std::uint32_t FLASH_OPTR_RDP_B_0xCC = 204;

    /** @brief BOR reset level */
    using FLASH_OPTR_BORR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR rising level 1 with threshold around 2.1 V (value: 0)
     *          - B_0x1: BOR rising level 2 with threshold around 2.3 V (value: 1)
     *          - B_0x2: BOR rising level 3 with threshold around 2.6 V (value: 2)
     *          - B_0x3: BOR rising level 4 with threshold around 2.9 V (value: 3)
     */
        /** @brief BOR rising level 1 with threshold around 2.1 V */
    constexpr std::uint32_t FLASH_OPTR_BORR_LEV_B_0x0 = 0;
        /** @brief BOR rising level 2 with threshold around 2.3 V */
    constexpr std::uint32_t FLASH_OPTR_BORR_LEV_B_0x1 = 1;
        /** @brief BOR rising level 3 with threshold around 2.6 V */
    constexpr std::uint32_t FLASH_OPTR_BORR_LEV_B_0x2 = 2;
        /** @brief BOR rising level 4 with threshold around 2.9 V */
    constexpr std::uint32_t FLASH_OPTR_BORR_LEV_B_0x3 = 3;

    /** @brief Reset generated when entering Stop mode */
    using FLASH_OPTR_NRST_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Stop mode (value: 0)
     *          - B_0x1: No reset generated when entering the Stop mode (value: 1)
     */
        /** @brief Reset generated when entering the Stop mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STOP_B_0x0 = 0;
        /** @brief No reset generated when entering the Stop mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STOP_B_0x1 = 1;

    /** @brief Reset generated when entering Standby mode */
    using FLASH_OPTR_NRST_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Standby mode (value: 0)
     *          - B_0x1: No reset generate when entering the Standby mode (value: 1)
     */
        /** @brief Reset generated when entering the Standby mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STDBY_B_0x0 = 0;
        /** @brief No reset generate when entering the Standby mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STDBY_B_0x1 = 1;

    /** @brief Reset generated when entering Shutdown mode */
    using FLASH_OPTR_NRST_SHDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Shutdown mode (value: 0)
     *          - B_0x1: No reset generated when entering the Shutdown mode (value: 1)
     */
        /** @brief Reset generated when entering the Shutdown mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_SHDW_B_0x0 = 0;
        /** @brief No reset generated when entering the Shutdown mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_SHDW_B_0x1 = 1;

    /** @brief Independent watchdog selection */
    using FLASH_OPTR_IWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware independent watchdog (value: 0)
     *          - B_0x1: Software independent watchdog (value: 1)
     */
        /** @brief Hardware independent watchdog */
    constexpr std::uint32_t FLASH_OPTR_IWDG_SW_B_0x0 = 0;
        /** @brief Software independent watchdog */
    constexpr std::uint32_t FLASH_OPTR_IWDG_SW_B_0x1 = 1;

    /** @brief Independent watchdog counter freeze in Stop mode */
    using FLASH_OPTR_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog counter is frozen in Stop mode (value: 0)
     *          - B_0x1: Independent watchdog counter is running in Stop mode (value: 1)
     */
        /** @brief Independent watchdog counter is frozen in Stop mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STOP_B_0x0 = 0;
        /** @brief Independent watchdog counter is running in Stop mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STOP_B_0x1 = 1;

    /** @brief Independent watchdog counter freeze in Standby mode */
    using FLASH_OPTR_IWDG_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog counter is frozen in Standby mode (value: 0)
     *          - B_0x1: Independent watchdog counter is running in Standby mode (value: 1)
     */
        /** @brief Independent watchdog counter is frozen in Standby mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STDBY_B_0x0 = 0;
        /** @brief Independent watchdog counter is running in Standby mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STDBY_B_0x1 = 1;

    /** @brief Window watchdog selection */
    using FLASH_OPTR_WWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware window watchdog (value: 0)
     *          - B_0x1: Software window watchdog (value: 1)
     */
        /** @brief Hardware window watchdog */
    constexpr std::uint32_t FLASH_OPTR_WWDG_SW_B_0x0 = 0;
        /** @brief Software window watchdog */
    constexpr std::uint32_t FLASH_OPTR_WWDG_SW_B_0x1 = 1;

    /** @brief Backup domain reset */
    using FLASH_OPTR_BDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t FLASH_OPTR_BDRST_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t FLASH_OPTR_BDRST_B_0x1 = 1;

    /** @brief SRAM parity check control enable/disable */
    using FLASH_OPTR_RAM_PARITY_CHECK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t FLASH_OPTR_RAM_PARITY_CHECK_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t FLASH_OPTR_RAM_PARITY_CHECK_B_0x1 = 1;

    /** @brief Backup SRAM erase prevention */
    using FLASH_OPTR_BKPSRAM_HW_ERASE_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t FLASH_OPTR_BKPSRAM_HW_ERASE_DISABLE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t FLASH_OPTR_BKPSRAM_HW_ERASE_DISABLE_B_0x1 = 1;

    /** @brief BOOT0 signal source selection This option bit defines the source of the BOOT0 signal. */
    using FLASH_OPTR_NBOOT_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOOT0 pin (legacy mode) (value: 0)
     *          - B_0x1: NBOOT0 option bit (value: 1)
     */
        /** @brief BOOT0 pin (legacy mode) */
    constexpr std::uint32_t FLASH_OPTR_NBOOT_SEL_B_0x0 = 0;
        /** @brief NBOOT0 option bit */
    constexpr std::uint32_t FLASH_OPTR_NBOOT_SEL_B_0x1 = 1;

    /** @brief Boot configuration Together with the BOOT0 pin or option bit NBOOT0 (depending on NBOOT_SEL option bit configuration), this bit selects boot mode from the main flash memory, SRAM or the system memory. Refer to Section12.5: Boot configuration. */
    using FLASH_OPTR_NBOOT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NBOOT0 option bit */
    using FLASH_OPTR_NBOOT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBOOT01=10 (value: 0)
     *          - B_0x1: NBOOT01=11 (value: 1)
     */
        /** @brief NBOOT01=10 */
    constexpr std::uint32_t FLASH_OPTR_NBOOT0_B_0x0 = 0;
        /** @brief NBOOT01=11 */
    constexpr std::uint32_t FLASH_OPTR_NBOOT0_B_0x1 = 1;

    /** @brief NRST pin configuration */
    using FLASH_OPTR_NRST_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Reset input only: a low level on the NRST pin generates system reset; internal RESET is not propagated to the NRST pin. (value: 1)
     *          - B_0x2: Standard GPIO: only internal RESET is possible (value: 2)
     *          - B_0x3: Bidirectional reset: the NRST pin is configured in reset input/output (legacy) mode (value: 3)
     */
        /** @brief Reset input only: a low level on the NRST pin generates system reset; internal RESET is not propagated to the NRST pin. */
    constexpr std::uint32_t FLASH_OPTR_NRST_MODE_B_0x1 = 1;
        /** @brief Standard GPIO: only internal RESET is possible */
    constexpr std::uint32_t FLASH_OPTR_NRST_MODE_B_0x2 = 2;
        /** @brief Bidirectional reset: the NRST pin is configured in reset input/output (legacy) mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_MODE_B_0x3 = 3;

    /** @brief Internal reset holder enable bit */
    using FLASH_OPTR_IRHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal resets are propagated as simple pulse on NRST pin (value: 0)
     *          - B_0x1: Internal resets drives NRST pin low until it is seen as low level (value: 1)
     */
        /** @brief Internal resets are propagated as simple pulse on NRST pin */
    constexpr std::uint32_t FLASH_OPTR_IRHEN_B_0x0 = 0;
        /** @brief Internal resets drives NRST pin low until it is seen as low level */
    constexpr std::uint32_t FLASH_OPTR_IRHEN_B_0x1 = 1;

    /** @brief FLASH WRP area A address register */
    using FLASH_WRP1AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP area A start offset This bitfield contains the offset of the first page of the WRP area A. Note: The number of effective bits depends on the size of the flash memory in the device. */
    using FLASH_WRP1AR_WRP1A_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP area A end offset This bitfield contains the offset of the last page of the WRP area A. Note: The number of effective bits depends on the size of the flash memory in the device. */
    using FLASH_WRP1AR_WRP1A_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH WRP area B address register */
    using FLASH_WRP1BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP area B start offset This bitfield contains the offset of the first page of the WRP area B. Note: The number of effective bits depends on the size of the flash memory in the device. */
    using FLASH_WRP1BR_WRP1B_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP area B end offset This bitfield contains the offset of the last page of the WRP area B. Note: The number of effective bits depends on the size of the flash memory in the device. */
    using FLASH_WRP1BR_WRP1B_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH security register */
    using FLASH_SECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last page of the first hide protection area */
    using FLASH_SECR_HDP1_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief used to force boot from user area If the bit is set in association with RDP level 1, the debug capabilities are disabled, except in the case of a bad OBL (mismatch). */
    using FLASH_SECR_BOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Boot based on the pad/option bit configuration (value: 0)
     *          - B_0x1: Boot forced from main flash memory (value: 1)
     */
        /** @brief Boot based on the pad/option bit configuration */
    constexpr std::uint32_t FLASH_SECR_BOOT_LOCK_B_0x0 = 0;
        /** @brief Boot forced from main flash memory */
    constexpr std::uint32_t FLASH_SECR_BOOT_LOCK_B_0x1 = 1;

    /** @brief Hide protection area enable */
    using FLASH_SECR_HDP1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
