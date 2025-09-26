/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5G7_SEC_FLASH_HPP
#define EMBEDDED_PP_STM32U5G7_SEC_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Flash */
namespace STM32U5G7::SEC_FLASH {

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
     *          - B_0x1: Bank 2 requested to enter power-down mode (value: 1)
     */
        /** @brief No request for bank 2 to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ2_B_0x0 = 0;
        /** @brief Bank 2 requested to enter power-down mode */
    constexpr std::uint32_t FLASH_ACR_PDREQ2_B_0x1 = 1;

    /** @brief Flash memory power-down mode during Sleep mode */
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
    /** @brief Non-secure programming error */
    using FLASH_NSSR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure write protection error */
    using FLASH_NSSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming alignment error */
    using FLASH_NSSR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure size error */
    using FLASH_NSSR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure programming sequence error */
    using FLASH_NSSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option write error */
    using FLASH_NSSR_OPTWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure busy */
    using FLASH_NSSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure wait data to write */
    using FLASH_NSSR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 lock */
    using FLASH_NSSR_OEM1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 lock */
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
    /** @brief Secure readout protection error */
    using FLASH_SECSR_RDERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure busy */
    using FLASH_SECSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure wait data to write */
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

    /** @brief Non-secure bank 1 mass erase */
    using FLASH_NSCR_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure page number selection */
    using FLASH_NSCR_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     *          - B_0x7F: page 127 (upper page for STM32U575/585) (value: 127)
     *          - B_0xFF: page 255 (upper page for STM32U59x/5Ax) (value: 255)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_NSCR_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_NSCR_PNB_B_0x1 = 1;
        /** @brief page 127 (upper page for STM32U575/585) */
    constexpr std::uint32_t FLASH_NSCR_PNB_B_0x7F = 127;
        /** @brief page 255 (upper page for STM32U59x/5Ax) */
    constexpr std::uint32_t FLASH_NSCR_PNB_B_0xFF = 255;

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

    /** @brief Non-secure burst write programming mode */
    using FLASH_NSCR_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure bank 2 mass erase */
    using FLASH_NSCR_MER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure start */
    using FLASH_NSCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Options modification start */
    using FLASH_NSCR_OPTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure end of operation interrupt enable */
    using FLASH_NSCR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure EOP Interrupt disabled (value: 0)
     *          - B_0x1: Non-secure EOP Interrupt enabled (value: 1)
     */
        /** @brief Non-secure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_NSCR_EOPIE_B_0x0 = 0;
        /** @brief Non-secure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_NSCR_EOPIE_B_0x1 = 1;

    /** @brief Non-secure error interrupt enable */
    using FLASH_NSCR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: Non-secure OPERR error interrupt enabled (value: 1)
     */
        /** @brief Non-secure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_NSCR_ERRIE_B_0x0 = 0;
        /** @brief Non-secure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_NSCR_ERRIE_B_0x1 = 1;

    /** @brief Force the option byte loading */
    using FLASH_NSCR_OBL_LAUNCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Option byte loading complete (value: 0)
     *          - B_0x1: Option byte loading requested (value: 1)
     */
        /** @brief Option byte loading complete */
    constexpr std::uint32_t FLASH_NSCR_OBL_LAUNCH_B_0x0 = 0;
        /** @brief Option byte loading requested */
    constexpr std::uint32_t FLASH_NSCR_OBL_LAUNCH_B_0x1 = 1;

    /** @brief Option lock */
    using FLASH_NSCR_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure lock */
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

    /** @brief Secure bank 1 mass erase */
    using FLASH_SECCR_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure page number selection */
    using FLASH_SECCR_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     *          - B_0x7F: page 127 (upper page for STM32U575/585) (value: 127)
     *          - B_0xFF: page 255 (upper page for STM32U59x/5Ax) (value: 255)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_SECCR_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_SECCR_PNB_B_0x1 = 1;
        /** @brief page 127 (upper page for STM32U575/585) */
    constexpr std::uint32_t FLASH_SECCR_PNB_B_0x7F = 127;
        /** @brief page 255 (upper page for STM32U59x/5Ax) */
    constexpr std::uint32_t FLASH_SECCR_PNB_B_0xFF = 255;

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

    /** @brief Secure burst write programming mode */
    using FLASH_SECCR_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure bank 2 mass erase */
    using FLASH_SECCR_MER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure start */
    using FLASH_SECCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure End of operation interrupt enable */
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
    /** @details Possible values:
     *          - B_0x0: Secure PCROP read error interrupt disabled (value: 0)
     *          - B_0x1: Secure PCROP read error interrupt enabled (value: 1)
     */
        /** @brief Secure PCROP read error interrupt disabled */
    constexpr std::uint32_t FLASH_SECCR_RDERRIE_B_0x0 = 0;
        /** @brief Secure PCROP read error interrupt enabled */
    constexpr std::uint32_t FLASH_SECCR_RDERRIE_B_0x1 = 1;

    /** @brief Flash memory security state invert */
    using FLASH_SECCR_INV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure lock */
    using FLASH_SECCR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC register */
    using FLASH_ECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail address */
    using FLASH_ECCR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 21, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief System Flash memory ECC fail */
    using FLASH_ECCR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC correction interrupt enable */
    using FLASH_ECCR_ECCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECCC interrupt disabled (value: 0)
     *          - B_0x1: ECCC interrupt enabled. (value: 1)
     */
        /** @brief ECCC interrupt disabled */
    constexpr std::uint32_t FLASH_ECCR_ECCIE_B_0x0 = 0;
        /** @brief ECCC interrupt enabled. */
    constexpr std::uint32_t FLASH_ECCR_ECCIE_B_0x1 = 1;

    /** @brief ECC correction */
    using FLASH_ECCR_ECCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC detection */
    using FLASH_ECCR_ECCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH operation status register */
    using FLASH_OPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation address */
    using FLASH_OPSR_ADDR_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 21, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation bank */
    using FLASH_OPSR_BK_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 (value: 0)
     *          - B_0x1: Bank 2 (value: 1)
     */
        /** @brief Bank 1 */
    constexpr std::uint32_t FLASH_OPSR_BK_OP_B_0x0 = 0;
        /** @brief Bank 2 */
    constexpr std::uint32_t FLASH_OPSR_BK_OP_B_0x1 = 1;

    /** @brief Operation in system Flash memory interrupted */
    using FLASH_OPSR_SYSF_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory operation code */
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
    /** @brief Readout protection level */
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

    /** @brief BOR reset level */
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

    /** @brief SRAM1, SRAM3, SRAM4 and SRAM5 erase upon system reset */
    using FLASH_OPTR_SRAM1345_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1, SRAM3, SRAM4 and SRAM5 erased when a system reset occurs (value: 0)
     *          - B_0x1: SRAM1, SRAM3, SRAM4 and SRAM5 not erased when a system reset occurs (value: 1)
     */
        /** @brief SRAM1, SRAM3, SRAM4 and SRAM5 erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM1345_RST_B_0x0 = 0;
        /** @brief SRAM1, SRAM3, SRAM4 and SRAM5 not erased when a system reset occurs */
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

