/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H533_FLASH_S_HPP
#define EMBEDDED_PP_STM32H533_FLASH_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Mustang_FLASH register block */
namespace STM32H533::FLASH_S {

    /** @brief FLASH access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read latency */
    using FLASH_ACR_LATENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wait states used to read a word from nonvolatile memory (value: 0)
     *          - B_0x1: one wait state used to read a word from nonvolatile memory (value: 1)
     *          - B_0x2: two wait states used to read a word from nonvolatile memory (value: 2)
     *          - B_0x7: seven wait states used to read a word from nonvolatile memory (value: 7)
     *          - B_0xF: 15 wait states used to read a word from nonvolatile memory (value: 15)
     */
        /** @brief no wait states used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x0 = 0;
        /** @brief one wait state used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x1 = 1;
        /** @brief two wait states used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x2 = 2;
        /** @brief seven wait states used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x7 = 7;
        /** @brief 15 wait states used to read a word from nonvolatile memory */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0xF = 15;

    /** @brief Flash signal delay */
    using FLASH_ACR_WRHIGHFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prefetch enable. */
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
    /** @brief Flash high-cycle data area operation interrupted */
    using FLASH_OPSR_DATA_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation bank */
    using FLASH_OPSR_BK_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation in system flash memory interrupted */
    using FLASH_OPSR_SYSF_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP operation interrupted */
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
    /** @brief FLASH_OPTCR lock option configuration bit */
    using FLASH_OPTCR_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_OPTCR register unlocked (value: 0)
     *          - B_0x1: FLASH_OPTCR register locked. (value: 1)
     */
        /** @brief FLASH_OPTCR register unlocked */
    constexpr std::uint32_t FLASH_OPTCR_OPTLOCK_B_0x0 = 0;
        /** @brief FLASH_OPTCR register locked. */
    constexpr std::uint32_t FLASH_OPTCR_OPTLOCK_B_0x1 = 1;

    /** @brief Option byte start change option configuration bit */
    using FLASH_OPTCR_OPTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank swapping option configuration bit */
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
    /** @brief busy flag */
    using FLASH_NSSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no programming, erase or option byte change operation being executed (value: 0)
     *          - B_0x1: programming, erase or option byte change operation being executed (value: 1)
     */
        /** @brief no programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_NSSR_BSY_B_0x0 = 0;
        /** @brief programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_NSSR_BSY_B_0x1 = 1;

    /** @brief write buffer not empty flag */
    using FLASH_NSSR_WBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write buffer empty or full (value: 0)
     *          - B_0x1: write buffer waiting data to complete (value: 1)
     */
        /** @brief write buffer empty or full */
    constexpr std::uint32_t FLASH_NSSR_WBNE_B_0x0 = 0;
        /** @brief write buffer waiting data to complete */
    constexpr std::uint32_t FLASH_NSSR_WBNE_B_0x1 = 1;

    /** @brief data buffer not empty flag */
    using FLASH_NSSR_DBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data buffer not used (value: 0)
     *          - B_0x1: data buffer used, wait (value: 1)
     */
        /** @brief data buffer not used */
    constexpr std::uint32_t FLASH_NSSR_DBNE_B_0x0 = 0;
        /** @brief data buffer used, wait */
    constexpr std::uint32_t FLASH_NSSR_DBNE_B_0x1 = 1;

    /** @brief end of operation flag */
    using FLASH_NSSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no operation completed (value: 0)
     *          - B_0x1: a operation completed (value: 1)
     */
        /** @brief no operation completed */
    constexpr std::uint32_t FLASH_NSSR_EOP_B_0x0 = 0;
        /** @brief a operation completed */
    constexpr std::uint32_t FLASH_NSSR_EOP_B_0x1 = 1;

    /** @brief write protection error flag */
    using FLASH_NSSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no write protection error occurred (value: 0)
     *          - B_0x1: a write protection error occurred (value: 1)
     */
        /** @brief no write protection error occurred */
    constexpr std::uint32_t FLASH_NSSR_WRPERR_B_0x0 = 0;
        /** @brief a write protection error occurred */
    constexpr std::uint32_t FLASH_NSSR_WRPERR_B_0x1 = 1;

    /** @brief programming sequence error flag */
    using FLASH_NSSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no sequence error occurred (value: 0)
     *          - B_0x1: a sequence error occurred (value: 1)
     */
        /** @brief no sequence error occurred */
    constexpr std::uint32_t FLASH_NSSR_PGSERR_B_0x0 = 0;
        /** @brief a sequence error occurred */
    constexpr std::uint32_t FLASH_NSSR_PGSERR_B_0x1 = 1;

    /** @brief strobe error flag */
    using FLASH_NSSR_STRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no strobe error occurred (value: 0)
     *          - B_0x1: a strobe error occurred (value: 1)
     */
        /** @brief no strobe error occurred */
    constexpr std::uint32_t FLASH_NSSR_STRBERR_B_0x0 = 0;
        /** @brief a strobe error occurred */
    constexpr std::uint32_t FLASH_NSSR_STRBERR_B_0x1 = 1;

    /** @brief inconsistency error flag */
    using FLASH_NSSR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no inconsistency error occurs (value: 0)
     *          - B_0x1: a inconsistency error occurs (value: 1)
     */
        /** @brief no inconsistency error occurs */
    constexpr std::uint32_t FLASH_NSSR_INCERR_B_0x0 = 0;
        /** @brief a inconsistency error occurs */
    constexpr std::uint32_t FLASH_NSSR_INCERR_B_0x1 = 1;

    /** @brief OBK general error flag */
    using FLASH_NSSR_OBKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no OBK general error occurred (value: 0)
     *          - B_0x1: an OBK general error occurred (value: 1)
     */
        /** @brief no OBK general error occurred */
    constexpr std::uint32_t FLASH_NSSR_OBKERR_B_0x0 = 0;
        /** @brief an OBK general error occurred */
    constexpr std::uint32_t FLASH_NSSR_OBKERR_B_0x1 = 1;

    /** @brief OBK write error flag */
    using FLASH_NSSR_OBKWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no OBK write error occurred (value: 0)
     *          - B_0x1: an OBK write error occurred (value: 1)
     */
        /** @brief no OBK write error occurred */
    constexpr std::uint32_t FLASH_NSSR_OBKWERR_B_0x0 = 0;
        /** @brief an OBK write error occurred */
    constexpr std::uint32_t FLASH_NSSR_OBKWERR_B_0x1 = 1;

    /** @brief Option byte change error flag */
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
    /** @brief busy flag */
    using FLASH_SECSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no programming, erase or option byte change operation being executed (value: 0)
     *          - B_0x1: programming, erase or option byte change operation being executed (value: 1)
     */
        /** @brief no programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_SECSR_BSY_B_0x0 = 0;
        /** @brief programming, erase or option byte change operation being executed */
    constexpr std::uint32_t FLASH_SECSR_BSY_B_0x1 = 1;

