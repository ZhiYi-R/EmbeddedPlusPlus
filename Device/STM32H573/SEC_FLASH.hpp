/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H573_SEC_FLASH_HPP
#define EMBEDDED_PP_STM32H573_SEC_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief FLASH address block description */
namespace STM32H573::SEC_FLASH {

    /** @brief FLASH access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read latency These bits are used to control the number of wait states used during read operations on both nonvolatile memory banks. The application software has to program them to the correct value depending on the embedded flash memory interface frequency and voltage conditions. ... Note: No check is performed by hardware to verify that the configuration is correct. */
    using FLASH_ACR_LATENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: zero wait states used to read a word from nonvolatile memory (value: 0)
     *          - B_0x1: one wait state used to read a word from nonvolatile memory (value: 1)
     *          - B_0x2: two wait states used to read a word from nonvolatile memory (value: 2)
     *          - B_0x7: seven wait states used to read a word from nonvolatile memory (value: 7)
     *          - B_0xF: 15 wait states used to read a word from nonvolatile memory (value: 15)
     */
        /** @brief zero wait states used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x0 = 0;
        /** @brief one wait state used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x1 = 1;
        /** @brief two wait states used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x2 = 2;
        /** @brief seven wait states used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x7 = 7;
        /** @brief 15 wait states used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0xF = 15;

    /** @brief Flash signal delay These bits are used to control the delay between nonvolatile memory signals during programming operations. Application software has to program them to the correct value depending on the embedded flash memory interface frequency. Please refer to Table44 for details. Note: No check is performed to verify that the configuration is correct. Note: Two WRHIGHFREQ values can be selected for some frequencies. */
    using FLASH_ACR_WRHIGHFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prefetch enable. When bit value is modified, user must read back ACR register to be sure PRFTEN has been taken into account. Bits used to control the prefetch. */
    using FLASH_ACR_PRFTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prefetch disabled. (value: 0)
     *          - B_0x1: prefetch enabled when latency is at least one wait state. (value: 1)
     */
        /** @brief prefetch disabled. */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x0 = 0;
        /** @brief prefetch enabled when latency is at least one wait state. */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x1 = 1;

    /** @brief FLASH non-secure key register */
    using FLASH_NSKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile memory non-secure configuration access unlock key */
    using FLASH_NSKEYR_NSKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure key register */
    using FLASH_SECKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile memory secure configuration access unlock key */
    using FLASH_SECKEYR_SECKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option key register */
    using FLASH_OPTKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes control access unlock key */
    using FLASH_OPTKEYR_OPTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure OBK key register */
    using FLASH_NSOBKKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure option bytes keys control access unlock key */
    using FLASH_NSOBKKEYR_NSOBKKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure OBK key register */
    using FLASH_SECOBKKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure option bytes keys control access unlock key */
    using FLASH_SECOBKKEYR_SECOBKKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH operation status register */
    using FLASH_OPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation address */
    using FLASH_OPSR_ADDR_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash high-cycle data area operation interrupted It indicates if flash high-cycle data area is concerned by operation. */
    using FLASH_OPSR_DATA_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation bank It indicates which bank was concerned by operation. */
    using FLASH_OPSR_BK_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation in system flash memory interrupted Indicates that reset interrupted an ongoing operation in system flash. */
    using FLASH_OPSR_SYSF_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP operation interrupted Indicates that reset interrupted an ongoing operation in OTP area (or OBKeys area). */
    using FLASH_OPSR_OTP_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory operation code */
    using FLASH_OPSR_CODE_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No flash operation on going during previous reset (value: 0)
     *          - B_0x1: Single write operation interrupted (value: 1)
     *          - B_0x2: OBK alternate sector erase (value: 2)
     *          - B_0x3: Sector erase operation interrupted (value: 3)
     *          - B_0x4: Bank erase operation interrupted (value: 4)
     *          - B_0x5: Mass erase operation interrupted (value: 5)
     *          - B_0x6: Option change operation interrupted (value: 6)
     *          - B_0x7: OBK swap sector request (value: 7)
     */
        /** @brief No flash operation on going during previous reset */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x0 = 0;
        /** @brief Single write operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x1 = 1;
        /** @brief OBK alternate sector erase */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x2 = 2;
        /** @brief Sector erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x3 = 3;
        /** @brief Bank erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x4 = 4;
        /** @brief Mass erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x5 = 5;
        /** @brief Option change operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x6 = 6;
        /** @brief OBK swap sector request */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x7 = 7;

    /** @brief FLASH option control register */
    using FLASH_OPTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH_OPTCR lock option configuration bit The OPTLOCK bit locks the FLASH_OPTCR register as well as all _PRG registers. The correct write sequence to FLASH_OPTKEYR register unlocks this bit. If a wrong sequence is executed, or the unlock sequence to FLASH_OPTKEYR is performed twice, this bit remains locked until next system reset. It is possible to set OPTLOCK by programming it to 1. When set to 1, a new unlock sequence is mandatory to unlock it. When OPTLOCK changes from 0 to 1, the others bits of FLASH_OPTCR register do not change. */
    using FLASH_OPTCR_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_OPTCR register unlocked (value: 0)
     *          - B_0x1: FLASH_OPTCR register locked. (value: 1)
     */
        /** @brief FLASH_OPTCR register unlocked */
    constexpr std::uint32_t FLASH_OPTCR_OPTLOCK_B_0x0 = 0;
        /** @brief FLASH_OPTCR register locked. */
    constexpr std::uint32_t FLASH_OPTCR_OPTLOCK_B_0x1 = 1;

    /** @brief Option byte start change option configuration bit OPTSTRT triggers an option byte change operation. The user can set OPTSTRT only when the OPTLOCK bit is cleared to 0. It is set only by Software and cleared when the option byte change is completed or an error occurs (PGSERR or OPTCHANGEERR). It is reseted at the same time as BSY bit. The user application cannot modify any FLASH_XXX_PRG flash interface register until the option change operation has been completed. Before setting this bit, the user has to write the required values in the FLASH_XXX_PRG registers. The FLASH_XXX_PRG registers are locked until the option byte change operation has been executed in nonvolatile memory. */
    using FLASH_OPTCR_OPTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank swapping option configuration bit SWAP_BANK controls whether Bank1 and Bank2 are swapped or not. This bit is loaded with the SWAP_BANK bit of FLASH_OPTSR_CUR register only after reset or POR. */
    using FLASH_OPTCR_SWAP_BANK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank1 and Bank2 not swapped (value: 0)
     *          - B_0x1: Bank1 and Bank2 swapped (value: 1)
     */
        /** @brief Bank1 and Bank2 not swapped */
    constexpr std::uint32_t FLASH_OPTCR_SWAP_BANK_B_0x0 = 0;
        /** @brief Bank1 and Bank2 swapped */
    constexpr std::uint32_t FLASH_OPTCR_SWAP_BANK_B_0x1 = 1;

    /** @brief FLASH non-secure status register */
    using FLASH_NSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief busy flag BSY flag indicates that a flash memory is busy by an operation (write, erase, option byte change, OBK operation). It is set at the beginning of a flash memory operation and cleared when the operation finishes, or an error occurs. */
    using FLASH_NSSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no programming, erase or option byte change operation being executed (value: 0)
     *          - B_0x1: programming, erase or option byte change operation being executed (value: 1)
     */
        /** @brief no programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_NSSR_BSY_B_0x0 = 0;
        /** @brief programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_NSSR_BSY_B_0x1 = 1;

    /** @brief write buffer not empty flag WBNE flag is set when the flash interface is waiting for new data to complete the write buffer. In this state, the write buffer is not empty. WBNE is reset by hardware each time the write buffer is complete or the write buffer is emptied following one of the event below: the application software forces the write operation using FW bit in FLASH_NSCR the embedded flash memory detects an error that involves data loss This bit cannot be reset by software writing 0 directly. To reset it, clear the write buffer by performing any of the above listed actions, or send the missing data. */
    using FLASH_NSSR_WBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write buffer empty or full (value: 0)
     *          - B_0x1: write buffer waiting data to complete (value: 1)
     */
        /** @brief write buffer empty or full */
    constexpr std::uint32_t FLASH_NSSR_WBNE_B_0x0 = 0;
        /** @brief write buffer waiting data to complete */
    constexpr std::uint32_t FLASH_NSSR_WBNE_B_0x1 = 1;

    /** @brief data buffer not empty flag DBNE flag is set when the flash interface is processing 6-bits ECC data in dedicated buffer. This bit cannot be set to 0 by software. The hardware resets it once the buffer is free. */
    using FLASH_NSSR_DBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data buffer not used (value: 0)
     *          - B_0x1: data buffer used, wait (value: 1)
     */
        /** @brief data buffer not used */
    constexpr std::uint32_t FLASH_NSSR_DBNE_B_0x0 = 0;
        /** @brief data buffer used, wait */
    constexpr std::uint32_t FLASH_NSSR_DBNE_B_0x1 = 1;

    /** @brief end of operation flag EOP flag is set when a operation (program/erase) completes. An interrupt is generated if the EOPIE is set to 1. It is not necessary to reset EOP before starting a new operation. EOP bit is cleared by writing 1 to CLR_EOP bit in FLASH_NSCCR register. */
    using FLASH_NSSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no operation completed (value: 0)
     *          - B_0x1: a operation completed (value: 1)
     */
        /** @brief no operation completed */
    constexpr std::uint32_t FLASH_NSSR_EOP_B_0x0 = 0;
        /** @brief a operation completed */
    constexpr std::uint32_t FLASH_NSSR_EOP_B_0x1 = 1;

    /** @brief write protection error flag WRPERR flag is raised when a protection error occurs during a program operation. An interrupt is also generated if the WRPERRIE is set to 1. Writing 1 to CLR_WRPERR bit in FLASH_NSCCR register clears WRPERR. */
    using FLASH_NSSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no write protection error occurred (value: 0)
     *          - B_0x1: a write protection error occurred (value: 1)
     */
        /** @brief no write protection error occurred */
    constexpr std::uint32_t FLASH_NSSR_WRPERR_B_0x0 = 0;
        /** @brief a write protection error occurred */
    constexpr std::uint32_t FLASH_NSSR_WRPERR_B_0x1 = 1;

    /** @brief programming sequence error flag PGSERR flag is raised when a sequence error occurs. An interrupt is generated if the PGSERRIE bit is set to 1. Writing 1 to CLR_PGSERR bit in FLASH_NSCCR register clears PGSERR. */
    using FLASH_NSSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no sequence error occurred (value: 0)
     *          - B_0x1: a sequence error occurred (value: 1)
     */
        /** @brief no sequence error occurred */
    constexpr std::uint32_t FLASH_NSSR_PGSERR_B_0x0 = 0;
        /** @brief a sequence error occurred */
    constexpr std::uint32_t FLASH_NSSR_PGSERR_B_0x1 = 1;

    /** @brief strobe error flag STRBERR flag is raised when a strobe error occurs (when the master attempts to write several times the same byte in the write buffer). An interrupt is generated if the STRBERRIE bit is set to 1. Writing 1 to CLR_STRBERR bit in FLASH_NSCCR register clears STRBERR. */
    using FLASH_NSSR_STRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no strobe error occurred (value: 0)
     *          - B_0x1: a strobe error occurred (value: 1)
     */
        /** @brief no strobe error occurred */
    constexpr std::uint32_t FLASH_NSSR_STRBERR_B_0x0 = 0;
        /** @brief a strobe error occurred */
    constexpr std::uint32_t FLASH_NSSR_STRBERR_B_0x1 = 1;

    /** @brief inconsistency error flag NSINCERR flag is raised when a inconsistency error occurs. An interrupt is generated if INCERRIE is set to 1. Writing 1 to CLR_INCERR bit in the FLASH_NSCCR register clears NSINCERR. */
    using FLASH_NSSR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no inconsistency error occurs (value: 0)
     *          - B_0x1: a inconsistency error occurs (value: 1)
     */
        /** @brief no inconsistency error occurs */
    constexpr std::uint32_t FLASH_NSSR_INCERR_B_0x0 = 0;
        /** @brief a inconsistency error occurs */
    constexpr std::uint32_t FLASH_NSSR_INCERR_B_0x1 = 1;

