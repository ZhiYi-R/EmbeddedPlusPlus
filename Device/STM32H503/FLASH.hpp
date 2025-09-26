/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H503_FLASH_HPP
#define EMBEDDED_PP_STM32H503_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief FLASH address block description */
namespace STM32H503::FLASH {

    /** @brief FLASH access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read latency These bits are used to control the number of wait states used during read operations on both non-volatile memory banks. The application software has to program them to the correct value depending on the embedded Flash memory interface frequency and voltage conditions. ... Note: No check is performed by hardware to verify that the configuration is correct. */
    using FLASH_ACR_LATENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: zero wait state used to read a word from non-volatile memory (value: 0)
     *          - B_0x1: one wait state used to read a word from non-volatile memory (value: 1)
     *          - B_0x2: two wait states used to read a word from non-volatile memory (value: 2)
     *          - B_0x7: seven wait states used to read a word from non-volatile memory (value: 7)
     *          - B_0xF: 15 wait states used to read from non-volatile memory (value: 15)
     */
        /** @brief zero wait state used to read a word from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x0 = 0;
        /** @brief one wait state used to read a word from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x1 = 1;
        /** @brief two wait states used to read a word from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x2 = 2;
        /** @brief seven wait states used to read a word from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x7 = 7;
        /** @brief 15 wait states used to read from non-volatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0xF = 15;

    /** @brief Flash signal delay These bits are used to control the delay between non-volatile memory signals during programming operations. Application software has to program them to the correct value depending on the embedded Flash memory interface frequency. Please refer to for details. Note: No check is performed to verify that the configuration is correct. Two WRHIGHFREQ values can be selected for some frequencies. */
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

    /** @brief Smart prefetch enable. When bit value is modified, user must read back ACR register to be sure S_PRFTEN has been taken into account. Bits used to control the prefetch functionality. */
    using FLASH_ACR_S_PRFTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prefetch, if enabled fetches each instruction. (value: 0)
     *          - B_0x1: prefetch, if enabled avoids fetch past branch to improve efficiency. (value: 1)
     */
        /** @brief prefetch, if enabled fetches each instruction. */
    constexpr std::uint32_t FLASH_ACR_S_PRFTEN_B_0x0 = 0;
        /** @brief prefetch, if enabled avoids fetch past branch to improve efficiency. */
    constexpr std::uint32_t FLASH_ACR_S_PRFTEN_B_0x1 = 1;

    /** @brief FLASH key register */
    using FLASH_NSKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile memory configuration access unlock key */
    using FLASH_NSKEYR_NSKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option key register */
    using FLASH_OPTKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option bytes control access unlock key */
    using FLASH_OPTKEYR_OPTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH operation status register */
    using FLASH_OPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation address. */
    using FLASH_OPSR_ADDR_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation bank It indicates which bank was concerned by operation. */
    using FLASH_OPSR_BK_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation in system Flash memory interrupted Indicates that reset interrupted an ongoing operation in System Flash. */
    using FLASH_OPSR_SYSF_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP operation interrupted Indicates that reset interrupted an ongoing operation in OTP area. */
    using FLASH_OPSR_OTP_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory operation code */
    using FLASH_OPSR_CODE_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Flash operation on going during previous reset (value: 0)
     *          - B_0x1: Single write operation interrupted (value: 1)
     *          - B_0x3: Sector erase operation interrupted (value: 3)
     *          - B_0x4: Bank erase operation interrupted (value: 4)
     *          - B_0x5: Mass erase operation interrupted (value: 5)
     *          - B_0x6: Option change operation interrupted (value: 6)
     */
        /** @brief No Flash operation on going during previous reset */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x0 = 0;
        /** @brief Single write operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x1 = 1;
        /** @brief Sector erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x3 = 3;
        /** @brief Bank erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x4 = 4;
        /** @brief Mass erase operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x5 = 5;
        /** @brief Option change operation interrupted */
    constexpr std::uint32_t FLASH_OPSR_CODE_OP_B_0x6 = 6;

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

