/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA64_FLASH_HPP
#define EMBEDDED_PP_STM32WBA64_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief FLASH register block */
namespace STM32WBA64::FLASH {

    /** @brief FLASH access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Latency */
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

    /** @brief Prefetch enable */
    using FLASH_ACR_PRFTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Prefetch disabled (value: 0)
     *          - B_0x1: Prefetch enabled (value: 1)
     */
        /** @brief Prefetch disabled */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x0 = 0;
        /** @brief Prefetch enabled */
    constexpr std::uint32_t FLASH_ACR_PRFTEN_B_0x1 = 1;

    /** @brief Low-power read mode */
    using FLASH_ACR_LPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash not in low-power read mode (value: 0)
     *          - B_0x1: Flash in low-power read mode (value: 1)
     */
        /** @brief Flash not in low-power read mode */
    constexpr std::uint32_t FLASH_ACR_LPM_B_0x0 = 0;
        /** @brief Flash in low-power read mode */
    constexpr std::uint32_t FLASH_ACR_LPM_B_0x1 = 1;

    /** @brief Bank 1 power-down mode request */
    using FLASH_ACR_PDREQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request for bank 1 to enter power-down mode (value: 0)
     *          - B_0x1: Bank 1 requested to enter power-down mode (value: 1)
     */
        /** @brief No request for bank 1 to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ1_B_0x0 = 0;
        /** @brief Bank 1 requested to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ1_B_0x1 = 1;

    /** @brief Bank 2 power-down mode request */
    using FLASH_ACR_PDREQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request for bank 2 to enter power-down mode (value: 0)
     *          - B_0x1: Bank 2 requested to enter power-down mode' (value: 1)
     */
        /** @brief No request for bank 2 to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ2_B_0x0 = 0;
        /** @brief Bank 2 requested to enter power-down mode' */
    constexpr std::uint32_t FLASH_ACR_PDREQ2_B_0x1 = 1;

    /** @brief Flash memory power-down mode during Sleep mode */
    using FLASH_ACR_SLEEP_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash in idle mode during Sleep mode (value: 0)
     *          - B_0x1: Flash in power-down mode during Sleep mode (value: 1)
     */
        /** @brief Flash in idle mode during Sleep mode */
    constexpr std::uint32_t FLASH_ACR_SLEEP_PD_B_0x0 = 0;
        /** @brief Flash in power-down mode during Sleep mode */
    constexpr std::uint32_t FLASH_ACR_SLEEP_PD_B_0x1 = 1;

    /** @brief FLASH key register */
    using FLASH_NSKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory nonsecure key */
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
    using FLASH_PDKEY1R_PDKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH bank 2 power-down key register */
    using FLASH_PDKEY2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 power-down key */
    using FLASH_PDKEY2R_PDKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH status register */
    using FLASH_NSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure end of operation */
    using FLASH_NSSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure operation error */
    using FLASH_NSSR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure programming error */
    using FLASH_NSSR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure write protection error */
    using FLASH_NSSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure programming alignment error */
    using FLASH_NSSR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure size error */
    using FLASH_NSSR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure programming sequence error */
    using FLASH_NSSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option write error */
    using FLASH_NSSR_OPTWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure busy */
    using FLASH_NSSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure wait data to write */
    using FLASH_NSSR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 key RDP lock */
    using FLASH_NSSR_OEM1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 key RDP lock */
    using FLASH_NSSR_OEM2LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 in power-down mode */
    using FLASH_NSSR_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 in power-down mode */
    using FLASH_NSSR_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure status register */
    using FLASH_SECSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure end of operation */
    using FLASH_SECSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure operation error */
    using FLASH_SECSR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming error */
    using FLASH_SECSR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure write protection error */
    using FLASH_SECSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming alignment error */
    using FLASH_SECSR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure size error */
    using FLASH_SECSR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming sequence error */
    using FLASH_SECSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure busy */
    using FLASH_SECSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure wait data to write */
    using FLASH_SECSR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH control register */
    using FLASH_NSCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure programming */
    using FLASH_NSCR1_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: nonsecure flash programming disabled (value: 0)
     *          - B_0x1: nonsecure flash programming enabled (value: 1)
     */
        /** @brief nonsecure flash programming disabled */
    constexpr std::uint32_t FLASH_NSCR1_PG_B_0x0 = 0;
        /** @brief nonsecure flash programming enabled */
    constexpr std::uint32_t FLASH_NSCR1_PG_B_0x1 = 1;

