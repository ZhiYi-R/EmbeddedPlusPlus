/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_LPAWUR_HPP
#define EMBEDDED_PP_STM32WL33_LPAWUR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief LPAWUR peripheral */
namespace STM32WL33::LPAWUR {

    /** @brief FRAME_CONFIG0 register */
    using FRAME_CONFIG0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The number of transitions for preamble detection when receiving the manchester encoded preamble. */
    using FRAME_CONFIG0_PREAMBLE_THRESHOLD_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame sync pattern length ( Manchester encoded ). */
    using FRAME_CONFIG0_SYNC_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief detection threshold when receivng the Frame sync ( Manchester encoded). */
    using FRAME_CONFIG0_SYNC_THRESHOLD_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The number of data Bytes in the payload ( decoded ). */
    using FRAME_CONFIG0_PAYLOAD_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The number of expected slow clock cycle per each manchester coded bit. */
    using FRAME_CONFIG0_SLOW_CLK_CYCLE_PER_BIT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FRAME_CONFIG1 register */
    using FRAME_CONFIG1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ki gain value for the timing recovery loop. */
    using FRAME_CONFIG1_KI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief kp gain value for the timing recovery loop. */
    using FRAME_CONFIG1_KP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The timeout in manchester encoded bits for the Frame Sync,it represents the number of samples after which in case the frame sync is not detected a sync_error is raised. */
    using FRAME_CONFIG1_FRAME_SYNC_COUNTER_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble detection enable */
    using FRAME_CONFIG1_PREAMBLE_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timing recovery loop algorithm selection: */
    using FRAME_CONFIG1_TREC_LOOP_ALGO_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FRAME_SYNC_CONFIG register */
    using FRAME_SYNC_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The value of the frame sync pattern, Low word, manchester encoded, used when the frame sync length is 16 bit (default 0x9696 which represent a frame sync value of 0x99) */
    using FRAME_SYNC_CONFIG_FRAME_SYNC_PATTERN_L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The value of the frame sync pattern, High word, manchester encoded, used only when the frame sync length is 32 bits (default 0x0000 ) */
    using FRAME_SYNC_CONFIG_FRAME_SYNC_PATTERN_H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFIP_CONFIG register */
    using RFIP_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable (start) or Disable (stop) the LPAWUR feature (0: disabled by default) */
    using RFIP_CONFIG_LPAWUR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - 00: the bit Sync has been detected */
    using RFIP_CONFIG_WAKEUP_LEVEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_CONFIG register */
    using RF_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - 0 : Normal operation (default) */
    using RF_CONFIG_ED_SWITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibrate 4kHz clock (programmable divider) */
    using RF_CONFIG_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC level (Low) (default value: 0x2) */
    using RF_CONFIG_AGC_LOW_LVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DC current subtraction enabling signal (default value: 0x1) */
    using RF_CONFIG_ED_DC_CTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC level (High) (default value: 0x4) */
    using RF_CONFIG_AGC_HIGH_LVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current versus VBAT calibration for ED */
    using RF_CONFIG_ED_ICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPF3_CAL field */
    using RF_CONFIG_LPF3_CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC_CONFIG register */
    using AGC_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Define the working mode of the AGC: */
    using AGC_CONFIG_AGC_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The behavior when the AGC is ON and is working in HOLD mode */
    using AGC_CONFIG_AGC_HOLD_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The AGC reset behavior when the AGC is working in ON or HOLD mode */
    using AGC_CONFIG_AGC_RESET_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAYLOAD_0 register */
    using PAYLOAD_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief First part of the payload (Least significant Byte First) */
    using PAYLOAD_0_PAYLOAD_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAYLOAD_1 register */
    using PAYLOAD_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second part of the payload (Least significant Byte First) */
    using PAYLOAD_1_PAYLOAD_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
