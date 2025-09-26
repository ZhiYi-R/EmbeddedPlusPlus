/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_SEC_FLASH_HPP
#define EMBEDDED_PP_STM32U3B5_SEC_FLASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief FLASH register block */
namespace STM32U3B5::SEC_FLASH {

    /** @brief FLASH access control register */
    using FLASH_ACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Latency */
    using FLASH_ACR_LATENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 wait state (value: 0)
     *          - B_0x1: 1 wait state (value: 1)
     *          - B_0x2: 2 wait states (value: 2)
     *          - B_0xF: 15 wait states (value: 15)
     */
        /** @brief 0 wait state */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x0 = 0;
        /** @brief 1 wait state */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x1 = 1;
        /** @brief 2 wait states */
    constexpr std::uint32_t FLASH_ACR_LATENCY_B_0x2 = 2;
        /** @brief 15 wait states */
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
     *          - B_0x0: FLASH not in low-power read mode (value: 0)
     *          - B_0x1: FLASH in low-power read mode (value: 1)
     */
        /** @brief FLASH not in low-power read mode */
    constexpr std::uint32_t FLASH_ACR_LPM_B_0x0 = 0;
        /** @brief FLASH in low-power read mode */
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

    /** @brief FLASH nonsecure key register */
    using FLASH_KEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory nonsecure key */
    using FLASH_KEYR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure key register */
    using FLASH_SKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory secure key */
    using FLASH_SKEYR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH option key register */
    using FLASH_OPTKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option-byte key */
    using FLASH_OPTKEYR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH bank 1 power-down key register */
    using FLASH_PDKEY1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 power-down key */
    using FLASH_PDKEY1R_KEY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH bank 2 power-down key register */
    using FLASH_PDKEY2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 power-down key */
    using FLASH_PDKEY2R_KEY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH nonsecure status register */
    using FLASH_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure end of operation */
    using FLASH_SR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure operation error */
    using FLASH_SR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure programming error */
    using FLASH_SR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure write protection error */
    using FLASH_SR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure programming alignment error */
    using FLASH_SR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure size error */
    using FLASH_SR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure programming sequence error */
    using FLASH_SR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option write error */
    using FLASH_SR_OPTWERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure busy */
    using FLASH_SR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure wait data to write */
    using FLASH_SR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1 lock */
    using FLASH_SR_OEM1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2 lock */
    using FLASH_SR_OEM2LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 in power-down mode */
    using FLASH_SR_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 in power-down mode */
    using FLASH_SR_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure status register */
    using FLASH_SSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure end of operation */
    using FLASH_SSR_EOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure operation error */
    using FLASH_SSR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming error */
    using FLASH_SSR_PROGERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure write protection error */
    using FLASH_SSR_WRPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming alignment error */
    using FLASH_SSR_PGAERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure size error */
    using FLASH_SSR_SIZERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming sequence error */
    using FLASH_SSR_PGSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure busy */
    using FLASH_SSR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure wait data to write */
    using FLASH_SSR_WDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH nonsecure control register */
    using FLASH_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure programming */
    using FLASH_CR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure FLASH programming disabled (value: 0)
     *          - B_0x1: Nonsecure FLASH programming enabled (value: 1)
     */
        /** @brief Nonsecure FLASH programming disabled */
    constexpr std::uint32_t FLASH_CR_PG_B_0x0 = 0;
        /** @brief Nonsecure FLASH programming enabled */
    constexpr std::uint32_t FLASH_CR_PG_B_0x1 = 1;

    /** @brief Nonsecure page erase */
    using FLASH_CR_PER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure page erase disabled (value: 0)
     *          - B_0x1: Nonsecure page erase enabled (value: 1)
     */
        /** @brief Nonsecure page erase disabled */
    constexpr std::uint32_t FLASH_CR_PER_B_0x0 = 0;
        /** @brief Nonsecure page erase enabled */
    constexpr std::uint32_t FLASH_CR_PER_B_0x1 = 1;

    /** @brief Nonsecure bank 1 mass erase */
    using FLASH_CR_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure page number selection */
    using FLASH_CR_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     *          - B_0xFF: page 255 (value: 255)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_CR_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_CR_PNB_B_0x1 = 1;
        /** @brief page 255 */
    constexpr std::uint32_t FLASH_CR_PNB_B_0xFF = 255;