    /** @brief nonsecure page erase */
    using FLASH_NSCR1_PER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: nonsecure page erase disabled (value: 0)
     *          - B_0x1: nonsecure page erase enabled (value: 1)
     */
        /** @brief nonsecure page erase disabled */
    constexpr std::uint32_t FLASH_NSCR1_PER_B_0x0 = 0;
        /** @brief nonsecure page erase enabled */
    constexpr std::uint32_t FLASH_NSCR1_PER_B_0x1 = 1;

    /** @brief nonsecure flash bank 1 erase */
    using FLASH_NSCR1_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure bank page number selection */
    using FLASH_NSCR1_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     *          - B_0x3F: page 63 (value: 63)
     *          - B_0x7F: page 127 (value: 127)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_NSCR1_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_NSCR1_PNB_B_0x1 = 1;
        /** @brief page 63 */
    constexpr std::uint32_t FLASH_NSCR1_PNB_B_0x3F = 63;
        /** @brief page 127 */
    constexpr std::uint32_t FLASH_NSCR1_PNB_B_0x7F = 127;

    /** @brief Bank selection for nonsecure page erase */
    using FLASH_NSCR1_BKER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 selected for nonsecure page erase (value: 0)
     *          - B_0x1: Bank 2 selected for nonsecure page erase (value: 1)
     */
        /** @brief Bank 1 selected for nonsecure page erase */
    constexpr std::uint32_t FLASH_NSCR1_BKER_B_0x0 = 0;
        /** @brief Bank 2 selected for nonsecure page erase */
    constexpr std::uint32_t FLASH_NSCR1_BKER_B_0x1 = 1;

    /** @brief nonsecure burst write programming mode */
    using FLASH_NSCR1_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure flash bank 2 erase */
    using FLASH_NSCR1_MER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure operation start */
    using FLASH_NSCR1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Options modification start */
    using FLASH_NSCR1_OPTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure end of operation interrupt enable */
    using FLASH_NSCR1_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: nonsecure EOP Interrupt disabled (value: 0)
     *          - B_0x1: nonsecure EOP Interrupt enabled (value: 1)
     */
        /** @brief nonsecure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_NSCR1_EOPIE_B_0x0 = 0;
        /** @brief nonsecure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_NSCR1_EOPIE_B_0x1 = 1;

    /** @brief nonsecure error interrupt enable */
    using FLASH_NSCR1_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: nonsecure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: nonsecure OPERR error interrupt enabled (value: 1)
     */
        /** @brief nonsecure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_NSCR1_ERRIE_B_0x0 = 0;
        /** @brief nonsecure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_NSCR1_ERRIE_B_0x1 = 1;

    /** @brief Force the option byte loading */
    using FLASH_NSCR1_OBL_LAUNCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Option byte loading complete (value: 0)
     *          - B_0x1: Option byte loading requested (value: 1)
     */
        /** @brief Option byte loading complete */
    constexpr std::uint32_t FLASH_NSCR1_OBL_LAUNCH_B_0x0 = 0;
        /** @brief Option byte loading requested */
    constexpr std::uint32_t FLASH_NSCR1_OBL_LAUNCH_B_0x1 = 1;

    /** @brief Option lock */
    using FLASH_NSCR1_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure lock */
    using FLASH_NSCR1_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure control register */
    using FLASH_SECCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming */
    using FLASH_SECCR1_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure flash programming disabled (value: 0)
     *          - B_0x1: Secure flash programming enabled (value: 1)
     */
        /** @brief Secure flash programming disabled */
    constexpr std::uint32_t FLASH_SECCR1_PG_B_0x0 = 0;
        /** @brief Secure flash programming enabled */
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

    /** @brief Secure flash bank 1 erase */
    using FLASH_SECCR1_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure bank page number selection */
    using FLASH_SECCR1_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     *          - B_0x3F: page 63 (value: 63)
     *          - B_0x7F: page 127 (value: 127)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_SECCR1_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_SECCR1_PNB_B_0x1 = 1;
        /** @brief page 63 */
    constexpr std::uint32_t FLASH_SECCR1_PNB_B_0x3F = 63;
        /** @brief page 127 */
    constexpr std::uint32_t FLASH_SECCR1_PNB_B_0x7F = 127;

    /** @brief Bank selection for secure page erase */
    using FLASH_SECCR1_BKER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 selected for secure page erase (value: 0)
     *          - B_0x1: Bank 2 selected for secure page erase (value: 1)
     */
        /** @brief Bank 1 selected for secure page erase */
    constexpr std::uint32_t FLASH_SECCR1_BKER_B_0x0 = 0;
        /** @brief Bank 2 selected for secure page erase */
    constexpr std::uint32_t FLASH_SECCR1_BKER_B_0x1 = 1;