    /** @brief High-speed IO at low VDD voltage configuration bit */
    using FLASH_OPTR_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.5 V) (value: 0)
     *          - B_0x1: High-speed IO at low VDD voltage feature enabled (VDD remains below 2.5 V) (value: 1)
     */
        /** @brief High-speed IO at low VDD voltage feature disabled (VDD can exceed 2.5 V) */
    constexpr std::uint32_t FLASH_OPTR_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed IO at low VDD voltage feature enabled (VDD remains below 2.5 V) */
    constexpr std::uint32_t FLASH_OPTR_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed IO at low VDDIO2 voltage configuration bit */
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
    /** @brief Non-secure boot base address 0 */
    using FLASH_NSBOOTADD0R_NSBOOTADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH non-secure boot address 1 register */
    using FLASH_NSBOOTADD1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure boot address 1 */
    using FLASH_NSBOOTADD1R_NSBOOTADD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot address 0 register */
    using FLASH_SECBOOTADD0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot lock */
    using FLASH_SECBOOTADD0R_BOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure boot base address 0 */
    using FLASH_SECBOOTADD0R_SECBOOTADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark1 register 1 */
    using FLASH_SECWM1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start page of first secure area */
    using FLASH_SECWM1R1_SECWM1_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of first secure area */
    using FLASH_SECWM1R1_SECWM1_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark1 register 2 */
    using FLASH_SECWM1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start page of first PCROP area */
    using FLASH_SECWM1R2_PCROP1_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PCROP1 area enable */
    using FLASH_SECWM1R2_PCROP1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCROP1 area disabled (value: 0)
     *          - B_0x1: PCROP1 area enabled (value: 1)
     */
        /** @brief PCROP1 area disabled */
    constexpr std::uint32_t FLASH_SECWM1R2_PCROP1EN_B_0x0 = 0;
        /** @brief PCROP1 area enabled */
    constexpr std::uint32_t FLASH_SECWM1R2_PCROP1EN_B_0x1 = 1;

    /** @brief End page of first hide protection area */
    using FLASH_SECWM1R2_HDP1_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief bank 1 WPR first area A start page */
    using FLASH_WRP1AR_WRP1A_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WPR first area A end page */
    using FLASH_WRP1AR_WRP1A_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Bank 1 WRP second area B start page */
    using FLASH_WRP1BR_WRP1B_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WRP second area B end page */
    using FLASH_WRP1BR_WRP1B_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Start page of second secure area */
    using FLASH_SECWM2R1_SECWM2_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of second secure area */
    using FLASH_SECWM2R1_SECWM2_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark2 register 2 */
    using FLASH_SECWM2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start page of PCROP2 area */
    using FLASH_SECWM2R2_PCROP2_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PCROP2 area enable */
    using FLASH_SECWM2R2_PCROP2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCROP2 area is disabled (value: 0)
     *          - B_0x1: PCROP2 area is enabled (value: 1)
     */
        /** @brief PCROP2 area is disabled */
    constexpr std::uint32_t FLASH_SECWM2R2_PCROP2EN_B_0x0 = 0;
        /** @brief PCROP2 area is enabled */
    constexpr std::uint32_t FLASH_SECWM2R2_PCROP2EN_B_0x1 = 1;

    /** @brief End page of hide protection second area */
    using FLASH_SECWM2R2_HDP2_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Bank 2 WPR first area A start page */
    using FLASH_WRP2AR_WRP2A_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR first area A end page */
    using FLASH_WRP2AR_WRP2A_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Bank 2 WPR second area B start page */
    using FLASH_WRP2BR_WRP2B_PSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR second area B end page */
    using FLASH_WRP2BR_WRP2B_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief SEC1BB0 field */
    using FLASH_SEC1BBR1_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB1 field */
    using FLASH_SEC1BBR1_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB2 field */
    using FLASH_SEC1BBR1_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB3 field */
    using FLASH_SEC1BBR1_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB4 field */
    using FLASH_SEC1BBR1_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB5 field */
    using FLASH_SEC1BBR1_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB6 field */
    using FLASH_SEC1BBR1_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB7 field */
    using FLASH_SEC1BBR1_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB8 field */
    using FLASH_SEC1BBR1_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB9 field */
    using FLASH_SEC1BBR1_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB10 field */
    using FLASH_SEC1BBR1_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB11 field */
    using FLASH_SEC1BBR1_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB12 field */
    using FLASH_SEC1BBR1_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB13 field */
    using FLASH_SEC1BBR1_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB14 field */
    using FLASH_SEC1BBR1_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB15 field */
    using FLASH_SEC1BBR1_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB16 field */
    using FLASH_SEC1BBR1_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB17 field */
    using FLASH_SEC1BBR1_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB18 field */
    using FLASH_SEC1BBR1_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB19 field */
    using FLASH_SEC1BBR1_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB20 field */
    using FLASH_SEC1BBR1_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB21 field */
    using FLASH_SEC1BBR1_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB22 field */
    using FLASH_SEC1BBR1_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB23 field */
    using FLASH_SEC1BBR1_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB24 field */
    using FLASH_SEC1BBR1_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB25 field */
    using FLASH_SEC1BBR1_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB26 field */
    using FLASH_SEC1BBR1_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB27 field */
    using FLASH_SEC1BBR1_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB28 field */
    using FLASH_SEC1BBR1_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB29 field */
    using FLASH_SEC1BBR1_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB30 field */
    using FLASH_SEC1BBR1_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB31 field */
    using FLASH_SEC1BBR1_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 2 */
    using FLASH_SEC1BBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB0 field */
    using FLASH_SEC1BBR2_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB1 field */
    using FLASH_SEC1BBR2_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB2 field */
    using FLASH_SEC1BBR2_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB3 field */
    using FLASH_SEC1BBR2_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB4 field */
    using FLASH_SEC1BBR2_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB5 field */
    using FLASH_SEC1BBR2_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB6 field */
    using FLASH_SEC1BBR2_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB7 field */
    using FLASH_SEC1BBR2_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB8 field */
    using FLASH_SEC1BBR2_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB9 field */
    using FLASH_SEC1BBR2_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB10 field */
    using FLASH_SEC1BBR2_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB11 field */
    using FLASH_SEC1BBR2_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB12 field */
    using FLASH_SEC1BBR2_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB13 field */
    using FLASH_SEC1BBR2_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB14 field */
    using FLASH_SEC1BBR2_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB15 field */
    using FLASH_SEC1BBR2_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB16 field */
    using FLASH_SEC1BBR2_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB17 field */
    using FLASH_SEC1BBR2_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB18 field */
    using FLASH_SEC1BBR2_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB19 field */
    using FLASH_SEC1BBR2_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB20 field */
    using FLASH_SEC1BBR2_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB21 field */
    using FLASH_SEC1BBR2_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB22 field */
    using FLASH_SEC1BBR2_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB23 field */
    using FLASH_SEC1BBR2_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB24 field */
    using FLASH_SEC1BBR2_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB25 field */
    using FLASH_SEC1BBR2_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB26 field */
    using FLASH_SEC1BBR2_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB27 field */
    using FLASH_SEC1BBR2_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB28 field */
    using FLASH_SEC1BBR2_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB29 field */
    using FLASH_SEC1BBR2_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB30 field */
    using FLASH_SEC1BBR2_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB31 field */
    using FLASH_SEC1BBR2_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 3 */
    using FLASH_SEC1BBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB0 field */
    using FLASH_SEC1BBR3_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB1 field */
    using FLASH_SEC1BBR3_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB2 field */
    using FLASH_SEC1BBR3_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB3 field */
    using FLASH_SEC1BBR3_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB4 field */
    using FLASH_SEC1BBR3_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB5 field */
    using FLASH_SEC1BBR3_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB6 field */
    using FLASH_SEC1BBR3_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB7 field */
    using FLASH_SEC1BBR3_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB8 field */
    using FLASH_SEC1BBR3_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB9 field */
    using FLASH_SEC1BBR3_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB10 field */
    using FLASH_SEC1BBR3_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB11 field */
    using FLASH_SEC1BBR3_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB12 field */
    using FLASH_SEC1BBR3_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB13 field */
    using FLASH_SEC1BBR3_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB14 field */
    using FLASH_SEC1BBR3_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB15 field */
    using FLASH_SEC1BBR3_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB16 field */
    using FLASH_SEC1BBR3_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB17 field */
    using FLASH_SEC1BBR3_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB18 field */
    using FLASH_SEC1BBR3_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB19 field */
    using FLASH_SEC1BBR3_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB20 field */
    using FLASH_SEC1BBR3_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB21 field */
    using FLASH_SEC1BBR3_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB22 field */
    using FLASH_SEC1BBR3_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB23 field */
    using FLASH_SEC1BBR3_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB24 field */
    using FLASH_SEC1BBR3_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB25 field */
    using FLASH_SEC1BBR3_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB26 field */
    using FLASH_SEC1BBR3_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB27 field */
    using FLASH_SEC1BBR3_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB28 field */
    using FLASH_SEC1BBR3_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB29 field */
    using FLASH_SEC1BBR3_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB30 field */
    using FLASH_SEC1BBR3_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB31 field */
    using FLASH_SEC1BBR3_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 4 */
    using FLASH_SEC1BBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB0 field */
    using FLASH_SEC1BBR4_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB1 field */
    using FLASH_SEC1BBR4_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB2 field */
    using FLASH_SEC1BBR4_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB3 field */
    using FLASH_SEC1BBR4_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB4 field */
    using FLASH_SEC1BBR4_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB5 field */
    using FLASH_SEC1BBR4_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB6 field */
    using FLASH_SEC1BBR4_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB7 field */
    using FLASH_SEC1BBR4_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB8 field */
    using FLASH_SEC1BBR4_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB9 field */
    using FLASH_SEC1BBR4_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB10 field */
    using FLASH_SEC1BBR4_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB11 field */
    using FLASH_SEC1BBR4_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB12 field */
    using FLASH_SEC1BBR4_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB13 field */
    using FLASH_SEC1BBR4_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB14 field */
    using FLASH_SEC1BBR4_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB15 field */
    using FLASH_SEC1BBR4_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB16 field */
    using FLASH_SEC1BBR4_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB17 field */
    using FLASH_SEC1BBR4_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB18 field */
    using FLASH_SEC1BBR4_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB19 field */
    using FLASH_SEC1BBR4_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB20 field */
    using FLASH_SEC1BBR4_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB21 field */
    using FLASH_SEC1BBR4_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB22 field */
    using FLASH_SEC1BBR4_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB23 field */
    using FLASH_SEC1BBR4_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB24 field */
    using FLASH_SEC1BBR4_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB25 field */
    using FLASH_SEC1BBR4_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB26 field */
    using FLASH_SEC1BBR4_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB27 field */
    using FLASH_SEC1BBR4_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB28 field */
    using FLASH_SEC1BBR4_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB29 field */
    using FLASH_SEC1BBR4_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB30 field */
    using FLASH_SEC1BBR4_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB31 field */
    using FLASH_SEC1BBR4_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 5 */
    using FLASH_SEC1BBR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB0 field */
    using FLASH_SEC1BBR5_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB1 field */
    using FLASH_SEC1BBR5_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB2 field */
    using FLASH_SEC1BBR5_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB3 field */
    using FLASH_SEC1BBR5_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB4 field */
    using FLASH_SEC1BBR5_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB5 field */
    using FLASH_SEC1BBR5_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB6 field */
    using FLASH_SEC1BBR5_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB7 field */
    using FLASH_SEC1BBR5_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB8 field */
    using FLASH_SEC1BBR5_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB9 field */
    using FLASH_SEC1BBR5_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB10 field */
    using FLASH_SEC1BBR5_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB11 field */
    using FLASH_SEC1BBR5_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB12 field */
    using FLASH_SEC1BBR5_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB13 field */
    using FLASH_SEC1BBR5_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB14 field */
    using FLASH_SEC1BBR5_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB15 field */
    using FLASH_SEC1BBR5_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB16 field */
    using FLASH_SEC1BBR5_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB17 field */
    using FLASH_SEC1BBR5_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB18 field */
    using FLASH_SEC1BBR5_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB19 field */
    using FLASH_SEC1BBR5_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB20 field */
    using FLASH_SEC1BBR5_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB21 field */
    using FLASH_SEC1BBR5_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB22 field */
    using FLASH_SEC1BBR5_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB23 field */
    using FLASH_SEC1BBR5_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB24 field */
    using FLASH_SEC1BBR5_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB25 field */
    using FLASH_SEC1BBR5_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB26 field */
    using FLASH_SEC1BBR5_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB27 field */
    using FLASH_SEC1BBR5_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB28 field */
    using FLASH_SEC1BBR5_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB29 field */
    using FLASH_SEC1BBR5_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB30 field */
    using FLASH_SEC1BBR5_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB31 field */
    using FLASH_SEC1BBR5_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 6 */
    using FLASH_SEC1BBR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB0 field */
    using FLASH_SEC1BBR6_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB1 field */
    using FLASH_SEC1BBR6_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB2 field */
    using FLASH_SEC1BBR6_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB3 field */
    using FLASH_SEC1BBR6_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB4 field */
    using FLASH_SEC1BBR6_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB5 field */
    using FLASH_SEC1BBR6_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB6 field */
    using FLASH_SEC1BBR6_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB7 field */
    using FLASH_SEC1BBR6_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB8 field */
    using FLASH_SEC1BBR6_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB9 field */
    using FLASH_SEC1BBR6_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB10 field */
    using FLASH_SEC1BBR6_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB11 field */
    using FLASH_SEC1BBR6_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB12 field */
    using FLASH_SEC1BBR6_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB13 field */
    using FLASH_SEC1BBR6_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB14 field */
    using FLASH_SEC1BBR6_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB15 field */
    using FLASH_SEC1BBR6_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB16 field */
    using FLASH_SEC1BBR6_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB17 field */
    using FLASH_SEC1BBR6_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB18 field */
    using FLASH_SEC1BBR6_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB19 field */
    using FLASH_SEC1BBR6_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB20 field */
    using FLASH_SEC1BBR6_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB21 field */
    using FLASH_SEC1BBR6_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB22 field */
    using FLASH_SEC1BBR6_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB23 field */
    using FLASH_SEC1BBR6_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB24 field */
    using FLASH_SEC1BBR6_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB25 field */
    using FLASH_SEC1BBR6_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB26 field */
    using FLASH_SEC1BBR6_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB27 field */
    using FLASH_SEC1BBR6_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB28 field */
    using FLASH_SEC1BBR6_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB29 field */
    using FLASH_SEC1BBR6_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB30 field */
    using FLASH_SEC1BBR6_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB31 field */
    using FLASH_SEC1BBR6_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 7 */
    using FLASH_SEC1BBR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB0 field */
    using FLASH_SEC1BBR7_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB1 field */
    using FLASH_SEC1BBR7_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB2 field */
    using FLASH_SEC1BBR7_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB3 field */
    using FLASH_SEC1BBR7_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB4 field */
    using FLASH_SEC1BBR7_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB5 field */
    using FLASH_SEC1BBR7_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB6 field */
    using FLASH_SEC1BBR7_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB7 field */
    using FLASH_SEC1BBR7_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB8 field */
    using FLASH_SEC1BBR7_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB9 field */
    using FLASH_SEC1BBR7_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB10 field */
    using FLASH_SEC1BBR7_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB11 field */
    using FLASH_SEC1BBR7_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB12 field */
    using FLASH_SEC1BBR7_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB13 field */
    using FLASH_SEC1BBR7_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB14 field */
    using FLASH_SEC1BBR7_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB15 field */
    using FLASH_SEC1BBR7_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB16 field */
    using FLASH_SEC1BBR7_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB17 field */
    using FLASH_SEC1BBR7_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB18 field */
    using FLASH_SEC1BBR7_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB19 field */
    using FLASH_SEC1BBR7_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB20 field */
    using FLASH_SEC1BBR7_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB21 field */
    using FLASH_SEC1BBR7_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB22 field */
    using FLASH_SEC1BBR7_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB23 field */
    using FLASH_SEC1BBR7_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB24 field */
    using FLASH_SEC1BBR7_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB25 field */
    using FLASH_SEC1BBR7_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB26 field */
    using FLASH_SEC1BBR7_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB27 field */
    using FLASH_SEC1BBR7_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB28 field */
    using FLASH_SEC1BBR7_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB29 field */
    using FLASH_SEC1BBR7_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB30 field */
    using FLASH_SEC1BBR7_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB31 field */
    using FLASH_SEC1BBR7_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 1 register 8 */
    using FLASH_SEC1BBR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB0 field */
    using FLASH_SEC1BBR8_SEC1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB1 field */
    using FLASH_SEC1BBR8_SEC1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB2 field */
    using FLASH_SEC1BBR8_SEC1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB3 field */
    using FLASH_SEC1BBR8_SEC1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB4 field */
    using FLASH_SEC1BBR8_SEC1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB5 field */
    using FLASH_SEC1BBR8_SEC1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB6 field */
    using FLASH_SEC1BBR8_SEC1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB7 field */
    using FLASH_SEC1BBR8_SEC1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB8 field */
    using FLASH_SEC1BBR8_SEC1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB9 field */
    using FLASH_SEC1BBR8_SEC1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB10 field */
    using FLASH_SEC1BBR8_SEC1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB11 field */
    using FLASH_SEC1BBR8_SEC1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB12 field */
    using FLASH_SEC1BBR8_SEC1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB13 field */
    using FLASH_SEC1BBR8_SEC1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB14 field */
    using FLASH_SEC1BBR8_SEC1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB15 field */
    using FLASH_SEC1BBR8_SEC1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB16 field */
    using FLASH_SEC1BBR8_SEC1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB17 field */
    using FLASH_SEC1BBR8_SEC1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB18 field */
    using FLASH_SEC1BBR8_SEC1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB19 field */
    using FLASH_SEC1BBR8_SEC1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB20 field */
    using FLASH_SEC1BBR8_SEC1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB21 field */
    using FLASH_SEC1BBR8_SEC1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB22 field */
    using FLASH_SEC1BBR8_SEC1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB23 field */
    using FLASH_SEC1BBR8_SEC1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB24 field */
    using FLASH_SEC1BBR8_SEC1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB25 field */
    using FLASH_SEC1BBR8_SEC1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB26 field */
    using FLASH_SEC1BBR8_SEC1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB27 field */
    using FLASH_SEC1BBR8_SEC1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB28 field */
    using FLASH_SEC1BBR8_SEC1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB29 field */
    using FLASH_SEC1BBR8_SEC1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB30 field */
    using FLASH_SEC1BBR8_SEC1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1BB31 field */
    using FLASH_SEC1BBR8_SEC1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 1 */
    using FLASH_SEC2BBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB0 field */
    using FLASH_SEC2BBR1_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB1 field */
    using FLASH_SEC2BBR1_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB2 field */
    using FLASH_SEC2BBR1_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB3 field */
    using FLASH_SEC2BBR1_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB4 field */
    using FLASH_SEC2BBR1_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB5 field */
    using FLASH_SEC2BBR1_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB6 field */
    using FLASH_SEC2BBR1_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB7 field */
    using FLASH_SEC2BBR1_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB8 field */
    using FLASH_SEC2BBR1_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB9 field */
    using FLASH_SEC2BBR1_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB10 field */
    using FLASH_SEC2BBR1_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB11 field */
    using FLASH_SEC2BBR1_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB12 field */
    using FLASH_SEC2BBR1_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB13 field */
    using FLASH_SEC2BBR1_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB14 field */
    using FLASH_SEC2BBR1_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB15 field */
    using FLASH_SEC2BBR1_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB16 field */
    using FLASH_SEC2BBR1_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB17 field */
    using FLASH_SEC2BBR1_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB18 field */
    using FLASH_SEC2BBR1_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB19 field */
    using FLASH_SEC2BBR1_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB20 field */
    using FLASH_SEC2BBR1_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB21 field */
    using FLASH_SEC2BBR1_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB22 field */
    using FLASH_SEC2BBR1_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB23 field */
    using FLASH_SEC2BBR1_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB24 field */
    using FLASH_SEC2BBR1_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB25 field */
    using FLASH_SEC2BBR1_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB26 field */
    using FLASH_SEC2BBR1_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB27 field */
    using FLASH_SEC2BBR1_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB28 field */
    using FLASH_SEC2BBR1_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB29 field */
    using FLASH_SEC2BBR1_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB30 field */
    using FLASH_SEC2BBR1_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB31 field */
    using FLASH_SEC2BBR1_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 2 */
    using FLASH_SEC2BBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB0 field */
    using FLASH_SEC2BBR2_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB1 field */
    using FLASH_SEC2BBR2_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB2 field */
    using FLASH_SEC2BBR2_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB3 field */
    using FLASH_SEC2BBR2_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB4 field */
    using FLASH_SEC2BBR2_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB5 field */
    using FLASH_SEC2BBR2_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB6 field */
    using FLASH_SEC2BBR2_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB7 field */
    using FLASH_SEC2BBR2_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB8 field */
    using FLASH_SEC2BBR2_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB9 field */
    using FLASH_SEC2BBR2_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB10 field */
    using FLASH_SEC2BBR2_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB11 field */
    using FLASH_SEC2BBR2_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB12 field */
    using FLASH_SEC2BBR2_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB13 field */
    using FLASH_SEC2BBR2_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB14 field */
    using FLASH_SEC2BBR2_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB15 field */
    using FLASH_SEC2BBR2_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB16 field */
    using FLASH_SEC2BBR2_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB17 field */
    using FLASH_SEC2BBR2_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB18 field */
    using FLASH_SEC2BBR2_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB19 field */
    using FLASH_SEC2BBR2_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB20 field */
    using FLASH_SEC2BBR2_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB21 field */
    using FLASH_SEC2BBR2_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB22 field */
    using FLASH_SEC2BBR2_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB23 field */
    using FLASH_SEC2BBR2_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB24 field */
    using FLASH_SEC2BBR2_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB25 field */
    using FLASH_SEC2BBR2_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB26 field */
    using FLASH_SEC2BBR2_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB27 field */
    using FLASH_SEC2BBR2_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB28 field */
    using FLASH_SEC2BBR2_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB29 field */
    using FLASH_SEC2BBR2_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB30 field */
    using FLASH_SEC2BBR2_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB31 field */
    using FLASH_SEC2BBR2_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 3 */
    using FLASH_SEC2BBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB0 field */
    using FLASH_SEC2BBR3_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB1 field */
    using FLASH_SEC2BBR3_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB2 field */
    using FLASH_SEC2BBR3_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB3 field */
    using FLASH_SEC2BBR3_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB4 field */
    using FLASH_SEC2BBR3_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB5 field */
    using FLASH_SEC2BBR3_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB6 field */
    using FLASH_SEC2BBR3_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB7 field */
    using FLASH_SEC2BBR3_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB8 field */
    using FLASH_SEC2BBR3_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB9 field */
    using FLASH_SEC2BBR3_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB10 field */
    using FLASH_SEC2BBR3_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB11 field */
    using FLASH_SEC2BBR3_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB12 field */
    using FLASH_SEC2BBR3_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB13 field */
    using FLASH_SEC2BBR3_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB14 field */
    using FLASH_SEC2BBR3_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB15 field */
    using FLASH_SEC2BBR3_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB16 field */
    using FLASH_SEC2BBR3_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB17 field */
    using FLASH_SEC2BBR3_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB18 field */
    using FLASH_SEC2BBR3_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB19 field */
    using FLASH_SEC2BBR3_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB20 field */
    using FLASH_SEC2BBR3_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB21 field */
    using FLASH_SEC2BBR3_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB22 field */
    using FLASH_SEC2BBR3_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB23 field */
    using FLASH_SEC2BBR3_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB24 field */
    using FLASH_SEC2BBR3_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB25 field */
    using FLASH_SEC2BBR3_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB26 field */
    using FLASH_SEC2BBR3_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB27 field */
    using FLASH_SEC2BBR3_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB28 field */
    using FLASH_SEC2BBR3_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB29 field */
    using FLASH_SEC2BBR3_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB30 field */
    using FLASH_SEC2BBR3_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB31 field */
    using FLASH_SEC2BBR3_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 4 */
    using FLASH_SEC2BBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB0 field */
    using FLASH_SEC2BBR4_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB1 field */
    using FLASH_SEC2BBR4_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB2 field */
    using FLASH_SEC2BBR4_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB3 field */
    using FLASH_SEC2BBR4_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB4 field */
    using FLASH_SEC2BBR4_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB5 field */
    using FLASH_SEC2BBR4_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB6 field */
    using FLASH_SEC2BBR4_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB7 field */
    using FLASH_SEC2BBR4_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB8 field */
    using FLASH_SEC2BBR4_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB9 field */
    using FLASH_SEC2BBR4_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB10 field */
    using FLASH_SEC2BBR4_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB11 field */
    using FLASH_SEC2BBR4_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB12 field */
    using FLASH_SEC2BBR4_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB13 field */
    using FLASH_SEC2BBR4_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB14 field */
    using FLASH_SEC2BBR4_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB15 field */
    using FLASH_SEC2BBR4_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB16 field */
    using FLASH_SEC2BBR4_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB17 field */
    using FLASH_SEC2BBR4_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB18 field */
    using FLASH_SEC2BBR4_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB19 field */
    using FLASH_SEC2BBR4_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB20 field */
    using FLASH_SEC2BBR4_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB21 field */
    using FLASH_SEC2BBR4_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB22 field */
    using FLASH_SEC2BBR4_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB23 field */
    using FLASH_SEC2BBR4_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB24 field */
    using FLASH_SEC2BBR4_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB25 field */
    using FLASH_SEC2BBR4_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB26 field */
    using FLASH_SEC2BBR4_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB27 field */
    using FLASH_SEC2BBR4_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB28 field */
    using FLASH_SEC2BBR4_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB29 field */
    using FLASH_SEC2BBR4_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB30 field */
    using FLASH_SEC2BBR4_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB31 field */
    using FLASH_SEC2BBR4_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 5 */
    using FLASH_SEC2BBR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB0 field */
    using FLASH_SEC2BBR5_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB1 field */
    using FLASH_SEC2BBR5_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB2 field */
    using FLASH_SEC2BBR5_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB3 field */
    using FLASH_SEC2BBR5_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB4 field */
    using FLASH_SEC2BBR5_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB5 field */
    using FLASH_SEC2BBR5_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB6 field */
    using FLASH_SEC2BBR5_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB7 field */
    using FLASH_SEC2BBR5_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB8 field */
    using FLASH_SEC2BBR5_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB9 field */
    using FLASH_SEC2BBR5_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB10 field */
    using FLASH_SEC2BBR5_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB11 field */
    using FLASH_SEC2BBR5_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB12 field */
    using FLASH_SEC2BBR5_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB13 field */
    using FLASH_SEC2BBR5_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB14 field */
    using FLASH_SEC2BBR5_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB15 field */
    using FLASH_SEC2BBR5_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB16 field */
    using FLASH_SEC2BBR5_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB17 field */
    using FLASH_SEC2BBR5_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB18 field */
    using FLASH_SEC2BBR5_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB19 field */
    using FLASH_SEC2BBR5_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB20 field */
    using FLASH_SEC2BBR5_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB21 field */
    using FLASH_SEC2BBR5_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB22 field */
    using FLASH_SEC2BBR5_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB23 field */
    using FLASH_SEC2BBR5_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB24 field */
    using FLASH_SEC2BBR5_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB25 field */
    using FLASH_SEC2BBR5_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB26 field */
    using FLASH_SEC2BBR5_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB27 field */
    using FLASH_SEC2BBR5_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB28 field */
    using FLASH_SEC2BBR5_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB29 field */
    using FLASH_SEC2BBR5_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB30 field */
    using FLASH_SEC2BBR5_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB31 field */
    using FLASH_SEC2BBR5_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 6 */
    using FLASH_SEC2BBR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB0 field */
    using FLASH_SEC2BBR6_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB1 field */
    using FLASH_SEC2BBR6_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB2 field */
    using FLASH_SEC2BBR6_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB3 field */
    using FLASH_SEC2BBR6_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB4 field */
    using FLASH_SEC2BBR6_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB5 field */
    using FLASH_SEC2BBR6_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB6 field */
    using FLASH_SEC2BBR6_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB7 field */
    using FLASH_SEC2BBR6_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB8 field */
    using FLASH_SEC2BBR6_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB9 field */
    using FLASH_SEC2BBR6_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB10 field */
    using FLASH_SEC2BBR6_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB11 field */
    using FLASH_SEC2BBR6_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB12 field */
    using FLASH_SEC2BBR6_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB13 field */
    using FLASH_SEC2BBR6_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB14 field */
    using FLASH_SEC2BBR6_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB15 field */
    using FLASH_SEC2BBR6_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB16 field */
    using FLASH_SEC2BBR6_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB17 field */
    using FLASH_SEC2BBR6_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB18 field */
    using FLASH_SEC2BBR6_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB19 field */
    using FLASH_SEC2BBR6_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB20 field */
    using FLASH_SEC2BBR6_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB21 field */
    using FLASH_SEC2BBR6_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB22 field */
    using FLASH_SEC2BBR6_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB23 field */
    using FLASH_SEC2BBR6_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB24 field */
    using FLASH_SEC2BBR6_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB25 field */
    using FLASH_SEC2BBR6_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB26 field */
    using FLASH_SEC2BBR6_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB27 field */
    using FLASH_SEC2BBR6_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB28 field */
    using FLASH_SEC2BBR6_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB29 field */
    using FLASH_SEC2BBR6_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB30 field */
    using FLASH_SEC2BBR6_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB31 field */
    using FLASH_SEC2BBR6_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 7 */
    using FLASH_SEC2BBR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB0 field */
    using FLASH_SEC2BBR7_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB1 field */
    using FLASH_SEC2BBR7_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB2 field */
    using FLASH_SEC2BBR7_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB3 field */
    using FLASH_SEC2BBR7_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB4 field */
    using FLASH_SEC2BBR7_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB5 field */
    using FLASH_SEC2BBR7_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB6 field */
    using FLASH_SEC2BBR7_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB7 field */
    using FLASH_SEC2BBR7_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB8 field */
    using FLASH_SEC2BBR7_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB9 field */
    using FLASH_SEC2BBR7_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB10 field */
    using FLASH_SEC2BBR7_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB11 field */
    using FLASH_SEC2BBR7_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB12 field */
    using FLASH_SEC2BBR7_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB13 field */
    using FLASH_SEC2BBR7_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB14 field */
    using FLASH_SEC2BBR7_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB15 field */
    using FLASH_SEC2BBR7_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB16 field */
    using FLASH_SEC2BBR7_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB17 field */
    using FLASH_SEC2BBR7_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB18 field */
    using FLASH_SEC2BBR7_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB19 field */
    using FLASH_SEC2BBR7_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB20 field */
    using FLASH_SEC2BBR7_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB21 field */
    using FLASH_SEC2BBR7_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB22 field */
    using FLASH_SEC2BBR7_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB23 field */
    using FLASH_SEC2BBR7_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB24 field */
    using FLASH_SEC2BBR7_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB25 field */
    using FLASH_SEC2BBR7_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB26 field */
    using FLASH_SEC2BBR7_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB27 field */
    using FLASH_SEC2BBR7_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB28 field */
    using FLASH_SEC2BBR7_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB29 field */
    using FLASH_SEC2BBR7_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB30 field */
    using FLASH_SEC2BBR7_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB31 field */
    using FLASH_SEC2BBR7_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure block based bank 2 register 8 */
    using FLASH_SEC2BBR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB0 field */
    using FLASH_SEC2BBR8_SEC2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB1 field */
    using FLASH_SEC2BBR8_SEC2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB2 field */
    using FLASH_SEC2BBR8_SEC2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB3 field */
    using FLASH_SEC2BBR8_SEC2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB4 field */
    using FLASH_SEC2BBR8_SEC2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB5 field */
    using FLASH_SEC2BBR8_SEC2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB6 field */
    using FLASH_SEC2BBR8_SEC2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB7 field */
    using FLASH_SEC2BBR8_SEC2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB8 field */
    using FLASH_SEC2BBR8_SEC2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB9 field */
    using FLASH_SEC2BBR8_SEC2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB10 field */
    using FLASH_SEC2BBR8_SEC2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB11 field */
    using FLASH_SEC2BBR8_SEC2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB12 field */
    using FLASH_SEC2BBR8_SEC2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB13 field */
    using FLASH_SEC2BBR8_SEC2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB14 field */
    using FLASH_SEC2BBR8_SEC2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB15 field */
    using FLASH_SEC2BBR8_SEC2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB16 field */
    using FLASH_SEC2BBR8_SEC2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB17 field */
    using FLASH_SEC2BBR8_SEC2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB18 field */
    using FLASH_SEC2BBR8_SEC2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB19 field */
    using FLASH_SEC2BBR8_SEC2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB20 field */
    using FLASH_SEC2BBR8_SEC2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB21 field */
    using FLASH_SEC2BBR8_SEC2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB22 field */
    using FLASH_SEC2BBR8_SEC2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB23 field */
    using FLASH_SEC2BBR8_SEC2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB24 field */
    using FLASH_SEC2BBR8_SEC2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB25 field */
    using FLASH_SEC2BBR8_SEC2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB26 field */
    using FLASH_SEC2BBR8_SEC2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB27 field */
    using FLASH_SEC2BBR8_SEC2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB28 field */
    using FLASH_SEC2BBR8_SEC2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB29 field */
    using FLASH_SEC2BBR8_SEC2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB30 field */
    using FLASH_SEC2BBR8_SEC2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2BB31 field */
    using FLASH_SEC2BBR8_SEC2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure HDP control register */
    using FLASH_SECHDPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP1 area access disable */
    using FLASH_SECHDPCR_HDP1_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access to HDP1 area granted (value: 0)
     *          - B_0x1: Access to HDP1 area denied (SECWM1Ry option bytes modification blocked - refer to ) (value: 1)
     */
        /** @brief Access to HDP1 area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1_ACCDIS_B_0x0 = 0;
        /** @brief Access to HDP1 area denied (SECWM1Ry option bytes modification blocked - refer to ) */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1_ACCDIS_B_0x1 = 1;

    /** @brief HDP2 area access disable */
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
    /** @brief Privileged protection for secure registers */
    using FLASH_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged protection for non-secure registers */
    using FLASH_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 1 */
    using FLASH_PRIV1BBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB0 field */
    using FLASH_PRIV1BBR1_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB1 field */
    using FLASH_PRIV1BBR1_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB2 field */
    using FLASH_PRIV1BBR1_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB3 field */
    using FLASH_PRIV1BBR1_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB4 field */
    using FLASH_PRIV1BBR1_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB5 field */
    using FLASH_PRIV1BBR1_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB6 field */
    using FLASH_PRIV1BBR1_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB7 field */
    using FLASH_PRIV1BBR1_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB8 field */
    using FLASH_PRIV1BBR1_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB9 field */
    using FLASH_PRIV1BBR1_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB10 field */
    using FLASH_PRIV1BBR1_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB11 field */
    using FLASH_PRIV1BBR1_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB12 field */
    using FLASH_PRIV1BBR1_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB13 field */
    using FLASH_PRIV1BBR1_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB14 field */
    using FLASH_PRIV1BBR1_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB15 field */
    using FLASH_PRIV1BBR1_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB16 field */
    using FLASH_PRIV1BBR1_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB17 field */
    using FLASH_PRIV1BBR1_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB18 field */
    using FLASH_PRIV1BBR1_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB19 field */
    using FLASH_PRIV1BBR1_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB20 field */
    using FLASH_PRIV1BBR1_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB21 field */
    using FLASH_PRIV1BBR1_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB22 field */
    using FLASH_PRIV1BBR1_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB23 field */
    using FLASH_PRIV1BBR1_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB24 field */
    using FLASH_PRIV1BBR1_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB25 field */
    using FLASH_PRIV1BBR1_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB26 field */
    using FLASH_PRIV1BBR1_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB27 field */
    using FLASH_PRIV1BBR1_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB28 field */
    using FLASH_PRIV1BBR1_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB29 field */
    using FLASH_PRIV1BBR1_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB30 field */
    using FLASH_PRIV1BBR1_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB31 field */
    using FLASH_PRIV1BBR1_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 2 */
    using FLASH_PRIV1BBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB0 field */
    using FLASH_PRIV1BBR2_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB1 field */
    using FLASH_PRIV1BBR2_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB2 field */
    using FLASH_PRIV1BBR2_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB3 field */
    using FLASH_PRIV1BBR2_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB4 field */
    using FLASH_PRIV1BBR2_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB5 field */
    using FLASH_PRIV1BBR2_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB6 field */
    using FLASH_PRIV1BBR2_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB7 field */
    using FLASH_PRIV1BBR2_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB8 field */
    using FLASH_PRIV1BBR2_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB9 field */
    using FLASH_PRIV1BBR2_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB10 field */
    using FLASH_PRIV1BBR2_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB11 field */
    using FLASH_PRIV1BBR2_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB12 field */
    using FLASH_PRIV1BBR2_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB13 field */
    using FLASH_PRIV1BBR2_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB14 field */
    using FLASH_PRIV1BBR2_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB15 field */
    using FLASH_PRIV1BBR2_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB16 field */
    using FLASH_PRIV1BBR2_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB17 field */
    using FLASH_PRIV1BBR2_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB18 field */
    using FLASH_PRIV1BBR2_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB19 field */
    using FLASH_PRIV1BBR2_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB20 field */
    using FLASH_PRIV1BBR2_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB21 field */
    using FLASH_PRIV1BBR2_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB22 field */
    using FLASH_PRIV1BBR2_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB23 field */
    using FLASH_PRIV1BBR2_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB24 field */
    using FLASH_PRIV1BBR2_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB25 field */
    using FLASH_PRIV1BBR2_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB26 field */
    using FLASH_PRIV1BBR2_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB27 field */
    using FLASH_PRIV1BBR2_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB28 field */
    using FLASH_PRIV1BBR2_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB29 field */
    using FLASH_PRIV1BBR2_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB30 field */
    using FLASH_PRIV1BBR2_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB31 field */
    using FLASH_PRIV1BBR2_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 3 */
    using FLASH_PRIV1BBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB0 field */
    using FLASH_PRIV1BBR3_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB1 field */
    using FLASH_PRIV1BBR3_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB2 field */
    using FLASH_PRIV1BBR3_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB3 field */
    using FLASH_PRIV1BBR3_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB4 field */
    using FLASH_PRIV1BBR3_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB5 field */
    using FLASH_PRIV1BBR3_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB6 field */
    using FLASH_PRIV1BBR3_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB7 field */
    using FLASH_PRIV1BBR3_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB8 field */
    using FLASH_PRIV1BBR3_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB9 field */
    using FLASH_PRIV1BBR3_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB10 field */
    using FLASH_PRIV1BBR3_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB11 field */
    using FLASH_PRIV1BBR3_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB12 field */
    using FLASH_PRIV1BBR3_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB13 field */
    using FLASH_PRIV1BBR3_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB14 field */
    using FLASH_PRIV1BBR3_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB15 field */
    using FLASH_PRIV1BBR3_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB16 field */
    using FLASH_PRIV1BBR3_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB17 field */
    using FLASH_PRIV1BBR3_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB18 field */
    using FLASH_PRIV1BBR3_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB19 field */
    using FLASH_PRIV1BBR3_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB20 field */
    using FLASH_PRIV1BBR3_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB21 field */
    using FLASH_PRIV1BBR3_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB22 field */
    using FLASH_PRIV1BBR3_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB23 field */
    using FLASH_PRIV1BBR3_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB24 field */
    using FLASH_PRIV1BBR3_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB25 field */
    using FLASH_PRIV1BBR3_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB26 field */
    using FLASH_PRIV1BBR3_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB27 field */
    using FLASH_PRIV1BBR3_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB28 field */
    using FLASH_PRIV1BBR3_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB29 field */
    using FLASH_PRIV1BBR3_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB30 field */
    using FLASH_PRIV1BBR3_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB31 field */
    using FLASH_PRIV1BBR3_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 4 */
    using FLASH_PRIV1BBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB0 field */
    using FLASH_PRIV1BBR4_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB1 field */
    using FLASH_PRIV1BBR4_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB2 field */
    using FLASH_PRIV1BBR4_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB3 field */
    using FLASH_PRIV1BBR4_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB4 field */
    using FLASH_PRIV1BBR4_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB5 field */
    using FLASH_PRIV1BBR4_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB6 field */
    using FLASH_PRIV1BBR4_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB7 field */
    using FLASH_PRIV1BBR4_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB8 field */
    using FLASH_PRIV1BBR4_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB9 field */
    using FLASH_PRIV1BBR4_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB10 field */
    using FLASH_PRIV1BBR4_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB11 field */
    using FLASH_PRIV1BBR4_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB12 field */
    using FLASH_PRIV1BBR4_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB13 field */
    using FLASH_PRIV1BBR4_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB14 field */
    using FLASH_PRIV1BBR4_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB15 field */
    using FLASH_PRIV1BBR4_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB16 field */
    using FLASH_PRIV1BBR4_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB17 field */
    using FLASH_PRIV1BBR4_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB18 field */
    using FLASH_PRIV1BBR4_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB19 field */
    using FLASH_PRIV1BBR4_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB20 field */
    using FLASH_PRIV1BBR4_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB21 field */
    using FLASH_PRIV1BBR4_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB22 field */
    using FLASH_PRIV1BBR4_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB23 field */
    using FLASH_PRIV1BBR4_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB24 field */
    using FLASH_PRIV1BBR4_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB25 field */
    using FLASH_PRIV1BBR4_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB26 field */
    using FLASH_PRIV1BBR4_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB27 field */
    using FLASH_PRIV1BBR4_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB28 field */
    using FLASH_PRIV1BBR4_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB29 field */
    using FLASH_PRIV1BBR4_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB30 field */
    using FLASH_PRIV1BBR4_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB31 field */
    using FLASH_PRIV1BBR4_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 5 */
    using FLASH_PRIV1BBR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB0 field */
    using FLASH_PRIV1BBR5_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB1 field */
    using FLASH_PRIV1BBR5_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB2 field */
    using FLASH_PRIV1BBR5_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB3 field */
    using FLASH_PRIV1BBR5_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB4 field */
    using FLASH_PRIV1BBR5_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB5 field */
    using FLASH_PRIV1BBR5_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB6 field */
    using FLASH_PRIV1BBR5_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB7 field */
    using FLASH_PRIV1BBR5_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB8 field */
    using FLASH_PRIV1BBR5_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB9 field */
    using FLASH_PRIV1BBR5_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB10 field */
    using FLASH_PRIV1BBR5_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB11 field */
    using FLASH_PRIV1BBR5_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB12 field */
    using FLASH_PRIV1BBR5_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB13 field */
    using FLASH_PRIV1BBR5_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB14 field */
    using FLASH_PRIV1BBR5_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB15 field */
    using FLASH_PRIV1BBR5_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB16 field */
    using FLASH_PRIV1BBR5_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB17 field */
    using FLASH_PRIV1BBR5_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB18 field */
    using FLASH_PRIV1BBR5_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB19 field */
    using FLASH_PRIV1BBR5_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB20 field */
    using FLASH_PRIV1BBR5_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB21 field */
    using FLASH_PRIV1BBR5_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB22 field */
    using FLASH_PRIV1BBR5_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB23 field */
    using FLASH_PRIV1BBR5_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB24 field */
    using FLASH_PRIV1BBR5_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB25 field */
    using FLASH_PRIV1BBR5_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB26 field */
    using FLASH_PRIV1BBR5_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB27 field */
    using FLASH_PRIV1BBR5_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB28 field */
    using FLASH_PRIV1BBR5_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB29 field */
    using FLASH_PRIV1BBR5_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB30 field */
    using FLASH_PRIV1BBR5_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB31 field */
    using FLASH_PRIV1BBR5_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 6 */
    using FLASH_PRIV1BBR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB0 field */
    using FLASH_PRIV1BBR6_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB1 field */
    using FLASH_PRIV1BBR6_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB2 field */
    using FLASH_PRIV1BBR6_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB3 field */
    using FLASH_PRIV1BBR6_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB4 field */
    using FLASH_PRIV1BBR6_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB5 field */
    using FLASH_PRIV1BBR6_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB6 field */
    using FLASH_PRIV1BBR6_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB7 field */
    using FLASH_PRIV1BBR6_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB8 field */
    using FLASH_PRIV1BBR6_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB9 field */
    using FLASH_PRIV1BBR6_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB10 field */
    using FLASH_PRIV1BBR6_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB11 field */
    using FLASH_PRIV1BBR6_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB12 field */
    using FLASH_PRIV1BBR6_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB13 field */
    using FLASH_PRIV1BBR6_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB14 field */
    using FLASH_PRIV1BBR6_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB15 field */
    using FLASH_PRIV1BBR6_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB16 field */
    using FLASH_PRIV1BBR6_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB17 field */
    using FLASH_PRIV1BBR6_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB18 field */
    using FLASH_PRIV1BBR6_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB19 field */
    using FLASH_PRIV1BBR6_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB20 field */
    using FLASH_PRIV1BBR6_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB21 field */
    using FLASH_PRIV1BBR6_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB22 field */
    using FLASH_PRIV1BBR6_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB23 field */
    using FLASH_PRIV1BBR6_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB24 field */
    using FLASH_PRIV1BBR6_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB25 field */
    using FLASH_PRIV1BBR6_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB26 field */
    using FLASH_PRIV1BBR6_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB27 field */
    using FLASH_PRIV1BBR6_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB28 field */
    using FLASH_PRIV1BBR6_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB29 field */
    using FLASH_PRIV1BBR6_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB30 field */
    using FLASH_PRIV1BBR6_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB31 field */
    using FLASH_PRIV1BBR6_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 7 */
    using FLASH_PRIV1BBR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB0 field */
    using FLASH_PRIV1BBR7_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB1 field */
    using FLASH_PRIV1BBR7_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB2 field */
    using FLASH_PRIV1BBR7_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB3 field */
    using FLASH_PRIV1BBR7_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB4 field */
    using FLASH_PRIV1BBR7_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB5 field */
    using FLASH_PRIV1BBR7_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB6 field */
    using FLASH_PRIV1BBR7_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB7 field */
    using FLASH_PRIV1BBR7_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB8 field */
    using FLASH_PRIV1BBR7_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB9 field */
    using FLASH_PRIV1BBR7_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB10 field */
    using FLASH_PRIV1BBR7_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB11 field */
    using FLASH_PRIV1BBR7_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB12 field */
    using FLASH_PRIV1BBR7_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB13 field */
    using FLASH_PRIV1BBR7_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB14 field */
    using FLASH_PRIV1BBR7_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB15 field */
    using FLASH_PRIV1BBR7_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB16 field */
    using FLASH_PRIV1BBR7_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB17 field */
    using FLASH_PRIV1BBR7_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB18 field */
    using FLASH_PRIV1BBR7_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB19 field */
    using FLASH_PRIV1BBR7_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB20 field */
    using FLASH_PRIV1BBR7_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB21 field */
    using FLASH_PRIV1BBR7_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB22 field */
    using FLASH_PRIV1BBR7_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB23 field */
    using FLASH_PRIV1BBR7_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB24 field */
    using FLASH_PRIV1BBR7_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB25 field */
    using FLASH_PRIV1BBR7_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB26 field */
    using FLASH_PRIV1BBR7_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB27 field */
    using FLASH_PRIV1BBR7_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB28 field */
    using FLASH_PRIV1BBR7_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB29 field */
    using FLASH_PRIV1BBR7_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB30 field */
    using FLASH_PRIV1BBR7_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB31 field */
    using FLASH_PRIV1BBR7_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 1 register 8 */
    using FLASH_PRIV1BBR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB0 field */
    using FLASH_PRIV1BBR8_PRIV1BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB1 field */
    using FLASH_PRIV1BBR8_PRIV1BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB2 field */
    using FLASH_PRIV1BBR8_PRIV1BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB3 field */
    using FLASH_PRIV1BBR8_PRIV1BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB4 field */
    using FLASH_PRIV1BBR8_PRIV1BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB5 field */
    using FLASH_PRIV1BBR8_PRIV1BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB6 field */
    using FLASH_PRIV1BBR8_PRIV1BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB7 field */
    using FLASH_PRIV1BBR8_PRIV1BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB8 field */
    using FLASH_PRIV1BBR8_PRIV1BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB9 field */
    using FLASH_PRIV1BBR8_PRIV1BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB10 field */
    using FLASH_PRIV1BBR8_PRIV1BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB11 field */
    using FLASH_PRIV1BBR8_PRIV1BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB12 field */
    using FLASH_PRIV1BBR8_PRIV1BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB13 field */
    using FLASH_PRIV1BBR8_PRIV1BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB14 field */
    using FLASH_PRIV1BBR8_PRIV1BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB15 field */
    using FLASH_PRIV1BBR8_PRIV1BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB16 field */
    using FLASH_PRIV1BBR8_PRIV1BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB17 field */
    using FLASH_PRIV1BBR8_PRIV1BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB18 field */
    using FLASH_PRIV1BBR8_PRIV1BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB19 field */
    using FLASH_PRIV1BBR8_PRIV1BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB20 field */
    using FLASH_PRIV1BBR8_PRIV1BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB21 field */
    using FLASH_PRIV1BBR8_PRIV1BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB22 field */
    using FLASH_PRIV1BBR8_PRIV1BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB23 field */
    using FLASH_PRIV1BBR8_PRIV1BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB24 field */
    using FLASH_PRIV1BBR8_PRIV1BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB25 field */
    using FLASH_PRIV1BBR8_PRIV1BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB26 field */
    using FLASH_PRIV1BBR8_PRIV1BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB27 field */
    using FLASH_PRIV1BBR8_PRIV1BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB28 field */
    using FLASH_PRIV1BBR8_PRIV1BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB29 field */
    using FLASH_PRIV1BBR8_PRIV1BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB30 field */
    using FLASH_PRIV1BBR8_PRIV1BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1BB31 field */
    using FLASH_PRIV1BBR8_PRIV1BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 1 */
    using FLASH_PRIV2BBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB0 field */
    using FLASH_PRIV2BBR1_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB1 field */
    using FLASH_PRIV2BBR1_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB2 field */
    using FLASH_PRIV2BBR1_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB3 field */
    using FLASH_PRIV2BBR1_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB4 field */
    using FLASH_PRIV2BBR1_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB5 field */
    using FLASH_PRIV2BBR1_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB6 field */
    using FLASH_PRIV2BBR1_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB7 field */
    using FLASH_PRIV2BBR1_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB8 field */
    using FLASH_PRIV2BBR1_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB9 field */
    using FLASH_PRIV2BBR1_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB10 field */
    using FLASH_PRIV2BBR1_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB11 field */
    using FLASH_PRIV2BBR1_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB12 field */
    using FLASH_PRIV2BBR1_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB13 field */
    using FLASH_PRIV2BBR1_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB14 field */
    using FLASH_PRIV2BBR1_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB15 field */
    using FLASH_PRIV2BBR1_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB16 field */
    using FLASH_PRIV2BBR1_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB17 field */
    using FLASH_PRIV2BBR1_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB18 field */
    using FLASH_PRIV2BBR1_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB19 field */
    using FLASH_PRIV2BBR1_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB20 field */
    using FLASH_PRIV2BBR1_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB21 field */
    using FLASH_PRIV2BBR1_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB22 field */
    using FLASH_PRIV2BBR1_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB23 field */
    using FLASH_PRIV2BBR1_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB24 field */
    using FLASH_PRIV2BBR1_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB25 field */
    using FLASH_PRIV2BBR1_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB26 field */
    using FLASH_PRIV2BBR1_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB27 field */
    using FLASH_PRIV2BBR1_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB28 field */
    using FLASH_PRIV2BBR1_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB29 field */
    using FLASH_PRIV2BBR1_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB30 field */
    using FLASH_PRIV2BBR1_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB31 field */
    using FLASH_PRIV2BBR1_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 2 */
    using FLASH_PRIV2BBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB0 field */
    using FLASH_PRIV2BBR2_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB1 field */
    using FLASH_PRIV2BBR2_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB2 field */
    using FLASH_PRIV2BBR2_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB3 field */
    using FLASH_PRIV2BBR2_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB4 field */
    using FLASH_PRIV2BBR2_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB5 field */
    using FLASH_PRIV2BBR2_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB6 field */
    using FLASH_PRIV2BBR2_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB7 field */
    using FLASH_PRIV2BBR2_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB8 field */
    using FLASH_PRIV2BBR2_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB9 field */
    using FLASH_PRIV2BBR2_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB10 field */
    using FLASH_PRIV2BBR2_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB11 field */
    using FLASH_PRIV2BBR2_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB12 field */
    using FLASH_PRIV2BBR2_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB13 field */
    using FLASH_PRIV2BBR2_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB14 field */
    using FLASH_PRIV2BBR2_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB15 field */
    using FLASH_PRIV2BBR2_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB16 field */
    using FLASH_PRIV2BBR2_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB17 field */
    using FLASH_PRIV2BBR2_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB18 field */
    using FLASH_PRIV2BBR2_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB19 field */
    using FLASH_PRIV2BBR2_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB20 field */
    using FLASH_PRIV2BBR2_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB21 field */
    using FLASH_PRIV2BBR2_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB22 field */
    using FLASH_PRIV2BBR2_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB23 field */
    using FLASH_PRIV2BBR2_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB24 field */
    using FLASH_PRIV2BBR2_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB25 field */
    using FLASH_PRIV2BBR2_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB26 field */
    using FLASH_PRIV2BBR2_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB27 field */
    using FLASH_PRIV2BBR2_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB28 field */
    using FLASH_PRIV2BBR2_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB29 field */
    using FLASH_PRIV2BBR2_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB30 field */
    using FLASH_PRIV2BBR2_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB31 field */
    using FLASH_PRIV2BBR2_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 3 */
    using FLASH_PRIV2BBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB0 field */
    using FLASH_PRIV2BBR3_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB1 field */
    using FLASH_PRIV2BBR3_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB2 field */
    using FLASH_PRIV2BBR3_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB3 field */
    using FLASH_PRIV2BBR3_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB4 field */
    using FLASH_PRIV2BBR3_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB5 field */
    using FLASH_PRIV2BBR3_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB6 field */
    using FLASH_PRIV2BBR3_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB7 field */
    using FLASH_PRIV2BBR3_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB8 field */
    using FLASH_PRIV2BBR3_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB9 field */
    using FLASH_PRIV2BBR3_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB10 field */
    using FLASH_PRIV2BBR3_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB11 field */
    using FLASH_PRIV2BBR3_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB12 field */
    using FLASH_PRIV2BBR3_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB13 field */
    using FLASH_PRIV2BBR3_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB14 field */
    using FLASH_PRIV2BBR3_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB15 field */
    using FLASH_PRIV2BBR3_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB16 field */
    using FLASH_PRIV2BBR3_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB17 field */
    using FLASH_PRIV2BBR3_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB18 field */
    using FLASH_PRIV2BBR3_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB19 field */
    using FLASH_PRIV2BBR3_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB20 field */
    using FLASH_PRIV2BBR3_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB21 field */
    using FLASH_PRIV2BBR3_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB22 field */
    using FLASH_PRIV2BBR3_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB23 field */
    using FLASH_PRIV2BBR3_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB24 field */
    using FLASH_PRIV2BBR3_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB25 field */
    using FLASH_PRIV2BBR3_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB26 field */
    using FLASH_PRIV2BBR3_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB27 field */
    using FLASH_PRIV2BBR3_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB28 field */
    using FLASH_PRIV2BBR3_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB29 field */
    using FLASH_PRIV2BBR3_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB30 field */
    using FLASH_PRIV2BBR3_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB31 field */
    using FLASH_PRIV2BBR3_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 4 */
    using FLASH_PRIV2BBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB0 field */
    using FLASH_PRIV2BBR4_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB1 field */
    using FLASH_PRIV2BBR4_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB2 field */
    using FLASH_PRIV2BBR4_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB3 field */
    using FLASH_PRIV2BBR4_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB4 field */
    using FLASH_PRIV2BBR4_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB5 field */
    using FLASH_PRIV2BBR4_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB6 field */
    using FLASH_PRIV2BBR4_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB7 field */
    using FLASH_PRIV2BBR4_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB8 field */
    using FLASH_PRIV2BBR4_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB9 field */
    using FLASH_PRIV2BBR4_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB10 field */
    using FLASH_PRIV2BBR4_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB11 field */
    using FLASH_PRIV2BBR4_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB12 field */
    using FLASH_PRIV2BBR4_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB13 field */
    using FLASH_PRIV2BBR4_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB14 field */
    using FLASH_PRIV2BBR4_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB15 field */
    using FLASH_PRIV2BBR4_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB16 field */
    using FLASH_PRIV2BBR4_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB17 field */
    using FLASH_PRIV2BBR4_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB18 field */
    using FLASH_PRIV2BBR4_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB19 field */
    using FLASH_PRIV2BBR4_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB20 field */
    using FLASH_PRIV2BBR4_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB21 field */
    using FLASH_PRIV2BBR4_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB22 field */
    using FLASH_PRIV2BBR4_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB23 field */
    using FLASH_PRIV2BBR4_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB24 field */
    using FLASH_PRIV2BBR4_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB25 field */
    using FLASH_PRIV2BBR4_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB26 field */
    using FLASH_PRIV2BBR4_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB27 field */
    using FLASH_PRIV2BBR4_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB28 field */
    using FLASH_PRIV2BBR4_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB29 field */
    using FLASH_PRIV2BBR4_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB30 field */
    using FLASH_PRIV2BBR4_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB31 field */
    using FLASH_PRIV2BBR4_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 5 */
    using FLASH_PRIV2BBR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB0 field */
    using FLASH_PRIV2BBR5_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB1 field */
    using FLASH_PRIV2BBR5_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB2 field */
    using FLASH_PRIV2BBR5_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB3 field */
    using FLASH_PRIV2BBR5_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB4 field */
    using FLASH_PRIV2BBR5_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB5 field */
    using FLASH_PRIV2BBR5_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB6 field */
    using FLASH_PRIV2BBR5_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB7 field */
    using FLASH_PRIV2BBR5_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB8 field */
    using FLASH_PRIV2BBR5_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB9 field */
    using FLASH_PRIV2BBR5_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB10 field */
    using FLASH_PRIV2BBR5_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB11 field */
    using FLASH_PRIV2BBR5_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB12 field */
    using FLASH_PRIV2BBR5_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB13 field */
    using FLASH_PRIV2BBR5_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB14 field */
    using FLASH_PRIV2BBR5_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB15 field */
    using FLASH_PRIV2BBR5_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB16 field */
    using FLASH_PRIV2BBR5_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB17 field */
    using FLASH_PRIV2BBR5_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB18 field */
    using FLASH_PRIV2BBR5_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB19 field */
    using FLASH_PRIV2BBR5_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB20 field */
    using FLASH_PRIV2BBR5_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB21 field */
    using FLASH_PRIV2BBR5_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB22 field */
    using FLASH_PRIV2BBR5_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB23 field */
    using FLASH_PRIV2BBR5_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB24 field */
    using FLASH_PRIV2BBR5_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB25 field */
    using FLASH_PRIV2BBR5_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB26 field */
    using FLASH_PRIV2BBR5_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB27 field */
    using FLASH_PRIV2BBR5_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB28 field */
    using FLASH_PRIV2BBR5_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB29 field */
    using FLASH_PRIV2BBR5_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB30 field */
    using FLASH_PRIV2BBR5_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB31 field */
    using FLASH_PRIV2BBR5_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 6 */
    using FLASH_PRIV2BBR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB0 field */
    using FLASH_PRIV2BBR6_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB1 field */
    using FLASH_PRIV2BBR6_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB2 field */
    using FLASH_PRIV2BBR6_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB3 field */
    using FLASH_PRIV2BBR6_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB4 field */
    using FLASH_PRIV2BBR6_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB5 field */
    using FLASH_PRIV2BBR6_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB6 field */
    using FLASH_PRIV2BBR6_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB7 field */
    using FLASH_PRIV2BBR6_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB8 field */
    using FLASH_PRIV2BBR6_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB9 field */
    using FLASH_PRIV2BBR6_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB10 field */
    using FLASH_PRIV2BBR6_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB11 field */
    using FLASH_PRIV2BBR6_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB12 field */
    using FLASH_PRIV2BBR6_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB13 field */
    using FLASH_PRIV2BBR6_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB14 field */
    using FLASH_PRIV2BBR6_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB15 field */
    using FLASH_PRIV2BBR6_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB16 field */
    using FLASH_PRIV2BBR6_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB17 field */
    using FLASH_PRIV2BBR6_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB18 field */
    using FLASH_PRIV2BBR6_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB19 field */
    using FLASH_PRIV2BBR6_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB20 field */
    using FLASH_PRIV2BBR6_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB21 field */
    using FLASH_PRIV2BBR6_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB22 field */
    using FLASH_PRIV2BBR6_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB23 field */
    using FLASH_PRIV2BBR6_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB24 field */
    using FLASH_PRIV2BBR6_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB25 field */
    using FLASH_PRIV2BBR6_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB26 field */
    using FLASH_PRIV2BBR6_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB27 field */
    using FLASH_PRIV2BBR6_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB28 field */
    using FLASH_PRIV2BBR6_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB29 field */
    using FLASH_PRIV2BBR6_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB30 field */
    using FLASH_PRIV2BBR6_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB31 field */
    using FLASH_PRIV2BBR6_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 7 */
    using FLASH_PRIV2BBR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB0 field */
    using FLASH_PRIV2BBR7_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB1 field */
    using FLASH_PRIV2BBR7_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB2 field */
    using FLASH_PRIV2BBR7_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB3 field */
    using FLASH_PRIV2BBR7_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB4 field */
    using FLASH_PRIV2BBR7_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB5 field */
    using FLASH_PRIV2BBR7_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB6 field */
    using FLASH_PRIV2BBR7_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB7 field */
    using FLASH_PRIV2BBR7_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB8 field */
    using FLASH_PRIV2BBR7_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB9 field */
    using FLASH_PRIV2BBR7_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB10 field */
    using FLASH_PRIV2BBR7_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB11 field */
    using FLASH_PRIV2BBR7_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB12 field */
    using FLASH_PRIV2BBR7_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB13 field */
    using FLASH_PRIV2BBR7_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB14 field */
    using FLASH_PRIV2BBR7_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB15 field */
    using FLASH_PRIV2BBR7_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB16 field */
    using FLASH_PRIV2BBR7_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB17 field */
    using FLASH_PRIV2BBR7_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB18 field */
    using FLASH_PRIV2BBR7_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB19 field */
    using FLASH_PRIV2BBR7_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB20 field */
    using FLASH_PRIV2BBR7_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB21 field */
    using FLASH_PRIV2BBR7_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB22 field */
    using FLASH_PRIV2BBR7_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB23 field */
    using FLASH_PRIV2BBR7_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB24 field */
    using FLASH_PRIV2BBR7_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB25 field */
    using FLASH_PRIV2BBR7_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB26 field */
    using FLASH_PRIV2BBR7_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB27 field */
    using FLASH_PRIV2BBR7_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB28 field */
    using FLASH_PRIV2BBR7_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB29 field */
    using FLASH_PRIV2BBR7_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB30 field */
    using FLASH_PRIV2BBR7_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB31 field */
    using FLASH_PRIV2BBR7_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block based bank 2 register 8 */
    using FLASH_PRIV2BBR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB0 field */
    using FLASH_PRIV2BBR8_PRIV2BB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB1 field */
    using FLASH_PRIV2BBR8_PRIV2BB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB2 field */
    using FLASH_PRIV2BBR8_PRIV2BB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB3 field */
    using FLASH_PRIV2BBR8_PRIV2BB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB4 field */
    using FLASH_PRIV2BBR8_PRIV2BB4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB5 field */
    using FLASH_PRIV2BBR8_PRIV2BB5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB6 field */
    using FLASH_PRIV2BBR8_PRIV2BB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB7 field */
    using FLASH_PRIV2BBR8_PRIV2BB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB8 field */
    using FLASH_PRIV2BBR8_PRIV2BB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB9 field */
    using FLASH_PRIV2BBR8_PRIV2BB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB10 field */
    using FLASH_PRIV2BBR8_PRIV2BB10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB11 field */
    using FLASH_PRIV2BBR8_PRIV2BB11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB12 field */
    using FLASH_PRIV2BBR8_PRIV2BB12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB13 field */
    using FLASH_PRIV2BBR8_PRIV2BB13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB14 field */
    using FLASH_PRIV2BBR8_PRIV2BB14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB15 field */
    using FLASH_PRIV2BBR8_PRIV2BB15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB16 field */
    using FLASH_PRIV2BBR8_PRIV2BB16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB17 field */
    using FLASH_PRIV2BBR8_PRIV2BB17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB18 field */
    using FLASH_PRIV2BBR8_PRIV2BB18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB19 field */
    using FLASH_PRIV2BBR8_PRIV2BB19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB20 field */
    using FLASH_PRIV2BBR8_PRIV2BB20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB21 field */
    using FLASH_PRIV2BBR8_PRIV2BB21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB22 field */
    using FLASH_PRIV2BBR8_PRIV2BB22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB23 field */
    using FLASH_PRIV2BBR8_PRIV2BB23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB24 field */
    using FLASH_PRIV2BBR8_PRIV2BB24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB25 field */
    using FLASH_PRIV2BBR8_PRIV2BB25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB26 field */
    using FLASH_PRIV2BBR8_PRIV2BB26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB27 field */
    using FLASH_PRIV2BBR8_PRIV2BB27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB28 field */
    using FLASH_PRIV2BBR8_PRIV2BB28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB29 field */
    using FLASH_PRIV2BBR8_PRIV2BB29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB30 field */
    using FLASH_PRIV2BBR8_PRIV2BB30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2BB31 field */
    using FLASH_PRIV2BBR8_PRIV2BB31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