    /** @brief Nonsecure bank selection for page erase */
    using FLASH_CR_BKER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 selected for nonsecure page erase (value: 0)
     *          - B_0x1: Bank 2 selected for nonsecure page erase (value: 1)
     */
        /** @brief Bank 1 selected for nonsecure page erase */
    constexpr std::uint32_t FLASH_CR_BKER_B_0x0 = 0;
        /** @brief Bank 2 selected for nonsecure page erase */
    constexpr std::uint32_t FLASH_CR_BKER_B_0x1 = 1;

    /** @brief Nonsecure burst write programming mode */
    using FLASH_CR_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure bank 2 mass erase */
    using FLASH_CR_MER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure start */
    using FLASH_CR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option modification start */
    using FLASH_CR_OPTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure end of operation interrupt enable */
    using FLASH_CR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure EOP Interrupt disabled (value: 0)
     *          - B_0x1: Nonsecure EOP Interrupt enabled (value: 1)
     */
        /** @brief Nonsecure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_CR_EOPIE_B_0x0 = 0;
        /** @brief Nonsecure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_CR_EOPIE_B_0x1 = 1;

    /** @brief Nonsecure error interrupt enable */
    using FLASH_CR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: Nonsecure OPERR error interrupt enabled (value: 1)
     */
        /** @brief Nonsecure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_CR_ERRIE_B_0x0 = 0;
        /** @brief Nonsecure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_CR_ERRIE_B_0x1 = 1;

    /** @brief Option-byte loading forced */
    using FLASH_CR_OBL_LAUNCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Option-byte loading complete (value: 0)
     *          - B_0x1: Option-byte loading requested (value: 1)
     */
        /** @brief Option-byte loading complete */
    constexpr std::uint32_t FLASH_CR_OBL_LAUNCH_B_0x0 = 0;
        /** @brief Option-byte loading requested */
    constexpr std::uint32_t FLASH_CR_OBL_LAUNCH_B_0x1 = 1;

    /** @brief Option lock */
    using FLASH_CR_OPTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure lock */
    using FLASH_CR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure control register */
    using FLASH_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure programming */
    using FLASH_SCR_PG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure FLASH programming disabled (value: 0)
     *          - B_0x1: Secure FLASH programming enabled (value: 1)
     */
        /** @brief Secure FLASH programming disabled */
    constexpr std::uint32_t FLASH_SCR_PG_B_0x0 = 0;
        /** @brief Secure FLASH programming enabled */
    constexpr std::uint32_t FLASH_SCR_PG_B_0x1 = 1;

    /** @brief Secure page erase */
    using FLASH_SCR_PER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure page erase disabled (value: 0)
     *          - B_0x1: Secure page erase enabled (value: 1)
     */
        /** @brief Secure page erase disabled */
    constexpr std::uint32_t FLASH_SCR_PER_B_0x0 = 0;
        /** @brief Secure page erase enabled */
    constexpr std::uint32_t FLASH_SCR_PER_B_0x1 = 1;

    /** @brief Secure bank 1 mass erase */
    using FLASH_SCR_MER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure page number selection */
    using FLASH_SCR_PNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: page 0 (value: 0)
     *          - B_0x1: page 1 (value: 1)
     */
        /** @brief page 0 */
    constexpr std::uint32_t FLASH_SCR_PNB_B_0x0 = 0;
        /** @brief page 1 */
    constexpr std::uint32_t FLASH_SCR_PNB_B_0x1 = 1;

    /** @brief Secure bank selection for page erase */
    using FLASH_SCR_BKER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 selected for secure page erase (value: 0)
     *          - B_0x1: Bank 2 selected for secure page erase (value: 1)
     */
        /** @brief Bank 1 selected for secure page erase */
    constexpr std::uint32_t FLASH_SCR_BKER_B_0x0 = 0;
        /** @brief Bank 2 selected for secure page erase */
    constexpr std::uint32_t FLASH_SCR_BKER_B_0x1 = 1;