    /** @brief OBK general error flag OBKERR flag is raised when the OBK-HDPL signal from the SBS does not match the HDPL value associated with the key slot during access to the key location. Alternatively also when the ALT_SECT is unexpectedly changed while the write buffer is being filled. */
    using FLASH_NSSR_OBKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no OBK general error occurred (value: 0)
     *          - B_0x1: an OBK general error occurred (value: 1)
     */
        /** @brief no OBK general error occurred */
    constexpr std::uint32_t FLASH_NSSR_OBKERR_B_0x0 = 0;
        /** @brief an OBK general error occurred */
    constexpr std::uint32_t FLASH_NSSR_OBKERR_B_0x1 = 1;

    /** @brief OBK write error flag OBKWERR flag is raised when the address is not virgin on a write access to the OBK storage. Alternatively also when the OBK selector in the alternate sector is not virgin during a swap operation. */
    using FLASH_NSSR_OBKWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no OBK write error occurred (value: 0)
     *          - B_0x1: an OBK write error occurred (value: 1)
     */
        /** @brief no OBK write error occurred */
    constexpr std::uint32_t FLASH_NSSR_OBKWERR_B_0x0 = 0;
        /** @brief an OBK write error occurred */
    constexpr std::uint32_t FLASH_NSSR_OBKWERR_B_0x1 = 1;

    /** @brief Option byte change error flag OPTCHANGEERR flag indicates that an error occurred during an option byte change operation. When OPTCHANGEERR is set to 1, the option byte change operation did not successfully complete. An interrupt is generated when this flag is raised if the OPTCHANGEERRIE bit of FLASH_NSCR register is set to 1. Writing 1 to CLR_OPTCHANGEERR of register FLASH_NSCCR clears OPTCHANGEERR. Note: The OPTSTRT bit in FLASH_OPTCR cannot be set while OPTCHANGEERR is set. */
    using FLASH_NSSR_OPTCHANGEERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no option byte change errors occurred (value: 0)
     *          - B_0x1: one or more errors occurred during an option byte change operation. (value: 1)
     */
        /** @brief no option byte change errors occurred */
    constexpr std::uint32_t FLASH_NSSR_OPTCHANGEERR_B_0x0 = 0;
        /** @brief one or more errors occurred during an option byte change operation. */
    constexpr std::uint32_t FLASH_NSSR_OPTCHANGEERR_B_0x1 = 1;

    /** @brief FLASH secure status register */
    using FLASH_SECSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief busy flag BSY flag indicates that a FLASH memory is busy (write, erase, option byte change, OBK operations). It is set at the beginning of a flash memory operation and cleared when the operation finishes or an error occurs. */
    using FLASH_SECSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no programming, erase or option byte change operation being executed (value: 0)
     *          - B_0x1: programming, erase or option byte change operation being executed (value: 1)
     */
        /** @brief no programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_SECSR_BSY_B_0x0 = 0;
        /** @brief programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_SECSR_BSY_B_0x1 = 1;

    /** @brief write buffer not empty flag WBNE flag is set when the flash interface is waiting for new data to complete the write buffer. In this state, the write buffer is not empty. WBNE is reset by hardware each time the write buffer is complete or the write buffer is emptied following one of the event below: the application software forces the write operation using FW bit in FLASH_SECCR the flash interface detects an error that involves data loss This bit cannot be reset by writing 0 directly by software. To reset it, clear the write buffer by performing any of the above listed actions, or send the missing data. */
    using FLASH_SECSR_WBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write buffer empty or full (value: 0)
     *          - B_0x1: write buffer waiting data to complete (value: 1)
     */
        /** @brief write buffer empty or full */
    constexpr std::uint32_t FLASH_SECSR_WBNE_B_0x0 = 0;
        /** @brief write buffer waiting data to complete */
    constexpr std::uint32_t FLASH_SECSR_WBNE_B_0x1 = 1;

    /** @brief data buffer not empty flag DBNE flag is set when the embedded flash memory interface is processing 6-bits ECC data in dedicated buffer. This bit cannot be set to 0 by software. The hardware resets it once the buffer is free. */
    using FLASH_SECSR_DBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data buffer not used (value: 0)
     *          - B_0x1: data buffer used, wait (value: 1)
     */
        /** @brief data buffer not used */
    constexpr std::uint32_t FLASH_SECSR_DBNE_B_0x0 = 0;
        /** @brief data buffer used, wait */
    constexpr std::uint32_t FLASH_SECSR_DBNE_B_0x1 = 1;

    /** @brief end of operation flag EOP flag is set when a operation (program/erase) completes. An interrupt is generated if the EOPIE is set to. It is not necessary to reset EOP before starting a new operation. EOP bit is cleared by writing 1 to CLR_EOP bit in FLASH_SECCCR register. */
    using FLASH_SECSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no operation completed (value: 0)
     *          - B_0x1: a operation completed (value: 1)
     */
        /** @brief no operation completed */
    constexpr std::uint32_t FLASH_SECSR_EOP_B_0x0 = 0;
        /** @brief a operation completed */
    constexpr std::uint32_t FLASH_SECSR_EOP_B_0x1 = 1;

    /** @brief write protection error flag WRPERR flag is raised when a protection error occurs during a program operation. An interrupt is also generated if the WRPERRIE is set to 1. Writing 1 to CLR_WRPERR bit in FLASH_SECCCR register clears WRPERR. */
    using FLASH_SECSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no write protection error occurred (value: 0)
     *          - B_0x1: a write protection error occurred (value: 1)
     */
        /** @brief no write protection error occurred */
    constexpr std::uint32_t FLASH_SECSR_WRPERR_B_0x0 = 0;
        /** @brief a write protection error occurred */
    constexpr std::uint32_t FLASH_SECSR_WRPERR_B_0x1 = 1;

    /** @brief programming sequence error flag PGSERR flag is raised when a sequence error occurs. An interrupt is generated if the PGSERRIE bit is set to 1. Writing 1 to CLR_PGSERR bit in FLASH_SECCCR register clears PGSERR. */
    using FLASH_SECSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no sequence error occurred (value: 0)
     *          - B_0x1: a sequence error occurred (value: 1)
     */
        /** @brief no sequence error occurred */
    constexpr std::uint32_t FLASH_SECSR_PGSERR_B_0x0 = 0;
        /** @brief a sequence error occurred */
    constexpr std::uint32_t FLASH_SECSR_PGSERR_B_0x1 = 1;

    /** @brief strobe error flag STRBERR flag is raised when a strobe error occurs (when the master attempts to write several times the same byte in the write buffer). An interrupt is generated if the STRBERRIE bit is set to 1. Writing 1 to CLR_STRBERR bit in FLASH_SECCCR register clears STRBERR. */
    using FLASH_SECSR_STRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no strobe error occurred (value: 0)
     *          - B_0x1: a strobe error occurred (value: 1)
     */
        /** @brief no strobe error occurred */
    constexpr std::uint32_t FLASH_SECSR_STRBERR_B_0x0 = 0;
        /** @brief a strobe error occurred */
    constexpr std::uint32_t FLASH_SECSR_STRBERR_B_0x1 = 1;

    /** @brief inconsistency error flag INCERR flag is raised when a inconsistency error occurs. An interrupt is generated if INCERRIE is set to 1. Writing 1 to CLR_INCERR bit in the FLASH_SECCCR register clears INCERR. */
    using FLASH_SECSR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no inconsistency error occurred (value: 0)
     *          - B_0x1: a inconsistency error occurred (value: 1)
     */
        /** @brief no inconsistency error occurred */
    constexpr std::uint32_t FLASH_SECSR_INCERR_B_0x0 = 0;
        /** @brief a inconsistency error occurred */
    constexpr std::uint32_t FLASH_SECSR_INCERR_B_0x1 = 1;

    /** @brief OBK general error flag OBKERR flag is raised when the OBK-HDPL signal from the SBS does not match the HDPL value associated with the key slot during access to the key location. Alternatively also when the ALT_SECT is unexpectedly changed while the write buffer is being filled. */
    using FLASH_SECSR_OBKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no OBK general error occurred (value: 0)
     *          - B_0x1: an OBK general error occurred (value: 1)
     */
        /** @brief no OBK general error occurred */
    constexpr std::uint32_t FLASH_SECSR_OBKERR_B_0x0 = 0;
        /** @brief an OBK general error occurred */
    constexpr std::uint32_t FLASH_SECSR_OBKERR_B_0x1 = 1;

    /** @brief OBK write error flag OBKWERR flag is raised when the address is not virgin on a write access to the OBK storage. Alternatively also when the OBK selector in the alternate sector is not virgin during a swap operation. */
    using FLASH_SECSR_OBKWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no OBK write error occurred (value: 0)
     *          - B_0x1: an OBK write error occurred (value: 1)
     */
        /** @brief no OBK write error occurred */
    constexpr std::uint32_t FLASH_SECSR_OBKWERR_B_0x0 = 0;
        /** @brief an OBK write error occurred */
    constexpr std::uint32_t FLASH_SECSR_OBKWERR_B_0x1 = 1;

    /** @brief FLASH non-secure control register */
    using FLASH_NSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configuration lock bit This bit locks the FLASH_NSCR register. The correct write sequence to FLASH_NSKEYR register unlocks this bit. If a wrong sequence is executed, or if the unlock sequence to FLASH_NSKEYR is performed twice, this bit remains locked until the next system reset. LOCK can be set by programming it to 1. When set to 1, a new unlock sequence is mandatory to unlock it. When LOCK changes from 0 to 1, the other bits of FLASH_NSCR register do not change. */
    using FLASH_NSCR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_NSCR register unlocked (value: 0)
     *          - B_0x1: FLASH_NSCR register locked (value: 1)
     */
        /** @brief FLASH_NSCR register unlocked */
    constexpr std::uint32_t FLASH_NSCR_LOCK_B_0x0 = 0;
        /** @brief FLASH_NSCR register locked */
    constexpr std::uint32_t FLASH_NSCR_LOCK_B_0x1 = 1;

    /** @brief programming control bit PG can be programmed only when LOCK is cleared to 0. PG allows programming in Bank1 and Bank2. */
    using FLASH_NSCR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: programming disabled (value: 0)
     *          - B_0x1: programming enabled (value: 1)
     */
        /** @brief programming disabled */
    constexpr std::uint32_t FLASH_NSCR_PG_B_0x0 = 0;
        /** @brief programming enabled */
    constexpr std::uint32_t FLASH_NSCR_PG_B_0x1 = 1;

    /** @brief sector erase request Setting SER bit to 1 requests a sector erase. SER can be programmed only when LOCK is cleared to 0. If MER and SER are also set, a PGSERR is raised. */
    using FLASH_NSCR_SER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector erase not requested (value: 0)
     *          - B_0x1: sector erase requested (value: 1)
     */
        /** @brief sector erase not requested */
    constexpr std::uint32_t FLASH_NSCR_SER_B_0x0 = 0;
        /** @brief sector erase requested */
    constexpr std::uint32_t FLASH_NSCR_SER_B_0x1 = 1;

    /** @brief erase request Setting BER bit to 1 requests a bank erase operation (user flash memory only). BER can be programmed only when LOCK is cleared to 0. If MER and SER are also set, a PGSERR is raised. Note: Write protection error is triggered when a bank erase is required and some sectors are protected. */
    using FLASH_NSCR_BER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bank erase not requested (value: 0)
     *          - B_0x1: bank erase requested (value: 1)
     */
        /** @brief bank erase not requested */
    constexpr std::uint32_t FLASH_NSCR_BER_B_0x0 = 0;
        /** @brief bank erase requested */
    constexpr std::uint32_t FLASH_NSCR_BER_B_0x1 = 1;