    /** @brief Option byte start change option configuration bit OPTSTRT triggers an option byte change operation. The user can set OPTSTRT only when the OPTLOCK bit is cleared to 0. It's set only by Software and cleared when the option byte change is completed or an error occurs (PGSERR or OPTCHANGEERR). It's reseted at the same time as BSY bit. The user application cannot modify any FLASH_XXX_PRG embedded Flash memory register until the option change operation has been completed. Before setting this bit, the user has to write the required values in the FLASH_XXX_PRG registers. The FLASH_XXX_PRG registers are locked until the option byte change operation has been executed in non-volatile memory. */
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
    /** @brief busy flag BSY flag indicates that a Flash memory is busy by an operation (write, erase, option byte change). It is set at the beginning of a Flash memory operation and cleared when the operation finishes or an error occurs. */
    using FLASH_NSSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no programming, erase or option byte change operation being executed (value: 0)
     *          - B_0x1: programming, erase or option byte change operation being executed (value: 1)
     */
        /** @brief no programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_NSSR_BSY_B_0x0 = 0;
        /** @brief programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_NSSR_BSY_B_0x1 = 1;

    /** @brief write buffer not empty flag WBNE flag is set when the embedded Flash memory is waiting for new data to complete the write buffer. In this state, the write buffer is not empty. WBNE is reset by hardware each time the write buffer is complete or the write buffer is emptied following one of the event below: the application software forces the write operation using FW bit in FLASH_NSCR the embedded Flash memory detects an error that involves data loss This bit cannot be reset by software writing 0 directly. To reset it, clear the write buffer by performing any of the above listed actions, or send the missing data. */
    using FLASH_NSSR_WBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write buffer empty or full (value: 0)
     *          - B_0x1: write buffer waiting data to complete (value: 1)
     */
        /** @brief write buffer empty or full */
    constexpr std::uint32_t FLASH_NSSR_WBNE_B_0x0 = 0;
        /** @brief write buffer waiting data to complete */
    constexpr std::uint32_t FLASH_NSSR_WBNE_B_0x1 = 1;

    /** @brief data buffer not empty flag DBNE flag is set when the embedded Flash memory interface is processing 6-bits ECC data in dedicated buffer. This bit cannot be set to 0 by software. The hardware resets it once the buffer is free. */
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

    /** @brief inconsistency error flag INCERR flag is raised when a inconsistency error occurs. An interrupt is generated if INCERRIE is set to 1. Writing 1 to CLR_INCERR bit in the FLASH_NSCCR register clears INCERR. */
    using FLASH_NSSR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no inconsistency error occurs (value: 0)
     *          - B_0x1: a inconsistency error occurs (value: 1)
     */
        /** @brief no inconsistency error occurs */
    constexpr std::uint32_t FLASH_NSSR_INCERR_B_0x0 = 0;
        /** @brief a inconsistency error occurs */
    constexpr std::uint32_t FLASH_NSSR_INCERR_B_0x1 = 1;

    /** @brief Option byte change error flag OPTCHANGEERR flag indicates that an error occurred during an option byte change operation. When OPTCHANGEERR is set to 1, the option byte change operation did not successfully complete. An interrupt is generated when this flag is raised if the OPTCHANGEERRIE bit of FLASH_NSCR register is set to 1. Writing 1 to CLR_OPTCHANGEERR of register FLASH_CCR clears OPTCHANGEERR. Note: The OPTSTRT bit in FLASH_OPTCR cannot be set while OPTCHANGEERR is set. */
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
    /** @brief busy flag BSY flag indicates that a FLASH memory is busy by an operation (write, erase, option byte change, OBK operations, PUF operation). It is set at the beginning of a Flash memory operation and cleared when the operation finishes or an error occurs. */
    using FLASH_SECSR_SECBSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no programming, erase or option byte change operation being executed (value: 0)
     *          - B_0x1: programming, erase or option byte change operation being executed (value: 1)
     */
        /** @brief no programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_SECSR_SECBSY_B_0x0 = 0;
        /** @brief programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_SECSR_SECBSY_B_0x1 = 1;

    /** @brief write buffer not empty flag WBNE flag is set when the embedded Flash memory is waiting for new data to complete the write buffer. In this state, the write buffer is not empty. WBNE is reset by hardware each time the write buffer is complete or the write buffer is emptied following one of the event below: the application software forces the write operation using FW bit in FLASH_SECCR the embedded Flash memory detects an error that involves data loss This bit cannot be reset by writing 0 directly by software. To reset it, clear the write buffer by performing any of the above listed actions, or send the missing data. */
    using FLASH_SECSR_SECWBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write buffer empty or full (value: 0)
     *          - B_0x1: write buffer waiting data to complete (value: 1)
     */
        /** @brief write buffer empty or full */
    constexpr std::uint32_t FLASH_SECSR_SECWBNE_B_0x0 = 0;
        /** @brief write buffer waiting data to complete */
    constexpr std::uint32_t FLASH_SECSR_SECWBNE_B_0x1 = 1;