    /** @brief Secure burst write programming mode */
    using FLASH_SCR_BWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure bank 2 mass erase */
    using FLASH_SCR_MER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure start */
    using FLASH_SCR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure end of operation interrupt enable */
    using FLASH_SCR_EOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure EOP Interrupt disabled (value: 0)
     *          - B_0x1: Secure EOP Interrupt enabled (value: 1)
     */
        /** @brief Secure EOP Interrupt disabled */
    constexpr std::uint32_t FLASH_SCR_EOPIE_B_0x0 = 0;
        /** @brief Secure EOP Interrupt enabled */
    constexpr std::uint32_t FLASH_SCR_EOPIE_B_0x1 = 1;

    /** @brief Secure error interrupt enable */
    using FLASH_SCR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure OPERR error interrupt disabled (value: 0)
     *          - B_0x1: Secure OPERR error interrupt enabled (value: 1)
     */
        /** @brief Secure OPERR error interrupt disabled */
    constexpr std::uint32_t FLASH_SCR_ERRIE_B_0x0 = 0;
        /** @brief Secure OPERR error interrupt enabled */
    constexpr std::uint32_t FLASH_SCR_ERRIE_B_0x1 = 1;

    /** @brief Flash memory security state invert */
    using FLASH_SCR_INV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure lock */
    using FLASH_SCR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC register */
    using FLASH_ECCCORR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail address */
    using FLASH_ECCCORR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail bank */
    using FLASH_ECCCORR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 (value: 0)
     *          - B_0x1: Bank 2 (value: 1)
     */
        /** @brief Bank 1 */
    constexpr std::uint32_t FLASH_ECCCORR_BK_ECC_B_0x0 = 0;
        /** @brief Bank 2 */
    constexpr std::uint32_t FLASH_ECCCORR_BK_ECC_B_0x1 = 1;

    /** @brief System flash memory ECC fail */
    using FLASH_ECCCORR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC correction interrupt enable */
    using FLASH_ECCCORR_ECCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECCC interrupt disabled (value: 0)
     *          - B_0x1: ECCC interrupt enabled. (value: 1)
     */
        /** @brief ECCC interrupt disabled */
    constexpr std::uint32_t FLASH_ECCCORR_ECCIE_B_0x0 = 0;
        /** @brief ECCC interrupt enabled. */
    constexpr std::uint32_t FLASH_ECCCORR_ECCIE_B_0x1 = 1;

    /** @brief ECC correction */
    using FLASH_ECCCORR_ECCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH ECC detection register */
    using FLASH_ECCDETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail address */
    using FLASH_ECCDETR_ADDR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC fail bank */
    using FLASH_ECCDETR_BK_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 1 (value: 0)
     *          - B_0x1: Bank 2 (value: 1)
     */
        /** @brief Bank 1 */
    constexpr std::uint32_t FLASH_ECCDETR_BK_ECC_B_0x0 = 0;
        /** @brief Bank 2 */
    constexpr std::uint32_t FLASH_ECCDETR_BK_ECC_B_0x1 = 1;

    /** @brief System flash memory ECC fail */
    using FLASH_ECCDETR_SYSF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC detection */
    using FLASH_ECCDETR_ECCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH operation status register */
    using FLASH_OPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupted operation address */
    using FLASH_OPSR_ADDR_OP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Backup domain reset with power-on reset */
    using FLASH_OPTR_BDRST_POR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The backup domain is not reset after a Vless thansub>DDless than/sub> domain brownout reset (BOR). (value: 0)
     *          - B_0x1: The backup domain is reset after a Vless thansub>DDless than/sub> domain brownout reset (BOR). (value: 1)
     */
        /** @brief The backup domain is not reset after a Vless thansub>DDless than/sub> domain brownout reset (BOR). */
    constexpr std::uint32_t FLASH_OPTR_BDRST_POR_B_0x0 = 0;
        /** @brief The backup domain is reset after a Vless thansub>DDless than/sub> domain brownout reset (BOR). */
    constexpr std::uint32_t FLASH_OPTR_BDRST_POR_B_0x1 = 1;

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
     *          - B_0x1: No reset generate when entering the Standby mode (value: 1)
     */
        /** @brief Reset generated when entering the Standby mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STDBY_B_0x0 = 0;
        /** @brief No reset generate when entering the Standby mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_STDBY_B_0x1 = 1;

    /** @brief Reset generation in Shutdown mode */
    using FLASH_OPTR_NRST_SHDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset generated when entering the Shutdown mode (value: 0)
     *          - B_0x1: No reset generated when entering the Shutdown mode (value: 1)
     */
        /** @brief Reset generated when entering the Shutdown mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_SHDW_B_0x0 = 0;
        /** @brief No reset generated when entering the Shutdown mode */
    constexpr std::uint32_t FLASH_OPTR_NRST_SHDW_B_0x1 = 1;