    /** @brief write forcing control bit FW forces a write operation even if the write buffer is not full. In this case all bits not written are set to 1 by hardware. FW can be programmed only when LOCK is cleared to 0. The embedded flash memory resets FW when the corresponding operation has been acknowledged. Note: Using a force-write operation prevents the application from updating later the missing bits with something else than 1, because it is likely that it leads to permanent ECC error. Write forcing is effective only if the write buffer is not empty and was filled by non-secure access (in particular, FW does not start several write operations when the force-write operations are performed consecutively). Since there is just one write buffer, FW can force a write in bank1 or bank2. */
    using FLASH_NSCR_FW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief erase start control bit STRT bit is used to start a sector erase or a bank erase operation. STRT can be programmed only when LOCK is cleared to 0. STRT is reset at the end of the operation or when an error occurs. It cannot be reseted by software. */
    using FLASH_NSCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief sector erase selection number These bits are used to select the target sector for an erase operation (they are unused otherwise). SNB can be programmed only when LOCK is cleared to 0. .. */
    using FLASH_NSCR_SNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: Sector 0 selected (value: 0)
     *          - B_0x01: Sector 1 selected (value: 1)
     *          - B_0x7F: Sector 127 selected (value: 127)
     */
        /** @brief Sector 0 selected */
    constexpr std::uint32_t FLASH_NSCR_SNB_B_0x00 = 0;
        /** @brief Sector 1 selected */
    constexpr std::uint32_t FLASH_NSCR_SNB_B_0x01 = 1;
        /** @brief Sector 127 selected */
    constexpr std::uint32_t FLASH_NSCR_SNB_B_0x7F = 127;

    /** @brief Mass erase request Setting MER bit to 1 requests a mass erase operation (user flash memory only). MER can be programmed only when LOCK is cleared to 0. If BER or SER are both set, a PGSERR is raised. Error is triggered when a mass erase is required and some sectors are protected. */
    using FLASH_NSCR_MER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: mass erase not requested (value: 0)
     *          - B_0x1: mass erase requested (value: 1)
     */
        /** @brief mass erase not requested */
    constexpr std::uint32_t FLASH_NSCR_MER_B_0x0 = 0;
        /** @brief mass erase requested */
    constexpr std::uint32_t FLASH_NSCR_MER_B_0x1 = 1;

    /** @brief end of operation interrupt control bit Setting EOPIE bit to 1 enables the generation of an interrupt at the end of a program or erase operation. EOPIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_NSCR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated at the end of operation. (value: 0)
     *          - B_0x1: interrupt enabled when at the end of operation (value: 1)
     */
        /** @brief no interrupt generated at the end of operation. */
    constexpr std::uint32_t FLASH_NSCR_EOPIE_B_0x0 = 0;
        /** @brief interrupt enabled when at the end of operation */
    constexpr std::uint32_t FLASH_NSCR_EOPIE_B_0x1 = 1;

    /** @brief write protection error interrupt enable bit When this bit is set to 1, an interrupt is generated when a protection error occurs during a program operation. WRPERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_NSCR_WRPERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a protection error occurs (value: 0)
     *          - B_0x1: interrupt generated when a protection error occurs (value: 1)
     */
        /** @brief no interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_NSCR_WRPERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_NSCR_WRPERRIE_B_0x1 = 1;

    /** @brief programming sequence error interrupt enable bit When this bit is set to 1, an interrupt is generated when a sequence error occurs during a program operation. PGSERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_NSCR_PGSERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a sequence error occurs (value: 0)
     *          - B_0x1: interrupt generated when sequence error occurs (value: 1)
     */
        /** @brief no interrupt generated when a sequence error occurs */
    constexpr std::uint32_t FLASH_NSCR_PGSERRIE_B_0x0 = 0;
        /** @brief interrupt generated when sequence error occurs */
    constexpr std::uint32_t FLASH_NSCR_PGSERRIE_B_0x1 = 1;

    /** @brief strobe error interrupt enable bit When STRBERRIE bit is set to 1, an interrupt is generated when a strobe error occurs (the master programs several times the same byte in the write buffer) during a write operation. STRBERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_NSCR_STRBERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a strobe error occurs (value: 0)
     *          - B_0x1: interrupt generated when strobe error occurs. (value: 1)
     */
        /** @brief no interrupt generated when a strobe error occurs */
    constexpr std::uint32_t FLASH_NSCR_STRBERRIE_B_0x0 = 0;
        /** @brief interrupt generated when strobe error occurs. */
    constexpr std::uint32_t FLASH_NSCR_STRBERRIE_B_0x1 = 1;

    /** @brief inconsistency error interrupt enable bit When INCERRIE bit is set to 1, an interrupt is generated when an inconsistency error occurs during a write operation. INCERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_NSCR_INCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a inconsistency error occurs (value: 0)
     *          - B_0x1: interrupt generated when a inconsistency error occurs. (value: 1)
     */
        /** @brief no interrupt generated when a inconsistency error occurs */
    constexpr std::uint32_t FLASH_NSCR_INCERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a inconsistency error occurs. */
    constexpr std::uint32_t FLASH_NSCR_INCERRIE_B_0x1 = 1;

    /** @brief OBK general error interrupt enable bit OBKERRIE enables generating an interrupt in case of OBK specific access error. This bit can be programmed only when LOCK bit is cleared to 0. */
    using FLASH_NSCR_OBKERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated on OBK general access error (value: 0)
     *          - B_0x1: an interrupt is generated on OBK general access error (value: 1)
     */
        /** @brief no interrupt is generated on OBK general access error */
    constexpr std::uint32_t FLASH_NSCR_OBKERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated on OBK general access error */
    constexpr std::uint32_t FLASH_NSCR_OBKERRIE_B_0x1 = 1;

    /** @brief OBK write error interrupt enable bit OBKWERRIE enables generation of interrupt in case of OBK specific write error. This bit can be programmed only when LOCK bit is cleared to 0. */
    using FLASH_NSCR_OBKWERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated on OBK write error (value: 0)
     *          - B_0x1: an interrupt is generated on OBK write error (value: 1)
     */
        /** @brief no interrupt is generated on OBK write error */
    constexpr std::uint32_t FLASH_NSCR_OBKWERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated on OBK write error */
    constexpr std::uint32_t FLASH_NSCR_OBKWERRIE_B_0x1 = 1;

    /** @brief Option byte change error interrupt enable bit This bit controls if an interrupt must be generated when an error occurs during an option byte change. It can be programmed only when LOCK bit is cleared to 0. */
    using FLASH_NSCR_OPTCHANGEERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated when an error occurs during an option byte change (value: 0)
     *          - B_0x1: an interrupt is generated when and error occurs during an option byte change. (value: 1)
     */
        /** @brief no interrupt is generated when an error occurs during an option byte change */
    constexpr std::uint32_t FLASH_NSCR_OPTCHANGEERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated when and error occurs during an option byte change. */
    constexpr std::uint32_t FLASH_NSCR_OPTCHANGEERRIE_B_0x1 = 1;

    /** @brief Bank selector bit BKSEL can only be programmed when LOCK is cleared to 0. The bit selects physical bank, SWAP_BANK setting is ignored. */
    using FLASH_NSCR_BKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank1 is selected for Bank erase / sector erase / interrupt enable (value: 0)
     *          - B_0x1: Bank2 is selected for BER / SER (value: 1)
     */
        /** @brief Bank1 is selected for Bank erase / sector erase / interrupt enable */
    constexpr std::uint32_t FLASH_NSCR_BKSEL_B_0x0 = 0;
        /** @brief Bank2 is selected for BER / SER */
    constexpr std::uint32_t FLASH_NSCR_BKSEL_B_0x1 = 1;

    /** @brief FLASH secure control register */
    using FLASH_SECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configuration lock bit This bit locks the FLASH_SECCR register. The correct write sequence to FLASH_SECKEYR register unlocks this bit. If a wrong sequence is executed, or if the unlock sequence to FLASH_NSKEYR is performed twice, this bit remains locked until the next system reset. LOCK can be set by programming it to 1. When set to 1, a new unlock sequence is mandatory to unlock it. When LOCK changes from 0 to 1, the other bits of FLASH_SECCR register do not change. */
    using FLASH_SECCR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_SECCR register unlocked (value: 0)
     *          - B_0x1: FLASH_SECCR register locked (value: 1)
     */
        /** @brief FLASH_SECCR register unlocked */
    constexpr std::uint32_t FLASH_SECCR_LOCK_B_0x0 = 0;
        /** @brief FLASH_SECCR register locked */
    constexpr std::uint32_t FLASH_SECCR_LOCK_B_0x1 = 1;

    /** @brief programming control bit PG can be programmed only when LOCK is cleared to 0. PG allows programming in Bank1 and Bank2. */
    using FLASH_SECCR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: programming disabled (value: 0)
     *          - B_0x1: programming enabled (value: 1)
     */
        /** @brief programming disabled */
    constexpr std::uint32_t FLASH_SECCR_PG_B_0x0 = 0;
        /** @brief programming enabled */
    constexpr std::uint32_t FLASH_SECCR_PG_B_0x1 = 1;

    /** @brief sector erase request Setting SER bit to 1 requests a sector erase. SER can be programmed only when LOCK is cleared to 0. If BER and MER are also set, a PGSERR is raised. */
    using FLASH_SECCR_SER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector erase not requested (value: 0)
     *          - B_0x1: sector erase requested (value: 1)
     */
        /** @brief sector erase not requested */
    constexpr std::uint32_t FLASH_SECCR_SER_B_0x0 = 0;
        /** @brief sector erase requested */
    constexpr std::uint32_t FLASH_SECCR_SER_B_0x1 = 1;

    /** @brief erase request Setting BER bit to 1 requests a bank erase operation (user flash memory only). BER can be programmed only when LOCK is cleared to 0. If MER and SER are also set, a PGSERR is raised. Note: Write protection error is triggered when a bank erase is required and some sectors are protected. */
    using FLASH_SECCR_BER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bank erase not requested (value: 0)
     *          - B_0x1: bank erase requested (value: 1)
     */
        /** @brief bank erase not requested */
    constexpr std::uint32_t FLASH_SECCR_BER_B_0x0 = 0;
        /** @brief bank erase requested */
    constexpr std::uint32_t FLASH_SECCR_BER_B_0x1 = 1;

    /** @brief write forcing control bit FW forces a write operation even if the write buffer is not full. In this case all bits not written are set to 1 by hardware. FW can be programmed only when LOCK is cleared to 0. The embedded flash memory resets FW when the corresponding operation has been acknowledged. Note: Using a force-write operation prevents the application from updating later the missing bits with something else than 1, because it is likely that it leads to permanent ECC error. Write forcing is effective only if the write buffer is not empty and was filled by secure access (in particular, FW does not start several write operations when the force-write operations are performed consecutively). Since there is just one write buffer, FW can force a write in bank1 or bank2. */
    using FLASH_SECCR_FW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief erase start control bit STRT bit is used to start a sector erase or a bank erase operation. STRT can be programmed only when LOCK is cleared to 0. STRT is reseted at the end of the operation or when an error occurs. It cannot be reset by software. */
    using FLASH_SECCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief sector erase selection number These bits are used to select the target sector for an erase operation (they are unused otherwise). SNB can be programmed only when LOCK is cleared to 0. .. */
    using FLASH_SECCR_SNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: Sector 0 selected (value: 0)
     *          - B_0x01: Sector 1 selected (value: 1)
     *          - B_0x7F: Sector 127 selected (value: 127)
     */
        /** @brief Sector 0 selected */
    constexpr std::uint32_t FLASH_SECCR_SNB_B_0x00 = 0;
        /** @brief Sector 1 selected */
    constexpr std::uint32_t FLASH_SECCR_SNB_B_0x01 = 1;
        /** @brief Sector 127 selected */
    constexpr std::uint32_t FLASH_SECCR_SNB_B_0x7F = 127;

    /** @brief mass erase request Setting MER bit to 1 requests a mass erase operation (user flash memory only). MER can be programmed only when LOCK is cleared to 0. If BER or SER are also set, a PGSERR is raised. Error is triggered when a mass erase is required and some sectors are protected. */
    using FLASH_SECCR_MER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: mass erase not requested (value: 0)
     *          - B_0x1: mass erase requested (value: 1)
     */
        /** @brief mass erase not requested */
    constexpr std::uint32_t FLASH_SECCR_MER_B_0x0 = 0;
        /** @brief mass erase requested */
    constexpr std::uint32_t FLASH_SECCR_MER_B_0x1 = 1;