    /** @brief write buffer not empty flag */
    using FLASH_SECSR_WBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write buffer empty or full (value: 0)
     *          - B_0x1: write buffer waiting data to complete (value: 1)
     */
        /** @brief write buffer empty or full */
    constexpr std::uint32_t FLASH_SECSR_WBNE_B_0x0 = 0;
        /** @brief write buffer waiting data to complete */
    constexpr std::uint32_t FLASH_SECSR_WBNE_B_0x1 = 1;

    /** @brief data buffer not empty flag */
    using FLASH_SECSR_DBNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data buffer not used (value: 0)
     *          - B_0x1: data buffer used, wait (value: 1)
     */
        /** @brief data buffer not used */
    constexpr std::uint32_t FLASH_SECSR_DBNE_B_0x0 = 0;
        /** @brief data buffer used, wait */
    constexpr std::uint32_t FLASH_SECSR_DBNE_B_0x1 = 1;

    /** @brief end of operation flag */
    using FLASH_SECSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no operation completed (value: 0)
     *          - B_0x1: a operation completed (value: 1)
     */
        /** @brief no operation completed */
    constexpr std::uint32_t FLASH_SECSR_EOP_B_0x0 = 0;
        /** @brief a operation completed */
    constexpr std::uint32_t FLASH_SECSR_EOP_B_0x1 = 1;

    /** @brief write protection error flag */
    using FLASH_SECSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no write protection error occurred (value: 0)
     *          - B_0x1: a write protection error occurred (value: 1)
     */
        /** @brief no write protection error occurred */
    constexpr std::uint32_t FLASH_SECSR_WRPERR_B_0x0 = 0;
        /** @brief a write protection error occurred */
    constexpr std::uint32_t FLASH_SECSR_WRPERR_B_0x1 = 1;

    /** @brief programming sequence error flag */
    using FLASH_SECSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no sequence error occurred (value: 0)
     *          - B_0x1: a sequence error occurred (value: 1)
     */
        /** @brief no sequence error occurred */
    constexpr std::uint32_t FLASH_SECSR_PGSERR_B_0x0 = 0;
        /** @brief a sequence error occurred */
    constexpr std::uint32_t FLASH_SECSR_PGSERR_B_0x1 = 1;

    /** @brief strobe error flag */
    using FLASH_SECSR_STRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no strobe error occurred (value: 0)
     *          - B_0x1: a strobe error occurred (value: 1)
     */
        /** @brief no strobe error occurred */
    constexpr std::uint32_t FLASH_SECSR_STRBERR_B_0x0 = 0;
        /** @brief a strobe error occurred */
    constexpr std::uint32_t FLASH_SECSR_STRBERR_B_0x1 = 1;

    /** @brief inconsistency error flag */
    using FLASH_SECSR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no inconsistency error occurred (value: 0)
     *          - B_0x1: a inconsistency error occurred (value: 1)
     */
        /** @brief no inconsistency error occurred */
    constexpr std::uint32_t FLASH_SECSR_INCERR_B_0x0 = 0;
        /** @brief a inconsistency error occurred */
    constexpr std::uint32_t FLASH_SECSR_INCERR_B_0x1 = 1;

    /** @brief OBK general error flag */
    using FLASH_SECSR_OBKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no OBK general error occurred (value: 0)
     *          - B_0x1: an OBK general error occurred (value: 1)
     */
        /** @brief no OBK general error occurred */
    constexpr std::uint32_t FLASH_SECSR_OBKERR_B_0x0 = 0;
        /** @brief an OBK general error occurred */
    constexpr std::uint32_t FLASH_SECSR_OBKERR_B_0x1 = 1;

    /** @brief OBK write error flag */
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
    /** @brief configuration lock bit */
    using FLASH_NSCR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_NSCR register unlocked (value: 0)
     *          - B_0x1: FLASH_NSCR register locked (value: 1)
     */
        /** @brief FLASH_NSCR register unlocked */
    constexpr std::uint32_t FLASH_NSCR_LOCK_B_0x0 = 0;
        /** @brief FLASH_NSCR register locked */
    constexpr std::uint32_t FLASH_NSCR_LOCK_B_0x1 = 1;

    /** @brief programming control bit */
    using FLASH_NSCR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: programming disabled (value: 0)
     *          - B_0x1: programming enabled (value: 1)
     */
        /** @brief programming disabled */
    constexpr std::uint32_t FLASH_NSCR_PG_B_0x0 = 0;
        /** @brief programming enabled */
    constexpr std::uint32_t FLASH_NSCR_PG_B_0x1 = 1;

    /** @brief sector erase request */
    using FLASH_NSCR_SER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector erase not requested (value: 0)
     *          - B_0x1: sector erase requested (value: 1)
     */
        /** @brief sector erase not requested */
    constexpr std::uint32_t FLASH_NSCR_SER_B_0x0 = 0;
        /** @brief sector erase requested */
    constexpr std::uint32_t FLASH_NSCR_SER_B_0x1 = 1;

    /** @brief erase request */
    using FLASH_NSCR_BER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bank erase not requested (value: 0)
     *          - B_0x1: bank erase requested (value: 1)
     */
        /** @brief bank erase not requested */
    constexpr std::uint32_t FLASH_NSCR_BER_B_0x0 = 0;
        /** @brief bank erase requested */
    constexpr std::uint32_t FLASH_NSCR_BER_B_0x1 = 1;

    /** @brief write forcing control bit */
    using FLASH_NSCR_FW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief erase start control bit */
    using FLASH_NSCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief sector erase selection number */
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

    /** @brief mass erase request */
    using FLASH_NSCR_MER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: mass erase not requested (value: 0)
     *          - B_0x1: mass erase requested (value: 1)
     */
        /** @brief mass erase not requested */
    constexpr std::uint32_t FLASH_NSCR_MER_B_0x0 = 0;
        /** @brief mass erase requested */
    constexpr std::uint32_t FLASH_NSCR_MER_B_0x1 = 1;

    /** @brief end of operation interrupt control bit */
    using FLASH_NSCR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated at the end of operation. (value: 0)
     *          - B_0x1: interrupt enabled when at the end of operation (value: 1)
     */
        /** @brief no interrupt generated at the end of operation. */
    constexpr std::uint32_t FLASH_NSCR_EOPIE_B_0x0 = 0;
        /** @brief interrupt enabled when at the end of operation */
    constexpr std::uint32_t FLASH_NSCR_EOPIE_B_0x1 = 1;

    /** @brief write protection error interrupt enable bit */
    using FLASH_NSCR_WRPERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a protection error occurs (value: 0)
     *          - B_0x1: interrupt generated when a protection error occurs (value: 1)
     */
        /** @brief no interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_NSCR_WRPERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_NSCR_WRPERRIE_B_0x1 = 1;

    /** @brief programming sequence error interrupt enable bit */
    using FLASH_NSCR_PGSERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a sequence error occurs (value: 0)
     *          - B_0x1: interrupt generated when sequence error occurs (value: 1)
     */
        /** @brief no interrupt generated when a sequence error occurs */
    constexpr std::uint32_t FLASH_NSCR_PGSERRIE_B_0x0 = 0;
        /** @brief interrupt generated when sequence error occurs */
    constexpr std::uint32_t FLASH_NSCR_PGSERRIE_B_0x1 = 1;