    /** @brief data buffer not empty flag DBNE flag is set when the embedded Flash memory interface is processing 6-bits ECC data in dedicated buffer. This bit cannot be set to 0 by software. The hardware resets it once the buffer is free. */
    using FLASH_SECSR_SECDBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data buffer not used (value: 0)
     *          - B_0x1: data buffer used, wait (value: 1)
     */
        /** @brief data buffer not used */
    constexpr std::uint32_t FLASH_SECSR_SECDBNE_B_0x0 = 0;
        /** @brief data buffer used, wait */
    constexpr std::uint32_t FLASH_SECSR_SECDBNE_B_0x1 = 1;

    /** @brief end of operation flag EOP flag is set when a operation (program/erase) completes. An interrupt is generated if the EOPIE is set to. It is not necessary to reset EOP before starting a new operation. EOP bit is cleared by writing 1 to CLR_EOP bit in FLASH_SECCCR register. */
    using FLASH_SECSR_SECEOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no operation completed (value: 0)
     *          - B_0x1: a operation completed (value: 1)
     */
        /** @brief no operation completed */
    constexpr std::uint32_t FLASH_SECSR_SECEOP_B_0x0 = 0;
        /** @brief a operation completed */
    constexpr std::uint32_t FLASH_SECSR_SECEOP_B_0x1 = 1;

    /** @brief write protection error flag WRPERR flag is raised when a protection error occurs during a program operation. An interrupt is also generated if the WRPERRIE is set to 1. Writing 1 to CLR_WRPERR bit in FLASH_SECCCR register clears WRPERR. */
    using FLASH_SECSR_SECWRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no write protection error occurred (value: 0)
     *          - B_0x1: a write protection error occurred (value: 1)
     */
        /** @brief no write protection error occurred */
    constexpr std::uint32_t FLASH_SECSR_SECWRPERR_B_0x0 = 0;
        /** @brief a write protection error occurred */
    constexpr std::uint32_t FLASH_SECSR_SECWRPERR_B_0x1 = 1;

    /** @brief programming sequence error flag PGSERR flag is raised when a sequence error occurs. An interrupt is generated if the PGSERRIE bit is set to 1. Writing 1 to CLR_PGSERR bit in FLASH_SECCCR register clears PGSERR. */
    using FLASH_SECSR_SECPGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no sequence error occurred (value: 0)
     *          - B_0x1: a sequence error occurred (value: 1)
     */
        /** @brief no sequence error occurred */
    constexpr std::uint32_t FLASH_SECSR_SECPGSERR_B_0x0 = 0;
        /** @brief a sequence error occurred */
    constexpr std::uint32_t FLASH_SECSR_SECPGSERR_B_0x1 = 1;

    /** @brief strobe error flag STRBERR flag is raised when a strobe error occurs (when the master attempts to write several times the same byte in the write buffer). An interrupt is generated if the STRBERRIE bit is set to 1. Writing 1 to CLR_STRBERR bit in FLASH_SECCCR register clears STRBERR. */
    using FLASH_SECSR_SECSTRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no strobe error occurred (value: 0)
     *          - B_0x1: a strobe error occurred (value: 1)
     */
        /** @brief no strobe error occurred */
    constexpr std::uint32_t FLASH_SECSR_SECSTRBERR_B_0x0 = 0;
        /** @brief a strobe error occurred */
    constexpr std::uint32_t FLASH_SECSR_SECSTRBERR_B_0x1 = 1;