    /** @brief end of operation interrupt control bit Setting EOPIE bit to 1 enables the generation of an interrupt at the end of a program/erase operation. EOPIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_SECCR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated at the end of operation. (value: 0)
     *          - B_0x1: interrupt enabled when at the end of operation (value: 1)
     */
        /** @brief no interrupt generated at the end of operation. */
    constexpr std::uint32_t FLASH_SECCR_EOPIE_B_0x0 = 0;
        /** @brief interrupt enabled when at the end of operation */
    constexpr std::uint32_t FLASH_SECCR_EOPIE_B_0x1 = 1;

    /** @brief write protection error interrupt enable bit When WRPERRIE bit is set to 1, an interrupt is generated when a protection error occurs during a program operation. WRPERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_SECCR_WRPERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a protection error occurs (value: 0)
     *          - B_0x1: interrupt generated when a protection error occurs (value: 1)
     */
        /** @brief no interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_SECCR_WRPERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_SECCR_WRPERRIE_B_0x1 = 1;

    /** @brief programming sequence error interrupt enable bit When PGSERRIE bit is set to 1, an interrupt is generated when a sequence error occurs during a program operation. PGSERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_SECCR_PGSERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a sequence error occurs (value: 0)
     *          - B_0x1: interrupt generated when sequence error occurs (value: 1)
     */
        /** @brief no interrupt generated when a sequence error occurs */
    constexpr std::uint32_t FLASH_SECCR_PGSERRIE_B_0x0 = 0;
        /** @brief interrupt generated when sequence error occurs */
    constexpr std::uint32_t FLASH_SECCR_PGSERRIE_B_0x1 = 1;

    /** @brief strobe error interrupt enable bit When STRBERRIE bit is set to 1, an interrupt is generated when a strobe error occurs (the master programs several times the same byte in the write buffer) during a write operation. STRBERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_SECCR_STRBERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a strobe error occurs (value: 0)
     *          - B_0x1: interrupt generated when strobe error occurs. (value: 1)
     */
        /** @brief no interrupt generated when a strobe error occurs */
    constexpr std::uint32_t FLASH_SECCR_STRBERRIE_B_0x0 = 0;
        /** @brief interrupt generated when strobe error occurs. */
    constexpr std::uint32_t FLASH_SECCR_STRBERRIE_B_0x1 = 1;

    /** @brief inconsistency error interrupt enable bit When INCERRIE bit is set to 1, an interrupt is generated when an inconsistency error occurs during a write operation. INCERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_SECCR_INCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a inconsistency error occurs (value: 0)
     *          - B_0x1: interrupt generated when a inconsistency error occurs. (value: 1)
     */
        /** @brief no interrupt generated when a inconsistency error occurs */
    constexpr std::uint32_t FLASH_SECCR_INCERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a inconsistency error occurs. */
    constexpr std::uint32_t FLASH_SECCR_INCERRIE_B_0x1 = 1;

    /** @brief OBK general error interrupt enable bit OBKERRIE enables generating an interrupt in case of OBK specific access error. OBKERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_SECCR_OBKERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated on OBK general access error (value: 0)
     *          - B_0x1: an interrupt is generated on OBK general access error (value: 1)
     */
        /** @brief no interrupt is generated on OBK general access error */
    constexpr std::uint32_t FLASH_SECCR_OBKERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated on OBK general access error */
    constexpr std::uint32_t FLASH_SECCR_OBKERRIE_B_0x1 = 1;

    /** @brief OBK write error interrupt enable bit OBKWERRIE enables generation of interrupt in case of OBK specific write error. OBKWERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_SECCR_OBKWERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated on OBK write error (value: 0)
     *          - B_0x1: an interrupt is generated on OBK write error (value: 1)
     */
        /** @brief no interrupt is generated on OBK write error */
    constexpr std::uint32_t FLASH_SECCR_OBKWERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated on OBK write error */
    constexpr std::uint32_t FLASH_SECCR_OBKWERRIE_B_0x1 = 1;

    /** @brief Flash memory security state invert. This bit inverts the flash memory security state. */
    using FLASH_SECCR_INV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief bank selector bit BKSEL can only be programmed when LOCK is cleared to 0. The bit selects physical bank, SWAP_BANK setting is ignored. */
    using FLASH_SECCR_BKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank1 is selected for Bank erase / sector erase / interrupt enable (value: 0)
     *          - B_0x1: Bank2 is selected for BER / SER (value: 1)
     */
        /** @brief Bank1 is selected for Bank erase / sector erase / interrupt enable */
    constexpr std::uint32_t FLASH_SECCR_BKSEL_B_0x0 = 0;
        /** @brief Bank2 is selected for BER / SER */
    constexpr std::uint32_t FLASH_SECCR_BKSEL_B_0x1 = 1;

    /** @brief FLASH non-secure clear control register */
    using FLASH_NSCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EOP flag clear bit Setting this bit to 1 resets to 0 EOP flag in FLASH_NSSR register. */
    using FLASH_NSCCR_CLR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRPERR flag clear bit Setting this bit to 1 resets to 0 WRPERR flag in FLASH_NSSR register. */
    using FLASH_NSCCR_CLR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PGSERR flag clear bit Setting this bit to 1 resets to 0 PGSERR flag in FLASH_NSSR register. */
    using FLASH_NSCCR_CLR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STRBERR flag clear bit Setting this bit to 1 resets to 0 STRBERR flag in FLASH_NSSR register. */
    using FLASH_NSCCR_CLR_STRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INCERR flag clear bit Setting this bit to 1 resets to 0 INCERR flag in FLASH_NSSR register. */
    using FLASH_NSCCR_CLR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKERR flag clear bit. Setting this bit to 1 resets to 0 OBKERR flag in FLASH_NSSR register. */
    using FLASH_NSCCR_CLR_OBKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKWERR flag clear bit. Setting this bit to 1 resets to 0 OBKWERR flag in FLASH_NSSR register. */
    using FLASH_NSCCR_CLR_OBKWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the flag corresponding flag in FLASH_NSSR by writing this bit. */
    using FLASH_NSCCR_CLR_OPTCHANGEERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure clear control register */
    using FLASH_SECCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EOP flag clear bit Setting this bit to 1 resets to 0 EOP flag in FLASH_SECSR register. */
    using FLASH_SECCCR_CLR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRPERR flag clear bit Setting this bit to 1 resets to 0 WRPERR flag in FLASH_SECSR register. */
    using FLASH_SECCCR_CLR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PGSERR flag clear bit Setting this bit to 1 resets to 0 PGSERR flag in FLASH_SECSR register. */
    using FLASH_SECCCR_CLR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STRBERR flag clear bit Setting this bit to 1 resets to 0 STRBERR flag in FLASH_SECSR register. */
    using FLASH_SECCCR_CLR_STRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INCERR flag clear bit Setting this bit to 1 resets to 0 INCERR flag in FLASH_SECSR register. */
    using FLASH_SECCCR_CLR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKWERR flag clear bit Setting this bit to 1 resets to 0 OBKWERR flag in FLASH_SECSR register. */
    using FLASH_SECCCR_CLR_OBKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKWERR flag clear bit Setting this bit to 1 resets to 0 OBKWERR flag in FLASH_SECSR register. */
    using FLASH_SECCCR_CLR_OBKWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege configuration register */
    using FLASH_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privilege attribute for secure registers */
    using FLASH_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: access to secure registers is always granted (value: 0)
     *          - B_0x1: access to secure registers is denied in case of unprivileged access. (value: 1)
     */
        /** @brief access to secure registers is always granted */
    constexpr std::uint32_t FLASH_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief access to secure registers is denied in case of unprivileged access. */
    constexpr std::uint32_t FLASH_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief privilege attribute for non secure registers */
    using FLASH_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: access to non secure registers is always granted (value: 0)
     *          - B_0x1: access to non secure registers is denied in case of unprivileged access. (value: 1)
     */
        /** @brief access to non secure registers is always granted */
    constexpr std::uint32_t FLASH_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief access to non secure registers is denied in case of unprivileged access. */
    constexpr std::uint32_t FLASH_PRIVCFGR_NSPRIV_B_0x1 = 1;

    /** @brief FLASH non-secure OBK configuration register */
    using FLASH_NSOBKCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKCFGR lock option configuration bit This bit locks the FLASH_NSOBKCFGR register. The correct write sequence to FLASH_NSOBKKEYR register unlocks this bit. If a wrong sequence is executed, or if the unlock sequence to FLASH_NSOBKKEYR is performed twice, this bit remains locked until the next system reset. LOCK can be set by programming it to 1. When set to 1, a new unlock sequence is mandatory to unlock it. When LOCK changes from 0 to 1, the other bits of FLASH_NSCR register do not change. */
    using FLASH_NSOBKCFGR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_NSOBKCFGR register unlocked (value: 0)
     *          - B_0x1: FLASH_NSOBKCFGR register locked (value: 1)
     */
        /** @brief FLASH_NSOBKCFGR register unlocked */
    constexpr std::uint32_t FLASH_NSOBKCFGR_LOCK_B_0x0 = 0;
        /** @brief FLASH_NSOBKCFGR register locked */
    constexpr std::uint32_t FLASH_NSOBKCFGR_LOCK_B_0x1 = 1;

    /** @brief OBK swap sector request bit When set, all the OBKs which have not been updated in the alternate sector is copied from current sector to alternate one. The SWAP_OFFSET value must be a certain minimum value in order for the swap to be launched in OBK-HDPLdifferent 0. Minimum value is 16 for OBK-HDPL=1, 144 for OBK-HDPL=2 and192 for OBK-HDPL=3. */
    using FLASH_NSOBKCFGR_SWAP_SECT_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no swap requested (value: 0)
     *          - B_0x1: launch the sector swap (value: 1)
     */
        /** @brief no swap requested */
    constexpr std::uint32_t FLASH_NSOBKCFGR_SWAP_SECT_REQ_B_0x0 = 0;
        /** @brief launch the sector swap */
    constexpr std::uint32_t FLASH_NSOBKCFGR_SWAP_SECT_REQ_B_0x1 = 1;

    /** @brief alternate sector bit This bit must not change while filling the write buffer, otherwise an error (OBKERR) is generated */
    using FLASH_NSOBKCFGR_ALT_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: current OBK sector is mapped to OBK address range for access (value: 0)
     *          - B_0x1: alternate OBK sector is mapped to OBK address range for access (value: 1)
     */
        /** @brief current OBK sector is mapped to OBK address range for access */
    constexpr std::uint32_t FLASH_NSOBKCFGR_ALT_SECT_B_0x0 = 0;
        /** @brief alternate OBK sector is mapped to OBK address range for access */
    constexpr std::uint32_t FLASH_NSOBKCFGR_ALT_SECT_B_0x1 = 1;

    /** @brief alternate sector erase bit When ALT_SECT bit is set, use this bit to generate an erase command for the OBK alternate sector. It is set only by Software and cleared when the OBK swap operation is completed or an error occurs (PGSERR). It is reseted at the same time as BUSY bit. */
    using FLASH_NSOBKCFGR_ALT_SECT_ERASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: do not touch OBK sector (value: 0)
     *          - B_0x1: erase the alternate OBK sector (value: 1)
     */
        /** @brief do not touch OBK sector */
    constexpr std::uint32_t FLASH_NSOBKCFGR_ALT_SECT_ERASE_B_0x0 = 0;
        /** @brief erase the alternate OBK sector */
    constexpr std::uint32_t FLASH_NSOBKCFGR_ALT_SECT_ERASE_B_0x1 = 1;