    /** @brief All SRAMs (except SRAM2 and SRAM4) erase upon system reset */
    using FLASH_OPTR_SRAM_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All SRAMs (except SRAM2 and SRAM4) erased when a system reset occurs (value: 0)
     *          - B_0x1: All SRAMs (except SRAM2 and SRAM4) not erased when a system reset occurs (value: 1)
     */
        /** @brief All SRAMs (except SRAM2 and SRAM4) erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM_RST_B_0x0 = 0;
        /** @brief All SRAMs (except SRAM2 and SRAM4) not erased when a system reset occurs */
    constexpr std::uint32_t FLASH_OPTR_SRAM_RST_B_0x1 = 1;

    /** @brief Independent watchdog selection */
    using FLASH_OPTR_IWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware IWDG selected (value: 0)
     *          - B_0x1: Software IWDG selected (value: 1)
     */
        /** @brief Hardware IWDG selected */
    constexpr std::uint32_t FLASH_OPTR_IWDG_SW_B_0x0 = 0;
        /** @brief Software IWDG selected */
    constexpr std::uint32_t FLASH_OPTR_IWDG_SW_B_0x1 = 1;

    /** @brief Independent watchdog counter freeze in Stop mode */
    using FLASH_OPTR_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IWDG counter frozen in Stop mode (value: 0)
     *          - B_0x1: IIWDG counter running in Stop mode (value: 1)
     */
        /** @brief IWDG counter frozen in Stop mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STOP_B_0x0 = 0;
        /** @brief IIWDG counter running in Stop mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STOP_B_0x1 = 1;

    /** @brief Independent watchdog counter freeze in Standby mode */
    using FLASH_OPTR_IWDG_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IWDG counter frozen in Standby mode (value: 0)
     *          - B_0x1: IWDG counter running in Standby mode (value: 1)
     */
        /** @brief IWDG counter frozen in Standby mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STDBY_B_0x0 = 0;
        /** @brief IWDG counter running in Standby mode */
    constexpr std::uint32_t FLASH_OPTR_IWDG_STDBY_B_0x1 = 1;

    /** @brief Window watchdog selection */
    using FLASH_OPTR_WWDG_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware WWDG selected (value: 0)
     *          - B_0x1: Software WWDG selected (value: 1)
     */
        /** @brief Hardware WWDG selected */
    constexpr std::uint32_t FLASH_OPTR_WWDG_SW_B_0x0 = 0;
        /** @brief Software WWDG selected */
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

    /** @brief Dual-bank on 512-Kbyte flash memory devices */
    using FLASH_OPTR_DUALBANK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single-bank FLASH with contiguous address in bank 1 (value: 0)
     *          - B_0x1: Dual-bank FLASH with contiguous addresses (value: 1)
     */
        /** @brief Single-bank FLASH with contiguous address in bank 1 */
    constexpr std::uint32_t FLASH_OPTR_DUALBANK_B_0x0 = 0;
        /** @brief Dual-bank FLASH with contiguous addresses */
    constexpr std::uint32_t FLASH_OPTR_DUALBANK_B_0x1 = 1;

    /** @brief SRAM3 parity check enable */
    using FLASH_OPTR_SRAM3_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 parity check enabled (value: 0)
     *          - B_0x1: SRAM3 parity check disabled (value: 1)
     */
        /** @brief SRAM3 parity check enabled */
    constexpr std::uint32_t FLASH_OPTR_SRAM3_PE_B_0x0 = 0;
        /** @brief SRAM3 parity check disabled */
    constexpr std::uint32_t FLASH_OPTR_SRAM3_PE_B_0x1 = 1;

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

