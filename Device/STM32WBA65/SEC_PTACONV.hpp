/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA65_SEC_PTACONV_HPP
#define EMBEDDED_PP_STM32WBA65_SEC_PTACONV_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PTACONV register block */
namespace STM32WBA65::SEC_PTACONV {

    /** @brief PTACONV active control register */
    using PTACONV_ACTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA_ACTIVE setup time in us */
    using PTACONV_ACTCR_TACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA_ACTIVE polarity */
    using PTACONV_ACTCR_ACTPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTA_ACTIVE active high (value: 0)
     *          - B_0x1: PTA_ACTIVE active low (value: 1)
     */
        /** @brief PTA_ACTIVE active high */
    constexpr std::uint32_t PTACONV_ACTCR_ACTPOL_B_0x0 = 0;
        /** @brief PTA_ACTIVE active low */
    constexpr std::uint32_t PTACONV_ACTCR_ACTPOL_B_0x1 = 1;

    /** @brief PTA_ACTIVE delay to cease an ongoing transmission in us */
    using PTACONV_ACTCR_TABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable PTA_ACTIVE deny to abort an ongoing transmission */
    using PTACONV_ACTCR_ABORTDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTA_ACTIVE deny will abort an ongoing transmission (value: 0)
     *          - B_0x1: PTA_ACTIVE deny will not abort an ongoing transmission (value: 1)
     */
        /** @brief PTA_ACTIVE deny will abort an ongoing transmission */
    constexpr std::uint32_t PTACONV_ACTCR_ABORTDIS_B_0x0 = 0;
        /** @brief PTA_ACTIVE deny will not abort an ongoing transmission */
    constexpr std::uint32_t PTACONV_ACTCR_ABORTDIS_B_0x1 = 1;

    /** @brief PTACONV priority control register */
    using PTACONV_PRICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Priority valid time in us */
    using PTACONV_PRICR_TPRIORITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: no time-multiplexed priority information on PTA_STATUS (value: 0)
     */
        /** @brief no time-multiplexed priority information on PTA_STATUS */
    constexpr std::uint32_t PTACONV_PRICR_TPRIORITY_B_0x00 = 0;

    /** @brief Priority polarity */
    using PTACONV_PRICR_PRIPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: priority on PTA_PRIORITY or PTA_STATUS not inverted (value: 0)
     *          - B_0x1: inverted priority on PTA_PRIORITY or PTA_STATUS (value: 1)
     */
        /** @brief priority on PTA_PRIORITY or PTA_STATUS not inverted */
    constexpr std::uint32_t PTACONV_PRICR_PRIPOL_B_0x0 = 0;
        /** @brief inverted priority on PTA_PRIORITY or PTA_STATUS */
    constexpr std::uint32_t PTACONV_PRICR_PRIPOL_B_0x1 = 1;

    /** @brief PTACONV control register */
    using PTACONV_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA_STATUS transmit and receive polarity */
    using PTACONV_CR_TXRXPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTA_STATUS receive = 0, transmit = 1 (value: 0)
     *          - B_0x1: PTA_STATUS receive = 1, transmit = 0 (value: 1)
     */
        /** @brief PTA_STATUS receive = 0, transmit = 1 */
    constexpr std::uint32_t PTACONV_CR_TXRXPOL_B_0x0 = 0;
        /** @brief PTA_STATUS receive = 1, transmit = 0 */
    constexpr std::uint32_t PTACONV_CR_TXRXPOL_B_0x1 = 1;

    /** @brief PTA_GRANT polarity */
    using PTACONV_CR_GRANTPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTA_GRANT active low (value: 0)
     *          - B_0x1: PTA_GRANT active high (value: 1)
     */
        /** @brief PTA_GRANT active low */
    constexpr std::uint32_t PTACONV_CR_GRANTPOL_B_0x0 = 0;
        /** @brief PTA_GRANT active high */
    constexpr std::uint32_t PTACONV_CR_GRANTPOL_B_0x1 = 1;

}

#endif