    /** @brief Key index (offset /16 bits) pointing for next swap. 0x01 means that only the first OBK data (128 bits) is copied from current to alternate OBK sector 0x02 means that the two first OBK data is copied */
    using FLASH_NSOBKCFGR_SWAP_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: means that no OBK is copied from current to alternate OBK sector during SWAP operation. (value: 0)
     *          - B_0x1FF: means that all OBK data (511) is copied (value: 511)
     */
        /** @brief means that no OBK is copied from current to alternate OBK sector during SWAP operation. */
    constexpr std::uint32_t FLASH_NSOBKCFGR_SWAP_OFFSET_B_0x00 = 0;
        /** @brief means that all OBK data (511) is copied */
    constexpr std::uint32_t FLASH_NSOBKCFGR_SWAP_OFFSET_B_0x1FF = 511;

    /** @brief FLASH secure OBK configuration register */
    using FLASH_SECOBKCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKCFGR lock option configuration bit This bit locks the FLASH_OBKCFGR register. The correct write sequence to FLASH_SECOBKKEYR register unlocks this bit. If a wrong sequence is executed, or if the unlock sequence to FLASH_SECOBKKEYR is performed twice, this bit remains locked until the next system reset. LOCK can be set by programming it to 1. When set to 1, a new unlock sequence is mandatory to unlock it. When LOCK changes from 0 to 1, the other bits of FLASH_NSCR register do not change. */
    using FLASH_SECOBKCFGR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_OBKCFGR register unlocked (value: 0)
     *          - B_0x1: FLASH_OBKCFGR register locked (value: 1)
     */
        /** @brief FLASH_OBKCFGR register unlocked */
    constexpr std::uint32_t FLASH_SECOBKCFGR_LOCK_B_0x0 = 0;
        /** @brief FLASH_OBKCFGR register locked */
    constexpr std::uint32_t FLASH_SECOBKCFGR_LOCK_B_0x1 = 1;

    /** @brief OBK swap sector request bit When set, all the OBKs which have not been updated in the alternate sector is copied from current sector to alternate one. The SWAP_OFFSET value must be a certain minimum value in order for the swap to be launched in OBK-HDPLdifferent 0. Minimum value is 16 for OBK-HDPL=1, 144 for OBK-HDPL=2 and 192 for OBK-HDPL=3. */
    using FLASH_SECOBKCFGR_SWAP_SECT_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no swap requested (value: 0)
     *          - B_0x1: launch the sector swap (value: 1)
     */
        /** @brief no swap requested */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_SECT_REQ_B_0x0 = 0;
        /** @brief launch the sector swap */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_SECT_REQ_B_0x1 = 1;

    /** @brief alternate sector bit This bit must not change while filling the write buffer, otherwise an error is generated */
    using FLASH_SECOBKCFGR_ALT_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: current OBK sector is mapped to OBK address range for access (value: 0)
     *          - B_0x1: alternate OBK sector is mapped to OBK address range for access (value: 1)
     */
        /** @brief current OBK sector is mapped to OBK address range for access */
    constexpr std::uint32_t FLASH_SECOBKCFGR_ALT_SECT_B_0x0 = 0;
        /** @brief alternate OBK sector is mapped to OBK address range for access */
    constexpr std::uint32_t FLASH_SECOBKCFGR_ALT_SECT_B_0x1 = 1;

    /** @brief alternate sector erase bit When ALT_SECT bit is set, use this bit to generate an erase command for the OBK alternate sector. It is set only by Software and cleared when the OBK swap operation is completed or an error occurs (PGSERR). It is reseted at the same time as the BUSY bit. */
    using FLASH_SECOBKCFGR_ALT_SECT_ERASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: do not touch OBK sector (value: 0)
     *          - B_0x1: erase the alternate OBK sector (value: 1)
     */
        /** @brief do not touch OBK sector */
    constexpr std::uint32_t FLASH_SECOBKCFGR_ALT_SECT_ERASE_B_0x0 = 0;
        /** @brief erase the alternate OBK sector */
    constexpr std::uint32_t FLASH_SECOBKCFGR_ALT_SECT_ERASE_B_0x1 = 1;

    /** @brief key index (offset /16 bits) pointing for next swap. */
    using FLASH_SECOBKCFGR_SWAP_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no OBK is copied from current to alternate OBK sector during SWAP operation. (value: 0)
     *          - B_0x1: only the first OBK data (128 bits) is copied from current to alternate OBK sector (value: 1)
     *          - B_0x2: the two first OBK data are copied (value: 2)
     *          - B_0x1FF: that the 511 first OBK data are copied (value: 511)
     */
        /** @brief no OBK is copied from current to alternate OBK sector during SWAP operation. */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_OFFSET_B_0x0 = 0;
        /** @brief only the first OBK data (128 bits) is copied from current to alternate OBK sector */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_OFFSET_B_0x1 = 1;
        /** @brief the two first OBK data are copied */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_OFFSET_B_0x2 = 2;
        /** @brief that the 511 first OBK data are copied */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_OFFSET_B_0x1FF = 511;

    /** @brief FLASH HDP extension register */
    using FLASH_HDPEXTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP area extension in 8Kbytes sectors in Bank1. Extension is added after the HDP1_END sector (included). */
    using FLASH_HDPEXTR_HDP1_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP area extension in 8Kbytes sectors in bank 2. Extension is added after the HDP2_END sector (included). */
    using FLASH_HDPEXTR_HDP2_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option status register */
    using FLASH_OPTSR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Brownout level option status bit These bits reflects the power level that generates a system reset. 00 or 11: BOR Level 1, the threshold level is low (around 2.1V) */
    using FLASH_OPTSR_CUR_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: BOR Level 2, the threshold level is medium (around 2.4V) (value: 1)
     *          - B_0x2: BOR Level 3, the threshold level is high (around 2.7V) (value: 2)
     */
        /** @brief BOR Level 2, the threshold level is medium (around 2.4V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOR_LEV_B_0x1 = 1;
        /** @brief BOR Level 3, the threshold level is high (around 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOR_LEV_B_0x2 = 2;

    /** @brief Brownout high enable */
    using FLASH_OPTSR_CUR_BORH_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief disable */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BORH_EN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BORH_EN_B_0x1 = 1;

    /** @brief IWDG control mode option status bit */
    using FLASH_OPTSR_CUR_IWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IWDG watchdog is controlled by hardware (value: 0)
     *          - B_0x1: IWDG watchdog is controlled by software (value: 1)
     */
        /** @brief IWDG watchdog is controlled by hardware */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_SW_B_0x0 = 0;
        /** @brief IWDG watchdog is controlled by software */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_SW_B_0x1 = 1;

    /** @brief WWDG control mode option status bit */
    using FLASH_OPTSR_CUR_WWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG watchdog is controlled by hardware (value: 0)
     *          - B_0x1: WWDG watchdog is controlled by software (value: 1)
     */
        /** @brief WWDG watchdog is controlled by hardware */
    constexpr std::uint32_t FLASH_OPTSR_CUR_WWDG_SW_B_0x0 = 0;
        /** @brief WWDG watchdog is controlled by software */
    constexpr std::uint32_t FLASH_OPTSR_CUR_WWDG_SW_B_0x1 = 1;

    /** @brief Core domain Stop entry reset option status bit */
    using FLASH_OPTSR_CUR_NRST_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a reset is generated when entering Stop mode on core domain (value: 0)
     *          - B_0x1: no reset generated when entering Stop mode on core domain. (value: 1)
     */
        /** @brief a reset is generated when entering Stop mode on core domain */
    constexpr std::uint32_t FLASH_OPTSR_CUR_NRST_STOP_B_0x0 = 0;
        /** @brief no reset generated when entering Stop mode on core domain. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_NRST_STOP_B_0x1 = 1;

    /** @brief Core domain Standby entry reset option status bit */
    using FLASH_OPTSR_CUR_NRST_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a reset is generated when entering Standby mode on core domain (value: 0)
     *          - B_0x1: no reset generated when entering Standby mode on core domain. (value: 1)
     */
        /** @brief a reset is generated when entering Standby mode on core domain */
    constexpr std::uint32_t FLASH_OPTSR_CUR_NRST_STDBY_B_0x0 = 0;
        /** @brief no reset generated when entering Standby mode on core domain. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_NRST_STDBY_B_0x1 = 1;

    /** @brief Life state code (based on Hamming 8,4). More information in Section7.6.11: Product state transitions. */
    using FLASH_OPTSR_CUR_PRODUCT_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed IO at low V sub DD /sub voltage configuration bit. This bit can be set only with V sub DD /sub below 2.7V. */
    using FLASH_OPTSR_CUR_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low V sub DD /sub voltage feature disabled (V sub DD /sub can exceed 2.7V) (value: 0)
     *          - B_0x1: High-speed IO at low V sub DD /sub voltage feature enabled (V sub DD /sub remains below 2.7V) (value: 1)
     */
        /** @brief High-speed IO at low V sub DD /sub voltage feature disabled (V sub DD /sub can exceed 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low V sub DD /sub voltage feature enabled (V sub DD /sub remains below 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low V sub DDIO2 /sub voltage configuration bit. This bit can be set only with V sub DDIO2 /sub below 2.7V. */
    using FLASH_OPTSR_CUR_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low V sub DDIO2 /sub voltage feature disabled (V sub DDIO2 /sub can exceed 2.7V) (value: 0)
     *          - B_0x1: High-speed IO at low V sub DDIO2 /sub voltage feature enabled (V sub DDIO2 /sub remains below 2.7V) (value: 1)
     */
        /** @brief High-speed IO at low V sub DDIO2 /sub voltage feature disabled (V sub DDIO2 /sub can exceed 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low V sub DDIO2 /sub voltage feature enabled (V sub DDIO2 /sub remains below 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDDIO2_HSLV_B_0x1 = 1;

    /** @brief IWDG Stop mode freeze option status bit When set the independent watchdog IWDG is in system Stop mode. */
    using FLASH_OPTSR_CUR_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in system Stop mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in system Stop mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in system Stop mode */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_STOP_B_0x0 = 0;
        /** @brief Independent watchdog keep running in system Stop mode. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_STOP_B_0x1 = 1;

    /** @brief IWDG Standby mode freeze option status bit When set the independent watchdog IWDG is frozen in system Standby mode. */
    using FLASH_OPTSR_CUR_IWDG_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in Standby mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in Standby mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in Standby mode */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_STDBY_B_0x0 = 0;
        /** @brief Independent watchdog keep running in Standby mode. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_STDBY_B_0x1 = 1;

    /** @brief Available only on cryptography enabled devices. Unique boot entry control, selects either ST or OEM iRoT for secure boot. */
    using FLASH_OPTSR_CUR_BOOT_UBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: ST-iRoT (system flash) selected (value: 195)
     *          - B_0xB4: OEM-iRoT (user flash) selected. In Open PRODUCT_STATE this value selects bootloader. Defaut value. (value: 180)
     */
        /** @brief ST-iRoT (system flash) selected */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOOT_UBE_B_0xC3 = 195;
        /** @brief OEM-iRoT (user flash) selected. In Open PRODUCT_STATE this value selects bootloader. Defaut value. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOOT_UBE_B_0xB4 = 180;

    /** @brief Bank swapping option status bit SWAP_BANK reflects whether Bank1 and Bank2 are swapped or not. SWAP_BANK is loaded to SWAP_BANK of FLASH_OPTCR after a reset. */
    using FLASH_OPTSR_CUR_SWAP_BANK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank1 and Bank2 not swapped (value: 0)
     *          - B_0x1: Bank1 and Bank2 swapped (value: 1)
     */
        /** @brief Bank1 and Bank2 not swapped */
    constexpr std::uint32_t FLASH_OPTSR_CUR_SWAP_BANK_B_0x0 = 0;
        /** @brief Bank1 and Bank2 swapped */
    constexpr std::uint32_t FLASH_OPTSR_CUR_SWAP_BANK_B_0x1 = 1;