    /** @brief strobe error interrupt enable bit */
    using FLASH_NSCR_STRBERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a strobe error occurs (value: 0)
     *          - B_0x1: interrupt generated when strobe error occurs. (value: 1)
     */
        /** @brief no interrupt generated when a strobe error occurs */
    constexpr std::uint32_t FLASH_NSCR_STRBERRIE_B_0x0 = 0;
        /** @brief interrupt generated when strobe error occurs. */
    constexpr std::uint32_t FLASH_NSCR_STRBERRIE_B_0x1 = 1;

    /** @brief inconsistency error interrupt enable bit */
    using FLASH_NSCR_INCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a inconsistency error occurs (value: 0)
     *          - B_0x1: interrupt generated when a inconsistency error occurs. (value: 1)
     */
        /** @brief no interrupt generated when a inconsistency error occurs */
    constexpr std::uint32_t FLASH_NSCR_INCERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a inconsistency error occurs. */
    constexpr std::uint32_t FLASH_NSCR_INCERRIE_B_0x1 = 1;

    /** @brief OBK general error interrupt enable bit */
    using FLASH_NSCR_OBKERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated on OBK general access error (value: 0)
     *          - B_0x1: an interrupt is generated on OBK general access error (value: 1)
     */
        /** @brief no interrupt is generated on OBK general access error */
    constexpr std::uint32_t FLASH_NSCR_OBKERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated on OBK general access error */
    constexpr std::uint32_t FLASH_NSCR_OBKERRIE_B_0x1 = 1;

    /** @brief OBK write error interrupt enable bit */
    using FLASH_NSCR_OBKWERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated on OBK write error (value: 0)
     *          - B_0x1: an interrupt is generated on OBK write error (value: 1)
     */
        /** @brief no interrupt is generated on OBK write error */
    constexpr std::uint32_t FLASH_NSCR_OBKWERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated on OBK write error */
    constexpr std::uint32_t FLASH_NSCR_OBKWERRIE_B_0x1 = 1;

    /** @brief Option byte change error interrupt enable bit */
    using FLASH_NSCR_OPTCHANGEERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated when an error occurs during an option byte change (value: 0)
     *          - B_0x1: an interrupt is generated when and error occurs during an option byte change. (value: 1)
     */
        /** @brief no interrupt is generated when an error occurs during an option byte change */
    constexpr std::uint32_t FLASH_NSCR_OPTCHANGEERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated when and error occurs during an option byte change. */
    constexpr std::uint32_t FLASH_NSCR_OPTCHANGEERRIE_B_0x1 = 1;

    /** @brief Bank selector bit */
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
    /** @brief configuration lock bit */
    using FLASH_SECCR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_SECCR register unlocked (value: 0)
     *          - B_0x1: FLASH_SECCR register locked (value: 1)
     */
        /** @brief FLASH_SECCR register unlocked */
    constexpr std::uint32_t FLASH_SECCR_LOCK_B_0x0 = 0;
        /** @brief FLASH_SECCR register locked */
    constexpr std::uint32_t FLASH_SECCR_LOCK_B_0x1 = 1;

    /** @brief programming control bit */
    using FLASH_SECCR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: programming disabled (value: 0)
     *          - B_0x1: programming enabled (value: 1)
     */
        /** @brief programming disabled */
    constexpr std::uint32_t FLASH_SECCR_PG_B_0x0 = 0;
        /** @brief programming enabled */
    constexpr std::uint32_t FLASH_SECCR_PG_B_0x1 = 1;

    /** @brief sector erase request */
    using FLASH_SECCR_SER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector erase not requested (value: 0)
     *          - B_0x1: sector erase requested (value: 1)
     */
        /** @brief sector erase not requested */
    constexpr std::uint32_t FLASH_SECCR_SER_B_0x0 = 0;
        /** @brief sector erase requested */
    constexpr std::uint32_t FLASH_SECCR_SER_B_0x1 = 1;

    /** @brief erase request */
    using FLASH_SECCR_BER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bank erase not requested (value: 0)
     *          - B_0x1: bank erase requested (value: 1)
     */
        /** @brief bank erase not requested */
    constexpr std::uint32_t FLASH_SECCR_BER_B_0x0 = 0;
        /** @brief bank erase requested */
    constexpr std::uint32_t FLASH_SECCR_BER_B_0x1 = 1;

    /** @brief write forcing control bit */
    using FLASH_SECCR_FW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief erase start control bit */
    using FLASH_SECCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief sector erase selection number */
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

    /** @brief mass erase request */
    using FLASH_SECCR_MER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: mass erase not requested (value: 0)
     *          - B_0x1: mass erase requested (value: 1)
     */
        /** @brief mass erase not requested */
    constexpr std::uint32_t FLASH_SECCR_MER_B_0x0 = 0;
        /** @brief mass erase requested */
    constexpr std::uint32_t FLASH_SECCR_MER_B_0x1 = 1;

    /** @brief end of operation interrupt control bit */
    using FLASH_SECCR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated at the end of operation. (value: 0)
     *          - B_0x1: interrupt enabled when at the end of operation (value: 1)
     */
        /** @brief no interrupt generated at the end of operation. */
    constexpr std::uint32_t FLASH_SECCR_EOPIE_B_0x0 = 0;
        /** @brief interrupt enabled when at the end of operation */
    constexpr std::uint32_t FLASH_SECCR_EOPIE_B_0x1 = 1;

    /** @brief write protection error interrupt enable bit */
    using FLASH_SECCR_WRPERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a protection error occurs (value: 0)
     *          - B_0x1: interrupt generated when a protection error occurs (value: 1)
     */
        /** @brief no interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_SECCR_WRPERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a protection error occurs */
    constexpr std::uint32_t FLASH_SECCR_WRPERRIE_B_0x1 = 1;

    /** @brief programming sequence error interrupt enable bit */
    using FLASH_SECCR_PGSERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a sequence error occurs (value: 0)
     *          - B_0x1: interrupt generated when sequence error occurs (value: 1)
     */
        /** @brief no interrupt generated when a sequence error occurs */
    constexpr std::uint32_t FLASH_SECCR_PGSERRIE_B_0x0 = 0;
        /** @brief interrupt generated when sequence error occurs */
    constexpr std::uint32_t FLASH_SECCR_PGSERRIE_B_0x1 = 1;

    /** @brief strobe error interrupt enable bit */
    using FLASH_SECCR_STRBERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a strobe error occurs (value: 0)
     *          - B_0x1: interrupt generated when strobe error occurs. (value: 1)
     */
        /** @brief no interrupt generated when a strobe error occurs */
    constexpr std::uint32_t FLASH_SECCR_STRBERRIE_B_0x0 = 0;
        /** @brief interrupt generated when strobe error occurs. */
    constexpr std::uint32_t FLASH_SECCR_STRBERRIE_B_0x1 = 1;