    /** @brief Secure burst write programming mode */
    using FLASH_SECCR1_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure flash bank 2 erase */
    using FLASH_SECCR1_MER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure start */
    using FLASH_SECCR1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure End of operation interrupt enable */
    using FLASH_SECCR1_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure EOP Interrupt disabled (value: 0)
     *          - B_0x1: Secure EOP Interrupt enabled (value: 1)
     */
        /** @brief Secure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_SECCR1_EOPIE_B_0x0 = 0;
        /** @brief Secure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_SECCR1_EOPIE_B_0x1 = 1;

    /** @brief Secure error interrupt enable */
    using FLASH_SECCR1_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: Secure OPERR error interrupt enabled (value: 1)
     */
        /** @brief Secure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_SECCR1_ERRIE_B_0x0 = 0;
        /** @brief Secure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_SECCR1_ERRIE_B_0x1 = 1;

    /** @brief Flash memory security state invert */
    using FLASH_SECCR1_INV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure lock */
    using FLASH_SECCR1_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC register */
    using FLASH_ECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail address */
    using FLASH_ECCR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief bank ECC fail */
    using FLASH_ECCR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 (value: 0)
     *          - B_0x1: Bank 2 (value: 1)
     */
        /** @brief Bank 1 */
    constexpr std::uint32_t FLASH_ECCR_BK_ECC_B_0x0 = 0;
        /** @brief Bank 2 */
    constexpr std::uint32_t FLASH_ECCR_BK_ECC_B_0x1 = 1;

    /** @brief System flash memory ECC fail */
    using FLASH_ECCR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC correction interrupt enable */
    using FLASH_ECCR_ECCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECCC interrupt disabled (value: 0)
     *          - B_0x1: ECCC interrupt enabled (value: 1)
     */
        /** @brief ECCC interrupt disabled */
    constexpr std::uint32_t FLASH_ECCR_ECCIE_B_0x0 = 0;
        /** @brief ECCC interrupt enabled */
    constexpr std::uint32_t FLASH_ECCR_ECCIE_B_0x1 = 1;

    /** @brief ECC correction */
    using FLASH_ECCR_ECCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC detection */
    using FLASH_ECCR_ECCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH operation status register */
    using FLASH_OPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation address */
    using FLASH_OPSR_ADDR_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation in bank interrupted */
    using FLASH_OPSR_BK_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 (value: 0)
     *          - B_0x1: Bank 2 (value: 1)
     */
        /** @brief Bank 1 */
    constexpr std::uint32_t FLASH_OPSR_BK_OP_B_0x0 = 0;
        /** @brief Bank 2 */
    constexpr std::uint32_t FLASH_OPSR_BK_OP_B_0x1 = 1;

    /** @brief Operation in system flash memory interrupted */
    using FLASH_OPSR_SYSF_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory operation code */
    using FLASH_OPSR_CODE_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No flash operation interrupted by previous reset (value: 0)
     *          - B_0x1: Single write operation interrupted (value: 1)
     *          - B_0x2: Burst write operation interrupted (value: 2)
     *          - B_0x3: Page erase operation interrupted (value: 3)
     *          - B_0x4: Bank erase operation interrupted (value: 4)
     *          - B_0x5: Mass erase operation interrupted (value: 5)
     *          - B_0x6: Option change operation interrupted (value: 6)
     */
        /** @brief No flash operation interrupted by previous reset */
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

    /** @brief FLASH control 2 register */
    using FLASH_NSCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 nonsecure program suspend request */
    using FLASH_NSCR2_PS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 nonsecure program suspend disabled (value: 0)
     *          - B_0x1: Bank 1 nonsecure program suspend requested (enabled) (value: 1)
     */
        /** @brief Bank 1 nonsecure program suspend disabled */
    constexpr std::uint32_t FLASH_NSCR2_PS1_B_0x0 = 0;
        /** @brief Bank 1 nonsecure program suspend requested (enabled) */
    constexpr std::uint32_t FLASH_NSCR2_PS1_B_0x1 = 1;

    /** @brief Bank 1 nonsecure erase suspend request */
    using FLASH_NSCR2_ES1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 nonsecure erase suspend disabled (value: 0)
     *          - B_0x1: Bank 1 nonsecure erase suspend requested (enabled) (value: 1)
     */
        /** @brief Bank 1 nonsecure erase suspend disabled */
    constexpr std::uint32_t FLASH_NSCR2_ES1_B_0x0 = 0;
        /** @brief Bank 1 nonsecure erase suspend requested (enabled) */
    constexpr std::uint32_t FLASH_NSCR2_ES1_B_0x1 = 1;