    /** @brief inconsistency error flag INCERR flag is raised when a inconsistency error occurs. An interrupt is generated if INCERRIE is set to 1. Writing 1 to CLR_INCERR bit in the FLASH_SECCCR register clears INCERR. */
    using FLASH_SECSR_SECINCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no inconsistency error occurred (value: 0)
     *          - B_0x1: a inconsistency error occurred (value: 1)
     */
        /** @brief no inconsistency error occurred */
    constexpr std::uint32_t FLASH_SECSR_SECINCERR_B_0x0 = 0;
        /** @brief a inconsistency error occurred */
    constexpr std::uint32_t FLASH_SECSR_SECINCERR_B_0x1 = 1;

    /** @brief FLASH Non Secure control register */
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

    /** @brief erase request Setting BER bit to 1 requests a bank erase operation (user Flash memory only). BER can be programmed only when LOCK is cleared to 0. If MER and SER are also set, a PGSERR is raised. Note: Write protection error is triggered when a bank erase is required and some sectors are protected. */
    using FLASH_NSCR_BER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bank erase not requested (value: 0)
     *          - B_0x1: bank erase requested (value: 1)
     */
        /** @brief bank erase not requested */
    constexpr std::uint32_t FLASH_NSCR_BER_B_0x0 = 0;
        /** @brief bank erase requested */
    constexpr std::uint32_t FLASH_NSCR_BER_B_0x1 = 1;

    /** @brief write forcing control bit FW forces a write operation even if the write buffer is not full. In this case all bits not written are set to 1 by hardware. FW can be programmed only when LOCK is cleared to 0. The embedded Flash memory resets FW when the corresponding operation has been acknowledged. Note: Using a force-write operation prevents the application from updating later the missing bits with something else than 1, because it is likely that it leads to permanent ECC error. Write forcing is effective only if the write buffer is not empty (in particular, FW does not start several write operations when the force-write operations are performed consecutively). Since there is just one write buffer, FW can force a write in bank1 or bank2. */
    using FLASH_NSCR_FW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief erase start control bit STRT bit is used to start a sector erase or a bank erase operation. STRT can be programmed only when LOCK is cleared to 0. STRT is reset at the end of the operation or when an error occurs. It cannot be reseted by software. */
    using FLASH_NSCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief sector erase selection number These bits are used to select the target sector for an erase operation (they are unused otherwise). SNB can be programmed only when LOCK is cleared to 0. ... */
    using FLASH_NSCR_SNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sector 0 selected (value: 0)
     *          - B_0x1: Sector 1 selected (value: 1)
     *          - B_0x7: Sector 7 selected (value: 7)
     */
        /** @brief Sector 0 selected */
    constexpr std::uint32_t FLASH_NSCR_SNB_B_0x0 = 0;
        /** @brief Sector 1 selected */
    constexpr std::uint32_t FLASH_NSCR_SNB_B_0x1 = 1;
        /** @brief Sector 7 selected */
    constexpr std::uint32_t FLASH_NSCR_SNB_B_0x7 = 7;

    /** @brief Mass erase request Setting MER bit to 1 requests a mass erase operation (user Flash memory only). MER can be programmed only when LOCK is cleared to 0. If BER or SER are both set, a PGSERR is raised. Error is triggered when a mass erase is required and some sectors are protected. */
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

    /** @brief write protection error interrupt enable bit When WRPERRIE bit is set to 1, an interrupt is generated when a protection error occurs during a program operation. WRPERRIE can be programmed only when LOCK is cleared to 0. */
    using FLASH_NSCR_WRPERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a protection error occurs (value: 0)
     *          - B_0x1: interrupt generated when a protection error occurs (value: 1)
     */
        /** @brief no interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_NSCR_WRPERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_NSCR_WRPERRIE_B_0x1 = 1;

    /** @brief programming sequence error interrupt enable bit When PGSERRIE bit is set to 1, an interrupt is generated when a sequence error occurs during a program operation. PGSERRIE can be programmed only when LOCK is cleared to 0. */
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

    /** @brief Option byte change error interrupt enable bit OPTCHANGEERRIE bit controls if an interrupt has to be generated when an error occurs during an option byte change. This bit can be programmed only when LOCK bit is cleared to 0. */
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
    /** @brief Clear the flag corresponding flag in FLASH_NSSR by writing this bit. */
    using FLASH_NSCCR_CLR_OPTCHANGEERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege configuration register */
    using FLASH_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privilege attribute for non secure registers */
    using FLASH_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: access to non secure registers is always granted (value: 0)
     *          - B_0x1: access to non secure registers is denied in case of non privileged access. (value: 1)
     */
        /** @brief access to non secure registers is always granted */
    constexpr std::uint32_t FLASH_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief access to non secure registers is denied in case of non privileged access. */
    constexpr std::uint32_t FLASH_PRIVCFGR_NSPRIV_B_0x1 = 1;