    /** @brief inconsistency error interrupt enable bit */
    using FLASH_SECCR_INCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when a inconsistency error occurs (value: 0)
     *          - B_0x1: interrupt generated when a inconsistency error occurs. (value: 1)
     */
        /** @brief no interrupt generated when a inconsistency error occurs */
    constexpr std::uint32_t FLASH_SECCR_INCERRIE_B_0x0 = 0;
        /** @brief interrupt generated when a inconsistency error occurs. */
    constexpr std::uint32_t FLASH_SECCR_INCERRIE_B_0x1 = 1;

    /** @brief OBK general error interrupt enable bit */
    using FLASH_SECCR_OBKERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated on OBK general access error (value: 0)
     *          - B_0x1: an interrupt is generated on OBK general access error (value: 1)
     */
        /** @brief no interrupt is generated on OBK general access error */
    constexpr std::uint32_t FLASH_SECCR_OBKERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated on OBK general access error */
    constexpr std::uint32_t FLASH_SECCR_OBKERRIE_B_0x1 = 1;

    /** @brief OBK write error interrupt enable bit */
    using FLASH_SECCR_OBKWERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt is generated on OBK write error (value: 0)
     *          - B_0x1: an interrupt is generated on OBK write error (value: 1)
     */
        /** @brief no interrupt is generated on OBK write error */
    constexpr std::uint32_t FLASH_SECCR_OBKWERRIE_B_0x0 = 0;
        /** @brief an interrupt is generated on OBK write error */
    constexpr std::uint32_t FLASH_SECCR_OBKWERRIE_B_0x1 = 1;

    /** @brief Flash memory security state invert. */
    using FLASH_SECCR_INV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank selector bit */
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
    /** @brief EOP flag clear bit */
    using FLASH_NSCCR_CLR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRPERR flag clear bit */
    using FLASH_NSCCR_CLR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PGSERR flag clear bit */
    using FLASH_NSCCR_CLR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STRBERR flag clear bit */
    using FLASH_NSCCR_CLR_STRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INCERR flag clear bit */
    using FLASH_NSCCR_CLR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKERR flag clear bit. */
    using FLASH_NSCCR_CLR_OBKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKWERR flag clear bit. */
    using FLASH_NSCCR_CLR_OBKWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the flag corresponding flag in FLASH_NSSR by writing this bit. */
    using FLASH_NSCCR_CLR_OPTCHANGEERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure clear control register */
    using FLASH_SECCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EOP flag clear bit */
    using FLASH_SECCCR_CLR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRPERR flag clear bit */
    using FLASH_SECCCR_CLR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PGSERR flag clear bit */
    using FLASH_SECCCR_CLR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STRBERR flag clear bit */
    using FLASH_SECCCR_CLR_STRBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INCERR flag clear bit */
    using FLASH_SECCCR_CLR_INCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKWERR flag clear bit */
    using FLASH_SECCCR_CLR_OBKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKWERR flag clear bit */
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
    /** @brief OBKCFGR lock option configuration bit */
    using FLASH_NSOBKCFGR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_NSOBKCFGR register unlocked (value: 0)
     *          - B_0x1: FLASH_NSOBKCFGR register locked (value: 1)
     */
        /** @brief FLASH_NSOBKCFGR register unlocked */
    constexpr std::uint32_t FLASH_NSOBKCFGR_LOCK_B_0x0 = 0;
        /** @brief FLASH_NSOBKCFGR register locked */
    constexpr std::uint32_t FLASH_NSOBKCFGR_LOCK_B_0x1 = 1;

    /** @brief OBK swap sector request bit */
    using FLASH_NSOBKCFGR_SWAP_SECT_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no swap requested (value: 0)
     *          - B_0x1: launch the sector swap (value: 1)
     */
        /** @brief no swap requested */
    constexpr std::uint32_t FLASH_NSOBKCFGR_SWAP_SECT_REQ_B_0x0 = 0;
        /** @brief launch the sector swap */
    constexpr std::uint32_t FLASH_NSOBKCFGR_SWAP_SECT_REQ_B_0x1 = 1;

    /** @brief alternate sector bit */
    using FLASH_NSOBKCFGR_ALT_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: current OBK sector is mapped to OBK address range for access (value: 0)
     *          - B_0x1: alternate OBK sector is mapped to OBK address range for access (value: 1)
     */
        /** @brief current OBK sector is mapped to OBK address range for access */
    constexpr std::uint32_t FLASH_NSOBKCFGR_ALT_SECT_B_0x0 = 0;
        /** @brief alternate OBK sector is mapped to OBK address range for access */
    constexpr std::uint32_t FLASH_NSOBKCFGR_ALT_SECT_B_0x1 = 1;

    /** @brief alternate sector erase bit */
    using FLASH_NSOBKCFGR_ALT_SECT_ERASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: do not touch OBK sector (value: 0)
     *          - B_0x1: erase the alternate OBK sector (value: 1)
     */
        /** @brief do not touch OBK sector */
    constexpr std::uint32_t FLASH_NSOBKCFGR_ALT_SECT_ERASE_B_0x0 = 0;
        /** @brief erase the alternate OBK sector */
    constexpr std::uint32_t FLASH_NSOBKCFGR_ALT_SECT_ERASE_B_0x1 = 1;

    /** @brief Key index (offset /16 bits) pointing for next swap. */
    using FLASH_NSOBKCFGR_SWAP_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: means that no OBK is copied from current to alternate OBK sector during SWAP operation. (value: 0)
     *          - B_0x1FF: means that all OBK data (511) are copied (value: 511)
     */
        /** @brief means that no OBK is copied from current to alternate OBK sector during SWAP operation. */
    constexpr std::uint32_t FLASH_NSOBKCFGR_SWAP_OFFSET_B_0x00 = 0;
        /** @brief means that all OBK data (511) are copied */
    constexpr std::uint32_t FLASH_NSOBKCFGR_SWAP_OFFSET_B_0x1FF = 511;

    /** @brief FLASH secure OBK configuration register */
    using FLASH_SECOBKCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBKCFGR lock option configuration bit */
    using FLASH_SECOBKCFGR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH_OBKCFGR register unlocked (value: 0)
     *          - B_0x1: FLASH_OBKCFGR register locked (value: 1)
     */
        /** @brief FLASH_OBKCFGR register unlocked */
    constexpr std::uint32_t FLASH_SECOBKCFGR_LOCK_B_0x0 = 0;
        /** @brief FLASH_OBKCFGR register locked */
    constexpr std::uint32_t FLASH_SECOBKCFGR_LOCK_B_0x1 = 1;