    /** @brief Bank 2 nonsecure program suspend request */
    using FLASH_NSCR2_PS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 2 nonsecure program suspend disabled (value: 0)
     *          - B_0x1: Bank 2 nonsecure program suspend requested (enabled) (value: 1)
     */
        /** @brief Bank 2 nonsecure program suspend disabled */
    constexpr std::uint32_t FLASH_NSCR2_PS2_B_0x0 = 0;
        /** @brief Bank 2 nonsecure program suspend requested (enabled) */
    constexpr std::uint32_t FLASH_NSCR2_PS2_B_0x1 = 1;

    /** @brief Bank 2 nonsecure erase suspend request */
    using FLASH_NSCR2_ES2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 2 nonsecure erase suspend disabled (value: 0)
     *          - B_0x1: Bank 2 nonsecure erase suspend requested (enabled) (value: 1)
     */
        /** @brief Bank 2 nonsecure erase suspend disabled */
    constexpr std::uint32_t FLASH_NSCR2_ES2_B_0x0 = 0;
        /** @brief Bank 2 nonsecure erase suspend requested (enabled) */
    constexpr std::uint32_t FLASH_NSCR2_ES2_B_0x1 = 1;

    /** @brief FLASH secure control 2 register */
    using FLASH_SECCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 secure program suspend request */
    using FLASH_SECCR2_PS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 secure program suspend disabled (value: 0)
     *          - B_0x1: Bank 1 secure program suspend requested (enabled) (value: 1)
     */
        /** @brief Bank 1 secure program suspend disabled */
    constexpr std::uint32_t FLASH_SECCR2_PS1_B_0x0 = 0;
        /** @brief Bank 1 secure program suspend requested (enabled) */
    constexpr std::uint32_t FLASH_SECCR2_PS1_B_0x1 = 1;

    /** @brief Bank 1 secure erase suspend request */
    using FLASH_SECCR2_ES1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 secure erase suspend disabled (value: 0)
     *          - B_0x1: Bank 1 secure erase suspend requested (enabled) (value: 1)
     */
        /** @brief Bank 1 secure erase suspend disabled */
    constexpr std::uint32_t FLASH_SECCR2_ES1_B_0x0 = 0;
        /** @brief Bank 1 secure erase suspend requested (enabled) */
    constexpr std::uint32_t FLASH_SECCR2_ES1_B_0x1 = 1;

    /** @brief Bank 2 secure program suspend request */
    using FLASH_SECCR2_PS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 2 secure program suspend disabled (value: 0)
     *          - B_0x1: Bank 2 secure program suspend requested (enabled) (value: 1)
     */
        /** @brief Bank 2 secure program suspend disabled */
    constexpr std::uint32_t FLASH_SECCR2_PS2_B_0x0 = 0;
        /** @brief Bank 2 secure program suspend requested (enabled) */
    constexpr std::uint32_t FLASH_SECCR2_PS2_B_0x1 = 1;

    /** @brief Bank 2 secure erase suspend request */
    using FLASH_SECCR2_ES2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 2 secure erase suspend disabled (value: 0)
     *          - B_0x1: Bank 2 secure erase suspend requested (enabled) (value: 1)
     */
        /** @brief Bank 2 secure erase suspend disabled */
    constexpr std::uint32_t FLASH_SECCR2_ES2_B_0x0 = 0;
        /** @brief Bank 2 secure erase suspend requested (enabled) */
    constexpr std::uint32_t FLASH_SECCR2_ES2_B_0x1 = 1;

    /** @brief FLASH option register */
    using FLASH_OPTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Readout protection level */
    using FLASH_OPTR_RDP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xAA: Level 0 (readout protection not active) (value: 170)
     *          - B_0x55: Level 0. (value: 85)
     *          - B_0xCC: Level 2 (chip readout protection active) (value: 204)
     */
        /** @brief Level 0 (readout protection not active) */
    constexpr std::uint32_t FLASH_OPTR_RDP_B_0xAA = 170;
        /** @brief Level 0. */
    constexpr std::uint32_t FLASH_OPTR_RDP_B_0x55 = 85;
        /** @brief Level 2 (chip readout protection active) */
    constexpr std::uint32_t FLASH_OPTR_RDP_B_0xCC = 204;

