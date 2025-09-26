/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_XSPIM_HPP
#define EMBEDDED_PP_STM32N657_XSPIM_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief XSPI I/O manager */
namespace STM32N657::XSPIM {

    /** @brief XSPIM control register */
    using XSPIM_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplexed mode enable */
    using XSPIM_CR_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No multiplexing, hence no arbitration (value: 0)
     *          - B_0x1: XSPI1 and XSPI2 are multiplexed over the same bus. (value: 1)
     */
        /** @brief No multiplexing, hence no arbitration */
    constexpr std::uint32_t XSPIM_CR_MUXEN_B_0x0 = 0;
        /** @brief XSPI1 and XSPI2 are multiplexed over the same bus. */
    constexpr std::uint32_t XSPIM_CR_MUXEN_B_0x1 = 1;

    /** @brief XSPI multiplexing mode */
    using XSPIM_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: if MUXEN = 0 direct mode, if MUXEN = 1 arbitration mode to output Port 1 (value: 0)
     *          - B_0x1: if MUXEN = 0 swapped mode, if MUXEN = 1 arbitration mode to output Port 2 (value: 1)
     */
        /** @brief if MUXEN = 0 direct mode, if MUXEN = 1 arbitration mode to output Port 1 */
    constexpr std::uint32_t XSPIM_CR_MODE_B_0x0 = 0;
        /** @brief if MUXEN = 0 swapped mode, if MUXEN = 1 arbitration mode to output Port 2 */
    constexpr std::uint32_t XSPIM_CR_MODE_B_0x1 = 1;

    /** @brief Chip select selector override enable */
    using XSPIM_CR_CSSEL_OVR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSSEL_OVR_O1 and CSSEL_OVR_O2 bit values are ignored, the chip select signals from OCTOSPIs or XSPIs are transmitted unconditionally (value: 0)
     *          - B_0x1: CSSEL_OVR_O1 and CSSEL_OVR_O2 bit values are taken into account (value: 1)
     */
        /** @brief CSSEL_OVR_O1 and CSSEL_OVR_O2 bit values are ignored, the chip select signals from OCTOSPIs or XSPIs are transmitted unconditionally */
    constexpr std::uint32_t XSPIM_CR_CSSEL_OVR_EN_B_0x0 = 0;
        /** @brief CSSEL_OVR_O1 and CSSEL_OVR_O2 bit values are taken into account */
    constexpr std::uint32_t XSPIM_CR_CSSEL_OVR_EN_B_0x1 = 1;

    /** @brief Chip select selector override setting for XSPI1 */
    using XSPIM_CR_CSSEL_OVR_O1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI1 can only use NCS1 (accesses using NCS2 are ignored) (value: 0)
     *          - B_0x1: XSPI1 can only use NCS2 (accesses using NCS1 are ignored) (value: 1)
     */
        /** @brief XSPI1 can only use NCS1 (accesses using NCS2 are ignored) */
    constexpr std::uint32_t XSPIM_CR_CSSEL_OVR_O1_B_0x0 = 0;
        /** @brief XSPI1 can only use NCS2 (accesses using NCS1 are ignored) */
    constexpr std::uint32_t XSPIM_CR_CSSEL_OVR_O1_B_0x1 = 1;

    /** @brief Chip select selector override setting for XSPI2 */
    using XSPIM_CR_CSSEL_OVR_O2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI2 can only use NCS1 (accesses using NCS2 are ignored) (value: 0)
     *          - B_0x1: XSPI2 can only use NCS2 (accesses using NCS1 are ignored) (value: 1)
     */
        /** @brief XSPI2 can only use NCS1 (accesses using NCS2 are ignored) */
    constexpr std::uint32_t XSPIM_CR_CSSEL_OVR_O2_B_0x0 = 0;
        /** @brief XSPI2 can only use NCS2 (accesses using NCS1 are ignored) */
    constexpr std::uint32_t XSPIM_CR_CSSEL_OVR_O2_B_0x1 = 1;

    /** @brief REQ to ACK time */
    using XSPIM_CR_REQ2ACK_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
