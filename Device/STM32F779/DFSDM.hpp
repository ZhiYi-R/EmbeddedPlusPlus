/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F779_DFSDM_HPP
#define EMBEDDED_PP_STM32F779_DFSDM_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital filter for sigma delta modulators */
namespace STM32F779::DFSDM {

    /** @brief DFSDM channel configuration 0 register 1 */
    using DFSDM_CHCFG0R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel 0 */
    using DFSDM_CHCFG0R1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI clock select for channel 0 */
    using DFSDM_CHCFG0R1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector enable on channel 0 */
    using DFSDM_CHCFG0R1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence detector enable on channel 0 */
    using DFSDM_CHCFG0R1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 enable */
    using DFSDM_CHCFG0R1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel inputs selection */
    using DFSDM_CHCFG0R1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data multiplexer for channel 0 */
    using DFSDM_CHCFG0R1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data packing mode in DFSDM_CHDATINyR register */
    using DFSDM_CHCFG0R1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock divider */
    using DFSDM_CHCFG0R1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock source selection */
    using DFSDM_CHCFG0R1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global enable for DFSDM interface */
    using DFSDM_CHCFG0R1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 1 register 1 */
    using DFSDM_CHCFG1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel 1 */
    using DFSDM_CHCFG1R1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI clock select for channel 1 */
    using DFSDM_CHCFG1R1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector enable on channel 1 */
    using DFSDM_CHCFG1R1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence detector enable on channel 1 */
    using DFSDM_CHCFG1R1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 enable */
    using DFSDM_CHCFG1R1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel inputs selection */
    using DFSDM_CHCFG1R1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data multiplexer for channel 1 */
    using DFSDM_CHCFG1R1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data packing mode in DFSDM_CHDATINyR register */
    using DFSDM_CHCFG1R1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock divider */
    using DFSDM_CHCFG1R1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock source selection */
    using DFSDM_CHCFG1R1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global enable for DFSDM interface */
    using DFSDM_CHCFG1R1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 2 register 1 */
    using DFSDM_CHCFG2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel 2 */
    using DFSDM_CHCFG2R1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI clock select for channel 2 */
    using DFSDM_CHCFG2R1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector enable on channel 2 */
    using DFSDM_CHCFG2R1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence detector enable on channel 2 */
    using DFSDM_CHCFG2R1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 2 enable */
    using DFSDM_CHCFG2R1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel inputs selection */
    using DFSDM_CHCFG2R1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data multiplexer for channel 2 */
    using DFSDM_CHCFG2R1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data packing mode in DFSDM_CHDATINyR register */
    using DFSDM_CHCFG2R1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock divider */
    using DFSDM_CHCFG2R1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock source selection */
    using DFSDM_CHCFG2R1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global enable for DFSDM interface */
    using DFSDM_CHCFG2R1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 3 register 1 */
    using DFSDM_CHCFG3R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel 3 */
    using DFSDM_CHCFG3R1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI clock select for channel 3 */
    using DFSDM_CHCFG3R1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector enable on channel 3 */
    using DFSDM_CHCFG3R1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence detector enable on channel 3 */
    using DFSDM_CHCFG3R1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 3 enable */
    using DFSDM_CHCFG3R1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel inputs selection */
    using DFSDM_CHCFG3R1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data multiplexer for channel 3 */
    using DFSDM_CHCFG3R1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data packing mode in DFSDM_CHDATINyR register */
    using DFSDM_CHCFG3R1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock divider */
    using DFSDM_CHCFG3R1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock source selection */
    using DFSDM_CHCFG3R1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global enable for DFSDM interface */
    using DFSDM_CHCFG3R1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 4 register 1 */
    using DFSDM_CHCFG4R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel 4 */
    using DFSDM_CHCFG4R1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI clock select for channel 4 */
    using DFSDM_CHCFG4R1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector enable on channel 4 */
    using DFSDM_CHCFG4R1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence detector enable on channel 4 */
    using DFSDM_CHCFG4R1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 4 enable */
    using DFSDM_CHCFG4R1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel inputs selection */
    using DFSDM_CHCFG4R1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data multiplexer for channel 4 */
    using DFSDM_CHCFG4R1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data packing mode in DFSDM_CHDATINyR register */
    using DFSDM_CHCFG4R1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock divider */
    using DFSDM_CHCFG4R1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock source selection */
    using DFSDM_CHCFG4R1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global enable for DFSDM interface */
    using DFSDM_CHCFG4R1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 5 register 1 */
    using DFSDM_CHCFG5R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel 5 */
    using DFSDM_CHCFG5R1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI clock select for channel 5 */
    using DFSDM_CHCFG5R1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector enable on channel 5 */
    using DFSDM_CHCFG5R1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence detector enable on channel 5 */
    using DFSDM_CHCFG5R1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 5 enable */
    using DFSDM_CHCFG5R1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel inputs selection */
    using DFSDM_CHCFG5R1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data multiplexer for channel 5 */
    using DFSDM_CHCFG5R1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data packing mode in DFSDM_CHDATINyR register */
    using DFSDM_CHCFG5R1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock divider */
    using DFSDM_CHCFG5R1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock source selection */
    using DFSDM_CHCFG5R1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global enable for DFSDM interface */
    using DFSDM_CHCFG5R1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 6 register 1 */
    using DFSDM_CHCFG6R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel 6 */
    using DFSDM_CHCFG6R1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI clock select for channel 6 */
    using DFSDM_CHCFG6R1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector enable on channel 6 */
    using DFSDM_CHCFG6R1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence detector enable on channel 6 */
    using DFSDM_CHCFG6R1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 6 enable */
    using DFSDM_CHCFG6R1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel inputs selection */
    using DFSDM_CHCFG6R1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data multiplexer for channel 6 */
    using DFSDM_CHCFG6R1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data packing mode in DFSDM_CHDATINyR register */
    using DFSDM_CHCFG6R1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock divider */
    using DFSDM_CHCFG6R1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock source selection */
    using DFSDM_CHCFG6R1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global enable for DFSDM interface */
    using DFSDM_CHCFG6R1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 7 register 1 */
    using DFSDM_CHCFG7R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel 7 */
    using DFSDM_CHCFG7R1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI clock select for channel 7 */
    using DFSDM_CHCFG7R1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector enable on channel 7 */
    using DFSDM_CHCFG7R1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence detector enable on channel 7 */
    using DFSDM_CHCFG7R1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 7 enable */
    using DFSDM_CHCFG7R1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel inputs selection */
    using DFSDM_CHCFG7R1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data multiplexer for channel 7 */
    using DFSDM_CHCFG7R1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data packing mode in DFSDM_CHDATINyR register */
    using DFSDM_CHCFG7R1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock divider */
    using DFSDM_CHCFG7R1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output serial clock source selection */
    using DFSDM_CHCFG7R1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global enable for DFSDM interface */
    using DFSDM_CHCFG7R1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 0 register 2 */
    using DFSDM_CHCFG0R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel 0 */
    using DFSDM_CHCFG0R2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel 0 */
    using DFSDM_CHCFG0R2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 1 register 2 */
    using DFSDM_CHCFG1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel 1 */
    using DFSDM_CHCFG1R2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel 1 */
    using DFSDM_CHCFG1R2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 2 register 2 */
    using DFSDM_CHCFG2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel 2 */
    using DFSDM_CHCFG2R2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel 2 */
    using DFSDM_CHCFG2R2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 3 register 2 */
    using DFSDM_CHCFG3R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel 3 */
    using DFSDM_CHCFG3R2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel 3 */
    using DFSDM_CHCFG3R2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 4 register 2 */
    using DFSDM_CHCFG4R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel 4 */
    using DFSDM_CHCFG4R2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel 4 */
    using DFSDM_CHCFG4R2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 5 register 2 */
    using DFSDM_CHCFG5R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel 5 */
    using DFSDM_CHCFG5R2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel 5 */
    using DFSDM_CHCFG5R2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 6 register 2 */
    using DFSDM_CHCFG6R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel 6 */
    using DFSDM_CHCFG6R2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel 6 */
    using DFSDM_CHCFG6R2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel configuration 7 register 2 */
    using DFSDM_CHCFG7R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel 7 */
    using DFSDM_CHCFG7R2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel 7 */
    using DFSDM_CHCFG7R2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog and short-circuit detector register */
    using DFSDM_AWSCD0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel 0 */
    using DFSDM_AWSCD0R_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel 0 */
    using DFSDM_AWSCD0R_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel 0 */
    using DFSDM_AWSCD0R_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel 0 */
    using DFSDM_AWSCD0R_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog and short-circuit detector register */
    using DFSDM_AWSCD1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel 1 */
    using DFSDM_AWSCD1R_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel 1 */
    using DFSDM_AWSCD1R_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel 1 */
    using DFSDM_AWSCD1R_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel 1 */
    using DFSDM_AWSCD1R_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog and short-circuit detector register */
    using DFSDM_AWSCD2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel 2 */
    using DFSDM_AWSCD2R_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel 2 */
    using DFSDM_AWSCD2R_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel 2 */
    using DFSDM_AWSCD2R_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel 2 */
    using DFSDM_AWSCD2R_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog and short-circuit detector register */
    using DFSDM_AWSCD3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel 3 */
    using DFSDM_AWSCD3R_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel 3 */
    using DFSDM_AWSCD3R_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel 3 */
    using DFSDM_AWSCD3R_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel 3 */
    using DFSDM_AWSCD3R_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog and short-circuit detector register */
    using DFSDM_AWSCD4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel 4 */
    using DFSDM_AWSCD4R_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel 4 */
    using DFSDM_AWSCD4R_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel 4 */
    using DFSDM_AWSCD4R_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel 4 */
    using DFSDM_AWSCD4R_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog and short-circuit detector register */
    using DFSDM_AWSCD5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel 5 */
    using DFSDM_AWSCD5R_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel 5 */
    using DFSDM_AWSCD5R_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel 5 */
    using DFSDM_AWSCD5R_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel 5 */
    using DFSDM_AWSCD5R_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog and short-circuit detector register */
    using DFSDM_AWSCD6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel 6 */
    using DFSDM_AWSCD6R_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel 6 */
    using DFSDM_AWSCD6R_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel 6 */
    using DFSDM_AWSCD6R_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel 6 */
    using DFSDM_AWSCD6R_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog and short-circuit detector register */
    using DFSDM_AWSCD7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel 7 */
    using DFSDM_AWSCD7R_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel 7 */
    using DFSDM_AWSCD7R_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel 7 */
    using DFSDM_AWSCD7R_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel 7 */
    using DFSDM_AWSCD7R_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel watchdog filter data register */
    using DFSDM_CHWDAT0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data */
    using DFSDM_CHWDAT0R_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel watchdog filter data register */
    using DFSDM_CHWDAT1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data */
    using DFSDM_CHWDAT1R_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel watchdog filter data register */
    using DFSDM_CHWDAT2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data */
    using DFSDM_CHWDAT2R_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel watchdog filter data register */
    using DFSDM_CHWDAT3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data */
    using DFSDM_CHWDAT3R_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel watchdog filter data register */
    using DFSDM_CHWDAT4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data */
    using DFSDM_CHWDAT4R_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel watchdog filter data register */
    using DFSDM_CHWDAT5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data */
    using DFSDM_CHWDAT5R_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel watchdog filter data register */
    using DFSDM_CHWDAT6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data */
    using DFSDM_CHWDAT6R_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel watchdog filter data register */
    using DFSDM_CHWDAT7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data */
    using DFSDM_CHWDAT7R_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel data input register */
    using DFSDM_CHDATIN0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 0 */
    using DFSDM_CHDATIN0R_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 1 */
    using DFSDM_CHDATIN0R_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel data input register */
    using DFSDM_CHDATIN1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 1 */
    using DFSDM_CHDATIN1R_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 2 */
    using DFSDM_CHDATIN1R_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel data input register */
    using DFSDM_CHDATIN2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 2 */
    using DFSDM_CHDATIN2R_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 3 */
    using DFSDM_CHDATIN2R_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel data input register */
    using DFSDM_CHDATIN3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 3 */
    using DFSDM_CHDATIN3R_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 4 */
    using DFSDM_CHDATIN3R_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel data input register */
    using DFSDM_CHDATIN4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 4 */
    using DFSDM_CHDATIN4R_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 5 */
    using DFSDM_CHDATIN4R_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel data input register */
    using DFSDM_CHDATIN5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 5 */
    using DFSDM_CHDATIN5R_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 6 */
    using DFSDM_CHDATIN5R_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel data input register */
    using DFSDM_CHDATIN6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 6 */
    using DFSDM_CHDATIN6R_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 7 */
    using DFSDM_CHDATIN6R_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel data input register */
    using DFSDM_CHDATIN7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 7 */
    using DFSDM_CHDATIN7R_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel 8 */
    using DFSDM_CHDATIN7R_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM control register 1 */
    using DFSDM0_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM enable */
    using DFSDM0_CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start a conversion of the injected group of channels */
    using DFSDM0_CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger */
    using DFSDM0_CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scanning conversion mode for injected conversions */
    using DFSDM0_CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the injected channel group */
    using DFSDM0_CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger signal selection for launching injected conversions */
    using DFSDM0_CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions */
    using DFSDM0_CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software start of a conversion on the regular channel */
    using DFSDM0_CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous mode selection for regular conversions */
    using DFSDM0_CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch regular conversion synchronously with DFSDM0 */
    using DFSDM0_CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the regular conversion */
    using DFSDM0_CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel selection */
    using DFSDM0_CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast conversion mode selection for regular conversions */
    using DFSDM0_CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog fast mode select */
    using DFSDM0_CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM control register 1 */
    using DFSDM1_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM enable */
    using DFSDM1_CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start a conversion of the injected group of channels */
    using DFSDM1_CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger */
    using DFSDM1_CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scanning conversion mode for injected conversions */
    using DFSDM1_CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the injected channel group */
    using DFSDM1_CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger signal selection for launching injected conversions */
    using DFSDM1_CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions */
    using DFSDM1_CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software start of a conversion on the regular channel */
    using DFSDM1_CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous mode selection for regular conversions */
    using DFSDM1_CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch regular conversion synchronously with DFSDM0 */
    using DFSDM1_CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the regular conversion */
    using DFSDM1_CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel selection */
    using DFSDM1_CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast conversion mode selection for regular conversions */
    using DFSDM1_CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog fast mode select */
    using DFSDM1_CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM control register 1 */
    using DFSDM2_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM enable */
    using DFSDM2_CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start a conversion of the injected group of channels */
    using DFSDM2_CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger */
    using DFSDM2_CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scanning conversion mode for injected conversions */
    using DFSDM2_CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the injected channel group */
    using DFSDM2_CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger signal selection for launching injected conversions */
    using DFSDM2_CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions */
    using DFSDM2_CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software start of a conversion on the regular channel */
    using DFSDM2_CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous mode selection for regular conversions */
    using DFSDM2_CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch regular conversion synchronously with DFSDM0 */
    using DFSDM2_CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the regular conversion */
    using DFSDM2_CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel selection */
    using DFSDM2_CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast conversion mode selection for regular conversions */
    using DFSDM2_CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog fast mode select */
    using DFSDM2_CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM control register 1 */
    using DFSDM3_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM enable */
    using DFSDM3_CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start a conversion of the injected group of channels */
    using DFSDM3_CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger */
    using DFSDM3_CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scanning conversion mode for injected conversions */
    using DFSDM3_CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the injected channel group */
    using DFSDM3_CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger signal selection for launching injected conversions */
    using DFSDM3_CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions */
    using DFSDM3_CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software start of a conversion on the regular channel */
    using DFSDM3_CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous mode selection for regular conversions */
    using DFSDM3_CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch regular conversion synchronously with DFSDM0 */
    using DFSDM3_CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the regular conversion */
    using DFSDM3_CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel selection */
    using DFSDM3_CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast conversion mode selection for regular conversions */
    using DFSDM3_CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog fast mode select */
    using DFSDM3_CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM control register 2 */
    using DFSDM0_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable */
    using DFSDM0_CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular end of conversion interrupt enable */
    using DFSDM0_CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data overrun interrupt enable */
    using DFSDM0_CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data overrun interrupt enable */
    using DFSDM0_CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog interrupt enable */
    using DFSDM0_CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector interrupt enable */
    using DFSDM0_CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence interrupt enable */
    using DFSDM0_CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector channel selection */
    using DFSDM0_CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection */
    using DFSDM0_CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM control register 2 */
    using DFSDM1_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable */
    using DFSDM1_CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular end of conversion interrupt enable */
    using DFSDM1_CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data overrun interrupt enable */
    using DFSDM1_CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data overrun interrupt enable */
    using DFSDM1_CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog interrupt enable */
    using DFSDM1_CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector interrupt enable */
    using DFSDM1_CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence interrupt enable */
    using DFSDM1_CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector channel selection */
    using DFSDM1_CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection */
    using DFSDM1_CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM control register 2 */
    using DFSDM2_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable */
    using DFSDM2_CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular end of conversion interrupt enable */
    using DFSDM2_CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data overrun interrupt enable */
    using DFSDM2_CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data overrun interrupt enable */
    using DFSDM2_CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog interrupt enable */
    using DFSDM2_CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector interrupt enable */
    using DFSDM2_CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence interrupt enable */
    using DFSDM2_CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector channel selection */
    using DFSDM2_CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection */
    using DFSDM2_CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM control register 2 */
    using DFSDM3_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable */
    using DFSDM3_CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular end of conversion interrupt enable */
    using DFSDM3_CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data overrun interrupt enable */
    using DFSDM3_CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data overrun interrupt enable */
    using DFSDM3_CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog interrupt enable */
    using DFSDM3_CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector interrupt enable */
    using DFSDM3_CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence interrupt enable */
    using DFSDM3_CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector channel selection */
    using DFSDM3_CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection */
    using DFSDM3_CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM interrupt and status register */
    using DFSDM0_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag */
    using DFSDM0_ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion flag */
    using DFSDM0_ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion overrun flag */
    using DFSDM0_ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion overrun flag */
    using DFSDM0_ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog */
    using DFSDM0_ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion in progress status */
    using DFSDM0_ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion in progress status */
    using DFSDM0_ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence flag */
    using DFSDM0_ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag */
    using DFSDM0_ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM interrupt and status register */
    using DFSDM1_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag */
    using DFSDM1_ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion flag */
    using DFSDM1_ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion overrun flag */
    using DFSDM1_ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion overrun flag */
    using DFSDM1_ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog */
    using DFSDM1_ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion in progress status */
    using DFSDM1_ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion in progress status */
    using DFSDM1_ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence flag */
    using DFSDM1_ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag */
    using DFSDM1_ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM interrupt and status register */
    using DFSDM2_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag */
    using DFSDM2_ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion flag */
    using DFSDM2_ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion overrun flag */
    using DFSDM2_ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion overrun flag */
    using DFSDM2_ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog */
    using DFSDM2_ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion in progress status */
    using DFSDM2_ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion in progress status */
    using DFSDM2_ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence flag */
    using DFSDM2_ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag */
    using DFSDM2_ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM interrupt and status register */
    using DFSDM3_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag */
    using DFSDM3_ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion flag */
    using DFSDM3_ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion overrun flag */
    using DFSDM3_ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion overrun flag */
    using DFSDM3_ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog */
    using DFSDM3_ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion in progress status */
    using DFSDM3_ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion in progress status */
    using DFSDM3_ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence flag */
    using DFSDM3_ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag */
    using DFSDM3_ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM interrupt flag clear register */
    using DFSDM0_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM0_ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the regular conversion overrun flag */
    using DFSDM0_ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the clock absence flag */
    using DFSDM0_ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag */
    using DFSDM0_ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM interrupt flag clear register */
    using DFSDM1_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM1_ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the regular conversion overrun flag */
    using DFSDM1_ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the clock absence flag */
    using DFSDM1_ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag */
    using DFSDM1_ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM interrupt flag clear register */
    using DFSDM2_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM2_ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the regular conversion overrun flag */
    using DFSDM2_ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the clock absence flag */
    using DFSDM2_ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag */
    using DFSDM2_ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM interrupt flag clear register */
    using DFSDM3_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM3_ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the regular conversion overrun flag */
    using DFSDM3_ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the clock absence flag */
    using DFSDM3_ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag */
    using DFSDM3_ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM injected channel group selection register */
    using DFSDM0_JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection */
    using DFSDM0_JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM injected channel group selection register */
    using DFSDM1_JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection */
    using DFSDM1_JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM injected channel group selection register */
    using DFSDM2_JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection */
    using DFSDM2_JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM injected channel group selection register */
    using DFSDM3_JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection */
    using DFSDM3_JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM filter control register */
    using DFSDM0_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) */
    using DFSDM0_FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) */
    using DFSDM0_FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order */
    using DFSDM0_FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM filter control register */
    using DFSDM1_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) */
    using DFSDM1_FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) */
    using DFSDM1_FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order */
    using DFSDM1_FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM filter control register */
    using DFSDM2_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) */
    using DFSDM2_FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) */
    using DFSDM2_FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order */
    using DFSDM2_FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM filter control register */
    using DFSDM3_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) */
    using DFSDM3_FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) */
    using DFSDM3_FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order */
    using DFSDM3_FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM data register for injected group */
    using DFSDM0_JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted */
    using DFSDM0_JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data */
    using DFSDM0_JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM data register for injected group */
    using DFSDM1_JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted */
    using DFSDM1_JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data */
    using DFSDM1_JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM data register for injected group */
    using DFSDM2_JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted */
    using DFSDM2_JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data */
    using DFSDM2_JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM data register for injected group */
    using DFSDM3_JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted */
    using DFSDM3_JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data */
    using DFSDM3_JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM data register for the regular channel */
    using DFSDM0_RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted */
    using DFSDM0_RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data */
    using DFSDM0_RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data */
    using DFSDM0_RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM data register for the regular channel */
    using DFSDM1_RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted */
    using DFSDM1_RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data */
    using DFSDM1_RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data */
    using DFSDM1_RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM data register for the regular channel */
    using DFSDM2_RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted */
    using DFSDM2_RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data */
    using DFSDM2_RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data */
    using DFSDM2_RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM data register for the regular channel */
    using DFSDM3_RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted */
    using DFSDM3_RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data */
    using DFSDM3_RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data */
    using DFSDM3_RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog high threshold register */
    using DFSDM0_AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event */
    using DFSDM0_AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold */
    using DFSDM0_AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog high threshold register */
    using DFSDM1_AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event */
    using DFSDM1_AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold */
    using DFSDM1_AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog high threshold register */
    using DFSDM2_AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event */
    using DFSDM2_AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold */
    using DFSDM2_AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog high threshold register */
    using DFSDM3_AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event */
    using DFSDM3_AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold */
    using DFSDM3_AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog low threshold register */
    using DFSDM0_AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event */
    using DFSDM0_AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold */
    using DFSDM0_AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog low threshold register */
    using DFSDM1_AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event */
    using DFSDM1_AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold */
    using DFSDM1_AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog low threshold register */
    using DFSDM2_AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event */
    using DFSDM2_AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold */
    using DFSDM2_AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog low threshold register */
    using DFSDM3_AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event */
    using DFSDM3_AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold */
    using DFSDM3_AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog status register */
    using DFSDM0_AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag */
    using DFSDM0_AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag */
    using DFSDM0_AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog status register */
    using DFSDM1_AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag */
    using DFSDM1_AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag */
    using DFSDM1_AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog status register */
    using DFSDM2_AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag */
    using DFSDM2_AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag */
    using DFSDM2_AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog status register */
    using DFSDM3_AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag */
    using DFSDM3_AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag */
    using DFSDM3_AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog clear flag register */
    using DFSDM0_AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag */
    using DFSDM0_AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag */
    using DFSDM0_AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog clear flag register */
    using DFSDM1_AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag */
    using DFSDM1_AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag */
    using DFSDM1_AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog clear flag register */
    using DFSDM2_AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag */
    using DFSDM2_AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag */
    using DFSDM2_AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM analog watchdog clear flag register */
    using DFSDM3_AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag */
    using DFSDM3_AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag */
    using DFSDM3_AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM Extremes detector maximum register */
    using DFSDM0_EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel */
    using DFSDM0_EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value */
    using DFSDM0_EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM Extremes detector maximum register */
    using DFSDM1_EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel */
    using DFSDM1_EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value */
    using DFSDM1_EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM Extremes detector maximum register */
    using DFSDM2_EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel */
    using DFSDM2_EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value */
    using DFSDM2_EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM Extremes detector maximum register */
    using DFSDM3_EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel */
    using DFSDM3_EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value */
    using DFSDM3_EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM Extremes detector minimum register */
    using DFSDM0_EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel */
    using DFSDM0_EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value */
    using DFSDM0_EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM Extremes detector minimum register */
    using DFSDM1_EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel */
    using DFSDM1_EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value */
    using DFSDM1_EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM Extremes detector minimum register */
    using DFSDM2_EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel */
    using DFSDM2_EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value */
    using DFSDM2_EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM Extremes detector minimum register */
    using DFSDM3_EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel */
    using DFSDM3_EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value */
    using DFSDM3_EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM conversion timer register */
    using DFSDM0_CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time */
    using DFSDM0_CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM conversion timer register */
    using DFSDM1_CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time */
    using DFSDM1_CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM conversion timer register */
    using DFSDM2_CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time */
    using DFSDM2_CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM conversion timer register */
    using DFSDM3_CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time */
    using DFSDM3_CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