    /** @brief FLASH HDP extension register */
    using FLASH_HDPEXTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP area extension in 8 Kbytes sectors in Bank1. Extension is added after the HDP1_END sector. */
    using FLASH_HDPEXTR_HDP1_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP area extension in 8 Kbytes sectors in Bank2. Extension is added after the HDP2_END sector. */
    using FLASH_HDPEXTR_HDP2_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option status register */
    using FLASH_OPTSR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Brownout level option status bit These bits reflects the power level that generates a system reset. */
    using FLASH_OPTSR_CUR_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR OFF, POR/PDR reset threshold level is applied (value: 0)
     *          - B_0x1: BOR Level 1, the threshold level is low (around 2.1 V) (value: 1)
     *          - B_0x2: BOR Level 2, the threshold level is medium (around 2.4 V) (value: 2)
     *          - B_0x3: BOR Level 3, the threshold level is high (around 2.7 V) (value: 3)
     */
        /** @brief BOR OFF, POR/PDR reset threshold level is applied */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOR_LEV_B_0x0 = 0;
        /** @brief BOR Level 1, the threshold level is low (around 2.1 V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOR_LEV_B_0x1 = 1;
        /** @brief BOR Level 2, the threshold level is medium (around 2.4 V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOR_LEV_B_0x2 = 2;
        /** @brief BOR Level 3, the threshold level is high (around 2.7 V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOR_LEV_B_0x3 = 3;

    /** @brief Brownout high enable status bit */
    using FLASH_OPTSR_CUR_BORH_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BORH_EN_B_0x0 = 0;
        /** @brief enabled */
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

