/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_CSI_HPP
#define EMBEDDED_PP_STM32N655_CSI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief CSI-2 Host */
namespace STM32N655::CSI {

    /** @brief CSI-2 Host control register */
    using CSI_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 enable */
    using CSI_CR_CSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI-2 disabled (value: 0)
     *          - B_0x1: CSI-2 enabled (value: 1)
     */
        /** @brief CSI-2 disabled */
    constexpr std::uint32_t CSI_CR_CSIEN_B_0x0 = 0;
        /** @brief CSI-2 enabled */
    constexpr std::uint32_t CSI_CR_CSIEN_B_0x1 = 1;

    /** @brief Virtual channel 0 start */
    using CSI_CR_VC0START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Pulse generation to start the virtual channel 0 processing (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CSI_CR_VC0START_B_0x0 = 0;
        /** @brief Pulse generation to start the virtual channel 0 processing */
    constexpr std::uint32_t CSI_CR_VC0START_B_0x1 = 1;

    /** @brief Virtual channel 0 stop */
    using CSI_CR_VC0STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Pulse generation to stop the virtual channel 0 processing (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CSI_CR_VC0STOP_B_0x0 = 0;
        /** @brief Pulse generation to stop the virtual channel 0 processing */
    constexpr std::uint32_t CSI_CR_VC0STOP_B_0x1 = 1;

    /** @brief Virtual channel 1 start */
    using CSI_CR_VC1START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Pulse generation to start the virtual channel 1 processing (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CSI_CR_VC1START_B_0x0 = 0;
        /** @brief Pulse generation to start the virtual channel 1 processing */
    constexpr std::uint32_t CSI_CR_VC1START_B_0x1 = 1;

    /** @brief Virtual channel 1 stop */
    using CSI_CR_VC1STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Pulse generation to stop the virtual channel 1 processing (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CSI_CR_VC1STOP_B_0x0 = 0;
        /** @brief Pulse generation to stop the virtual channel 1 processing */
    constexpr std::uint32_t CSI_CR_VC1STOP_B_0x1 = 1;

    /** @brief Virtual channel 2 start */
    using CSI_CR_VC2START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Pulse generation to start the virtual channel 2 processing (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CSI_CR_VC2START_B_0x0 = 0;
        /** @brief Pulse generation to start the virtual channel 2 processing */
    constexpr std::uint32_t CSI_CR_VC2START_B_0x1 = 1;

    /** @brief Virtual channel 2 stop */
    using CSI_CR_VC2STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Pulse generation to stop the virtual channel 2 processing (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CSI_CR_VC2STOP_B_0x0 = 0;
        /** @brief Pulse generation to stop the virtual channel 2 processing */
    constexpr std::uint32_t CSI_CR_VC2STOP_B_0x1 = 1;

    /** @brief Virtual channel 3 start */
    using CSI_CR_VC3START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Pulse generation to start the virtual channel 3 processing (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CSI_CR_VC3START_B_0x0 = 0;
        /** @brief Pulse generation to start the virtual channel 3 processing */
    constexpr std::uint32_t CSI_CR_VC3START_B_0x1 = 1;

    /** @brief Virtual channel 3 stop */
    using CSI_CR_VC3STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Pulse generation to stop the virtual channel 3 processing (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CSI_CR_VC3STOP_B_0x0 = 0;
        /** @brief Pulse generation to stop the virtual channel 3 processing */
    constexpr std::uint32_t CSI_CR_VC3STOP_B_0x1 = 1;

    /** @brief CSI-2 Host DPHY_RX control register */
    using CSI_PCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power down */
    using CSI_PCR_PWRDOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active state (value: 0)
     *          - B_0x1: Power down the D-PHY_RX (value: 1)
     */
        /** @brief Active state */
    constexpr std::uint32_t CSI_PCR_PWRDOWN_B_0x0 = 0;
        /** @brief Power down the D-PHY_RX */
    constexpr std::uint32_t CSI_PCR_PWRDOWN_B_0x1 = 1;

    /** @brief Clock lane enable */
    using CSI_PCR_CLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock lanes disabled (value: 0)
     *          - B_0x1: Clock lanes enabled (value: 1)
     */
        /** @brief Clock lanes disabled */
    constexpr std::uint32_t CSI_PCR_CLEN_B_0x0 = 0;
        /** @brief Clock lanes enabled */
    constexpr std::uint32_t CSI_PCR_CLEN_B_0x1 = 1;

    /** @brief D-PHY_RX data lane 0 enable */
    using CSI_PCR_DL0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data lane 0 module is in shutdown mode. (value: 0)
     *          - B_0x1: Enable the data lane 0 module. (value: 1)
     */
        /** @brief Data lane 0 module is in shutdown mode. */
    constexpr std::uint32_t CSI_PCR_DL0EN_B_0x0 = 0;
        /** @brief Enable the data lane 0 module. */
    constexpr std::uint32_t CSI_PCR_DL0EN_B_0x1 = 1;

    /** @brief D-PHY_RX data lane 1 enable */
    using CSI_PCR_DL1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data lane 1 module is in shutdown mode. (value: 0)
     *          - B_0x1: Enable the data lane 1 module. (value: 1)
     */
        /** @brief Data lane 1 module is in shutdown mode. */
    constexpr std::uint32_t CSI_PCR_DL1EN_B_0x0 = 0;
        /** @brief Enable the data lane 1 module. */
    constexpr std::uint32_t CSI_PCR_DL1EN_B_0x1 = 1;

    /** @brief CSI-2 Host virtual channel 0 configuration register 1 */
    using CSI_VC0CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All data types enable for the virtual channel x */
    using CSI_VC0CFGR1_ALLDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type capture managed individually (value: 0)
     *          - B_0x1: All data types captured for virtual channel x (value: 1)
     */
        /** @brief Data type capture managed individually */
    constexpr std::uint32_t CSI_VC0CFGR1_ALLDT_B_0x0 = 0;
        /** @brief All data types captured for virtual channel x */
    constexpr std::uint32_t CSI_VC0CFGR1_ALLDT_B_0x1 = 1;

    /** @brief Data type 0 enable */
    using CSI_VC0CFGR1_DT0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 0 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 0 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 0 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0EN_B_0x0 = 0;
        /** @brief Data type 0 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0EN_B_0x1 = 1;

    /** @brief Data type 1 enable */
    using CSI_VC0CFGR1_DT1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 1 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 1 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 1 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT1EN_B_0x0 = 0;
        /** @brief Data type 1 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT1EN_B_0x1 = 1;

    /** @brief Data type 2 enable */
    using CSI_VC0CFGR1_DT2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 2 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 2 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 2 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT2EN_B_0x0 = 0;
        /** @brief Data type 2 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT2EN_B_0x1 = 1;

    /** @brief Data type 3 enable */
    using CSI_VC0CFGR1_DT3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 3 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 3 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 3 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT3EN_B_0x0 = 0;
        /** @brief Data type 3 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT3EN_B_0x1 = 1;

    /** @brief Data type 4 enable */
    using CSI_VC0CFGR1_DT4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 4 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 4 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 4 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT4EN_B_0x0 = 0;
        /** @brief Data type 4 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT4EN_B_0x1 = 1;

    /** @brief Data type 5 enable */
    using CSI_VC0CFGR1_DT5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 5 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 5 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 5 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT5EN_B_0x0 = 0;
        /** @brief Data type 5 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT5EN_B_0x1 = 1;

    /** @brief Data type 6 enable */
    using CSI_VC0CFGR1_DT6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 6 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 6 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 6 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT6EN_B_0x0 = 0;
        /** @brief Data type 6 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC0CFGR1_DT6EN_B_0x1 = 1;

    /** @brief Common format for all data types */
    using CSI_VC0CFGR1_CDTFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC0CFGR1_CDTFT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC0CFGR1_CDTFT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC0CFGR1_CDTFT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC0CFGR1_CDTFT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC0CFGR1_CDTFT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC0CFGR1_CDTFT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC0CFGR1_CDTFT_BPP16 = 6;

    /** @brief Data type 0 class selection for virtual channel x */
    using CSI_VC0CFGR1_DT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 0 format */
    using CSI_VC0CFGR1_DT0FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC0CFGR1_DT0FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 0 configuration register 2 */
    using CSI_VC0CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 1 class selection for virtual channel x */
    using CSI_VC0CFGR2_DT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 1 format */
    using CSI_VC0CFGR2_DT1FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7 -it words (for example RAW7) (value: 1)
     *          - BPP8: 8 -it words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12 -it words (for example RAW12) (value: 4)
     *          - BPP14: 14 -it words (for example RAW14) (value: 5)
     *          - BPP16: 16 -it words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT1FT_BPP6 = 0;
        /** @brief 7 -it words (for example RAW7) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT1FT_BPP7 = 1;
        /** @brief 8 -it words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT1FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT1FT_BPP10 = 3;
        /** @brief 12 -it words (for example RAW12) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT1FT_BPP12 = 4;
        /** @brief 14 -it words (for example RAW14) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT1FT_BPP14 = 5;
        /** @brief 16 -it words (for example RAW16) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT1FT_BPP16 = 6;

    /** @brief Data type 2 class selection for virtual channel x */
    using CSI_VC0CFGR2_DT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 2 format */
    using CSI_VC0CFGR2_DT2FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT2FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT2FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT2FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT2FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT2FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT2FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC0CFGR2_DT2FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 0 configuration register 3 */
    using CSI_VC0CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 3 class selection for virtual channel x */
    using CSI_VC0CFGR3_DT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 3 format */
    using CSI_VC0CFGR3_DT3FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT3FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT3FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT3FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT3FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT3FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT3FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT3FT_BPP16 = 6;

    /** @brief Data type 4 class selection for virtual channel x */
    using CSI_VC0CFGR3_DT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 4 format */
    using CSI_VC0CFGR3_DT4FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT4FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT4FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT4FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT4FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT4FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT4FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC0CFGR3_DT4FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 0 configuration register 4 */
    using CSI_VC0CFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 5 class selection for virtual channel x */
    using CSI_VC0CFGR4_DT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 5 format */
    using CSI_VC0CFGR4_DT5FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT5FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT5FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT5FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT5FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT5FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT5FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT5FT_BPP16 = 6;

    /** @brief Data type 6 class selection for virtual channel x */
    using CSI_VC0CFGR4_DT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 6 format */
    using CSI_VC0CFGR4_DT6FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT6FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT6FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT6FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT6FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT6FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT6FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC0CFGR4_DT6FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 1 configuration register 1 */
    using CSI_VC1CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All data types enable for the virtual channel x */
    using CSI_VC1CFGR1_ALLDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type capture managed individually (value: 0)
     *          - B_0x1: All data types captured for virtual channel x (value: 1)
     */
        /** @brief Data type capture managed individually */
    constexpr std::uint32_t CSI_VC1CFGR1_ALLDT_B_0x0 = 0;
        /** @brief All data types captured for virtual channel x */
    constexpr std::uint32_t CSI_VC1CFGR1_ALLDT_B_0x1 = 1;

    /** @brief Data type 0 enable */
    using CSI_VC1CFGR1_DT0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 0 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 0 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 0 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0EN_B_0x0 = 0;
        /** @brief Data type 0 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0EN_B_0x1 = 1;

    /** @brief Data type 1 enable */
    using CSI_VC1CFGR1_DT1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 1 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 1 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 1 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT1EN_B_0x0 = 0;
        /** @brief Data type 1 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT1EN_B_0x1 = 1;

    /** @brief Data type 2 enable */
    using CSI_VC1CFGR1_DT2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 2 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 2 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 2 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT2EN_B_0x0 = 0;
        /** @brief Data type 2 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT2EN_B_0x1 = 1;

    /** @brief Data type 3 enable */
    using CSI_VC1CFGR1_DT3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 3 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 3 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 3 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT3EN_B_0x0 = 0;
        /** @brief Data type 3 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT3EN_B_0x1 = 1;

    /** @brief Data type 4 enable */
    using CSI_VC1CFGR1_DT4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 4 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 4 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 4 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT4EN_B_0x0 = 0;
        /** @brief Data type 4 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT4EN_B_0x1 = 1;

    /** @brief Data type 5 enable */
    using CSI_VC1CFGR1_DT5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 5 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 5 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 5 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT5EN_B_0x0 = 0;
        /** @brief Data type 5 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT5EN_B_0x1 = 1;

    /** @brief Data type 6 enable */
    using CSI_VC1CFGR1_DT6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 6 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 6 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 6 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT6EN_B_0x0 = 0;
        /** @brief Data type 6 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC1CFGR1_DT6EN_B_0x1 = 1;

    /** @brief Common format for all data types */
    using CSI_VC1CFGR1_CDTFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC1CFGR1_CDTFT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC1CFGR1_CDTFT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC1CFGR1_CDTFT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC1CFGR1_CDTFT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC1CFGR1_CDTFT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC1CFGR1_CDTFT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC1CFGR1_CDTFT_BPP16 = 6;

    /** @brief Data type 0 class selection for virtual channel x */
    using CSI_VC1CFGR1_DT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 0 format */
    using CSI_VC1CFGR1_DT0FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC1CFGR1_DT0FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 1 configuration register 2 */
    using CSI_VC1CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 1 class selection for virtual channel x */
    using CSI_VC1CFGR2_DT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 1 format */
    using CSI_VC1CFGR2_DT1FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7 -it words (for example RAW7) (value: 1)
     *          - BPP8: 8 -it words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12 -it words (for example RAW12) (value: 4)
     *          - BPP14: 14 -it words (for example RAW14) (value: 5)
     *          - BPP16: 16 -it words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT1FT_BPP6 = 0;
        /** @brief 7 -it words (for example RAW7) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT1FT_BPP7 = 1;
        /** @brief 8 -it words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT1FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT1FT_BPP10 = 3;
        /** @brief 12 -it words (for example RAW12) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT1FT_BPP12 = 4;
        /** @brief 14 -it words (for example RAW14) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT1FT_BPP14 = 5;
        /** @brief 16 -it words (for example RAW16) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT1FT_BPP16 = 6;

    /** @brief Data type 2 class selection for virtual channel x */
    using CSI_VC1CFGR2_DT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 2 format */
    using CSI_VC1CFGR2_DT2FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT2FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT2FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT2FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT2FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT2FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT2FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC1CFGR2_DT2FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 1 configuration register 3 */
    using CSI_VC1CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 3 class selection for virtual channel x */
    using CSI_VC1CFGR3_DT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 3 format */
    using CSI_VC1CFGR3_DT3FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT3FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT3FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT3FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT3FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT3FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT3FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT3FT_BPP16 = 6;

    /** @brief Data type 4 class selection for virtual channel x */
    using CSI_VC1CFGR3_DT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 4 format */
    using CSI_VC1CFGR3_DT4FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT4FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT4FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT4FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT4FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT4FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT4FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC1CFGR3_DT4FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 1 configuration register 4 */
    using CSI_VC1CFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 5 class selection for virtual channel x */
    using CSI_VC1CFGR4_DT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 5 format */
    using CSI_VC1CFGR4_DT5FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT5FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT5FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT5FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT5FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT5FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT5FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT5FT_BPP16 = 6;

    /** @brief Data type 6 class selection for virtual channel x */
    using CSI_VC1CFGR4_DT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 6 format */
    using CSI_VC1CFGR4_DT6FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT6FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT6FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT6FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT6FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT6FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT6FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC1CFGR4_DT6FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 2 configuration register 1 */
    using CSI_VC2CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All data types enable for the virtual channel x */
    using CSI_VC2CFGR1_ALLDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type capture managed individually (value: 0)
     *          - B_0x1: All data types captured for virtual channel x (value: 1)
     */
        /** @brief Data type capture managed individually */
    constexpr std::uint32_t CSI_VC2CFGR1_ALLDT_B_0x0 = 0;
        /** @brief All data types captured for virtual channel x */
    constexpr std::uint32_t CSI_VC2CFGR1_ALLDT_B_0x1 = 1;

    /** @brief Data type 0 enable */
    using CSI_VC2CFGR1_DT0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 0 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 0 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 0 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0EN_B_0x0 = 0;
        /** @brief Data type 0 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0EN_B_0x1 = 1;

    /** @brief Data type 1 enable */
    using CSI_VC2CFGR1_DT1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 1 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 1 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 1 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT1EN_B_0x0 = 0;
        /** @brief Data type 1 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT1EN_B_0x1 = 1;

    /** @brief Data type 2 enable */
    using CSI_VC2CFGR1_DT2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 2 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 2 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 2 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT2EN_B_0x0 = 0;
        /** @brief Data type 2 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT2EN_B_0x1 = 1;

    /** @brief Data type 3 enable */
    using CSI_VC2CFGR1_DT3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 3 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 3 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 3 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT3EN_B_0x0 = 0;
        /** @brief Data type 3 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT3EN_B_0x1 = 1;

    /** @brief Data type 4 enable */
    using CSI_VC2CFGR1_DT4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 4 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 4 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 4 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT4EN_B_0x0 = 0;
        /** @brief Data type 4 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT4EN_B_0x1 = 1;

    /** @brief Data type 5 enable */
    using CSI_VC2CFGR1_DT5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 5 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 5 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 5 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT5EN_B_0x0 = 0;
        /** @brief Data type 5 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT5EN_B_0x1 = 1;

    /** @brief Data type 6 enable */
    using CSI_VC2CFGR1_DT6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 6 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 6 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 6 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT6EN_B_0x0 = 0;
        /** @brief Data type 6 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC2CFGR1_DT6EN_B_0x1 = 1;

    /** @brief Common format for all data types */
    using CSI_VC2CFGR1_CDTFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC2CFGR1_CDTFT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC2CFGR1_CDTFT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC2CFGR1_CDTFT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC2CFGR1_CDTFT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC2CFGR1_CDTFT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC2CFGR1_CDTFT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC2CFGR1_CDTFT_BPP16 = 6;

    /** @brief Data type 0 class selection for virtual channel x */
    using CSI_VC2CFGR1_DT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 0 format */
    using CSI_VC2CFGR1_DT0FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC2CFGR1_DT0FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 2 configuration register 2 */
    using CSI_VC2CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 1 class selection for virtual channel x */
    using CSI_VC2CFGR2_DT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 1 format */
    using CSI_VC2CFGR2_DT1FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7 -it words (for example RAW7) (value: 1)
     *          - BPP8: 8 -it words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12 -it words (for example RAW12) (value: 4)
     *          - BPP14: 14 -it words (for example RAW14) (value: 5)
     *          - BPP16: 16 -it words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT1FT_BPP6 = 0;
        /** @brief 7 -it words (for example RAW7) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT1FT_BPP7 = 1;
        /** @brief 8 -it words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT1FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT1FT_BPP10 = 3;
        /** @brief 12 -it words (for example RAW12) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT1FT_BPP12 = 4;
        /** @brief 14 -it words (for example RAW14) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT1FT_BPP14 = 5;
        /** @brief 16 -it words (for example RAW16) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT1FT_BPP16 = 6;

    /** @brief Data type 2 class selection for virtual channel x */
    using CSI_VC2CFGR2_DT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 2 format */
    using CSI_VC2CFGR2_DT2FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT2FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT2FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT2FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT2FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT2FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT2FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC2CFGR2_DT2FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 2 configuration register 3 */
    using CSI_VC2CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 3 class selection for virtual channel x */
    using CSI_VC2CFGR3_DT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 3 format */
    using CSI_VC2CFGR3_DT3FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT3FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT3FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT3FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT3FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT3FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT3FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT3FT_BPP16 = 6;

    /** @brief Data type 4 class selection for virtual channel x */
    using CSI_VC2CFGR3_DT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 4 format */
    using CSI_VC2CFGR3_DT4FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT4FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT4FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT4FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT4FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT4FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT4FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC2CFGR3_DT4FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 2 configuration register 4 */
    using CSI_VC2CFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 5 class selection for virtual channel x */
    using CSI_VC2CFGR4_DT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 5 format */
    using CSI_VC2CFGR4_DT5FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT5FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT5FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT5FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT5FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT5FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT5FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT5FT_BPP16 = 6;

    /** @brief Data type 6 class selection for virtual channel x */
    using CSI_VC2CFGR4_DT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 6 format */
    using CSI_VC2CFGR4_DT6FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT6FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT6FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT6FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT6FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT6FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT6FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC2CFGR4_DT6FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 3 configuration register 1 */
    using CSI_VC3CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All data types enable for the virtual channel x */
    using CSI_VC3CFGR1_ALLDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type capture managed individually (value: 0)
     *          - B_0x1: All data types captured for virtual channel x (value: 1)
     */
        /** @brief Data type capture managed individually */
    constexpr std::uint32_t CSI_VC3CFGR1_ALLDT_B_0x0 = 0;
        /** @brief All data types captured for virtual channel x */
    constexpr std::uint32_t CSI_VC3CFGR1_ALLDT_B_0x1 = 1;

    /** @brief Data type 0 enable */
    using CSI_VC3CFGR1_DT0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 0 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 0 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 0 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0EN_B_0x0 = 0;
        /** @brief Data type 0 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0EN_B_0x1 = 1;

    /** @brief Data type 1 enable */
    using CSI_VC3CFGR1_DT1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 1 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 1 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 1 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT1EN_B_0x0 = 0;
        /** @brief Data type 1 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT1EN_B_0x1 = 1;

    /** @brief Data type 2 enable */
    using CSI_VC3CFGR1_DT2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 2 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 2 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 2 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT2EN_B_0x0 = 0;
        /** @brief Data type 2 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT2EN_B_0x1 = 1;

    /** @brief Data type 3 enable */
    using CSI_VC3CFGR1_DT3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 3 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 3 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 3 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT3EN_B_0x0 = 0;
        /** @brief Data type 3 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT3EN_B_0x1 = 1;

    /** @brief Data type 4 enable */
    using CSI_VC3CFGR1_DT4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 4 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 4 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 4 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT4EN_B_0x0 = 0;
        /** @brief Data type 4 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT4EN_B_0x1 = 1;

    /** @brief Data type 5 enable */
    using CSI_VC3CFGR1_DT5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 5 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 5 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 5 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT5EN_B_0x0 = 0;
        /** @brief Data type 5 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT5EN_B_0x1 = 1;

    /** @brief Data type 6 enable */
    using CSI_VC3CFGR1_DT6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data type 6 for virtual channel x is disabled. (value: 0)
     *          - B_0x1: Data type 6 for virtual channel x is enabled. (value: 1)
     */
        /** @brief Data type 6 for virtual channel x is disabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT6EN_B_0x0 = 0;
        /** @brief Data type 6 for virtual channel x is enabled. */
    constexpr std::uint32_t CSI_VC3CFGR1_DT6EN_B_0x1 = 1;

    /** @brief Common format for all data types */
    using CSI_VC3CFGR1_CDTFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC3CFGR1_CDTFT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC3CFGR1_CDTFT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC3CFGR1_CDTFT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC3CFGR1_CDTFT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC3CFGR1_CDTFT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC3CFGR1_CDTFT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC3CFGR1_CDTFT_BPP16 = 6;

    /** @brief Data type 0 class selection for virtual channel x */
    using CSI_VC3CFGR1_DT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 0 format */
    using CSI_VC3CFGR1_DT0FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC3CFGR1_DT0FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 3 configuration register 2 */
    using CSI_VC3CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 1 class selection for virtual channel x */
    using CSI_VC3CFGR2_DT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 1 format */
    using CSI_VC3CFGR2_DT1FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7 -it words (for example RAW7) (value: 1)
     *          - BPP8: 8 -it words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12 -it words (for example RAW12) (value: 4)
     *          - BPP14: 14 -it words (for example RAW14) (value: 5)
     *          - BPP16: 16 -it words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT1FT_BPP6 = 0;
        /** @brief 7 -it words (for example RAW7) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT1FT_BPP7 = 1;
        /** @brief 8 -it words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT1FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT1FT_BPP10 = 3;
        /** @brief 12 -it words (for example RAW12) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT1FT_BPP12 = 4;
        /** @brief 14 -it words (for example RAW14) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT1FT_BPP14 = 5;
        /** @brief 16 -it words (for example RAW16) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT1FT_BPP16 = 6;

    /** @brief Data type 2 class selection for virtual channel x */
    using CSI_VC3CFGR2_DT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 2 format */
    using CSI_VC3CFGR2_DT2FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT2FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT2FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT2FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT2FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT2FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT2FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC3CFGR2_DT2FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 3 configuration register 3 */
    using CSI_VC3CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 3 class selection for virtual channel x */
    using CSI_VC3CFGR3_DT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 3 format */
    using CSI_VC3CFGR3_DT3FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT3FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT3FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT3FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT3FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT3FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT3FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT3FT_BPP16 = 6;

    /** @brief Data type 4 class selection for virtual channel x */
    using CSI_VC3CFGR3_DT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 4 format */
    using CSI_VC3CFGR3_DT4FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT4FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT4FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT4FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT4FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT4FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT4FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC3CFGR3_DT4FT_BPP16 = 6;

    /** @brief CSI-2 Host virtual channel 3 configuration register 4 */
    using CSI_VC3CFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 5 class selection for virtual channel x */
    using CSI_VC3CFGR4_DT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 5 format */
    using CSI_VC3CFGR4_DT5FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT5FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT5FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT5FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT5FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT5FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT5FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT5FT_BPP16 = 6;

    /** @brief Data type 6 class selection for virtual channel x */
    using CSI_VC3CFGR4_DT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type 6 format */
    using CSI_VC3CFGR4_DT6FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - BPP6: 6-bit words (for example RAW6, RGB666) (value: 0)
     *          - BPP7: 7-bit words (for example RAW7) (value: 1)
     *          - BPP8: 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) (value: 2)
     *          - BPP10: 10-bit words (for example RAW10, YUV 10 bits) (value: 3)
     *          - BPP12: 12-bit words (for example RAW12) (value: 4)
     *          - BPP14: 14-bit words (for example RAW14) (value: 5)
     *          - BPP16: 16-bit words (for example RAW16) (value: 6)
     */
        /** @brief 6-bit words (for example RAW6, RGB666) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT6FT_BPP6 = 0;
        /** @brief 7-bit words (for example RAW7) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT6FT_BPP7 = 1;
        /** @brief 8-bit words (for example RAW8, YUV 8 bits, RGB888, RGB444, RGB555, RGB565, JPEG) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT6FT_BPP8 = 2;
        /** @brief 10-bit words (for example RAW10, YUV 10 bits) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT6FT_BPP10 = 3;
        /** @brief 12-bit words (for example RAW12) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT6FT_BPP12 = 4;
        /** @brief 14-bit words (for example RAW14) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT6FT_BPP14 = 5;
        /** @brief 16-bit words (for example RAW16) */
    constexpr std::uint32_t CSI_VC3CFGR4_DT6FT_BPP16 = 6;

    /** @brief CSI-2 Host line byte 0 configuration register */
    using CSI_LB0CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte counter */
    using CSI_LB0CFGR_BYTECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line counter */
    using CSI_LB0CFGR_LINECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host line byte 1 configuration register */
    using CSI_LB1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte counter */
    using CSI_LB1CFGR_BYTECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line counter */
    using CSI_LB1CFGR_LINECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host line byte 2 configuration register */
    using CSI_LB2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte counter */
    using CSI_LB2CFGR_BYTECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line counter */
    using CSI_LB2CFGR_LINECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host line byte 3 configuration register */
    using CSI_LB3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte counter */
    using CSI_LB3CFGR_BYTECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line counter */
    using CSI_LB3CFGR_LINECNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host timer 0 configuration register */
    using CSI_TIM0CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock cycle counter */
    using CSI_TIM0CFGR_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host timer 1 configuration register */
    using CSI_TIM1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock cycle counter */
    using CSI_TIM1CFGR_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host timer 2 configuration register */
    using CSI_TIM2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock cycle counter */
    using CSI_TIM2CFGR_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host timer 3 configuration register */
    using CSI_TIM3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock cycle counter */
    using CSI_TIM3CFGR_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host lane merger configuration register */
    using CSI_LMCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of lanes */
    using CSI_LMCFGR_LANENB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 lane for the reception (value: 1)
     *          - B_0x2: 2 lanes for the reception (value: 2)
     */
        /** @brief 1 lane for the reception */
    constexpr std::uint32_t CSI_LMCFGR_LANENB_B_0x1 = 1;
        /** @brief 2 lanes for the reception */
    constexpr std::uint32_t CSI_LMCFGR_LANENB_B_0x2 = 2;

    /** @brief Physical mapping of logical data lane 0 */
    using CSI_LMCFGR_DL0MAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Physical data lane 0 connected to logical data lane 0 (value: 1)
     *          - B_0x2: Physical data lane 0 connected to logical data lane 1 (value: 2)
     */
        /** @brief Physical data lane 0 connected to logical data lane 0 */
    constexpr std::uint32_t CSI_LMCFGR_DL0MAP_B_0x1 = 1;
        /** @brief Physical data lane 0 connected to logical data lane 1 */
    constexpr std::uint32_t CSI_LMCFGR_DL0MAP_B_0x2 = 2;

    /** @brief Physical mapping of logical data lane 1 */
    using CSI_LMCFGR_DL1MAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Physical data lane 1 connected to logical data lane 0 (value: 1)
     *          - B_0x2: Physical data lane 1 connected to logical data lane 1 (value: 2)
     */
        /** @brief Physical data lane 1 connected to logical data lane 0 */
    constexpr std::uint32_t CSI_LMCFGR_DL1MAP_B_0x1 = 1;
        /** @brief Physical data lane 1 connected to logical data lane 1 */
    constexpr std::uint32_t CSI_LMCFGR_DL1MAP_B_0x2 = 2;

    /** @brief CSI-2 Host program interrupt register */
    using CSI_PRGITR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 0 linked to a virtual channel */
    using CSI_PRGITR_LB0VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel 0 used to generate the line/byte counter 0 event (value: 0)
     *          - B_0x1: Virtual channel 1 used to generate the line/byte counter 0 event (value: 1)
     *          - B_0x2: Virtual channel 2 used to generate the line/byte counter 0 event (value: 2)
     *          - B_0x3: Virtual channel 3 used to generate the line/byte counter 0 event (value: 3)
     */
        /** @brief Virtual channel 0 used to generate the line/byte counter 0 event */
    constexpr std::uint32_t CSI_PRGITR_LB0VC_B_0x0 = 0;
        /** @brief Virtual channel 1 used to generate the line/byte counter 0 event */
    constexpr std::uint32_t CSI_PRGITR_LB0VC_B_0x1 = 1;
        /** @brief Virtual channel 2 used to generate the line/byte counter 0 event */
    constexpr std::uint32_t CSI_PRGITR_LB0VC_B_0x2 = 2;
        /** @brief Virtual channel 3 used to generate the line/byte counter 0 event */
    constexpr std::uint32_t CSI_PRGITR_LB0VC_B_0x3 = 3;

    /** @brief Line/byte 0 counter enable */
    using CSI_PRGITR_LB0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line/byte 0 counter stopped (value: 0)
     *          - B_0x1: Line/byte 0 counter active (value: 1)
     */
        /** @brief Line/byte 0 counter stopped */
    constexpr std::uint32_t CSI_PRGITR_LB0EN_B_0x0 = 0;
        /** @brief Line/byte 0 counter active */
    constexpr std::uint32_t CSI_PRGITR_LB0EN_B_0x1 = 1;

    /** @brief Line/byte counter 1 linked to a virtual channel */
    using CSI_PRGITR_LB1VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel 0 used to generate the line/byte counter 1 event (value: 0)
     *          - B_0x1: Virtual channel 1 used to generate the line/byte counter 1 event (value: 1)
     *          - B_0x2: Virtual channel 2 used to generate the line/byte counter 1 event (value: 2)
     *          - B_0x3: Virtual channel 3 used to generate the line/byte counter 1 event (value: 3)
     */
        /** @brief Virtual channel 0 used to generate the line/byte counter 1 event */
    constexpr std::uint32_t CSI_PRGITR_LB1VC_B_0x0 = 0;
        /** @brief Virtual channel 1 used to generate the line/byte counter 1 event */
    constexpr std::uint32_t CSI_PRGITR_LB1VC_B_0x1 = 1;
        /** @brief Virtual channel 2 used to generate the line/byte counter 1 event */
    constexpr std::uint32_t CSI_PRGITR_LB1VC_B_0x2 = 2;
        /** @brief Virtual channel 3 used to generate the line/byte counter 1 event */
    constexpr std::uint32_t CSI_PRGITR_LB1VC_B_0x3 = 3;

    /** @brief Line/byte 1 counter enable */
    using CSI_PRGITR_LB1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line/byte 1 counter stopped (value: 0)
     *          - B_0x1: Line/byte 1 counter active (value: 1)
     */
        /** @brief Line/byte 1 counter stopped */
    constexpr std::uint32_t CSI_PRGITR_LB1EN_B_0x0 = 0;
        /** @brief Line/byte 1 counter active */
    constexpr std::uint32_t CSI_PRGITR_LB1EN_B_0x1 = 1;

    /** @brief Line/byte counter 2 linked to a virtual channel */
    using CSI_PRGITR_LB2VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel 0 used to generate the line/byte counter 2 event (value: 0)
     *          - B_0x1: Virtual channel 1 used to generate the line/byte counter 2 event (value: 1)
     *          - B_0x2: Virtual channel 2 used to generate the line/byte counter 2 event (value: 2)
     *          - B_0x3: Virtual channel 3 used to generate the line/byte counter 2 event (value: 3)
     */
        /** @brief Virtual channel 0 used to generate the line/byte counter 2 event */
    constexpr std::uint32_t CSI_PRGITR_LB2VC_B_0x0 = 0;
        /** @brief Virtual channel 1 used to generate the line/byte counter 2 event */
    constexpr std::uint32_t CSI_PRGITR_LB2VC_B_0x1 = 1;
        /** @brief Virtual channel 2 used to generate the line/byte counter 2 event */
    constexpr std::uint32_t CSI_PRGITR_LB2VC_B_0x2 = 2;
        /** @brief Virtual channel 3 used to generate the line/byte counter 2 event */
    constexpr std::uint32_t CSI_PRGITR_LB2VC_B_0x3 = 3;

    /** @brief Line/byte 2 counter enable */
    using CSI_PRGITR_LB2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line/byte 2 counter stopped (value: 0)
     *          - B_0x1: Line/byte 2 counter active (value: 1)
     */
        /** @brief Line/byte 2 counter stopped */
    constexpr std::uint32_t CSI_PRGITR_LB2EN_B_0x0 = 0;
        /** @brief Line/byte 2 counter active */
    constexpr std::uint32_t CSI_PRGITR_LB2EN_B_0x1 = 1;

    /** @brief Line/byte counter 3 linked to a virtual channel */
    using CSI_PRGITR_LB3VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel 0 used to generate the line/byte counter 3 event (value: 0)
     *          - B_0x1: Virtual channel 1 used to generate the line/byte counter 3 event (value: 1)
     *          - B_0x2: Virtual channel 2 used to generate the line/byte counter 3 event (value: 2)
     *          - B_0x3: Virtual channel 3 used to generate the line/byte counter 3 event (value: 3)
     */
        /** @brief Virtual channel 0 used to generate the line/byte counter 3 event */
    constexpr std::uint32_t CSI_PRGITR_LB3VC_B_0x0 = 0;
        /** @brief Virtual channel 1 used to generate the line/byte counter 3 event */
    constexpr std::uint32_t CSI_PRGITR_LB3VC_B_0x1 = 1;
        /** @brief Virtual channel 2 used to generate the line/byte counter 3 event */
    constexpr std::uint32_t CSI_PRGITR_LB3VC_B_0x2 = 2;
        /** @brief Virtual channel 3 used to generate the line/byte counter 3 event */
    constexpr std::uint32_t CSI_PRGITR_LB3VC_B_0x3 = 3;

    /** @brief Line/byte 3 counter enable */
    using CSI_PRGITR_LB3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line/byte 3 counter stopped (value: 0)
     *          - B_0x1: Line/byte 3 counter active (value: 1)
     */
        /** @brief Line/byte 3 counter stopped */
    constexpr std::uint32_t CSI_PRGITR_LB3EN_B_0x0 = 0;
        /** @brief Line/byte 3 counter active */
    constexpr std::uint32_t CSI_PRGITR_LB3EN_B_0x1 = 1;

    /** @brief TIM0 base time linked to a virtual channel */
    using CSI_PRGITR_TIM0VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel 0 used to generate the TIM0 event (value: 0)
     *          - B_0x1: Virtual channel 1 used to generate the TIM0 event (value: 1)
     *          - B_0x2: Virtual channel 2 used to generate the TIM0 event (value: 2)
     *          - B_0x3: Virtual channel 3 used to generate the TIM0 event (value: 3)
     */
        /** @brief Virtual channel 0 used to generate the TIM0 event */
    constexpr std::uint32_t CSI_PRGITR_TIM0VC_B_0x0 = 0;
        /** @brief Virtual channel 1 used to generate the TIM0 event */
    constexpr std::uint32_t CSI_PRGITR_TIM0VC_B_0x1 = 1;
        /** @brief Virtual channel 2 used to generate the TIM0 event */
    constexpr std::uint32_t CSI_PRGITR_TIM0VC_B_0x2 = 2;
        /** @brief Virtual channel 3 used to generate the TIM0 event */
    constexpr std::uint32_t CSI_PRGITR_TIM0VC_B_0x3 = 3;

    /** @brief TIM0 base time starting from the EOF */
    using CSI_PRGITR_TIM0EOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF selected e as starting point for the counter (value: 0)
     *          - B_0x1: EOF selected as starting point for the counter (value: 1)
     */
        /** @brief SOF selected e as starting point for the counter */
    constexpr std::uint32_t CSI_PRGITR_TIM0EOF_B_0x0 = 0;
        /** @brief EOF selected as starting point for the counter */
    constexpr std::uint32_t CSI_PRGITR_TIM0EOF_B_0x1 = 1;

    /** @brief TIM0 base time enable */
    using CSI_PRGITR_TIM0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timer 0 clock cycle counter not active (value: 0)
     *          - B_0x1: Timer 0 clock cycle counter active (value: 1)
     */
        /** @brief Timer 0 clock cycle counter not active */
    constexpr std::uint32_t CSI_PRGITR_TIM0EN_B_0x0 = 0;
        /** @brief Timer 0 clock cycle counter active */
    constexpr std::uint32_t CSI_PRGITR_TIM0EN_B_0x1 = 1;

    /** @brief TIM1 base time linked to a virtual channel */
    using CSI_PRGITR_TIM1VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel 0 used to generate the TIM1 event (value: 0)
     *          - B_0x1: Virtual channel 1 used to generate the TIM1 event (value: 1)
     *          - B_0x2: Virtual channel 2 used to generate the TIM1 event (value: 2)
     *          - B_0x3: Virtual channel 3 used to generate the TIM1 event (value: 3)
     */
        /** @brief Virtual channel 0 used to generate the TIM1 event */
    constexpr std::uint32_t CSI_PRGITR_TIM1VC_B_0x0 = 0;
        /** @brief Virtual channel 1 used to generate the TIM1 event */
    constexpr std::uint32_t CSI_PRGITR_TIM1VC_B_0x1 = 1;
        /** @brief Virtual channel 2 used to generate the TIM1 event */
    constexpr std::uint32_t CSI_PRGITR_TIM1VC_B_0x2 = 2;
        /** @brief Virtual channel 3 used to generate the TIM1 event */
    constexpr std::uint32_t CSI_PRGITR_TIM1VC_B_0x3 = 3;

    /** @brief TIM1 base time starting from the EOF */
    using CSI_PRGITR_TIM1EOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF selected as starting point for the counter (value: 0)
     *          - B_0x1: EOF selected as starting point for the counter (value: 1)
     */
        /** @brief SOF selected as starting point for the counter */
    constexpr std::uint32_t CSI_PRGITR_TIM1EOF_B_0x0 = 0;
        /** @brief EOF selected as starting point for the counter */
    constexpr std::uint32_t CSI_PRGITR_TIM1EOF_B_0x1 = 1;

    /** @brief TIM1 base time enable */
    using CSI_PRGITR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timer 1 clock cycle counter not active. (value: 0)
     *          - B_0x1: Timer 1 clock cycle counter active (value: 1)
     */
        /** @brief Timer 1 clock cycle counter not active. */
    constexpr std::uint32_t CSI_PRGITR_TIM1EN_B_0x0 = 0;
        /** @brief Timer 1 clock cycle counter active */
    constexpr std::uint32_t CSI_PRGITR_TIM1EN_B_0x1 = 1;

    /** @brief TIM2 base time linked to a virtual channel */
    using CSI_PRGITR_TIM2VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel 0 used to generate the TIM2 event (value: 0)
     *          - B_0x1: Virtual channel 1 used to generate the TIM2 event (value: 1)
     *          - B_0x2: Virtual channel 2 used to generate the TIM2 event (value: 2)
     *          - B_0x3: Virtual channel 3 used to generate the TIM2 event (value: 3)
     */
        /** @brief Virtual channel 0 used to generate the TIM2 event */
    constexpr std::uint32_t CSI_PRGITR_TIM2VC_B_0x0 = 0;
        /** @brief Virtual channel 1 used to generate the TIM2 event */
    constexpr std::uint32_t CSI_PRGITR_TIM2VC_B_0x1 = 1;
        /** @brief Virtual channel 2 used to generate the TIM2 event */
    constexpr std::uint32_t CSI_PRGITR_TIM2VC_B_0x2 = 2;
        /** @brief Virtual channel 3 used to generate the TIM2 event */
    constexpr std::uint32_t CSI_PRGITR_TIM2VC_B_0x3 = 3;

    /** @brief TIM2 base time starting from the EOF */
    using CSI_PRGITR_TIM2EOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF selected as starting point for the counter (value: 0)
     *          - B_0x1: EOF selected as starting point for the counter (value: 1)
     */
        /** @brief SOF selected as starting point for the counter */
    constexpr std::uint32_t CSI_PRGITR_TIM2EOF_B_0x0 = 0;
        /** @brief EOF selected as starting point for the counter */
    constexpr std::uint32_t CSI_PRGITR_TIM2EOF_B_0x1 = 1;

    /** @brief TIM2 base time enable */
    using CSI_PRGITR_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timer 2 clock cycle counter not active. (value: 0)
     *          - B_0x1: Timer 2 clock cycle counter active (value: 1)
     */
        /** @brief Timer 2 clock cycle counter not active. */
    constexpr std::uint32_t CSI_PRGITR_TIM2EN_B_0x0 = 0;
        /** @brief Timer 2 clock cycle counter active */
    constexpr std::uint32_t CSI_PRGITR_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 base time linked to a virtual channel */
    using CSI_PRGITR_TIM3VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel 0 used to generate the TIM3 event (value: 0)
     *          - B_0x1: Virtual channel 1 used to generate the TIM3 event (value: 1)
     *          - B_0x2: Virtual channel 2 used to generate the TIM3 event (value: 2)
     *          - B_0x3: Virtual channel 3 used to generate the TIM3 event (value: 3)
     */
        /** @brief Virtual channel 0 used to generate the TIM3 event */
    constexpr std::uint32_t CSI_PRGITR_TIM3VC_B_0x0 = 0;
        /** @brief Virtual channel 1 used to generate the TIM3 event */
    constexpr std::uint32_t CSI_PRGITR_TIM3VC_B_0x1 = 1;
        /** @brief Virtual channel 2 used to generate the TIM3 event */
    constexpr std::uint32_t CSI_PRGITR_TIM3VC_B_0x2 = 2;
        /** @brief Virtual channel 3 used to generate the TIM3 event */
    constexpr std::uint32_t CSI_PRGITR_TIM3VC_B_0x3 = 3;

    /** @brief TIM3 base time starting from the EOF */
    using CSI_PRGITR_TIM3EOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF selected as starting point for the counter (value: 0)
     *          - B_0x1: EOF selected as starting point for the counter (value: 1)
     */
        /** @brief SOF selected as starting point for the counter */
    constexpr std::uint32_t CSI_PRGITR_TIM3EOF_B_0x0 = 0;
        /** @brief EOF selected as starting point for the counter */
    constexpr std::uint32_t CSI_PRGITR_TIM3EOF_B_0x1 = 1;

    /** @brief TIM3 base time enable */
    using CSI_PRGITR_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timer 3 clock cycle counter not active (value: 0)
     *          - B_0x1: Timer 3 clock cycle counter active (value: 1)
     */
        /** @brief Timer 3 clock cycle counter not active */
    constexpr std::uint32_t CSI_PRGITR_TIM3EN_B_0x0 = 0;
        /** @brief Timer 3 clock cycle counter active */
    constexpr std::uint32_t CSI_PRGITR_TIM3EN_B_0x1 = 1;

    /** @brief CSI-2 Host watchdog register */
    using CSI_WDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter */
    using CSI_WDR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host interrupt enable register 0 */
    using CSI_IER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 0 interrupt enable */
    using CSI_IER0_LB0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 1 interrupt enable */
    using CSI_IER0_LB1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 2 interrupt enable */
    using CSI_IER0_LB2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 3 interrupt enable */
    using CSI_IER0_LB3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 0 interrupt enable */
    using CSI_IER0_TIM0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timer 0 interrupt disabled (value: 0)
     *          - B_0x1: Timer 0 interrupt enabled (value: 1)
     */
        /** @brief Timer 0 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_TIM0IE_B_0x0 = 0;
        /** @brief Timer 0 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_TIM0IE_B_0x1 = 1;

    /** @brief Timer 1 interrupt enable */
    using CSI_IER0_TIM1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timer 1 interrupt disabled (value: 0)
     *          - B_0x1: Timer 1 interrupt enabled (value: 1)
     */
        /** @brief Timer 1 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_TIM1IE_B_0x0 = 0;
        /** @brief Timer 1 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_TIM1IE_B_0x1 = 1;

    /** @brief Timer 2 interrupt enable */
    using CSI_IER0_TIM2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timer 2 interrupt disabled (value: 0)
     *          - B_0x1: Timer 2 interrupt enabled (value: 1)
     */
        /** @brief Timer 2 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_TIM2IE_B_0x0 = 0;
        /** @brief Timer 2 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_TIM2IE_B_0x1 = 1;

    /** @brief Timer 3 interrupt enable */
    using CSI_IER0_TIM3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timer 3 interrupt disabled (value: 0)
     *          - B_0x1: Timer 3 interrupt enabled (value: 1)
     */
        /** @brief Timer 3 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_TIM3IE_B_0x0 = 0;
        /** @brief Timer 3 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_TIM3IE_B_0x1 = 1;

    /** @brief SOF for virtual channel 0 interrupt enable */
    using CSI_IER0_SOF0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF on virtual channel 0 interrupt disabled (value: 0)
     *          - B_0x1: SOF on virtual channel 0 interrupt enabled (value: 1)
     */
        /** @brief SOF on virtual channel 0 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_SOF0IE_B_0x0 = 0;
        /** @brief SOF on virtual channel 0 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_SOF0IE_B_0x1 = 1;

    /** @brief SOF for virtual channel 1 interrupt enable */
    using CSI_IER0_SOF1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF on virtual channel 1 interrupt disabled. (value: 0)
     *          - B_0x1: SOF on virtual channel 1 interrupt enabled. (value: 1)
     */
        /** @brief SOF on virtual channel 1 interrupt disabled. */
    constexpr std::uint32_t CSI_IER0_SOF1IE_B_0x0 = 0;
        /** @brief SOF on virtual channel 1 interrupt enabled. */
    constexpr std::uint32_t CSI_IER0_SOF1IE_B_0x1 = 1;

    /** @brief SOF for virtual channel 2 interrupt enable */
    using CSI_IER0_SOF2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF on virtual channel 2 interrupt disabled (value: 0)
     *          - B_0x1: SOF on virtual channel 2 interrupt enabled (value: 1)
     */
        /** @brief SOF on virtual channel 2 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_SOF2IE_B_0x0 = 0;
        /** @brief SOF on virtual channel 2 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_SOF2IE_B_0x1 = 1;

    /** @brief SOF for virtual channel 3 interrupt enable */
    using CSI_IER0_SOF3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF on virtual channel 3 interrupt disabled (value: 0)
     *          - B_0x1: SOF on virtual channel 3 interrupt enabled (value: 1)
     */
        /** @brief SOF on virtual channel 3 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_SOF3IE_B_0x0 = 0;
        /** @brief SOF on virtual channel 3 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_SOF3IE_B_0x1 = 1;

    /** @brief EOF for virtual channel 0 interrupt enable */
    using CSI_IER0_EOF0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOF on virtual channel 0 interrupt disabled (value: 0)
     *          - B_0x1: EOF on virtual channel 0 interrupt enabled (value: 1)
     */
        /** @brief EOF on virtual channel 0 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_EOF0IE_B_0x0 = 0;
        /** @brief EOF on virtual channel 0 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_EOF0IE_B_0x1 = 1;

    /** @brief EOF for virtual channel 1 interrupt enable */
    using CSI_IER0_EOF1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOF on virtual channel 1 interrupt disabled (value: 0)
     *          - B_0x1: EOF on virtual channel 1 interrupt enabled (value: 1)
     */
        /** @brief EOF on virtual channel 1 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_EOF1IE_B_0x0 = 0;
        /** @brief EOF on virtual channel 1 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_EOF1IE_B_0x1 = 1;

    /** @brief EOF for virtual channel 2 interrupt enable */
    using CSI_IER0_EOF2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOF on virtual channel 2 interrupt disabled (value: 0)
     *          - B_0x1: EOF on virtual channel 2 interrupt enabled (value: 1)
     */
        /** @brief EOF on virtual channel 2 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_EOF2IE_B_0x0 = 0;
        /** @brief EOF on virtual channel 2 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_EOF2IE_B_0x1 = 1;

    /** @brief EOF for virtual channel 3 interrupt enable */
    using CSI_IER0_EOF3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOF on virtual channel 3 interrupt disabled (value: 0)
     *          - B_0x1: EOF on virtual channel 3 interrupt enabled (value: 1)
     */
        /** @brief EOF on virtual channel 3 interrupt disabled */
    constexpr std::uint32_t CSI_IER0_EOF3IE_B_0x0 = 0;
        /** @brief EOF on virtual channel 3 interrupt enabled */
    constexpr std::uint32_t CSI_IER0_EOF3IE_B_0x1 = 1;

    /** @brief Short packet interrupt enable */
    using CSI_IER0_SPKTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Short packet detection interrupt disabled (value: 0)
     *          - B_0x1: Short packet detection interrupt enabled (value: 1)
     */
        /** @brief Short packet detection interrupt disabled */
    constexpr std::uint32_t CSI_IER0_SPKTIE_B_0x0 = 0;
        /** @brief Short packet detection interrupt enabled */
    constexpr std::uint32_t CSI_IER0_SPKTIE_B_0x1 = 1;

    /** @brief Clock changer FIFO full interrupt enable */
    using CSI_IER0_CCFIFOFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on clock changer FIFO full detection disabled (value: 0)
     *          - B_0x1: Interrupt on clock changer FIFO full detection enabled (value: 1)
     */
        /** @brief Interrupt on clock changer FIFO full detection disabled */
    constexpr std::uint32_t CSI_IER0_CCFIFOFIE_B_0x0 = 0;
        /** @brief Interrupt on clock changer FIFO full detection enabled */
    constexpr std::uint32_t CSI_IER0_CCFIFOFIE_B_0x1 = 1;

    /** @brief CRC error interrupt enable */
    using CSI_IER0_CRCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on CRC error detection disabled (value: 0)
     *          - B_0x1: Interrupt on CRC error detection enabled (value: 1)
     */
        /** @brief Interrupt on CRC error detection disabled */
    constexpr std::uint32_t CSI_IER0_CRCERRIE_B_0x0 = 0;
        /** @brief Interrupt on CRC error detection enabled */
    constexpr std::uint32_t CSI_IER0_CRCERRIE_B_0x1 = 1;

    /** @brief ECC error interrupt enable */
    using CSI_IER0_ECCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on ECC error detection disabled (value: 0)
     *          - B_0x1: Interrupt on ECC error detection enabled (value: 1)
     */
        /** @brief Interrupt on ECC error detection disabled */
    constexpr std::uint32_t CSI_IER0_ECCERRIE_B_0x0 = 0;
        /** @brief Interrupt on ECC error detection enabled */
    constexpr std::uint32_t CSI_IER0_ECCERRIE_B_0x1 = 1;

    /** @brief Corrected ECC error interrupt enable */
    using CSI_IER0_CECCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on corrected ECC error detection disabled (value: 0)
     *          - B_0x1: Interrupt on corrected ECC error detection enabled (value: 1)
     */
        /** @brief Interrupt on corrected ECC error detection disabled */
    constexpr std::uint32_t CSI_IER0_CECCERRIE_B_0x0 = 0;
        /** @brief Interrupt on corrected ECC error detection enabled */
    constexpr std::uint32_t CSI_IER0_CECCERRIE_B_0x1 = 1;

    /** @brief Data type ID error interrupt enable */
    using CSI_IER0_IDERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on reception of reserved data type disabled (value: 0)
     *          - B_0x1: Interrupt on reception of reserved data type enabled (value: 1)
     */
        /** @brief Interrupt on reception of reserved data type disabled */
    constexpr std::uint32_t CSI_IER0_IDERRIE_B_0x0 = 0;
        /** @brief Interrupt on reception of reserved data type enabled */
    constexpr std::uint32_t CSI_IER0_IDERRIE_B_0x1 = 1;

    /** @brief Short packet error interrupt enable */
    using CSI_IER0_SPKTERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on short packet error disabled (value: 0)
     *          - B_0x1: Interrupt on short packet error enabled (value: 1)
     */
        /** @brief Interrupt on short packet error disabled */
    constexpr std::uint32_t CSI_IER0_SPKTERRIE_B_0x0 = 0;
        /** @brief Interrupt on short packet error enabled */
    constexpr std::uint32_t CSI_IER0_SPKTERRIE_B_0x1 = 1;

    /** @brief Watchdog error interrupt enable */
    using CSI_IER0_WDERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on watchdog error disabled (value: 0)
     *          - B_0x1: Interrupt on watchdog error enabled (value: 1)
     */
        /** @brief Interrupt on watchdog error disabled */
    constexpr std::uint32_t CSI_IER0_WDERRIE_B_0x0 = 0;
        /** @brief Interrupt on watchdog error enabled */
    constexpr std::uint32_t CSI_IER0_WDERRIE_B_0x1 = 1;

    /** @brief Invalid synchronization error interrupt enable */
    using CSI_IER0_SYNCERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on invalid synchronization error disabled (value: 0)
     *          - B_0x1: Interrupt on invalid synchronization error enabled (value: 1)
     */
        /** @brief Interrupt on invalid synchronization error disabled */
    constexpr std::uint32_t CSI_IER0_SYNCERRIE_B_0x0 = 0;
        /** @brief Interrupt on invalid synchronization error enabled */
    constexpr std::uint32_t CSI_IER0_SYNCERRIE_B_0x1 = 1;

    /** @brief CSI-2 Host interrupt enable register 1 */
    using CSI_IER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOT error interrupt enable on lane 0 */
    using CSI_IER1_ESOTDL0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 0 SOT interrupt error disabled (value: 0)
     *          - B_0x1: Lane 0 SOT interrupt error enabled (value: 1)
     */
        /** @brief Lane 0 SOT interrupt error disabled */
    constexpr std::uint32_t CSI_IER1_ESOTDL0IE_B_0x0 = 0;
        /** @brief Lane 0 SOT interrupt error enabled */
    constexpr std::uint32_t CSI_IER1_ESOTDL0IE_B_0x1 = 1;

    /** @brief SOT synchronization interrupt error enable on lane 0 */
    using CSI_IER1_ESOTSYNCDL0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 0 SOT synchronization interrupt error disabled (value: 0)
     *          - B_0x1: Lane 0 SOT synchronization interrupt error enabled (value: 1)
     */
        /** @brief Lane 0 SOT synchronization interrupt error disabled */
    constexpr std::uint32_t CSI_IER1_ESOTSYNCDL0IE_B_0x0 = 0;
        /** @brief Lane 0 SOT synchronization interrupt error enabled */
    constexpr std::uint32_t CSI_IER1_ESOTSYNCDL0IE_B_0x1 = 1;

    /** @brief D-PHY_RX lane 0 escape entry error interrupt enable */
    using CSI_IER1_EESCDL0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 0 unrecognized escape entry command interrupt error disabled (value: 0)
     *          - B_0x1: Lane 0 unrecognized escape entry command interrupt error enabled (value: 1)
     */
        /** @brief Lane 0 unrecognized escape entry command interrupt error disabled */
    constexpr std::uint32_t CSI_IER1_EESCDL0IE_B_0x0 = 0;
        /** @brief Lane 0 unrecognized escape entry command interrupt error enabled */
    constexpr std::uint32_t CSI_IER1_EESCDL0IE_B_0x1 = 1;

    /** @brief D-PHY_RX lane 0 low power data transmission synchronization error interrupt enable */
    using CSI_IER1_ESYNCESCDL0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 0 low-power data transmission interrupt error disabled (value: 0)
     *          - B_0x1: Lane 0 low-power data transmission Interrupt error enabled (value: 1)
     */
        /** @brief Lane 0 low-power data transmission interrupt error disabled */
    constexpr std::uint32_t CSI_IER1_ESYNCESCDL0IE_B_0x0 = 0;
        /** @brief Lane 0 low-power data transmission Interrupt error enabled */
    constexpr std::uint32_t CSI_IER1_ESYNCESCDL0IE_B_0x1 = 1;

    /** @brief D-PHY_RX lane 0 control error interrupt enable */
    using CSI_IER1_ECTRLDL0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 0 control error interrupt disabled (value: 0)
     *          - B_0x1: Lane 0 control error interrupt enabled (value: 1)
     */
        /** @brief Lane 0 control error interrupt disabled */
    constexpr std::uint32_t CSI_IER1_ECTRLDL0IE_B_0x0 = 0;
        /** @brief Lane 0 control error interrupt enabled */
    constexpr std::uint32_t CSI_IER1_ECTRLDL0IE_B_0x1 = 1;

    /** @brief SOT error interrupt enable on lane 1 */
    using CSI_IER1_ESOTDL1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 1 SOT interrupt error disabled (value: 0)
     *          - B_0x1: Lane 1 SOT interrupt error enabled (value: 1)
     */
        /** @brief Lane 1 SOT interrupt error disabled */
    constexpr std::uint32_t CSI_IER1_ESOTDL1IE_B_0x0 = 0;
        /** @brief Lane 1 SOT interrupt error enabled */
    constexpr std::uint32_t CSI_IER1_ESOTDL1IE_B_0x1 = 1;

    /** @brief SOT synchronization interrupt error enable on lane 1 */
    using CSI_IER1_ESOTSYNCDL1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 1 SOT synchronization interrupt error disabled (value: 0)
     *          - B_0x1: Lane 1 SOT synchronization interrupt error enabled (value: 1)
     */
        /** @brief Lane 1 SOT synchronization interrupt error disabled */
    constexpr std::uint32_t CSI_IER1_ESOTSYNCDL1IE_B_0x0 = 0;
        /** @brief Lane 1 SOT synchronization interrupt error enabled */
    constexpr std::uint32_t CSI_IER1_ESOTSYNCDL1IE_B_0x1 = 1;

    /** @brief D-PHY_RX lane 1 escape entry error interrupt enable */
    using CSI_IER1_EESCDL1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 1 unrecognized escape entry command interrupt error disabled (value: 0)
     *          - B_0x1: Lane 1 unrecognized escape entry command interrupt error enabled (value: 1)
     */
        /** @brief Lane 1 unrecognized escape entry command interrupt error disabled */
    constexpr std::uint32_t CSI_IER1_EESCDL1IE_B_0x0 = 0;
        /** @brief Lane 1 unrecognized escape entry command interrupt error enabled */
    constexpr std::uint32_t CSI_IER1_EESCDL1IE_B_0x1 = 1;

    /** @brief D-PHY_RX lane 1 low-power data transmission synchronization error interrupt enable */
    using CSI_IER1_ESYNCESCDL1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 1 low-power data transmission interrupt error disabled (value: 0)
     *          - B_0x1: Lane 1 low-power data transmission Interrupt error enabled (value: 1)
     */
        /** @brief Lane 1 low-power data transmission interrupt error disabled */
    constexpr std::uint32_t CSI_IER1_ESYNCESCDL1IE_B_0x0 = 0;
        /** @brief Lane 1 low-power data transmission Interrupt error enabled */
    constexpr std::uint32_t CSI_IER1_ESYNCESCDL1IE_B_0x1 = 1;

    /** @brief D-PHY_RX lane 1 control error interrupt enable */
    using CSI_IER1_ECTRLDL1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lane 1 control error interrupt disabled (value: 0)
     *          - B_0x1: Lane 1 control error interrupt enabled (value: 1)
     */
        /** @brief Lane 1 control error interrupt disabled */
    constexpr std::uint32_t CSI_IER1_ECTRLDL1IE_B_0x0 = 0;
        /** @brief Lane 1 control error interrupt enabled */
    constexpr std::uint32_t CSI_IER1_ECTRLDL1IE_B_0x1 = 1;

    /** @brief CSI-2 Host status register 0 */
    using CSI_SR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 0 flag */
    using CSI_SR0_LB0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 1 flag */
    using CSI_SR0_LB1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 2 flag */
    using CSI_SR0_LB2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line/byte counter 3 flag */
    using CSI_SR0_LB3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 0 flag */
    using CSI_SR0_TIM0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 flag */
    using CSI_SR0_TIM1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 2 flag */
    using CSI_SR0_TIM2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 3 flag */
    using CSI_SR0_TIM3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOF flag for virtual channel 0 */
    using CSI_SR0_SOF0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOF flag for virtual channel 1 */
    using CSI_SR0_SOF1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOF flag for virtual channel 2 */
    using CSI_SR0_SOF2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOF flag for virtual channel 3 */
    using CSI_SR0_SOF3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EOF flag for virtual channel 0 */
    using CSI_SR0_EOF0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EOF flag for virtual channel 1 */
    using CSI_SR0_EOF1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EOF flag for virtual channel 2 */
    using CSI_SR0_EOF2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EOF flag for virtual channel 3 */
    using CSI_SR0_EOF3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short packet flag */
    using CSI_SR0_SPKTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel 0 state flag */
    using CSI_SR0_VC0STATEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel inactive (value: 0)
     *          - B_0x1: Virtual channel active (value: 1)
     */
        /** @brief Virtual channel inactive */
    constexpr std::uint32_t CSI_SR0_VC0STATEF_B_0x0 = 0;
        /** @brief Virtual channel active */
    constexpr std::uint32_t CSI_SR0_VC0STATEF_B_0x1 = 1;

    /** @brief Virtual channel 1 state flag */
    using CSI_SR0_VC1STATEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel inactive (value: 0)
     *          - B_0x1: Virtual channel active (value: 1)
     */
        /** @brief Virtual channel inactive */
    constexpr std::uint32_t CSI_SR0_VC1STATEF_B_0x0 = 0;
        /** @brief Virtual channel active */
    constexpr std::uint32_t CSI_SR0_VC1STATEF_B_0x1 = 1;

    /** @brief Virtual channel 2 state flag */
    using CSI_SR0_VC2STATEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel inactive (value: 0)
     *          - B_0x1: Virtual channel active (value: 1)
     */
        /** @brief Virtual channel inactive */
    constexpr std::uint32_t CSI_SR0_VC2STATEF_B_0x0 = 0;
        /** @brief Virtual channel active */
    constexpr std::uint32_t CSI_SR0_VC2STATEF_B_0x1 = 1;

    /** @brief Virtual channel 3 state flag */
    using CSI_SR0_VC3STATEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Virtual channel inactive (value: 0)
     *          - B_0x1: Virtual channel active (value: 1)
     */
        /** @brief Virtual channel inactive */
    constexpr std::uint32_t CSI_SR0_VC3STATEF_B_0x0 = 0;
        /** @brief Virtual channel active */
    constexpr std::uint32_t CSI_SR0_VC3STATEF_B_0x1 = 1;

    /** @brief Clock changer FIFO full flag */
    using CSI_SR0_CCFIFOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC error flag */
    using CSI_SR0_CRCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error flag */
    using CSI_SR0_ECCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Corrected ECC error flag */
    using CSI_SR0_CECCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type ID error flag */
    using CSI_SR0_IDERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short packet error flag */
    using CSI_SR0_SPKTERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog error flag */
    using CSI_SR0_WDERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Invalid synchronization error flag */
    using CSI_SR0_SYNCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host status register 1 */
    using CSI_SR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOT error flag on lane 0 */
    using CSI_SR1_ESOTDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOT synchronization error flag on lane 0 */
    using CSI_SR1_ESOTSYNCDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 0 escape entry error flag */
    using CSI_SR1_EESCDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 0 low-power data transmission synchronization error flag */
    using CSI_SR1_ESYNCESCDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 0 control error flag */
    using CSI_SR1_ECTRLDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOT error flag on lane 1 */
    using CSI_SR1_ESOTDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SOT synchronization error flag on lane 1 */
    using CSI_SR1_ESOTSYNCDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 1 escape entry error flag */
    using CSI_SR1_EESCDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 1 low-power data transmission synchronization error flag */
    using CSI_SR1_ESYNCESCDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 1 control error flag */
    using CSI_SR1_ECTRLDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 0 high-speed reception active */
    using CSI_SR1_ACTDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 0 receiver synchronization observed */
    using CSI_SR1_SYNCDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 0 high-speed skew calibration */
    using CSI_SR1_SKCALDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX receiver data lane 0 in stop state */
    using CSI_SR1_STOPDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX receiver ultra-low-power state (not) active on data lane 0 */
    using CSI_SR1_ULPNDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 1 high-speed reception active */
    using CSI_SR1_ACTDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 1 receiver synchronization observed */
    using CSI_SR1_SYNCDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX lane 1 high-speed skew calibration */
    using CSI_SR1_SKCALDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX receiver data lane 1 in stop state */
    using CSI_SR1_STOPDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX receiver ultra-low-power state (not) active on data lane 1 */
    using CSI_SR1_ULPNDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX receiver in stop state for the clock lane */
    using CSI_SR1_STOPCLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX receiver ULP state (not) active */
    using CSI_SR1_ULPNACTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX receiver Ultra-Low power state (not) on clock lane. */
    using CSI_SR1_ULPNCLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY_RX receiver clock active flag */
    using CSI_SR1_ACTCLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host flag clear register 0 */
    using CSI_FCR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear line/byte counter 0 flag */
    using CSI_FCR0_CLB0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear line/byte counter 1 flag */
    using CSI_FCR0_CLB1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear line/byte counter 2 flag */
    using CSI_FCR0_CLB2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear line/byte counter 3 flag */
    using CSI_FCR0_CLB3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timer 0 flag */
    using CSI_FCR0_CTIM0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timer 1 flag */
    using CSI_FCR0_CTIM1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timer 2 flag */
    using CSI_FCR0_CTIM2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timer 3 flag */
    using CSI_FCR0_CTIM3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SOF flag for virtual channel 0 */
    using CSI_FCR0_CSOF0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SOF flag for virtual channel 1 */
    using CSI_FCR0_CSOF1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SOF flag for virtual channel 2 */
    using CSI_FCR0_CSOF2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SOF flag for virtual channel 3 */
    using CSI_FCR0_CSOF3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear EOF flag for virtual channel 0 */
    using CSI_FCR0_CEOF0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear EOF flag for virtual channel 1 */
    using CSI_FCR0_CEOF1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear EOF flag for virtual channel 2 */
    using CSI_FCR0_CEOF2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear EOF flag for virtual channel 3 */
    using CSI_FCR0_CEOF3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear short packet flag */
    using CSI_FCR0_CSPKTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear clock changer FIFO full flag */
    using CSI_FCR0_CCCFIFOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear CRC error flag */
    using CSI_FCR0_CCRCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC error flag */
    using CSI_FCR0_CECCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear corrected ECC error flag */
    using CSI_FCR0_CCECCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear data type ID error flag */
    using CSI_FCR0_CIDERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear short packet error flag */
    using CSI_FCR0_CSPKTERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear watchdog error flag */
    using CSI_FCR0_CWDERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear invalid synchronization error flag */
    using CSI_FCR0_CSYNCERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host flag clear register 1 */
    using CSI_FCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SOT error flag on lane 0 */
    using CSI_FCR1_CESOTDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SOT synchronization error flag on lane 0 */
    using CSI_FCR1_CESOTSYNCDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear D-PHY_RX lane 0 escape entry error flag */
    using CSI_FCR1_CEESCDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear D-PHY_RX lane 0 low-power data transmission synchronization error flag */
    using CSI_FCR1_CESYNCESCDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear D-PHY_RX lane 0 control error flag */
    using CSI_FCR1_CECTRLDL0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SOT error flag on lane 1 */
    using CSI_FCR1_CESOTDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SOT synchronization error flag on lane 1 */
    using CSI_FCR1_CESOTSYNCDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear D-PHY_RX lane 1 escape entry error flag */
    using CSI_FCR1_CEESCDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear D-PHY_RX lane 1 low-power data transmission synchronization error flag */
    using CSI_FCR1_CESYNCESCDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear D-PHY_RX lane 1 control error flag */
    using CSI_FCR1_CECTRLDL1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host short packet data field register */
    using CSI_SPDFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data field */
    using CSI_SPDFR_DATAFIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type class */
    using CSI_SPDFR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel */
    using CSI_SPDFR_VCHANNEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host error register 1 */
    using CSI_ERR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type having a CRC error */
    using CSI_ERR1_CRCDTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel having a CRC error */
    using CSI_ERR1_CRCVCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type having a corrected ECC error */
    using CSI_ERR1_CECCDTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel having a corrected ECC error */
    using CSI_ERR1_CECCVCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type in error */
    using CSI_ERR1_IDDTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel having ID error */
    using CSI_ERR1_IDVCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI-2 Host error register 2 */
    using CSI_ERR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type having a short packet error */
    using CSI_ERR2_SPKTDTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel having a short packet error */
    using CSI_ERR2_SPKTVCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel having a watchdog error */
    using CSI_ERR2_WDVCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel having synchronization error */
    using CSI_ERR2_SYNCVCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI PHY reset control register */
    using CSI_PRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief When set to 0, this bit places the digital section of the D-PHY in the reset state. */
    using CSI_PRCR_PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PHY is disabled (in reset state). (value: 0)
     *          - B_0x1: PHY is enabled (out of reset state). (value: 1)
     */
        /** @brief PHY is disabled (in reset state). */
    constexpr std::uint32_t CSI_PRCR_PEN_B_0x0 = 0;
        /** @brief PHY is enabled (out of reset state). */
    constexpr std::uint32_t CSI_PRCR_PEN_B_0x1 = 1;

    /** @brief CSI PHY mode control register */
    using CSI_PMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1004, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force to Rx mode the data lane 0 */
    using CSI_PMCR_FRXMDL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t CSI_PMCR_FRXMDL0_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t CSI_PMCR_FRXMDL0_B_0x1 = 1;

    /** @brief Force to Rx mode the data lane 1 */
    using CSI_PMCR_FRXMDL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t CSI_PMCR_FRXMDL1_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t CSI_PMCR_FRXMDL1_B_0x1 = 1;

    /** @brief Force to Tx Stop mode the data lane 0 */
    using CSI_PMCR_FTXSMDL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t CSI_PMCR_FTXSMDL0_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t CSI_PMCR_FTXSMDL0_B_0x1 = 1;

    /** @brief Disable turn-around data lane 0 */
    using CSI_PMCR_DTDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t CSI_PMCR_DTDL_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t CSI_PMCR_DTDL_B_0x1 = 1;

    /** @brief Turn-around request data lane 0 */
    using CSI_PMCR_RTDL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request (value: 0)
     *          - B_0x1: Request for turn-around for DL0 (value: 1)
     */
        /** @brief No request */
    constexpr std::uint32_t CSI_PMCR_RTDL0_B_0x0 = 0;
        /** @brief Request for turn-around for DL0 */
    constexpr std::uint32_t CSI_PMCR_RTDL0_B_0x1 = 1;

    /** @brief Tx ULP escape-mode data lane 0 */
    using CSI_PMCR_TUESDL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx ULP exit sequence data lane 0 */
    using CSI_PMCR_TUEXDL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI PHY frequency control register */
    using CSI_PFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration clock frequency range selection */
    using CSI_PFCR_CCFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY high-speed frequency range selection */
    using CSI_PFCR_HSFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data lane direction of lane 0 */
    using CSI_PFCR_DLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx (value: 0)
     *          - B_0x1: Tx (value: 1)
     */
        /** @brief Rx */
    constexpr std::uint32_t CSI_PFCR_DLD_B_0x0 = 0;
        /** @brief Tx */
    constexpr std::uint32_t CSI_PFCR_DLD_B_0x1 = 1;

    /** @brief CSI PHY test control register 0 */
    using CSI_PTCR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1010, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Test-interface clock enable for the TDI bus into the PHY */
    using CSI_PTCR0_TCKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Test-interface reset enable for the TDI bus into the PHY */
    using CSI_PTCR0_TRSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI PHY test control register 1 */
    using CSI_PTCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1014, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Test-interface data in */
    using CSI_PTCR1_TDI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Test-interface write mode selector */
    using CSI_PTCR1_TWM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data write operation is set on the rising edge of the testclk signal. (value: 0)
     *          - B_0x1: Address write operation is set on the falling edge of the testclk signal. (value: 1)
     */
        /** @brief Data write operation is set on the rising edge of the testclk signal. */
    constexpr std::uint32_t CSI_PTCR1_TWM_B_0x0 = 0;
        /** @brief Address write operation is set on the falling edge of the testclk signal. */
    constexpr std::uint32_t CSI_PTCR1_TWM_B_0x1 = 1;

    /** @brief CSI PHY test status register */
    using CSI_PTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1018, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI PHY test interface data output bus for read-back and internal probing functionalities */
    using CSI_PTSR_TDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