    /** @brief OBK swap sector request bit */
    using FLASH_SECOBKCFGR_SWAP_SECT_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no swap requested (value: 0)
     *          - B_0x1: launch the sector swap (value: 1)
     */
        /** @brief no swap requested */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_SECT_REQ_B_0x0 = 0;
        /** @brief launch the sector swap */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_SECT_REQ_B_0x1 = 1;

    /** @brief alternate sector bit */
    using FLASH_SECOBKCFGR_ALT_SECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: current OBK sector is mapped to OBK address range for access (value: 0)
     *          - B_0x1: alternate OBK sector is mapped to OBK address range for access (value: 1)
     */
        /** @brief current OBK sector is mapped to OBK address range for access */
    constexpr std::uint32_t FLASH_SECOBKCFGR_ALT_SECT_B_0x0 = 0;
        /** @brief alternate OBK sector is mapped to OBK address range for access */
    constexpr std::uint32_t FLASH_SECOBKCFGR_ALT_SECT_B_0x1 = 1;

    /** @brief alternate sector erase bit */
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
     *          - B_0x1: only the first OBK data (128 bits) are copied from current to alternate OBK sector (value: 1)
     *          - B_0x2: the two first OBK data are copied (value: 2)
     *          - B_0x1FF: the 511 first OBK data are copied (value: 511)
     */
        /** @brief no OBK is copied from current to alternate OBK sector during SWAP operation. */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_OFFSET_B_0x0 = 0;
        /** @brief only the first OBK data (128 bits) are copied from current to alternate OBK sector */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_OFFSET_B_0x1 = 1;
        /** @brief the two first OBK data are copied */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_OFFSET_B_0x2 = 2;
        /** @brief the 511 first OBK data are copied */
    constexpr std::uint32_t FLASH_SECOBKCFGR_SWAP_OFFSET_B_0x1FF = 511;