    /** @brief FLASH option status register */
    using FLASH_OPTSR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Brownout level option configuration bit These bits reflects the power level that generates a system reset. 00 or 11: BOR Level 1, the threshold level is low (around 2.1 V) */
    using FLASH_OPTSR_PRG_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: BOR Level 2, the threshold level is medium (around 2.4 V) (value: 1)
     *          - B_0x2: BOR Level 3, the threshold level is high (around 2.7 V) (value: 2)
     */
        /** @brief BOR Level 2, the threshold level is medium (around 2.4 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOR_LEV_B_0x1 = 1;
        /** @brief BOR Level 3, the threshold level is high (around 2.7 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOR_LEV_B_0x2 = 2;

    /** @brief Brownout high enable configuration bit */
    using FLASH_OPTSR_PRG_BORH_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief disable */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BORH_EN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BORH_EN_B_0x1 = 1;

    /** @brief IWDG control mode option configuration bit */
    using FLASH_OPTSR_PRG_IWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IWDG watchdog is controlled by hardware (value: 0)
     *          - B_0x1: IWDG watchdog is controlled by software (value: 1)
     */
        /** @brief IWDG watchdog is controlled by hardware */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_SW_B_0x0 = 0;
        /** @brief IWDG watchdog is controlled by software */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_SW_B_0x1 = 1;

    /** @brief WWDG control mode option configuration bit */
    using FLASH_OPTSR_PRG_WWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG watchdog is controlled by hardware (value: 0)
     *          - B_0x1: WWDG watchdog is controlled by software (value: 1)
     */
        /** @brief WWDG watchdog is controlled by hardware */
    constexpr std::uint32_t FLASH_OPTSR_PRG_WWDG_SW_B_0x0 = 0;
        /** @brief WWDG watchdog is controlled by software */
    constexpr std::uint32_t FLASH_OPTSR_PRG_WWDG_SW_B_0x1 = 1;