    /** @brief High-speed I/O at low Vless thansub>DD less than/sub>voltage configuration bit */
    using FLASH_OPTR_IO_VDD_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed I/O at low Vless thansub>DD less than/sub>voltage feature disabled (Vless thansub>DDless than/sub> can exceed 2. (value: 0)
     *          - B_0x1: High-speed I/O at low Vless thansub>DD less than/sub>voltage feature enabled (Vless thansub>DDless than/sub> remains below 2. (value: 1)
     */
        /** @brief High-speed I/O at low Vless thansub>DD less than/sub>voltage feature disabled (Vless thansub>DDless than/sub> can exceed 2. */
    constexpr std::uint32_t FLASH_OPTR_IO_VDD_HSLV_B_0x0 = 0;
        /** @brief High-speed I/O at low Vless thansub>DD less than/sub>voltage feature enabled (Vless thansub>DDless than/sub> remains below 2. */
    constexpr std::uint32_t FLASH_OPTR_IO_VDD_HSLV_B_0x1 = 1;

    /** @brief High-speed I/O at low Vless thansub>DDIO2less than/sub> voltage configuration bit */
    using FLASH_OPTR_IO_VDDIO2_HSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed I/O at low Vless thansub>DDIO2 less than/sub>voltage feature disabled (Vless thansub>DDIO2less than/sub> can exceed 2. (value: 0)
     *          - B_0x1: High-speed I/O at low Vless thansub>DDIO2 less than/sub>voltage feature enabled (Vless thansub>DDIO2less than/sub> remains below 2. (value: 1)
     */
        /** @brief High-speed I/O at low Vless thansub>DDIO2 less than/sub>voltage feature disabled (Vless thansub>DDIO2less than/sub> can exceed 2. */
    constexpr std::uint32_t FLASH_OPTR_IO_VDDIO2_HSLV_B_0x0 = 0;
        /** @brief High-speed I/O at low Vless thansub>DDIO2 less than/sub>voltage feature enabled (Vless thansub>DDIO2less than/sub> remains below 2. */
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

    /** @brief FLASH nonsecure boot address 0 register */
    using FLASH_BOOT0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonsecure boot base address 0 */
    using FLASH_BOOT0R_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH nonsecure boot address 1 register */
    using FLASH_BOOT1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nonsecure boot address 1 */
    using FLASH_BOOT1R_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure boot address 0 register */
    using FLASH_SBOOT0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot lock */
    using FLASH_SBOOT0R_BOOT_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure boot base address 0 */
    using FLASH_SBOOT0R_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark1 register 1 */
    using FLASH_SECWM1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start page of first secure area */
    using FLASH_SECWM1R1_SECWM1_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of first secure area */
    using FLASH_SECWM1R1_SECWM1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark1 register 2 */
    using FLASH_SECWM1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of first hide protection area */
    using FLASH_SECWM1R2_HDP1_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hide protection first area enable */
    using FLASH_SECWM1R2_HDP1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: No HDP area 1 (value: 180)
     */
        /** @brief No HDP area 1 */
    constexpr std::uint32_t FLASH_SECWM1R2_HDP1EN_B_0xB4 = 180;

    /** @brief FLASH WRP1 area A address register */
    using FLASH_WRP1AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WPR first area A start page */
    using FLASH_WRP1AR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WPR first area A end page */
    using FLASH_WRP1AR_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    using FLASH_WRP1BR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 1 WRP second area B end page */
    using FLASH_WRP1BR_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    using FLASH_SECWM2R1_SECWM2_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of second secure area */
    using FLASH_SECWM2R1_SECWM2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH secure watermark2 register 2 */
    using FLASH_SECWM2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End page of hide protection second area */
    using FLASH_SECWM2R2_HDP2_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hide protection second area enable */
    using FLASH_SECWM2R2_HDP2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: No HDP area 2 (value: 180)
     */
        /** @brief No HDP area 2 */
    constexpr std::uint32_t FLASH_SECWM2R2_HDP2EN_B_0xB4 = 180;

    /** @brief FLASH WPR2 area A address register */
    using FLASH_WRP2AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR first area A start page */
    using FLASH_WRP2AR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR first area A end page */
    using FLASH_WRP2AR_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    using FLASH_WRP2BR_STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bank 2 WPR second area B end page */
    using FLASH_WRP2BR_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief FLASH secure block based bank 1 register 1 */
    using FLASH_SECBB1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R1_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R1_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 1 register 2 */
    using FLASH_SECBB1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R2_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R2_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 1 register 3 */
    using FLASH_SECBB1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R3_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R3_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 1 register 4 */
    using FLASH_SECBB1R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB1R4_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 block-based secure */
    constexpr std::uint32_t FLASH_SECBB1R4_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 2 register 1 */
    using FLASH_SECBB2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R1_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R1_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 2 register 2 */
    using FLASH_SECBB2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R2_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R2_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 2 register 3 */
    using FLASH_SECBB2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R3_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R3_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 2 register 4 */
    using FLASH_SECBB2R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R4_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R4_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 2 register 5 */
    using FLASH_SECBB2R5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R5_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R5_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 2 register 6 */
    using FLASH_SECBB2R6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R6_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R6_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 2 register 7 */
    using FLASH_SECBB2R7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R7_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R7_SEC31_B_0x1 = 1;

    /** @brief FLASH secure block based bank 2 register 8 */
    using FLASH_SECBB2R8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC0_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC1_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC2_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC3_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC4_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC5_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC6_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC7_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC8_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC9_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC10_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC11_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC12_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC13_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC14_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC15_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC16_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC17_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC18_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC19_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC20_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC21_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC22_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC23_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC24_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC25_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC26_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC27_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC28_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC29_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC30_B_0x1 = 1;

    /** @brief Page secure/nonsecure attribution */
    using FLASH_SECBB2R8_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 not block-based secure (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 block-based secure (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 not block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 block-based secure */
    constexpr std::uint32_t FLASH_SECBB2R8_SEC31_B_0x1 = 1;

    /** @brief FLASH secure HDP control register */
    using FLASH_SECHDPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP1 area access disable */
    using FLASH_SECHDPCR_HDP1_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xA3: Access to HDP1 area granted (value: 163)
     */
        /** @brief Access to HDP1 area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1_ACCDIS_B_0xA3 = 163;

    /** @brief HDP2 area access disable */
    using FLASH_SECHDPCR_HDP2_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xA3: Access to HDP2 area granted (value: 163)
     */
        /** @brief Access to HDP2 area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP2_ACCDIS_B_0xA3 = 163;

    /** @brief HDP1 extension area access disable */
    using FLASH_SECHDPCR_HDP1EXT_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xA3: Access to HDP1 extension area granted (value: 163)
     *          - B_0x5C: Access to HDP1 extension area and HDP1 area denied, but HDP1_EXT (inFLASH_HDPEXTR) increment allowed at any time. (value: 92)
     */
        /** @brief Access to HDP1 extension area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1EXT_ACCDIS_B_0xA3 = 163;
        /** @brief Access to HDP1 extension area and HDP1 area denied, but HDP1_EXT (inFLASH_HDPEXTR) increment allowed at any time. */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP1EXT_ACCDIS_B_0x5C = 92;

    /** @brief HDP2 extension area access disable */
    using FLASH_SECHDPCR_HDP2EXT_ACCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xA3: Access to HDP2 extension area granted (value: 163)
     *          - B_0x5C: Access to HDP2 extension area and HDP2 area denied, but HDP2_EXT (inFLASH_HDPEXTR) increment allowed at any time. (value: 92)
     */
        /** @brief Access to HDP2 extension area granted */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP2EXT_ACCDIS_B_0xA3 = 163;
        /** @brief Access to HDP2 extension area and HDP2 area denied, but HDP2_EXT (inFLASH_HDPEXTR) increment allowed at any time. */
    constexpr std::uint32_t FLASH_SECHDPCR_HDP2EXT_ACCDIS_B_0x5C = 92;

    /** @brief FLASH privilege configuration register */
    using FLASH_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged protection for secure registers */
    using FLASH_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure FLASH registers can be read and written by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Secure FLASH registers can be read and written by privileged access only. (value: 1)
     */
        /** @brief Secure FLASH registers can be read and written by privileged or unprivileged access. */
    constexpr std::uint32_t FLASH_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Secure FLASH registers can be read and written by privileged access only. */
    constexpr std::uint32_t FLASH_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief Privileged protection for nonsecure registers */
    using FLASH_PRIVCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure FLASH registers can be read and written by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Nonsecure FLASH registers can be read and written by privileged access only. (value: 1)
     */
        /** @brief Nonsecure FLASH registers can be read and written by privileged or unprivileged access. */
    constexpr std::uint32_t FLASH_PRIVCFGR_PRIV_B_0x0 = 0;
        /** @brief Nonsecure FLASH registers can be read and written by privileged access only. */
    constexpr std::uint32_t FLASH_PRIVCFGR_PRIV_B_0x1 = 1;

    /** @brief FLASH HDP extension register */
    using FLASH_SECHDPEXTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP area extension in 4-Kbyte pages in bank 1 */
    using FLASH_SECHDPEXTR_HDP1_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP area extension in 4-Kbyte pages in bank 2 */
    using FLASH_SECHDPEXTR_HDP2_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH privilege block-based bank 1 register 1 */
    using FLASH_PRIVBB1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R1_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R1_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block-based bank 1 register 2 */
    using FLASH_PRIVBB1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R2_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R2_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block-based bank 1 register 3 */
    using FLASH_PRIVBB1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R3_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R3_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block-based bank 1 register 4 */
    using FLASH_PRIVBB1R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB1R4_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 1 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 1 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB1R4_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 2 register 1 */
    using FLASH_PRIVBB2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R1_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R1_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 2 register 2 */
    using FLASH_PRIVBB2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R2_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R2_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 2 register 3 */
    using FLASH_PRIVBB2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R3_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R3_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 2 register 4 */
    using FLASH_PRIVBB2R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R4_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R4_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 2 register 5 */
    using FLASH_PRIVBB2R5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R5_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R5_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 2 register 6 */
    using FLASH_PRIVBB2R6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R6_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R6_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 2 register 7 */
    using FLASH_PRIVBB2R7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R7_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R7_PRIV31_B_0x1 = 1;

    /** @brief FLASH privilege block based bank 2 register 8 */
    using FLASH_PRIVBB2R8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV0_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV0_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV1_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV1_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV2_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV2_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV3_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV3_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV4_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV4_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV5_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV5_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV6_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV6_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV7_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV7_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV8_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV8_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV9_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV9_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV10_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV10_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV11_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV11_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV12_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV12_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV13_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV13_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV14_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV14_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV15_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV15_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV16_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV16_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV17_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV17_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV18_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV18_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV19_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV19_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV20_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV20_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV21_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV21_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV22_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV22_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV23_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV23_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV24_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV24_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV25_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV25_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV26_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV26_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV27_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV27_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV28_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV28_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV29_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV29_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV30_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV30_B_0x1 = 1;

    /** @brief Page privileged/unprivileged attribution */
    using FLASH_PRIVBB2R8_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access (value: 0)
     *          - B_0x1: Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access (value: 1)
     */
        /** @brief Page (32 * (x - 1) + i) in bank 2 accessible by unprivileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV31_B_0x0 = 0;
        /** @brief Page (32 * (x - 1) + i) in bank 2 only accessible by privileged access */
    constexpr std::uint32_t FLASH_PRIVBB2R8_PRIV31_B_0x1 = 1;

    /** @brief FLASH OEM1 key register 1 */
    using FLASH_OEM1KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1[31:0] bytes key */
    using FLASH_OEM1KEYR1_OEM1KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM1 key register 2 */
    using FLASH_OEM1KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1[63:32] bytes key */
    using FLASH_OEM1KEYR2_OEM1KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM1 key register 3 */
    using FLASH_OEM1KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1[95:64] bytes key */
    using FLASH_OEM1KEYR3_OEM1KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM1 key register 4 */
    using FLASH_OEM1KEYR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM1[127:96] bytes key */
    using FLASH_OEM1KEYR4_OEM1KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM2 key register 1 */
    using FLASH_OEM2KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2[31:0] bytes key */
    using FLASH_OEM2KEYR1_OEM2KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM2 key register 2 */
    using FLASH_OEM2KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2[63:32] bytes key */
    using FLASH_OEM2KEYR2_OEM2KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM2 key register 3 */
    using FLASH_OEM2KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2[95:64] bytes key */
    using FLASH_OEM2KEYR3_OEM2KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM2 key register 4 */
    using FLASH_OEM2KEYR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OEM2[127:96] bytes key */
    using FLASH_OEM2KEYR4_OEM2KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH OEM key status register */
    using FLASH_OEMKEYSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit OEMKEY1 CRC */
    using FLASH_OEMKEYSR_OEM1KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit OEM2KEY CRC */
    using FLASH_OEMKEYSR_OEM2KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