    /** @brief FLASH HDP extension register */
    using FLASH_HDPEXTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP area extension in 8 Kbytes sectors in Bank1. */
    using FLASH_HDPEXTR_HDP1_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP area extension in 8 Kbytes sectors in Bank2. */
    using FLASH_HDPEXTR_HDP2_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option status register */
    using FLASH_OPTSR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Brownout level option status bit */
    using FLASH_OPTSR_CUR_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: BOR Level 2, the threshold level is medium (around 2. (value: 1)
     *          - B_0x2: BOR Level 3, the threshold level is high (around 2. (value: 2)
     */
        /** @brief BOR Level 2, the threshold level is medium (around 2. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOR_LEV_B_0x1 = 1;
        /** @brief BOR Level 3, the threshold level is high (around 2. */
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

    /** @brief Life state code (based on Hamming 8,4). */
    using FLASH_OPTSR_CUR_PRODUCT_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed IO at low Vless thansub>DDless than/sub> voltage configuration bit. */
    using FLASH_OPTSR_CUR_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low Vless thansub>DDless than/sub> voltage feature disabled (Vless thansub>DDless than/sub> can exceed 2. (value: 0)
     *          - B_0x1: High-speed IO at low Vless thansub>DDless than/sub> voltage feature enabled (Vless thansub>DDless than/sub> remains below 2. (value: 1)
     */
        /** @brief High-speed IO at low Vless thansub>DDless than/sub> voltage feature disabled (Vless thansub>DDless than/sub> can exceed 2. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low Vless thansub>DDless than/sub> voltage feature enabled (Vless thansub>DDless than/sub> remains below 2. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low Vless thansub>DDIO2less than/sub> voltage configuration bit. */
    using FLASH_OPTSR_CUR_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low Vless thansub>DDIO2less than/sub> voltage feature disabled (Vless thansub>DDIO2less than/sub> can exceed 2. (value: 0)
     *          - B_0x1: High-speed IO at low Vless thansub>DDIO2less than/sub> voltage feature enabled (Vless thansub>DDIO2less than/sub> remains below 2. (value: 1)
     */
        /** @brief High-speed IO at low Vless thansub>DDIO2less than/sub> voltage feature disabled (Vless thansub>DDIO2less than/sub> can exceed 2. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low Vless thansub>DDIO2less than/sub> voltage feature enabled (Vless thansub>DDIO2less than/sub> remains below 2. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IO_VDDIO2_HSLV_B_0x1 = 1;

    /** @brief IWDG Stop mode freeze option status bit */
    using FLASH_OPTSR_CUR_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in system Stop mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in system Stop mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in system Stop mode */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_STOP_B_0x0 = 0;
        /** @brief Independent watchdog keep running in system Stop mode. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_STOP_B_0x1 = 1;

    /** @brief IWDG Standby mode freeze option status bit */
    using FLASH_OPTSR_CUR_IWDG_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in Standby mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in Standby mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in Standby mode */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_STDBY_B_0x0 = 0;
        /** @brief Independent watchdog keep running in Standby mode. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_IWDG_STDBY_B_0x1 = 1;

    /** @brief Available only on cryptography enabled devices. */
    using FLASH_OPTSR_CUR_BOOT_UBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: ST-iRoT (system flash) selected (value: 195)
     *          - B_0xB4: OEM-iRoT (user flash) selected. (value: 180)
     */
        /** @brief ST-iRoT (system flash) selected */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOOT_UBE_B_0xC3 = 195;
        /** @brief OEM-iRoT (user flash) selected. */
    constexpr std::uint32_t FLASH_OPTSR_CUR_BOOT_UBE_B_0xB4 = 180;

    /** @brief Bank swapping option status bit */
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
    /** @brief Brownout level option configuration bit */
    using FLASH_OPTSR_PRG_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: BOR Level 2, the threshold level is medium (around 2. (value: 1)
     *          - B_0x2: BOR Level 3, the threshold level is high (around 2. (value: 2)
     */
        /** @brief BOR Level 2, the threshold level is medium (around 2. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOR_LEV_B_0x1 = 1;
        /** @brief BOR Level 3, the threshold level is high (around 2. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOR_LEV_B_0x2 = 2;

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

    /** @brief Life state code (based on Hamming 8,4). */
    using FLASH_OPTSR_PRG_PRODUCT_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed IO at low VDD voltage configuration bit. */
    using FLASH_OPTSR_PRG_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low Vless thansub>DDless than/sub> voltage feature disabled (Vless thansub>DDless than/sub> can exceed 2. (value: 0)
     *          - B_0x1: High-speed IO at low Vless thansub>DDless than/sub> voltage feature enabled (Vless thansub>DDless than/sub> remains below 2. (value: 1)
     */
        /** @brief High-speed IO at low Vless thansub>DDless than/sub> voltage feature disabled (Vless thansub>DDless than/sub> can exceed 2. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low Vless thansub>DDless than/sub> voltage feature enabled (Vless thansub>DDless than/sub> remains below 2. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low Vless thansub>DDIO2less than/sub> voltage configuration bit. */
    using FLASH_OPTSR_PRG_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low Vless thansub>DDIO2less than/sub> voltage feature disabled (Vless thansub>DDIO2less than/sub> can exceed 2. (value: 0)
     *          - B_0x1: High-speed IO at low Vless thansub>DDIO2less than/sub> voltage feature enabled (Vless thansub>DDIO2less than/sub> remains below 2. (value: 1)
     */
        /** @brief High-speed IO at low Vless thansub>DDIO2less than/sub> voltage feature disabled (Vless thansub>DDIO2less than/sub> can exceed 2. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low Vless thansub>DDIO2less than/sub> voltage feature enabled (Vless thansub>DDIO2less than/sub> remains below 2. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IO_VDDIO2_HSLV_B_0x1 = 1;

    /** @brief IWDG Stop mode freeze option status bit */
    using FLASH_OPTSR_PRG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in system Stop mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in system Stop mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in system Stop mode */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STOP_B_0x0 = 0;
        /** @brief Independent watchdog keep running in system Stop mode. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STOP_B_0x1 = 1;

    /** @brief IWDG Standby mode freeze option status bit */
    using FLASH_OPTSR_PRG_IWDG_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent watchdog frozen in Standby mode (value: 0)
     *          - B_0x1: Independent watchdog keep running in Standby mode. (value: 1)
     */
        /** @brief Independent watchdog frozen in Standby mode */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STDBY_B_0x0 = 0;
        /** @brief Independent watchdog keep running in Standby mode. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_IWDG_STDBY_B_0x1 = 1;

    /** @brief Available only on cryptography enabled devices. */
    using FLASH_OPTSR_PRG_BOOT_UBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: ST-iRoT (system flash) selected (value: 195)
     *          - B_0xB4: OEM-iRoT (user flash) selected. (value: 180)
     */
        /** @brief ST-iRoT (system flash) selected */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOOT_UBE_B_0xC3 = 195;
        /** @brief OEM-iRoT (user flash) selected. */
    constexpr std::uint32_t FLASH_OPTSR_PRG_BOOT_UBE_B_0xB4 = 180;

    /** @brief Bank swapping option configuration bit */
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

    /** @brief TrustZone enable configuration bits */
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
    /** @brief SRAM1 and SRAM3 erase upon system reset */
    using FLASH_OPTSR2_PRG_SRAM1_3_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 and SRAM3 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM1 and SRAM3 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM1 and SRAM3 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM1_3_RST_B_0x0 = 0;
        /** @brief SRAM1 and SRAM3 not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTSR2_PRG_SRAM1_3_RST_B_0x1 = 1;

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

    /** @brief TrustZone enable configuration bits */
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
    /** @brief Field locking the values of SWAP_BANK, and NSBOOTADD settings. */
    using FLASH_NSBOOTR_CUR_NSBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: SWAP_BANK and NSBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: NSBOOTADD is frozen. (value: 180)
     */
        /** @brief SWAP_BANK and NSBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_NSBOOTR_CUR_NSBOOT_LOCK_B_0xC3 = 195;
        /** @brief NSBOOTADD is frozen. */
    constexpr std::uint32_t FLASH_NSBOOTR_CUR_NSBOOT_LOCK_B_0xB4 = 180;

    /** @brief Non secure unique boot entry address */
    using FLASH_NSBOOTR_CUR_NSBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure boot register */
    using FLASH_NSBOOTR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Field locking the values of SWAP_ BANK, and NSBOOTADD settings. */
    using FLASH_NSBOOTR_PRG_NSBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: SWAP_ BANK and NSBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: NSBOOTADD is frozen. (value: 180)
     */
        /** @brief SWAP_ BANK and NSBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_NSBOOTR_PRG_NSBOOT_LOCK_B_0xC3 = 195;
        /** @brief NSBOOTADD is frozen. */
    constexpr std::uint32_t FLASH_NSBOOTR_PRG_NSBOOT_LOCK_B_0xB4 = 180;

    /** @brief Non secure unique boot entry address */
    using FLASH_NSBOOTR_PRG_NSBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot register */
    using FLASH_SECBOOTR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Field locking the values of UBE, SWAP_BANK, and SECBOOTADD settings. */
    using FLASH_SECBOOTR_CUR_SECBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: BOOT_UBE, SWAP_BANK and SECBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: BOOT_UBE and SECBOOTADD are frozen. (value: 180)
     */
        /** @brief BOOT_UBE, SWAP_BANK and SECBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_SECBOOTR_CUR_SECBOOT_LOCK_B_0xC3 = 195;
        /** @brief BOOT_UBE and SECBOOTADD are frozen. */
    constexpr std::uint32_t FLASH_SECBOOTR_CUR_SECBOOT_LOCK_B_0xB4 = 180;

    /** @brief Unique boot entry secure address */
    using FLASH_SECBOOTR_CUR_SECBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot register */
    using FLASH_BOOTR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Field locking the values of UBE, SWAP_ BANK, and SECBOOTADD setting. */
    using FLASH_BOOTR_PRG_SECBOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xC3: BOOT_UBE, SWAP_ BANK and SECBOOTADD can still be modified following their individual rules. (value: 195)
     *          - B_0xB4: BOOT_UBE and SECBOOTADD are frozen. (value: 180)
     */
        /** @brief BOOT_UBE, SWAP_ BANK and SECBOOTADD can still be modified following their individual rules. */
    constexpr std::uint32_t FLASH_BOOTR_PRG_SECBOOT_LOCK_B_0xC3 = 195;
        /** @brief BOOT_UBE and SECBOOTADD are frozen. */
    constexpr std::uint32_t FLASH_BOOTR_PRG_SECBOOT_LOCK_B_0xB4 = 180;

    /** @brief Secure unique boot entry address. */
    using FLASH_BOOTR_PRG_SECBOOTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure OTP block lock */
    using FLASH_OTPBLR_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP block lock */
    using FLASH_OTPBLR_CUR_LOCKBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure OTP block lock */
    using FLASH_OTPBLR_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP block lock */
    using FLASH_OTPBLR_PRG_LOCKBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based register for Bank1 */
    using FLASH_SECBB1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure 8 Kbytes flash Bank1 sector attributes */
    using FLASH_SECBB1R1_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector (32 * (x-1) + y) in Bank1 is non secure. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank1 is secure. (value: 1)
     */
        /** @brief sector (32 * (x-1) + y) in Bank1 is non secure. */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank1 is secure. */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB1_B_0x1 = 1;

    /** @brief FLASH secure block based register for Bank1 */
    using FLASH_SECBB1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure 8 Kbytes flash Bank1 sector attributes */
    using FLASH_SECBB1R2_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector (32 * (x-1) + y) in Bank1 is non secure. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank1 is secure. (value: 1)
     */
        /** @brief sector (32 * (x-1) + y) in Bank1 is non secure. */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank1 is secure. */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB1_B_0x1 = 1;

    /** @brief FLASH secure block based register for Bank1 */
    using FLASH_SECBB1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure 8 Kbytes flash Bank1 sector attributes */
    using FLASH_SECBB1R3_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector (32 * (x-1) + y) in Bank1 is non secure. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank1 is secure. (value: 1)
     */
        /** @brief sector (32 * (x-1) + y) in Bank1 is non secure. */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank1 is secure. */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB1_B_0x1 = 1;

    /** @brief FLASH secure block based register for Bank1 */
    using FLASH_SECBB1R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure 8 Kbytes flash Bank1 sector attributes */
    using FLASH_SECBB1R4_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sector (32 * (x-1) + y) in Bank1 is non secure. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank1 is secure. (value: 1)
     */
        /** @brief sector (32 * (x-1) + y) in Bank1 is non secure. */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank1 is secure. */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB1_B_0x1 = 1;

    /** @brief FLASH privilege block based register for Bank1 */
    using FLASH_PRIVBB1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged/unprivileged 8-Kbyte flash Bank1 sector attribute */
    using FLASH_PRIVBB1R1_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank1 is unprivileged. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank1 is privileged. (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank1 is unprivileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank1 is privileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH privilege block based register for Bank1 */
    using FLASH_PRIVBB1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged/unprivileged 8-Kbyte flash Bank1 sector attribute */
    using FLASH_PRIVBB1R2_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank1 is unprivileged. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank1 is privileged. (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank1 is unprivileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank1 is privileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH privilege block based register for Bank1 */
    using FLASH_PRIVBB1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged/unprivileged 8-Kbyte flash Bank1 sector attribute */
    using FLASH_PRIVBB1R3_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank1 is unprivileged. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank1 is privileged. (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank1 is unprivileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank1 is privileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH privilege block based register for Bank1 */
    using FLASH_PRIVBB1R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged/unprivileged 8-Kbyte flash Bank1 sector attribute */
    using FLASH_PRIVBB1R4_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank1 is unprivileged. (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank1 is privileged. (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank1 is unprivileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB1_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank1 is privileged. */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB1_B_0x1 = 1;

    /** @brief FLASH security watermark for Bank1 */
    using FLASH_SECWM1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 security WM area 1 start sector */
    using FLASH_SECWM1R_CUR_SECWM1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 security WM area 1 end sector */
    using FLASH_SECWM1R_CUR_SECWM1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH security watermark for Bank1 */
    using FLASH_SECWM1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 security WM area 1 start sector */
    using FLASH_SECWM1R_PRG_SECWM1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 security WM area 1 end sector */
    using FLASH_SECWM1R_PRG_SECWM1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector group protection for Bank1 */
    using FLASH_WRP1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 sector group protection option status byte */
    using FLASH_WRP1R_CUR_WRPSG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector group protection for Bank1 */
    using FLASH_WRP1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank1 sector group protection option status byte */
    using FLASH_WRP1R_PRG_WRPSG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH data sector configuration Bank1 */
    using FLASH_EDATA1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDATA1_STRT contains the start sectors of the flash high-cycle data area in Bank1 There is no hardware effect to those bits. */
    using FLASH_EDATA1R_CUR_EDATA1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The last sector of Bank1 is reserved for flash high-cycle data (value: 0)
     *          - B_0x1: The two last sectors of Bank1 are reserved for flash high-cycle data (value: 1)
     *          - B_0x2: The three last sectors of Bank1 are reserved for flash high-cycle data (value: 2)
     *          - B_0x7: The eight last sectors of Bank1 are reserved for flash high-cycle data (value: 7)
     */
        /** @brief The last sector of Bank1 is reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_STRT_B_0x0 = 0;
        /** @brief The two last sectors of Bank1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_STRT_B_0x1 = 1;
        /** @brief The three last sectors of Bank1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_CUR_EDATA1_STRT_B_0x2 = 2;
        /** @brief The eight last sectors of Bank1 are reserved for flash high-cycle data */
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

    /** @brief FLASH data sector configuration Bank1 */
    using FLASH_EDATA1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDATA1_STRT contains the start sectors of the flash high-cycle data area in Bank1 There is no hardware effect to those bits. */
    using FLASH_EDATA1R_PRG_EDATA1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The last sector of Bank1 is reserved for flash high-cycle data (value: 0)
     *          - B_0x1: The two last sectors of Bank1 are reserved for flash high-cycle data (value: 1)
     *          - B_0x2: The three last sectors of Bank1 are reserved for flash high-cycle data (value: 2)
     */
        /** @brief The last sector of Bank1 is reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_STRT_B_0x0 = 0;
        /** @brief The two last sectors of Bank1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_STRT_B_0x1 = 1;
        /** @brief The three last sectors of Bank1 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_STRT_B_0x2 = 2;

    /** @brief Bank1 flash high-cycle data enable */
    using FLASH_EDATA1R_PRG_EDATA1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No flash high-cycle data area (value: 0)
     *          - B_0x1: Flash high-cycle data is used (value: 1)
     */
        /** @brief No flash high-cycle data area */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_EN_B_0x0 = 0;
        /** @brief Flash high-cycle data is used */
    constexpr std::uint32_t FLASH_EDATA1R_PRG_EDATA1_EN_B_0x1 = 1;

    /** @brief FLASH HDP Bank1 configuration */
    using FLASH_HDP1R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8-Kbyte sectors */
    using FLASH_HDP1R_CUR_HDP1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8-Kbyte sectors */
    using FLASH_HDP1R_CUR_HDP1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH HDP Bank1 configuration */
    using FLASH_HDP1R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8-Kbyte sectors */
    using FLASH_HDP1R_PRG_HDP1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8-Kbyte sectors */
    using FLASH_HDP1R_PRG_HDP1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC correction register */
    using FLASH_ECCCORR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error address */
    using FLASH_ECCCORR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Single ECC error corrected in flash OB Keys storage area. */
    using FLASH_ECCCORR_OBK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail for corrected ECC error in flash high-cycle data area */
    using FLASH_ECCCORR_EDATA_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail bank for corrected ECC error */
    using FLASH_ECCCORR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail for corrected ECC error in system flash memory */
    using FLASH_ECCCORR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP ECC error bit */
    using FLASH_ECCCORR_OTP_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single correction error interrupt enable bit */
    using FLASH_ECCCORR_ECCCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC single correction error occurs (value: 0)
     *          - B_0x1: non-secure interrupt generated when an ECC single correction error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC single correction error occurs */
    constexpr std::uint32_t FLASH_ECCCORR_ECCCIE_B_0x0 = 0;
        /** @brief non-secure interrupt generated when an ECC single correction error occurs */
    constexpr std::uint32_t FLASH_ECCCORR_ECCCIE_B_0x1 = 1;

    /** @brief ECC correction set by hardware when single ECC error has been detected and corrected. */
    using FLASH_ECCCORR_ECCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC detection register */
    using FLASH_ECCDETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error address */
    using FLASH_ECCDETR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail double ECC error in flash OB Keys storage area. */
    using FLASH_ECCDETR_OBK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail double ECC error in flash high-cycle data area */
    using FLASH_ECCDETR_EDATA_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail bank for double ECC error */
    using FLASH_ECCDETR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail for double ECC error in system flash memory */
    using FLASH_ECCDETR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTP ECC error bit */
    using FLASH_ECCDETR_OTP_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC detection */
    using FLASH_ECCDETR_ECCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC data */
    using FLASH_ECCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error data */
    using FLASH_ECCDR_DATA_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block-based register for Bank2 */
    using FLASH_SECBB2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure flash Bank2 sector attribute */
    using FLASH_SECBB2R1_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank2 is non secure (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank2 is secure (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank2 is non secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank2 is secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB2_B_0x1 = 1;

    /** @brief FLASH secure block-based register for Bank2 */
    using FLASH_SECBB2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure flash Bank2 sector attribute */
    using FLASH_SECBB2R2_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank2 is non secure (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank2 is secure (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank2 is non secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank2 is secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB2_B_0x1 = 1;

    /** @brief FLASH secure block-based register for Bank2 */
    using FLASH_SECBB2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure flash Bank2 sector attribute */
    using FLASH_SECBB2R3_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank2 is non secure (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank2 is secure (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank2 is non secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank2 is secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB2_B_0x1 = 1;

    /** @brief FLASH secure block-based register for Bank2 */
    using FLASH_SECBB2R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure/non-secure flash Bank2 sector attribute */
    using FLASH_SECBB2R4_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank2 is non secure (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank2 is secure (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank2 is non secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank2 is secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB2_B_0x1 = 1;

    /** @brief FLASH privilege block-based register for Bank2 */
    using FLASH_PRIVBB2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / non-privileged 8-Kbyte flash Bank2 sector attribute */
    using FLASH_PRIVBB2R1_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank2 is unprivileged (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank2 is privileged (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank2 is unprivileged */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank2 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB2_B_0x1 = 1;

    /** @brief FLASH privilege block-based register for Bank2 */
    using FLASH_PRIVBB2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / non-privileged 8-Kbyte flash Bank2 sector attribute */
    using FLASH_PRIVBB2R2_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank2 is unprivileged (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank2 is privileged (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank2 is unprivileged */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank2 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB2_B_0x1 = 1;

    /** @brief FLASH privilege block-based register for Bank2 */
    using FLASH_PRIVBB2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / non-privileged 8-Kbyte flash Bank2 sector attribute */
    using FLASH_PRIVBB2R3_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank2 is unprivileged (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank2 is privileged (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank2 is unprivileged */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank2 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB2_B_0x1 = 1;

    /** @brief FLASH privilege block-based register for Bank2 */
    using FLASH_PRIVBB2R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged / non-privileged 8-Kbyte flash Bank2 sector attribute */
    using FLASH_PRIVBB2R4_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sectors (32 * (x-1) + y) in Bank2 is unprivileged (value: 0)
     *          - B_0x1: sector (32 * (x-1) + y) in Bank2 is privileged (value: 1)
     */
        /** @brief sectors (32 * (x-1) + y) in Bank2 is unprivileged */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB2_B_0x0 = 0;
        /** @brief sector (32 * (x-1) + y) in Bank2 is privileged */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB2_B_0x1 = 1;

    /** @brief FLASH security watermark for Bank2 */
    using FLASH_SECWM2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 security WM area start sector */
    using FLASH_SECWM2R_CUR_SECWM2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 security WM end sector */
    using FLASH_SECWM2R_CUR_SECWM2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH security watermark for Bank2 */
    using FLASH_SECWM2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 security WM area start sector */
    using FLASH_SECWM2R_PRG_SECWM2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 security WM area end sector */
    using FLASH_SECWM2R_PRG_SECWM2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector group protection for Bank2 */
    using FLASH_WRP2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 sector group protection option status byte */
    using FLASH_WRP2R_CUR_WRPSG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH write sector group protection for Bank2 */
    using FLASH_WRP2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank2 sector group protection option status byte */
    using FLASH_WRP2R_PRG_WRPSG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH data sectors configuration Bank2 */
    using FLASH_EDATA2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDATA2_STRT contains the start sectors of the flash high-cycle data area in Bank2 There is no hardware effect to those bits. */
    using FLASH_EDATA2R_CUR_EDATA2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The last sector of Bank2 is reserved for flash high-cycle data (value: 0)
     *          - B_0x1: The two last sectors of Bank2 are reserved for flash high-cycle data (value: 1)
     *          - B_0x2: The three last sectors of Bank2 are reserved for flash high-cycle data (value: 2)
     */
        /** @brief The last sector of Bank2 is reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA2R_CUR_EDATA2_STRT_B_0x0 = 0;
        /** @brief The two last sectors of Bank2 are reserved for flash high-cycle data */
    constexpr std::uint32_t FLASH_EDATA2R_CUR_EDATA2_STRT_B_0x1 = 1;
        /** @brief The three last sectors of Bank2 are reserved for flash high-cycle data */
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

    /** @brief FLASH data sector configuration Bank2 */
    using FLASH_EDATA2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDATA2_STRT contains the start sectors of the flash high-cycle data area in Bank2 There is no hardware effect to those bits. */
    using FLASH_EDATA2R_PRG_EDATA2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The last sector of Bank2 is reserved for flash high-cycle data. (value: 0)
     *          - B_0x1: The two last sectors of Bank2 are reserved for flash high-cycle data. (value: 1)
     *          - B_0x2: The three last sectors of Bank2 are reserved for flash high-cycle data. (value: 2)
     */
        /** @brief The last sector of Bank2 is reserved for flash high-cycle data. */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_STRT_B_0x0 = 0;
        /** @brief The two last sectors of Bank2 are reserved for flash high-cycle data. */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_STRT_B_0x1 = 1;
        /** @brief The three last sectors of Bank2 are reserved for flash high-cycle data. */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_STRT_B_0x2 = 2;

    /** @brief Bank2 flash high-cycle data enable */
    using FLASH_EDATA2R_PRG_EDATA2_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No flash high-cycle data area (value: 0)
     *          - B_0x1: Flash high-cycle data is used (value: 1)
     */
        /** @brief No flash high-cycle data area */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_EN_B_0x0 = 0;
        /** @brief Flash high-cycle data is used */
    constexpr std::uint32_t FLASH_EDATA2R_PRG_EDATA2_EN_B_0x1 = 1;

    /** @brief FLASH HDP Bank2 configuration */
    using FLASH_HDP2R_CUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8-Kbyte sectors */
    using FLASH_HDP2R_CUR_HDP2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8-Kbyte sectors */
    using FLASH_HDP2R_CUR_HDP2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH HDP Bank2 configuration */
    using FLASH_HDP2R_PRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier start set in number of 8-Kbyte sectors */
    using FLASH_HDP2R_PRG_HDP2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDPL barrier end set in number of 8-Kbyte sectors */
    using FLASH_HDP2R_PRG_HDP2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