    /** @brief BOR reset level */
    using FLASH_OPTR_BOR_LEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR level 0 (reset level threshold around 1. (value: 0)
     *          - B_0x1: BOR level 1 (reset level threshold around 2. (value: 1)
     *          - B_0x2: BOR level 2 (reset level threshold around 2. (value: 2)
     *          - B_0x3: BOR level 3 (reset level threshold around 2. (value: 3)
     *          - B_0x4: BOR level 4 (reset level threshold around 2. (value: 4)
     */
        /** @brief BOR level 0 (reset level threshold around 1. */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x0 = 0;
        /** @brief BOR level 1 (reset level threshold around 2. */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x1 = 1;
        /** @brief BOR level 2 (reset level threshold around 2. */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x2 = 2;
        /** @brief BOR level 3 (reset level threshold around 2. */
    constexpr std::uint32_t FLASH_OPTR_BOR_LEV_B_0x3 = 3;
        /** @brief BOR level 4 (reset level threshold around 2. */
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

    /** @brief Swap bank */
    using FLASH_OPTR_SWAP_BANK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Banks not swapped, Main memory bank 1 base address offset 0, bank 2 base address offset 0x10 0000 (value: 0)
     *          - B_0x1: Banks swapped, Main memory bank 1 base address offset 0x10 0000, bank 2 base address offset 0 (value: 1)
     */
        /** @brief Banks not swapped, Main memory bank 1 base address offset 0, bank 2 base address offset 0x10 0000 */
    constexpr std::uint32_t FLASH_OPTR_SWAP_BANK_B_0x0 = 0;
        /** @brief Banks swapped, Main memory bank 1 base address offset 0x10 0000, bank 2 base address offset 0 */
    constexpr std::uint32_t FLASH_OPTR_SWAP_BANK_B_0x1 = 1;

    /** @brief Dual-bank on 1-Mbyte flash memory */
    using FLASH_OPTR_DUAL_BANK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single-bank flash with contiguous addresses in bank 1 (value: 0)
     *          - B_0x1: Dual-bank flash with contiguous addresses (value: 1)
     */
        /** @brief Single-bank flash with contiguous addresses in bank 1 */
    constexpr std::uint32_t FLASH_OPTR_DUAL_BANK_B_0x0 = 0;
        /** @brief Dual-bank flash with contiguous addresses */
    constexpr std::uint32_t FLASH_OPTR_DUAL_BANK_B_0x1 = 1;

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

    /** @brief High-speed IO at low Vless thansub DDless than/sub voltage configuration */
    using FLASH_OPTR_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low Vless thansub DDless than/sub voltage disabled (value: 0)
     *          - B_0x1: High-speed IO at low Vless thansub DDless than/sub voltage enabling in GPIO peripheral allowed (Vless thansub DDless than/sub voltage must be below, refer to datasheet) (value: 1)
     */
        /** @brief High-speed IO at low Vless thansub DDless than/sub voltage disabled */
    constexpr std::uint32_t FLASH_OPTR_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low Vless thansub DDless than/sub voltage enabling in GPIO peripheral allowed (Vless thansub DDless than/sub voltage must be below, refer to datasheet) */
    constexpr std::uint32_t FLASH_OPTR_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low Vless thansub DDIO2less than/sub voltage configuration */
    using FLASH_OPTR_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low Vless thansub DDIO2less than/sub voltage disabled (value: 0)
     *          - B_0x1: High-speed IO at low Vless thansub DDIO2less than/sub voltage enabling in GPIO peripheral allowed (Vless thansub DDIO2less than/sub voltage must be below, refer to datasheet (value: 1)
     */
        /** @brief High-speed IO at low Vless thansub DDIO2less than/sub voltage disabled */
    constexpr std::uint32_t FLASH_OPTR_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low Vless thansub DDIO2less than/sub voltage enabling in GPIO peripheral allowed (Vless thansub DDIO2less than/sub voltage must be below, refer to datasheet */
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

    /** @brief FLASH boot address 0 register */
    using FLASH_NSBOOTADD0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure boot base address 0 */
    using FLASH_NSBOOTADD0R_NSBOOTADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH boot address 1 register */
    using FLASH_NSBOOTADD1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure boot address 1 */
    using FLASH_NSBOOTADD1R_NSBOOTADD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot address 0 register */
    using FLASH_SECBOOTADD0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot lock */
    using FLASH_SECBOOTADD0R_BOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure boot base address 0 */
    using FLASH_SECBOOTADD0R_SECBOOTADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH bank 1 secure watermark register 1 */
    using FLASH_SECWM1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 start page of secure area */
    using FLASH_SECWM1R1_SECWM1_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 end page of secure area */
    using FLASH_SECWM1R1_SECWM1_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH bank 1 secure watermark register 2 */
    using FLASH_SECWM1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 end page of secure hide protection area */
    using FLASH_SECWM1R2_HDP1_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 secure Hide protection area enable */
    using FLASH_SECWM1R2_HDP1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No bank 1 secure HDP area (value: 0)
     *          - B_0x1: Bank 1 secure HDP area enabled (value: 1)
     */
        /** @brief No bank 1 secure HDP area */
    constexpr std::uint32_t FLASH_SECWM1R2_HDP1EN_B_0x0 = 0;
        /** @brief Bank 1 secure HDP area enabled */
    constexpr std::uint32_t FLASH_SECWM1R2_HDP1EN_B_0x1 = 1;

    /** @brief FLASH WRP bank 1 area A address register */
    using FLASH_WRP1AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR bank 1 area A start page */
    using FLASH_WRP1AR_WRP1A_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR bank 1 area A end page */
    using FLASH_WRP1AR_WRP1A_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR bank 1 area A unlock */
    using FLASH_WRP1AR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRP bank 1 area A start and end pages locked (value: 0)
     *          - B_0x1: WRP bank 1 area A start and end pages unlocked (value: 1)
     */
        /** @brief WRP bank 1 area A start and end pages locked */
    constexpr std::uint32_t FLASH_WRP1AR_UNLOCK_B_0x0 = 0;
        /** @brief WRP bank 1 area A start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRP1AR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH WRP bank 2 area A address register */
    using FLASH_WRP2AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR bank 2 area A start page */
    using FLASH_WRP2AR_WRP2A_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR bank 2 area A end page */
    using FLASH_WRP2AR_WRP2A_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR bank 2 area A unlock */
    using FLASH_WRP2AR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRP bank 2 area A start and end pages locked (value: 0)
     *          - B_0x1: WRP bank 2 area A start and end pages unlocked (value: 1)
     */
        /** @brief WRP bank 2 area A start and end pages locked */
    constexpr std::uint32_t FLASH_WRP2AR_UNLOCK_B_0x0 = 0;
        /** @brief WRP bank 2 area A start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRP2AR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH WRP bank 1 area B address register */
    using FLASH_WRP1BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP bank 1 area B start page */
    using FLASH_WRP1BR_WRP1B_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP bank 1 area B end page */
    using FLASH_WRP1BR_WRP1B_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR area B unlock */
    using FLASH_WRP1BR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRP bank 1 area B start and end pages locked (value: 0)
     *          - B_0x1: WRP bank 1 area B start and end pages unlocked (value: 1)
     */
        /** @brief WRP bank 1 area B start and end pages locked */
    constexpr std::uint32_t FLASH_WRP1BR_UNLOCK_B_0x0 = 0;
        /** @brief WRP bank 1 area B start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRP1BR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH WRP bank 2 area B address register */
    using FLASH_WRP2BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP bank 2 area B start page */
    using FLASH_WRP2BR_WRP2B_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRP bank 2 area B end page */
    using FLASH_WRP2BR_WRP2B_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WPR bank 2 area B unlock */
    using FLASH_WRP2BR_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRP bank 2 area B start and end pages locked (value: 0)
     *          - B_0x1: WRP bank 2 area B start and end pages unlocked (value: 1)
     */
        /** @brief WRP bank 2 area B start and end pages locked */
    constexpr std::uint32_t FLASH_WRP2BR_UNLOCK_B_0x0 = 0;
        /** @brief WRP bank 2 area B start and end pages unlocked */
    constexpr std::uint32_t FLASH_WRP2BR_UNLOCK_B_0x1 = 1;

    /** @brief FLASH bank 2 secure watermark register 1 */
    using FLASH_SECWM2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start page of secure area */
    using FLASH_SECWM2R1_SECWM2_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of secure area */
    using FLASH_SECWM2R1_SECWM2_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH bank 2 secure watermark register 2 */
    using FLASH_SECWM2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 end page of secure hide protection area */
    using FLASH_SECWM2R2_HDP2_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 secure Hide protection area enable */
    using FLASH_SECWM2R2_HDP2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No bank 2 secure HDP area (value: 0)
     *          - B_0x1: Bank 2 secure HDP area enabled (value: 1)
     */
        /** @brief No bank 2 secure HDP area */
    constexpr std::uint32_t FLASH_SECWM2R2_HDP2EN_B_0x0 = 0;
        /** @brief Bank 2 secure HDP area enabled */
    constexpr std::uint32_t FLASH_SECWM2R2_HDP2EN_B_0x1 = 1;

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
    /** @brief FLASH bank 1 secure block based register 1 */
    using FLASH_SECBB1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB0_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB1_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB2_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB3_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB4_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB5_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB6_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB7_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB8_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB9_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB10_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB11_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB12_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB13_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB14_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB15_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB16_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB17_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB18_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB19_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB20_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB21_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB22_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB23_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB24_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB25_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB26_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB27_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB28_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB29_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB30_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SECBB31_B_0x1 = 1;

    /** @brief FLASH bank 1 secure block based register 2 */
    using FLASH_SECBB1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB0_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB1_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB2_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB3_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB4_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB5_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB6_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB7_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB8_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB9_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB10_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB11_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB12_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB13_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB14_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB15_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB16_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB17_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB18_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB19_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB20_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB21_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB22_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB23_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB24_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB25_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB26_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB27_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB28_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB29_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB30_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SECBB31_B_0x1 = 1;

    /** @brief FLASH bank 1 secure block based register 3 */
    using FLASH_SECBB1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB0_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB1_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB2_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB3_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB4_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB5_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB6_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB7_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB8_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB9_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB10_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB11_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB12_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB13_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB14_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB15_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB16_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB17_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB18_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB19_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB20_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB21_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB22_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB23_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB24_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB25_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB26_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB27_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB28_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB29_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB30_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SECBB31_B_0x1 = 1;

    /** @brief FLASH bank 1 secure block based register 4 */
    using FLASH_SECBB1R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB0_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB1_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB2_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB3_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB4_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB5_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB6_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB7_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB8_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB9_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB10_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB11_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB12_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB13_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB14_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB15_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB16_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB17_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB18_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB19_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB20_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB21_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB22_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB23_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB24_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB25_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB26_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB27_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB28_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB29_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB30_B_0x1 = 1;

    /** @brief Bank 1 page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SECBB31_B_0x1 = 1;

    /** @brief FLASH bank 2 secure block based register 1 */
    using FLASH_SECBB2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB0_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB1_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB2_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB3_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB4_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB5_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB6_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB7_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB8_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB9_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB10_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB11_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB12_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB13_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB14_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB15_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB16_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB17_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB18_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB19_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB20_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB21_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB22_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB23_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB24_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB25_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB26_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB27_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB28_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB29_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB30_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SECBB31_B_0x1 = 1;

    /** @brief FLASH bank 2 secure block based register 2 */
    using FLASH_SECBB2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB0_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB1_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB2_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB3_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB4_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB5_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB6_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB7_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB8_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB9_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB10_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB11_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB12_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB13_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB14_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB15_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB16_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB17_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB18_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB19_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB20_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB21_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB22_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB23_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB24_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB25_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB26_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB27_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB28_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB29_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB30_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SECBB31_B_0x1 = 1;

    /** @brief FLASH bank 2 secure block based register 3 */
    using FLASH_SECBB2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB0_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB1_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB2_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB3_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB4_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB5_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB6_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB7_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB8_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB9_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB10_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB11_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB12_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB13_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB14_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB15_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB16_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB17_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB18_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB19_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB20_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB21_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB22_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB23_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB24_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB25_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB26_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB27_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB28_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB29_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB30_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SECBB31_B_0x1 = 1;

    /** @brief FLASH bank 2 secure block based register 4 */
    using FLASH_SECBB2R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB0_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB1_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB2_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB3_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB4_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB5_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB6_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB7_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB8_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB9_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB10_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB11_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB12_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB13_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB14_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB15_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB16_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB17_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB18_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB19_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB20_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB21_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB22_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB23_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB24_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB25_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB26_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB27_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB28_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB29_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB30_B_0x1 = 1;

    /** @brief Bank 2 page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SECBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SECBB31_B_0x1 = 1;

    /** @brief FLASH secure HDP control register */
    using FLASH_SECHDPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 secure HDP area access disable */
    using FLASH_SECHDPCR_HDP1_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access to bank 1 secure HDP area granted (value: 0)
     *          - B_0x1: Access to bank 1 secure HDP area denied (SECWMxRy option bytes modification blocked, refer to Rules for modifying specific option bytes) (value: 1)
     */
        /** @brief Access to bank 1 secure HDP area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1_ACCDIS_B_0x0 = 0;
        /** @brief Access to bank 1 secure HDP area denied (SECWMxRy option bytes modification blocked, refer to Rules for modifying specific option bytes) */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1_ACCDIS_B_0x1 = 1;

    /** @brief Bank 2 secure HDP area access disable */
    using FLASH_SECHDPCR_HDP2_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access to bank 2 secure HDP area granted (value: 0)
     *          - B_0x1: Access to bank 2 secure HDP area denied (SECWMxRy option bytes modification blocked, refer to Rules for modifying specific option bytes) (value: 1)
     */
        /** @brief Access to bank 2 secure HDP area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP2_ACCDIS_B_0x0 = 0;
        /** @brief Access to bank 2 secure HDP area denied (SECWMxRy option bytes modification blocked, refer to Rules for modifying specific option bytes) */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP2_ACCDIS_B_0x1 = 1;

    /** @brief FLASH privilege configuration register */
    using FLASH_PRIFCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged protection for secure registers */
    using FLASH_PRIFCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure flash registers can be read and written by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Secure flash registers can be read and written by privileged access only. (value: 1)
     */
        /** @brief Secure flash registers can be read and written by privileged or unprivileged access. */
    constexpr std::uint32_t FLASH_PRIFCFGR_SPRIV_B_0x0 = 0;
        /** @brief Secure flash registers can be read and written by privileged access only. */
    constexpr std::uint32_t FLASH_PRIFCFGR_SPRIV_B_0x1 = 1;

    /** @brief Privileged protection for nonsecure registers */
    using FLASH_PRIFCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: nonsecure flash registers can be read and written by privileged or unprivileged access. (value: 0)
     *          - B_0x1: nonsecure flash registers can be read and written by privileged access only. (value: 1)
     */
        /** @brief nonsecure flash registers can be read and written by privileged or unprivileged access. */
    constexpr std::uint32_t FLASH_PRIFCFGR_NSPRIV_B_0x0 = 0;
        /** @brief nonsecure flash registers can be read and written by privileged access only. */
    constexpr std::uint32_t FLASH_PRIFCFGR_NSPRIV_B_0x1 = 1;

    /** @brief FLASH bank 1 privilege block based register 1 */
    using FLASH_PRIVBB1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB0_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB1_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB2_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB3_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB4_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB5_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB6_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB7_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB8_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB9_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB10_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB11_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB12_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB13_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB14_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB15_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB16_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB17_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB18_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB19_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB20_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB21_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB22_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB23_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB24_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB25_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB26_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB27_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB28_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB29_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB30_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH bank 1 privilege block based register 2 */
    using FLASH_PRIVBB1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB0_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB1_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB2_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB3_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB4_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB5_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB6_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB7_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB8_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB9_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB10_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB11_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB12_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB13_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB14_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB15_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB16_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB17_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB18_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB19_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB20_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB21_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB22_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB23_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB24_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB25_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB26_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB27_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB28_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB29_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB30_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH bank 1 privilege block based register 3 */
    using FLASH_PRIVBB1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB0_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB1_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB2_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB3_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB4_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB5_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB6_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB7_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB8_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB9_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB10_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB11_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB12_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB13_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB14_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB15_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB16_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB17_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB18_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB19_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB20_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB21_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB22_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB23_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB24_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB25_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB26_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB27_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB28_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB29_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB30_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH bank 1 privilege block based register 4 */
    using FLASH_PRIVBB1R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB0_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB1_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB2_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB3_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB4_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB5_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB6_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB7_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB8_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB9_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB10_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB11_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB12_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB13_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB14_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB15_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB16_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB17_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB18_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB19_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB20_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB21_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB22_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB23_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB24_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB25_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB26_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB27_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB28_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB29_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB30_B_0x1 = 1;

    /** @brief Bank 1 page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH bank 2 privilege block based register 1 */
    using FLASH_PRIVBB2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB0_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB1_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB2_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB3_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB4_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB5_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB6_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB7_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB8_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB9_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB10_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB11_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB12_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB13_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB14_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB15_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB16_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB17_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB18_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB19_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB20_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB21_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB22_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB23_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB24_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB25_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB26_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB27_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB28_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB29_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB30_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH bank 2 privilege block based register 2 */
    using FLASH_PRIVBB2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB0_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB1_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB2_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB3_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB4_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB5_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB6_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB7_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB8_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB9_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB10_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB11_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB12_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB13_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB14_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB15_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB16_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB17_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB18_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB19_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB20_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB21_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB22_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB23_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB24_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB25_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB26_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB27_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB28_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB29_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB30_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH bank 2 privilege block based register 3 */
    using FLASH_PRIVBB2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB0_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB1_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB2_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB3_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB4_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB5_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB6_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB7_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB8_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB9_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB10_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB11_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB12_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB13_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB14_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB15_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB16_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB17_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB18_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB19_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB20_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB21_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB22_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB23_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB24_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB25_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB26_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB27_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB28_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB29_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB30_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIVBB31_B_0x1 = 1;

    /** @brief FLASH bank 2 privilege block based register 4 */
    using FLASH_PRIVBB2R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB0_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB0_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB1_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB1_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB2_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB2_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB3_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB3_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB4_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB4_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB5_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB5_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB6_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB6_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB7_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB7_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB8_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB8_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB9_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB9_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB10_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB10_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB11_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB11_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB12_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB12_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB13_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB13_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB14_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB14_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB15_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB15_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB16_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB16_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB17_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB17_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB18_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB18_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB19_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB19_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB20_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB20_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB21_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB21_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB22_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB22_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB23_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB23_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB24_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB24_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB25_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB25_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB26_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB26_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB27_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB27_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB28_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB28_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB29_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB29_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB30_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB30_B_0x1 = 1;

    /** @brief Bank 2 page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIVBB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB31_B_0x0 = 0;
        /** @brief Page (32 x (x - 1) + y) in flash bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIVBB31_B_0x1 = 1;

}

#endif