    /** @brief Core domain Stop entry reset option configuration bit */
    using FLASH_OPTSR_PRG_NRST_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a reset is generated when entering Stop mode on core domain (value: 0)
     *          - B_0x1: no reset generated when entering Stop mode on core domain. (value: 1)
     */
        /** @brief a reset is generated when entering Stop mode on core domain */
    constexpr std::uint32_t FLASH_OPTSR_PRG_NRST_STOP_B_0x0 = 0;
        /** @brief no reset generated when entering Stop mode on core domain. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_NRST_STOP_B_0x1 = 1;

    /** @brief Core domain Standby entry reset option configuration bit */
    using FLASH_OPTSR_PRG_NRST_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a reset is generated when entering Standby mode on core domain (value: 0)
     *          - B_0x1: no reset generated when entering Standby mode on core domain. (value: 1)
     */
        /** @brief a reset is generated when entering Standby mode on core domain */
    constexpr std::uint32_t FLASH_OPTSR_PRG_NRST_STDBY_B_0x0 = 0;
        /** @brief no reset generated when entering Standby mode on core domain. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_NRST_STDBY_B_0x1 = 1;

    /** @brief Life state code (based on Hamming 8,4). More information in Section7.6.11: Product state transitions. */
    using FLASH_OPTSR_PRG_PRODUCT_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed IO at low VDD voltage configuration bit. This bit can be set only with VDD below 2.7V. */
    using FLASH_OPTSR_PRG_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.7V) (value: 0)
     *          - B_0x1: High-speed IO at low VDD voltage feature enabled (VDD remains below 2.7V) (value: 1)
     */
        /** @brief High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDD voltage feature enabled (VDD remains below 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low VDDIO2 voltage configuration bit. This bit can be set only with VDDIO2 below 2.7V. */
    using FLASH_OPTSR_PRG_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDDIO2 voltage feature disabled (VDDIO2 can exceed 2.7V) (value: 0)
     *          - B_0x1: High-speed IO at low VDDIO2 voltage feature enabled (VDDIO2 remains below 2.7V) (value: 1)
     */
        /** @brief High-speed IO at low VDDIO2 voltage feature disabled (VDDIO2 can exceed 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDDIO2 voltage feature enabled (VDDIO2 remains below 2.7V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDDIO2_HSLV_B_0x1 = 1;

    /** @brief IWDG Stop mode freeze option status bit When set the independent watchdog IWDG is in system Stop mode. */
    using FLASH_OPTSR_PRG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in system Stop mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in system Stop mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in system Stop mode */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STOP_B_0x0 = 0;
        /** @brief Independent watchdog keep running in system Stop mode. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STOP_B_0x1 = 1;

    /** @brief IWDG Standby mode freeze option status bit When set the independent watchdog IWDG is frozen in system Standby mode. */
    using FLASH_OPTSR_PRG_IWDG_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in Standby mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in Standby mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in Standby mode */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STDBY_B_0x0 = 0;
        /** @brief Independent watchdog keep running in Standby mode. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STDBY_B_0x1 = 1;

    /** @brief Available only on cryptography enabled devices. Unique boot entry control, selects either ST or OEM iRoT for secure boot. In Open PRODUCT_STATE this value selects bootloader. Defaut value. */
    using FLASH_OPTSR_PRG_BOOT_UBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: ST-iRoT (system flash) selected (value: 195)
     *          - B_0xB4: OEM-iRoT (user flash) selected. (value: 180)
     */
        /** @brief ST-iRoT (system flash) selected */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOOT_UBE_B_0xC3 = 195;
        /** @brief OEM-iRoT (user flash) selected. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOOT_UBE_B_0xB4 = 180;

    /** @brief Bank swapping option configuration bit SWAP_BANK option bit is used to configure whether the Bank1 and Bank2 are swapped or not. This bit is loaded with the SWAP_BANK bit of FLASH_OPTSR_CUR register after a reset. */
    using FLASH_OPTSR_PRG_SWAP_BANK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank1 and Bank2 not swapped (value: 0)
     *          - B_0x1: Bank1 and Bank2 swapped (value: 1)
     */
        /** @brief Bank1 and Bank2 not swapped */
    constexpr std::uint32_t FLASH_OPTSR_PRG_SWAP_BANK_B_0x0 = 0;
        /** @brief Bank1 and Bank2 swapped */
    constexpr std::uint32_t FLASH_OPTSR_PRG_SWAP_BANK_B_0x1 = 1;

    /** @brief FLASH non-secure EPOCH register */
    using FLASH_NSEPOCHR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile non-secure EPOCH counter */
    using FLASH_NSEPOCHR_CUR_NS_EPOCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure EPOCH register */
    using FLASH_SECEPOCHR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile secure EPOCH counter */
    using FLASH_SECEPOCHR_CUR_SEC_EPOCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option status register 2 */
    using FLASH_OPTSR2_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1 and SRAM3 erase upon system reset */
    using FLASH_OPTSR2_CUR_SRAM13_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 and SRAM3 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM1 and SRAM3 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM1 and SRAM3 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM13_RST_B_0x0 = 0;
        /** @brief SRAM1 and SRAM3 not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM13_RST_B_0x1 = 1;

    /** @brief SRAM2 erase when system reset */
    using FLASH_OPTSR2_CUR_SRAM2_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM2 not erased when a system reset occurs. (value: 1)
     */
        /** @brief SRAM2 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM2_RST_B_0x0 = 0;
        /** @brief SRAM2 not erased when a system reset occurs. */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM2_RST_B_0x1 = 1;

    /** @brief Backup RAM ECC detection and correction disable */
    using FLASH_OPTSR2_CUR_BKPRAM_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPRAM ECC check enabled (value: 0)
     *          - B_0x1: BKPRAM ECC check disabled (value: 1)
     */
        /** @brief BKPRAM ECC check enabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_BKPRAM_ECC_B_0x0 = 0;
        /** @brief BKPRAM ECC check disabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_BKPRAM_ECC_B_0x1 = 1;

    /** @brief SRAM3 ECC detection and correction disable */
    using FLASH_OPTSR2_CUR_SRAM3_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 ECC check enabled (value: 0)
     *          - B_0x1: SRAM3 ECC check disabled (value: 1)
     */
        /** @brief SRAM3 ECC check enabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM3_ECC_B_0x0 = 0;
        /** @brief SRAM3 ECC check disabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM3_ECC_B_0x1 = 1;

    /** @brief SRAM2 ECC detection and correction disable */
    using FLASH_OPTSR2_CUR_SRAM2_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 ECC check enabled (value: 0)
     *          - B_0x1: SRAM2 ECC check disabled (value: 1)
     */
        /** @brief SRAM2 ECC check enabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM2_ECC_B_0x0 = 0;
        /** @brief SRAM2 ECC check disabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM2_ECC_B_0x1 = 1;

    /** @brief USB power delivery configuration option bit */
    using FLASH_OPTSR2_CUR_USBPD_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enabled (value: 0)
     *          - B_0x1: Disabled (value: 1)
     */
        /** @brief Enabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_USBPD_DIS_B_0x0 = 0;
        /** @brief Disabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_USBPD_DIS_B_0x1 = 1;

    /** @brief TrustZone enable configuration bits This bit enables the device is in TrustZone mode during an option byte change. */
    using FLASH_OPTSR2_CUR_TZEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: TrustZone disabled (value: 195)
     *          - B_0xB4: TrustZone enabled. (value: 180)
     */
        /** @brief TrustZone disabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_TZEN_B_0xC3 = 195;
        /** @brief TrustZone enabled. */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_TZEN_B_0xB4 = 180;

    /** @brief FLASH option status register 2 */
    using FLASH_OPTSR2_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1 and SRAM3 erase upon system reset Note: SRAM erase is triggered by option byte change operation, when enabling this feature. */
    using FLASH_OPTSR2_PRG_SRAM1_3_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 and SRAM3 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM1 and SRAM3 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM1 and SRAM3 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM1_3_RST_B_0x0 = 0;
        /** @brief SRAM1 and SRAM3 not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM1_3_RST_B_0x1 = 1;

    /** @brief SRAM2 erase when system reset Note: SRAM erase is triggered by option byte change operation, when enabling this feature. */
    using FLASH_OPTSR2_PRG_SRAM2_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM2 not erased when a system reset occurs. (value: 1)
     */
        /** @brief SRAM2 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM2_RST_B_0x0 = 0;
        /** @brief SRAM2 not erased when a system reset occurs. */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM2_RST_B_0x1 = 1;

    /** @brief Backup RAM ECC detection and correction disable */
    using FLASH_OPTSR2_PRG_BKPRAM_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPRAM ECC check enabled (value: 0)
     *          - B_0x1: BKPRAM ECC check disabled (value: 1)
     */
        /** @brief BKPRAM ECC check enabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_BKPRAM_ECC_B_0x0 = 0;
        /** @brief BKPRAM ECC check disabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_BKPRAM_ECC_B_0x1 = 1;

    /** @brief SRAM3 ECC detection and correction disable */
    using FLASH_OPTSR2_PRG_SRAM3_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 ECC check enabled (value: 0)
     *          - B_0x1: SRAM3 ECC check disabled (value: 1)
     */
        /** @brief SRAM3 ECC check enabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM3_ECC_B_0x0 = 0;
        /** @brief SRAM3 ECC check disabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM3_ECC_B_0x1 = 1;

    /** @brief SRAM2 ECC detection and correction disable */
    using FLASH_OPTSR2_PRG_SRAM2_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 ECC check enabled (value: 0)
     *          - B_0x1: SRAM2 ECC check disabled (value: 1)
     */
        /** @brief SRAM2 ECC check enabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM2_ECC_B_0x0 = 0;
        /** @brief SRAM2 ECC check disabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM2_ECC_B_0x1 = 1;

    /** @brief USB power delivery configuration option bit */
    using FLASH_OPTSR2_PRG_USBPD_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enabled (value: 0)
     *          - B_0x1: Disabled (value: 1)
     */
        /** @brief Enabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_USBPD_DIS_B_0x0 = 0;
        /** @brief Disabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_USBPD_DIS_B_0x1 = 1;

    /** @brief TrustZone enable configuration bits This bit enables the device is in TrustZone mode during an option byte change. */
    using FLASH_OPTSR2_PRG_TZEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: TrustZone disabled (value: 195)
     *          - B_0xB4: TrustZone enabled (value: 180)
     */
        /** @brief TrustZone disabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_TZEN_B_0xC3 = 195;
        /** @brief TrustZone enabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_TZEN_B_0xB4 = 180;

    /** @brief FLASH non-secure boot register */
    using FLASH_NSBOOTR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A field locking the values of SWAP_BANK, and NSBOOTADD settings. */
    using FLASH_NSBOOTR_CUR_NSBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: The SWAP_BANK and NSBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: The NSBOOTADD is frozen. SWAP_ BANK can only be modified with TZEN set to 0xB4 (enabled). (value: 180)
     */
        /** @brief The SWAP_BANK and NSBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_NSBOOTR_CUR_NSBOOT_LOCK_B_0xC3 = 195;
        /** @brief The NSBOOTADD is frozen. SWAP_ BANK can only be modified with TZEN set to 0xB4 (enabled). */
    constexpr std::uint32_t FLASH_NSBOOTR_CUR_NSBOOT_LOCK_B_0xB4 = 180;

    /** @brief Non secure unique boot entry address These bits reflect the Non secure UBE address */
    using FLASH_NSBOOTR_CUR_NSBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure boot register */
    using FLASH_NSBOOTR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A field locking the values of SWAP_ BANK, and NSBOOTADD settings. */
    using FLASH_NSBOOTR_PRG_NSBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: The SWAP_ BANK and NSBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: The NSBOOTADD is frozen. SWAP_ BANK can only be modified with TZEN set to 0xB4 (enabled). (value: 180)
     */
        /** @brief The SWAP_ BANK and NSBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_NSBOOTR_PRG_NSBOOT_LOCK_B_0xC3 = 195;
        /** @brief The NSBOOTADD is frozen. SWAP_ BANK can only be modified with TZEN set to 0xB4 (enabled). */
    constexpr std::uint32_t FLASH_NSBOOTR_PRG_NSBOOT_LOCK_B_0xB4 = 180;

    /** @brief Non secure unique boot entry address These bits allow configuring the Non secure BOOT address */
    using FLASH_NSBOOTR_PRG_NSBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot register */
    using FLASH_SECBOOTR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A field locking the values of UBE, SWAP_BANK, and SECBOOTADD settings. */
    using FLASH_SECBOOTR_CUR_SECBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: The BOOT_UBE, SWAP_BANK and SECBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: The BOOT_UBE and SECBOOTADD are frozen. SWAP_ BANK can only be modified with TZEN set to 0xC3 (disabled). (value: 180)
     */
        /** @brief The BOOT_UBE, SWAP_BANK and SECBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_SECBOOTR_CUR_SECBOOT_LOCK_B_0xC3 = 195;
        /** @brief The BOOT_UBE and SECBOOTADD are frozen. SWAP_ BANK can only be modified with TZEN set to 0xC3 (disabled). */
    constexpr std::uint32_t FLASH_SECBOOTR_CUR_SECBOOT_LOCK_B_0xB4 = 180;

    /** @brief Unique boot entry secure address These bits reflect the Secure UBE address */
    using FLASH_SECBOOTR_CUR_SECBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot register */
    using FLASH_BOOTR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A field locking the values of UBE, SWAP_ BANK, and SECBOOTADD setting. */
    using FLASH_BOOTR_PRG_SECBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: The BOOT_UBE, SWAP_ BANK and SECBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: The BOOT_UBE and SECBOOTADD are frozen. SWAP_BANK can only be modified with TZEN set to 0xC3 (disabled). (value: 180)
     */
        /** @brief The BOOT_UBE, SWAP_ BANK and SECBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_BOOTR_PRG_SECBOOT_LOCK_B_0xC3 = 195;
        /** @brief The BOOT_UBE and SECBOOTADD are frozen. SWAP_BANK can only be modified with TZEN set to 0xC3 (disabled). */
    constexpr std::uint32_t FLASH_BOOTR_PRG_SECBOOT_LOCK_B_0xB4 = 180;

    /** @brief Secure unique boot entry address. These bits allow configuring the secure UBE address. */
    using FLASH_BOOTR_PRG_SECBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure OTP block lock */
    using FLASH_OTPBLR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP block lock Block n corresponds to OTP 16-bit word 32 x n to 32 x n + 31. LOCKBL[n] = 1 indicates that all OTP 16-bit words in OTP Block n are locked and attempt to program them results in WRPERR. LOCKBL[n] = 0 indicates that all OTP 16-bit words in OTP Block n are not locked. When one block is locked, it's not possible to remove the write protection. Also if not locked, it is not possible to erase OTP words. */
    using FLASH_OTPBLR_CUR_LOCKBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure OTP block lock */
    using FLASH_OTPBLR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP block lock Block n corresponds to OTP 16-bit word 32 x n to 32 x n + 31. LOCKBL[n] = 1 indicates that all OTP 16-bit words in OTP Block n are locked and attempt to program them results in WRPERR. LOCKBL[n] = 0 indicates that all OTP 16-bit words in OTP Block n are not locked. When one block is locked, it is not possible to remove the write protection. LOCKBL bits can be set if the corresponding bit in FLASH_OTPBLR_CUR is cleared. */
    using FLASH_OTPBLR_PRG_LOCKBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based register for Bank 1 */
    using FLASH_SECBB1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure 8Kbytes flash Bank 1 sector attributes */
    using FLASH_SECBB1R1_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector (32 * (x-1) + y) in bank 1 is non secure. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 1 is secure. (value: 1)
     */
        /** @brief sector (32 * (x-1) + y) in bank 1 is non secure. */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 1 is secure. */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB1_B_0x1 = 1;

    /** @brief FLASH secure block based register for Bank 1 */
    using FLASH_SECBB1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure 8Kbytes flash Bank 1 sector attributes */
    using FLASH_SECBB1R2_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector (32 * (x-1) + y) in bank 1 is non secure. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 1 is secure. (value: 1)
     */
        /** @brief sector (32 * (x-1) + y) in bank 1 is non secure. */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 1 is secure. */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB1_B_0x1 = 1;

    /** @brief FLASH secure block based register for Bank 1 */
    using FLASH_SECBB1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure 8Kbytes flash Bank 1 sector attributes */
    using FLASH_SECBB1R3_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector (32 * (x-1) + y) in bank 1 is non secure. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 1 is secure. (value: 1)
     */
        /** @brief sector (32 * (x-1) + y) in bank 1 is non secure. */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 1 is secure. */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB1_B_0x1 = 1;

    /** @brief FLASH secure block based register for Bank 1 */
    using FLASH_SECBB1R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure 8Kbytes flash Bank 1 sector attributes */
    using FLASH_SECBB1R4_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector (32 * (x-1) + y) in bank 1 is non secure. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 1 is secure. (value: 1)
     */
        /** @brief sector (32 * (x-1) + y) in bank 1 is non secure. */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 1 is secure. */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB1_B_0x1 = 1;

    /** @brief FLASH privilege block based register for Bank 1 */
    using FLASH_PRIVBB1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged/unprivileged 8-Kbyte flash Bank 1 sector attribute */
    using FLASH_PRIVBB1R1_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 1 is unprivileged. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 1 is privileged. (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 1 is unprivileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 1 is privileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH privilege block based register for Bank 1 */
    using FLASH_PRIVBB1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged/unprivileged 8-Kbyte flash Bank 1 sector attribute */
    using FLASH_PRIVBB1R2_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 1 is unprivileged. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 1 is privileged. (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 1 is unprivileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 1 is privileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH privilege block based register for Bank 1 */
    using FLASH_PRIVBB1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged/unprivileged 8-Kbyte flash Bank 1 sector attribute */
    using FLASH_PRIVBB1R3_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 1 is unprivileged. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 1 is privileged. (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 1 is unprivileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 1 is privileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH privilege block based register for Bank 1 */
    using FLASH_PRIVBB1R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged/unprivileged 8-Kbyte flash Bank 1 sector attribute */
    using FLASH_PRIVBB1R4_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 1 is unprivileged. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 1 is privileged. (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 1 is unprivileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 1 is privileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH security watermark for Bank 1 */
    using FLASH_SECWM1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 security WM area 1 start sector */
    using FLASH_SECWM1R_CUR_SECWM1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 security WM area 1 end sector */
    using FLASH_SECWM1R_CUR_SECWM1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH security watermark for Bank 1 */
    using FLASH_SECWM1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 security WM area 1 start sector */
    using FLASH_SECWM1R_PRG_SECWM1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 security WM area 1 end sector */
    using FLASH_SECWM1R_PRG_SECWM1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector group protection for Bank 1 */
    using FLASH_WRP1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 sector group protection option status byte Each FLASH_WRP1R_CUR bit reflects the write protection status of the corresponding group of four consecutive sectors in bank 1 (0: the group is write protected; 1: the group is not write protected) Bit 0: Group embedding sectors 0 to 3 Bit 1: Group embedding sectors 4 to 7 Bit N: Group embedding sectors 4 x N to 4 x N + 3 Bit 31: Group embedding sectors 124 to 127 */
    using FLASH_WRP1R_CUR_WRPSG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector group protection for Bank 1 */
    using FLASH_WRP1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 sector group protection option status byte Setting WRPSG1 bits to 0 write protects the corresponding group of four consecutive sectors in bank 1 (0: the group is write protected; 1: the group is not write protected) Bit 0: Group embedding sectors 0 to 3 Bit 1: Group embedding sectors 4 to 7 Bit N: Group embedding sectors 4 x N to 4 x N + 3 Bit 31: Group embedding sectors 124 to 127 */
    using FLASH_WRP1R_PRG_WRPSG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH data sector configuration Bank 1 */
    using FLASH_EDATA1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDATA1_STRT contains the start sectors of the flash high-cycle data area in Bank1 There is no hardware effect to those bits. They shall be managed by ST tools in Flasher. ... */
    using FLASH_EDATA1R_CUR_EDATA1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The last sector of the Bank1 is reserved for flash high-cycle data (value: 0)
     *          - B_0x1: The two last sectors of the Bank 1 are reserved for flash high-cycle data (value: 1)
     *          - B_0x2: The three last sectors of the Bank 1 are reserved for flash high-cycle data (value: 2)
     *          - B_0x7: The eight last sectors of the Bank 1 are reserved for flash high-cycle data (value: 7)
     */
        /** @brief The last sector of the Bank1 is reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_STRT_B_0x0 = 0;
        /** @brief The two last sectors of the Bank 1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_STRT_B_0x1 = 1;
        /** @brief The three last sectors of the Bank 1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_STRT_B_0x2 = 2;
        /** @brief The eight last sectors of the Bank 1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_STRT_B_0x7 = 7;

    /** @brief Bank1 flash high-cycle data enable */
    using FLASH_EDATA1R_CUR_EDATA1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No flash high-cycle data area (value: 0)
     *          - B_0x1: Flash high-cycle data is used (value: 1)
     */
        /** @brief No flash high-cycle data area */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_EN_B_0x0 = 0;
        /** @brief Flash high-cycle data is used */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_EN_B_0x1 = 1;

    /** @brief FLASH data sector configuration Bank 1 */
    using FLASH_EDATA1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDATA1_STRT contains the start sectors of the flash high-cycle data area in Bank 1 There is no hardware effect to those bits. They shall be managed by ST tools in Flasher. ... Note: 111: The eight last sectors of the Bank 1 are reserved for flash high-cycle data */
    using FLASH_EDATA1R_PRG_EDATA1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The last sector of the Bank 1 is reserved for flash high-cycle data (value: 0)
     *          - B_0x1: The two last sectors of the Bank 1 are reserved for flash high-cycle data (value: 1)
     *          - B_0x2: The three last sectors of the Bank 1 are reserved for flash high-cycle data (value: 2)
     */
        /** @brief The last sector of the Bank 1 is reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_STRT_B_0x0 = 0;
        /** @brief The two last sectors of the Bank 1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_STRT_B_0x1 = 1;
        /** @brief The three last sectors of the Bank 1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_STRT_B_0x2 = 2;

    /** @brief Bank 1 flash high-cycle data enable */
    using FLASH_EDATA1R_PRG_EDATA1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No flash high-cycle data area (value: 0)
     *          - B_0x1: Flash high-cycle data is used (value: 1)
     */
        /** @brief No flash high-cycle data area */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_EN_B_0x0 = 0;
        /** @brief Flash high-cycle data is used */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_EN_B_0x1 = 1;

    /** @brief FLASH HDP Bank 1 configuration */
    using FLASH_HDP1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8-Kbyte sectors */
    using FLASH_HDP1R_CUR_HDP1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8-Kbyte sectors */
    using FLASH_HDP1R_CUR_HDP1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH HDP Bank 1 configuration */
    using FLASH_HDP1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8-Kbyte sectors */
    using FLASH_HDP1R_PRG_HDP1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8-Kbyte sectors */
    using FLASH_HDP1R_PRG_HDP1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC correction register */
    using FLASH_ECCCORR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error address When an ECC error occurs (for single correction) during a read operation, the ADDR_ECC contains the address that generated the error. ADDR_ECC is reset when the flag error is reset. The flash interface programs the address in this register only when no ECC error flags are set. This means that only the first address that generated an ECC error is saved. The address in ADDR_ECC is relative to the flash memory area where the error occurred (user flash memory, system flash memory, data area, read-only/OTP area). */
    using FLASH_ECCCORR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Single ECC error corrected in flash OB Keys storage area. It indicates the OBK storage concerned by ECC error. */
    using FLASH_ECCCORR_OBK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail for corrected ECC error in flash high-cycle data area It indicates if flash high-cycle data area is concerned by ECC error. */
    using FLASH_ECCCORR_EDATA_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail bank for corrected ECC error It indicates which bank is concerned by ECC error */
    using FLASH_ECCCORR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail for corrected ECC error in system flash memory It indicates if system flash memory is concerned by ECC error. */
    using FLASH_ECCCORR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP ECC error bit This bit is set to 1 when one single ECC correction occurred during the last successful read operation from the read-only/ OTP area. The address of the ECC error is available in ADDR_ECC bitfield. */
    using FLASH_ECCCORR_OTP_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single correction error interrupt enable bit When ECCCIE bit is set to 1, an interrupt is generated when an ECC single correction error occurs during a read operation. */
    using FLASH_ECCCORR_ECCCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC single correction error occurs (value: 0)
     *          - B_0x1: non-secure interrupt generated when an ECC single correction error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC single correction error occurs */
    constexpr std::uint32_t FLASH_ECCCORR_ECCCIE_B_0x0 = 0;
        /** @brief non-secure interrupt generated when an ECC single correction error occurs */
    constexpr std::uint32_t FLASH_ECCCORR_ECCCIE_B_0x1 = 1;

    /** @brief ECC correction set by hardware when single ECC error has been detected and corrected. Cleared by writing 1. */
    using FLASH_ECCCORR_ECCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC detection register */
    using FLASH_ECCDETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error address When an ECC error occurs (double detection) during a read operation, the ADDR_ECC contains the address that generated the error. ADDR_ECC is reset when the flag error is reset. The flash interface programs the address in this register only when no ECC error flags are set. This means that only the first address that generated an double ECC error is saved. The address in ADDR_ECC is relative to the flash memory area where the error occurred (user flash memory, system flash memory, data area, read-only/OTP area). */
    using FLASH_ECCDETR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail double ECC error in flash OB Keys storage area. It indicates the OBK storage concerned by ECC error. */
    using FLASH_ECCDETR_OBK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail double ECC error in flash high-cycle data area It indicates if flash high-cycle data area is concerned by ECC error. */
    using FLASH_ECCDETR_EDATA_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail bank for double ECC error It indicates which bank is concerned by ECC error */
    using FLASH_ECCDETR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail for double ECC error in system flash memory It indicates if system flash memory is concerned by ECC error. */
    using FLASH_ECCDETR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP ECC error bit This bit is set to 1 when double ECC detection occurred during the last read operation from the read-only/ OTP area. The address of the ECC error is available in ADDR_ECC bitfield. */
    using FLASH_ECCDETR_OTP_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC detection Set by hardware when two ECC error has been detected. When this bit is set, a NMI is generated. Cleared by writing 1. Needs to be cleared in order to detect subsequent double ECC errors. */
    using FLASH_ECCDETR_ECCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC data */
    using FLASH_ECCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error data When an double detection ECC error occurs on special areas with 6-bit ECC on 16-bit data (data area, read-only/OTP area), the failing data is read to this register. By checking if it is possible to determine whether the failure was on a real data, or due to access to uninitialized memory. */
    using FLASH_ECCDR_DATA_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block-based register for Bank 2 */
    using FLASH_SECBB2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure flash Bank 2 sector attribute */
    using FLASH_SECBB2R1_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 2 is non secure (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 2 is secure (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 2 is non secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 2 is secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB2_B_0x1 = 1;

    /** @brief FLASH secure block-based register for Bank 2 */
    using FLASH_SECBB2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure flash Bank 2 sector attribute */
    using FLASH_SECBB2R2_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 2 is non secure (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 2 is secure (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 2 is non secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 2 is secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB2_B_0x1 = 1;

    /** @brief FLASH secure block-based register for Bank 2 */
    using FLASH_SECBB2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure flash Bank 2 sector attribute */
    using FLASH_SECBB2R3_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 2 is non secure (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 2 is secure (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 2 is non secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 2 is secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB2_B_0x1 = 1;

    /** @brief FLASH secure block-based register for Bank 2 */
    using FLASH_SECBB2R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure flash Bank 2 sector attribute */
    using FLASH_SECBB2R4_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 2 is non secure (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 2 is secure (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 2 is non secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 2 is secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB2_B_0x1 = 1;

    /** @brief FLASH privilege block-based register for Bank 2 */
    using FLASH_PRIVBB2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / non-privileged 8-Kbyte flash Bank 2 sector attribute */
    using FLASH_PRIVBB2R1_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 2 is unprivileged (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 2 is privileged (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 2 is unprivileged */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 2 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB2_B_0x1 = 1;

    /** @brief FLASH privilege block-based register for Bank 2 */
    using FLASH_PRIVBB2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / non-privileged 8-Kbyte flash Bank 2 sector attribute */
    using FLASH_PRIVBB2R2_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 2 is unprivileged (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 2 is privileged (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 2 is unprivileged */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 2 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB2_B_0x1 = 1;

    /** @brief FLASH privilege block-based register for Bank 2 */
    using FLASH_PRIVBB2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / non-privileged 8-Kbyte flash Bank 2 sector attribute */
    using FLASH_PRIVBB2R3_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 2 is unprivileged (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 2 is privileged (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 2 is unprivileged */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 2 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB2_B_0x1 = 1;

    /** @brief FLASH privilege block-based register for Bank 2 */
    using FLASH_PRIVBB2R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / non-privileged 8-Kbyte flash Bank 2 sector attribute */
    using FLASH_PRIVBB2R4_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in bank 2 is unprivileged (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in bank 2 is privileged (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in bank 2 is unprivileged */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in bank 2 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB2_B_0x1 = 1;

    /** @brief FLASH security watermark for Bank 2 */
    using FLASH_SECWM2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 security WM area start sector */
    using FLASH_SECWM2R_CUR_SECWM_STRT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 security WM end sector */
    using FLASH_SECWM2R_CUR_SECWM_END2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH security watermark for Bank 2 */
    using FLASH_SECWM2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 security WM area start sector */
    using FLASH_SECWM2R_PRG_SECWM_STRT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 security WM area end sector */
    using FLASH_SECWM2R_PRG_SECWM_END2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector group protection for Bank 2 */
    using FLASH_WRP2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 sector group protection option status byte Each FLASH_WRP2R_CUR bit reflects the write protection status of the corresponding group of 4 consecutive sectors in bank 2 (0: group is write protected; 1: group is not write protected) Bit 0: Group embedding sectors 0 to 3 Bit 1: Group embedding sectors 4 to 7 Bit N: Group embedding sectors 4 x N to 4 x N + 3 Bit 31: Group embedding sectors 124 to 127 */
    using FLASH_WRP2R_CUR_WRPSG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector group protection for Bank 2 */
    using FLASH_WRP2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 sector group protection option status byte Setting WRPSGn2 bits to 0 write protects the corresponding group of four consecutive sectors in Bank 2 (0: group is write protected; 1: group is not write protected) Bit 0: Group embedding sectors 0 to 3 Bit 1: Group embedding sectors 4 to 7 Bit N: Group embedding sectors 4 x N to 4 x N + 3 Bit 31: Group embedding sectors 124 to 127 */
    using FLASH_WRP2R_PRG_WRPSG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH data sectors configuration Bank 2 */
    using FLASH_EDATA2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDATA2_STRT contains the start sectors of the flash high-cycle data area in Bank 2 There is no hardware effect to those bits. They shall be managed by ST tools in Flasher. ... Note: 111: The eight last sectors of the Bank 2 are reserved for flash high-cycle data */
    using FLASH_EDATA2R_CUR_EDATA2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The last sector of the bank 2is reserved for flash high-cycle data (value: 0)
     *          - B_0x1: The two last sectors of the Bank 2 are reserved for flash high-cycle data (value: 1)
     *          - B_0x2: The three last sectors of the Bank 2 are reserved for flash high-cycle data (value: 2)
     */
        /** @brief The last sector of the bank 2is reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA2R_CUR_EDATA2_STRT_B_0x0 = 0;
        /** @brief The two last sectors of the Bank 2 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA2R_CUR_EDATA2_STRT_B_0x1 = 1;
        /** @brief The three last sectors of the Bank 2 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA2R_CUR_EDATA2_STRT_B_0x2 = 2;

    /** @brief Bank2 flash high-cycle data enable */
    using FLASH_EDATA2R_CUR_EDATA2_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No flash high-cycle data area (value: 0)
     *          - B_0x1: Flash high-cycle data is used (value: 1)
     */
        /** @brief No flash high-cycle data area */
    constexpr std::uint32_t FLASH_EDATA2R_CUR_EDATA2_EN_B_0x0 = 0;
        /** @brief Flash high-cycle data is used */
    constexpr std::uint32_t FLASH_EDATA2R_CUR_EDATA2_EN_B_0x1 = 1;

    /** @brief FLASH data sector configuration Bank 2 */
    using FLASH_EDATA2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDATA2_STRT contains the start sectors of the flash high-cycle data area in Bank 2 There is no hardware effect to those bits. They shall be managed by ST tools in Flasher. ... Note: 111: The eight last sectors of the Bank 2 are reserved for flash high-cycle data. */
    using FLASH_EDATA2R_PRG_EDATA2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The last sector of the Bank 2 is reserved for flash high-cycle data. (value: 0)
     *          - B_0x1: The two last sectors of the Bank 2 are reserved for flash high-cycle data. (value: 1)
     *          - B_0x2: The three last sectors of the Bank 2 are reserved for flash high-cycle data. (value: 2)
     */
        /** @brief The last sector of the Bank 2 is reserved for flash high-cycle data. */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_STRT_B_0x0 = 0;
        /** @brief The two last sectors of the Bank 2 are reserved for flash high-cycle data. */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_STRT_B_0x1 = 1;
        /** @brief The three last sectors of the Bank 2 are reserved for flash high-cycle data. */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_STRT_B_0x2 = 2;

    /** @brief Bank 2 flash high-cycle data enable */
    using FLASH_EDATA2R_PRG_EDATA2_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No flash high-cycle data area (value: 0)
     *          - B_0x1: Flash high-cycle data is used (value: 1)
     */
        /** @brief No flash high-cycle data area */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_EN_B_0x0 = 0;
        /** @brief Flash high-cycle data is used */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_EN_B_0x1 = 1;

    /** @brief FLASH HDP Bank 2 configuration */
    using FLASH_HDP2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8-Kbyte sectors */
    using FLASH_HDP2R_CUR_HDP2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8-Kbyte sectors */
    using FLASH_HDP2R_CUR_HDP2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH HDP Bank 2 configuration */
    using FLASH_HDP2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8-Kbyte sectors */
    using FLASH_HDP2R_PRG_HDP2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8-Kbyte sectors */
    using FLASH_HDP2R_PRG_HDP2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