    /** @brief Core domain Shutdown entry reset option status bit */
    using FLASH_OPTSR_CUR_NRST_SHDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a reset is generated when entering Shutdown mode on core domain (value: 0)
     *          - B_0x1: no reset generated when entering Shutdown mode on core domain. (value: 1)
     */
        /** @brief a reset is generated when entering Shutdown mode on core domain */
    constexpr std::uint32_t FLASH_OPTSR_CUR_NRST_SHDW_B_0x0 = 0;
        /** @brief no reset generated when entering Shutdown mode on core domain. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_NRST_SHDW_B_0x1 = 1;

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

    /** @brief Life state code (based on Hamming 8,4). More information in . */
    using FLASH_OPTSR_CUR_PRODUCT_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed IO at low VDD voltage status bit. This bit can be set only with VDD below 2.5 V. */
    using FLASH_OPTSR_CUR_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.5 V) (value: 0)
     *          - B_0x1: High-speed IO at low VDD voltage feature enabled (VDD remains below 2.5 V) (value: 1)
     */
        /** @brief High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.5 V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDD voltage feature enabled (VDD remains below 2.5 V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low VDDIO2 voltage status bit. This bit can be set only with VDDIO2 below 2.5 V. */
    using FLASH_OPTSR_CUR_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDDIO2 voltage feature disabled (VDDIO2 can exceed 2.5 V) (value: 0)
     *          - B_0x1: High-speed IO at low VDDIO2 voltage feature enabled (VDDIO2 remains below 2.5 V) (value: 1)
     */
        /** @brief High-speed IO at low VDDIO2 voltage feature disabled (VDDIO2 can exceed 2.5 V) */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDDIO2 voltage feature enabled (VDDIO2 remains below 2.5 V) */
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
    /** @brief Brownout level option configuration bit These bits reflects the power level that generates a system reset. */
    using FLASH_OPTSR_PRG_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR OFF, POR/PDR reset threshold level is applied (value: 0)
     *          - B_0x1: BOR Level 1, the threshold level is low (around 2.1 V) (value: 1)
     *          - B_0x2: BOR Level 2, the threshold level is medium (around 2.4 V) (value: 2)
     *          - B_0x3: BOR Level 3, the threshold level is high (around 2.7 V) (value: 3)
     */
        /** @brief BOR OFF, POR/PDR reset threshold level is applied */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOR_LEV_B_0x0 = 0;
        /** @brief BOR Level 1, the threshold level is low (around 2.1 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOR_LEV_B_0x1 = 1;
        /** @brief BOR Level 2, the threshold level is medium (around 2.4 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOR_LEV_B_0x2 = 2;
        /** @brief BOR Level 3, the threshold level is high (around 2.7 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOR_LEV_B_0x3 = 3;

    /** @brief Brownout high enable configuration bit */
    using FLASH_OPTSR_PRG_BORH_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BORH_EN_B_0x0 = 0;
        /** @brief enabled */
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

    /** @brief Core domain Shutdown entry reset option configuration bit */
    using FLASH_OPTSR_PRG_NRST_SHDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a reset is generated when entering Shutdown mode on core domain (value: 0)
     *          - B_0x1: no reset generated when entering Shutdown mode on core domain. (value: 1)
     */
        /** @brief a reset is generated when entering Shutdown mode on core domain */
    constexpr std::uint32_t FLASH_OPTSR_PRG_NRST_SHDW_B_0x0 = 0;
        /** @brief no reset generated when entering Shutdown mode on core domain. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_NRST_SHDW_B_0x1 = 1;

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

    /** @brief Life state code (based on Hamming 8,4). More information in . */
    using FLASH_OPTSR_PRG_PRODUCT_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed IO at low VDD voltage configuration bit. This bit can be set only with VDD below 2.5 V. */
    using FLASH_OPTSR_PRG_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.5 V) (value: 0)
     *          - B_0x1: High-speed IO at low VDD voltage feature enabled (VDD remains below 2.5 V) (value: 1)
     */
        /** @brief High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.5 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDD voltage feature enabled (VDD remains below 2.5 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low VDDIO2 voltage configuration bit. This bit can be set only with VDDIO2 below 2.5 V. */
    using FLASH_OPTSR_PRG_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDDIO2 voltage feature disabled (VDDIO2 can exceed 2.5 V) (value: 0)
     *          - B_0x1: High-speed IO at low VDDIO2 voltage feature enabled (VDDIO2 remains below 2.5 V) (value: 1)
     */
        /** @brief High-speed IO at low VDDIO2 voltage feature disabled (VDDIO2 can exceed 2.5 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDDIO2 voltage feature enabled (VDDIO2 remains below 2.5 V) */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDDIO2_HSLV_B_0x1 = 1;

    /** @brief IWDG Stop mode freeze option configuration bit When set the independent watchdog IWDG is in system Stop mode. */
    using FLASH_OPTSR_PRG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in system Stop mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in system Stop mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in system Stop mode */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STOP_B_0x0 = 0;
        /** @brief Independent watchdog keep running in system Stop mode. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STOP_B_0x1 = 1;

    /** @brief IWDG Standby mode freeze option configuration bit When set the independent watchdog IWDG is frozen in system Standby mode. */
    using FLASH_OPTSR_PRG_IWDG_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in Standby mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in Standby mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in Standby mode */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STDBY_B_0x0 = 0;
        /** @brief Independent watchdog keep running in Standby mode. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STDBY_B_0x1 = 1;

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

    /** @brief FLASH option status register 2 */
    using FLASH_OPTSR2_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief SRAM1 erase upon system reset */
    using FLASH_OPTSR2_CUR_SRAM1_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM1 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM1 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM1_RST_B_0x0 = 0;
        /** @brief SRAM1 not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM1_RST_B_0x1 = 1;

    /** @brief SRAM1 ECC detection and correction disable */
    using FLASH_OPTSR2_CUR_SRAM1_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 ECC check enabled (value: 0)
     *          - B_0x1: SRAM1 ECC check disabled (value: 1)
     */
        /** @brief SRAM1 ECC check enabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM1_ECC_B_0x0 = 0;
        /** @brief SRAM1 ECC check disabled */
    constexpr std::uint32_t FLASH_OPTSR2_CUR_SRAM1_ECC_B_0x1 = 1;

    /** @brief FLASH option status register 2 */
    using FLASH_OPTSR2_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 erase when system reset */
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

    /** @brief SRAM1 erase upon system reset */
    using FLASH_OPTSR2_PRG_SRAM1_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM1 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM1 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM1_RST_B_0x0 = 0;
        /** @brief SRAM1 not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM1_RST_B_0x1 = 1;

    /** @brief SRAM1 ECC detection and correction disable */
    using FLASH_OPTSR2_PRG_SRAM1_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 ECC check enabled (value: 0)
     *          - B_0x1: SRAM1 ECC check disabled (value: 1)
     */
        /** @brief SRAM1 ECC check enabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM1_ECC_B_0x0 = 0;
        /** @brief SRAM1 ECC check disabled */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM1_ECC_B_0x1 = 1;

    /** @brief FLASH non-secure unique boot entry register */
    using FLASH_NSBOOTR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A field locking the values of SWAP_BANK, and NSBOOTADD settings. */
    using FLASH_NSBOOTR_CUR_NSBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: The SWAP_BANK and NSBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: The NSBOOTADD and SWAP_BANK are frozen. (value: 180)
     */
        /** @brief The SWAP_BANK and NSBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_NSBOOTR_CUR_NSBOOT_LOCK_B_0xC3 = 195;
        /** @brief The NSBOOTADD and SWAP_BANK are frozen. */
    constexpr std::uint32_t FLASH_NSBOOTR_CUR_NSBOOT_LOCK_B_0xB4 = 180;

    /** @brief unique boot entry address These bits reflect the UBE address */
    using FLASH_NSBOOTR_CUR_NSBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure unique boot entry address */
    using FLASH_NSBOOTR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A field locking the values of SWAP_BANK, and NSBOOTADD settings. */
    using FLASH_NSBOOTR_PRG_NSBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: The SWAP_BANK and NSBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: The NSBOOTADD and SWAP_BANK are frozen. (value: 180)
     */
        /** @brief The SWAP_BANK and NSBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_NSBOOTR_PRG_NSBOOT_LOCK_B_0xC3 = 195;
        /** @brief The NSBOOTADD and SWAP_BANK are frozen. */
    constexpr std::uint32_t FLASH_NSBOOTR_PRG_NSBOOT_LOCK_B_0xB4 = 180;

    /** @brief Unique boot entry address These bits allow configuring the BOOT address */
    using FLASH_NSBOOTR_PRG_NSBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure OTP block lock */
    using FLASH_OTPBLR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP block lock Block n corresponds to OTP 16-bit word 32 x n to 32 x n + 31. LOCKBL[n] = 1 indicates that all OTP 16-bit words in OTP Block n are locked and attempt to program them results in WRPERR. LOCKBL[n] = 0 indicates that all OTP 16-bit words in OTP Block n are not locked. When one block is locked, it's not possible to remove the write protection. Also if not locked, it is not possible to erase OTP words. */
    using FLASH_OTPBLR_CUR_LOCKBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure OTP block lock */
    using FLASH_OTPBLR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP block lock Block n corresponds to OTP 16-bit word 32 x n to 32 x n + 31. LOCKBL[n] = 1 indicates that all OTP 16-bit words in OTP Block n are locked and attempt to program them results in WRPERR. LOCKBL[n] = 0 indicates that all OTP 16-bit words in OTP Block n are not locked. When one block is locked, it is not possible to remove the write protection. LOCKBL bits can be set if the corresponding bit in FLASH_OTPBLR_CUR is cleared. */
    using FLASH_OTPBLR_PRG_LOCKBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege register for bank 1 */
    using FLASH_PRIVBB1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / unprivileged 8 Kbytes Flash Bank1 sector attribute (y = 0 to 7) */
    using FLASH_PRIVBB1R_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors y in bank 1 is non privileged (value: 0)
     *          - B_0x1: sector y in bank 1 is privileged (value: 1)
     */
        /** @brief sectors y in bank 1 is non privileged */
    constexpr std::uint32_t FLASH_PRIVBB1R_PRIVBB1_B_0x0 = 0;
        /** @brief sector y in bank 1 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB1R_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH write sector protection for Bank1 */
    using FLASH_WRPSGN1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 sector protection option status byte Setting WRPSG1 bits to 0 write protects the corresponding sectors in bank 1 (0: write protected; 1: not write protected) */
    using FLASH_WRPSGN1R_CUR_WRPSG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector protection for Bank1 */
    using FLASH_WRPSGN1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 sector protection option status byte Setting WRPSG1 bits to 0 write protects the corresponding sectors in bank 1 (0: write protected; 1: not write protected) */
    using FLASH_WRPSGN1R_PRG_WRPSG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH HDP Bank1 register */
    using FLASH_HDP1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8 Kbytes sectors */
    using FLASH_HDP1R_CUR_HDP1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8 Kbytes sectors */
    using FLASH_HDP1R_CUR_HDP1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH HDP Bank1 register */
    using FLASH_HDP1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 HDPL barrier start set in number of 8 Kbytes sectors */
    using FLASH_HDP1R_PRG_HDP1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 HDPL barrier end set in number of 8 Kbytes sectors */
    using FLASH_HDP1R_PRG_HDP1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH Flash ECC correction register */
    using FLASH_ECCCORR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error address When an ECC error occurs (for single correction) during a read operation, the ADDR_ECC contains the address that generated the error. ADDR_ECC is reset when the flag error is reset. The embedded Flash memory programs the address in this register only when no ECC error flags are set. This means that only the first address that generated an ECC error is saved. The address in ADDR_ECC is relative to the Flash memory area where the error occurred (user Flash memory, system Flash memory, data area, read-only/OTP area). */
    using FLASH_ECCCORR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC bank flag for corrected ECC error It indicates which bank is concerned by ECC error */
    using FLASH_ECCCORR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC flag for corrected ECC error in system FLASH It indicates if system Flash memory is concerned by ECC error. */
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
    /** @brief ECC error address When an ECC error occurs (double detection) during a read operation, the ADDR_ECC contains the address that generated the error. ADDR_ECC is reset when the flag error is reset. The embedded Flash memory programs the address in this register only when no ECC error flags are set. This means that only the first address that generated an double ECC error is saved. The address in ADDR_ECC is relative to the Flash memory area where the error occurred (user Flash memory, system Flash memory, data area, read-only/OTP area). */
    using FLASH_ECCDETR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail bank for double ECC Error It indicates which bank is concerned by ECC error */
    using FLASH_ECCDETR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail for double ECC error in system Flash memory It indicates if system Flash memory is concerned by ECC error. */
    using FLASH_ECCDETR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP ECC error bit This bit is set to 1 when double ECC detection occurred during the last read operation from the read-only/ OTP area. The address of the ECC error is available in ADDR_ECC bit field. */
    using FLASH_ECCDETR_OTP_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC detection set by hardware when two ECC error has been detected. When this bit is set, a NMI is generated. Cleared by writing 1. Needs to be cleared in order to detect subsequent double ECC errors. */
    using FLASH_ECCDETR_ECCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC data */
    using FLASH_ECCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error data When an double detection ECC error occurs on special areas with 6-bit ECC on 16-bit of data (data area, read-only/OTP area), the failing data is read to this register. By checking if it is possible to determine whether the failure was on a real data, or due to access to uninitialized memory. */
    using FLASH_ECCDR_DATA_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector protection for Bank2 */
    using FLASH_WRPSGN2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 sector protection option status byte Setting WRPSG2 bits to 0 write protects the corresponding sectors in bank 2 (0: write protected; 1: not write protected) */
    using FLASH_WRPSGN2R_CUR_WRPSG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector protection for Bank2 */
    using FLASH_WRPSGN2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 sector protection option status byte Setting WRPSG2 bits to 0 write protects the corresponding sectors in bank 2 (0: write protected; 1: not write protected) */
    using FLASH_WRPSGN2R_PRG_WRPSG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH HDP Bank2 register */
    using FLASH_HDP2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 HDPL barrier start set in number of 8 Kbytes sectors */
    using FLASH_HDP2R_CUR_HDP2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 HDPL barrier end set in number of 8 Kbytes sectors */
    using FLASH_HDP2R_CUR_HDP2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH HDP Bank2 register */
    using FLASH_HDP2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 HDPL barrier start set in number of 8 Kbytes sectors */
    using FLASH_HDP2R_PRG_HDP2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 HDPL barrier end set in number of 8 Kbytes sectors */
    using FLASH_HDP2R_PRG_HDP2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
