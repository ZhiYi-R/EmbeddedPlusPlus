/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H523_I3C_HPP
#define EMBEDDED_PP_STM32H523_I3C_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief I3C register block */
namespace STM32H523::I3C {

    /** @brief I3C message control register */
    using I3C_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Count of data to transfer during a read or write message, in bytes (whatever I3C acts as controller/target) */
    using I3C_CR_DCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0000: no data to transfer (value: 0)
     *          - B_0x0001: 1 byte (value: 1)
     *          - B_0x0002: 2 bytes (value: 2)
     *          - B_0xFFFF: 64 Kbytes - 1 byte (value: 65535)
     */
        /** @brief no data to transfer */
    constexpr std::uint32_t I3C_CR_DCNT_B_0x0000 = 0;
        /** @brief 1 byte */
    constexpr std::uint32_t I3C_CR_DCNT_B_0x0001 = 1;
        /** @brief 2 bytes */
    constexpr std::uint32_t I3C_CR_DCNT_B_0x0002 = 2;
        /** @brief 64 Kbytes - 1 byte */
    constexpr std::uint32_t I3C_CR_DCNT_B_0xFFFF = 65535;

    /** @brief Read / non-write message (when I3C acts as controller) */
    using I3C_CR_RNW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write message (value: 0)
     *          - B_0x1: read message (value: 1)
     */
        /** @brief write message */
    constexpr std::uint32_t I3C_CR_RNW_B_0x0 = 0;
        /** @brief read message */
    constexpr std::uint32_t I3C_CR_RNW_B_0x1 = 1;

    /** @brief 7-bit I3C dynamic / Iless thansup>2less than/sup>C static target address (when I3C acts as controller) */
    using I3C_CR_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Message type (whatever I3C acts as controller/target) */
    using I3C_CR_MTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_WHEN_I3C_ACTS_AS_I3C_CONTROLLER: SCL clock is forced to stop until a next control word is executed (value: 0)
     *          - B_0x1_WHEN_I3C_ACTS_AS_I3C_CONTROLLER: header message (value: 1)
     *          - B_0x2_WHEN_I3C_ACTS_AS_I3C_CONTROLLER: private message (refer to Figure 665) (value: 2)
     *          - B_0x3_WHEN_I3C_ACTS_AS_I3C_CONTROLLER: direct message (second part of an I3C SDR direct CCC command) (refer to Figure 658) (value: 3)
     *          - B_0x4_WHEN_I3C_ACTS_AS_I3C_CONTROLLER: legacy Iless thansup>2less than/sup>C message (refer to Figure 667) (value: 4)
     *          - B_0x8_WHEN_I3C_ACTS_AS_I3C_TARGET: hot-join request (W) (refer to Figure 669) (value: 8)
     *          - B_0x9_WHEN_I3C_ACTS_AS_I3C_TARGET: controller-role request (W) (refer to Figure 670) (value: 9)
     *          - B_0xA_WHEN_I3C_ACTS_AS_I3C_TARGET: IBI (in-band interrupt) request (R) (refer to Figure 668) (value: 10)
     */
        /** @brief SCL clock is forced to stop until a next control word is executed */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x0_WHEN_I3C_ACTS_AS_I3C_CONTROLLER = 0;
        /** @brief header message */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x1_WHEN_I3C_ACTS_AS_I3C_CONTROLLER = 1;
        /** @brief private message (refer to Figure 665) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x2_WHEN_I3C_ACTS_AS_I3C_CONTROLLER = 2;
        /** @brief direct message (second part of an I3C SDR direct CCC command) (refer to Figure 658) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x3_WHEN_I3C_ACTS_AS_I3C_CONTROLLER = 3;
        /** @brief legacy Iless thansup>2less than/sup>C message (refer to Figure 667) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x4_WHEN_I3C_ACTS_AS_I3C_CONTROLLER = 4;
        /** @brief hot-join request (W) (refer to Figure 669) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x8_WHEN_I3C_ACTS_AS_I3C_TARGET = 8;
        /** @brief controller-role request (W) (refer to Figure 670) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x9_WHEN_I3C_ACTS_AS_I3C_TARGET = 9;
        /** @brief IBI (in-band interrupt) request (R) (refer to Figure 668) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0xA_WHEN_I3C_ACTS_AS_I3C_TARGET = 10;

    /** @brief Message end type/last message of a frame (when the I3C acts as controller) */
    using I3C_CR_MEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this message from controller is followed by a repeated start (Sr), before another message must be emitted (value: 0)
     *          - B_0x1: this message from controller ends with a stop (P), being the last message of a frame (value: 1)
     */
        /** @brief this message from controller is followed by a repeated start (Sr), before another message must be emitted */
    constexpr std::uint32_t I3C_CR_MEND_B_0x0 = 0;
        /** @brief this message from controller ends with a stop (P), being the last message of a frame */
    constexpr std::uint32_t I3C_CR_MEND_B_0x1 = 1;

    /** @brief I3C message control register */
    using I3C_CR_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Count of related data to the CCC command to transfer as CCC defining bytes, or CCC sub-command bytes, or CCC data bytes, in bytes */
    using I3C_CR_ALTERNATE1_DCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0000: no data to transfer. (value: 0)
     *          - B_0x0001: 1 byte (value: 1)
     *          - B_0x0002: 2 bytes (value: 2)
     *          - B_0xFFFF: 64 Kbytes - 1 byte (value: 65535)
     */
        /** @brief no data to transfer. */
    constexpr std::uint32_t I3C_CR_ALTERNATE1_DCNT_B_0x0000 = 0;
        /** @brief 1 byte */
    constexpr std::uint32_t I3C_CR_ALTERNATE1_DCNT_B_0x0001 = 1;
        /** @brief 2 bytes */
    constexpr std::uint32_t I3C_CR_ALTERNATE1_DCNT_B_0x0002 = 2;
        /** @brief 64 Kbytes - 1 byte */
    constexpr std::uint32_t I3C_CR_ALTERNATE1_DCNT_B_0xFFFF = 65535;

    /** @brief 8-bit CCC code (when I3C acts as controller) */
    using I3C_CR_ALTERNATE1_CCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Message type (when I3C acts as controller) */
    using I3C_CR_ALTERNATE1_MTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x6_WHEN_I3C_ACTS_AS_I3C_CONTROLLER: broadcast/direct CCC command (refer to Table 540, Figure 658, Figure 659, Figure 660) (value: 6)
     */
        /** @brief broadcast/direct CCC command (refer to Table 540, Figure 658, Figure 659, Figure 660) */
    constexpr std::uint32_t I3C_CR_ALTERNATE1_MTYPE_B_0x6_WHEN_I3C_ACTS_AS_I3C_CONTROLLER = 6;

    /** @brief Message end type/last message of a frame (when I3C acts as controller) */
    using I3C_CR_ALTERNATE1_MEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this message from controller is followed by a repeated start (Sr), before another message must be emitted (value: 0)
     *          - B_0x1: the message from the controller ends with a stop (P), being the last message of a frame (value: 1)
     */
        /** @brief this message from controller is followed by a repeated start (Sr), before another message must be emitted */
    constexpr std::uint32_t I3C_CR_ALTERNATE1_MEND_B_0x0 = 0;
        /** @brief the message from the controller ends with a stop (P), being the last message of a frame */
    constexpr std::uint32_t I3C_CR_ALTERNATE1_MEND_B_0x1 = 1;

    /** @brief I3C configuration register */
    using I3C_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C enable (whatever I3C acts as controller/target) */
    using I3C_CFGR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C is disabled (value: 0)
     *          - B_0x1: I3C is enabled (value: 1)
     */
        /** @brief I3C is disabled */
    constexpr std::uint32_t I3C_CFGR_EN_B_0x0 = 0;
        /** @brief I3C is enabled */
    constexpr std::uint32_t I3C_CFGR_EN_B_0x1 = 1;

    /** @brief Initial controller/target role */
    using I3C_CFGR_CRINIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: target role (value: 0)
     *          - B_0x1: controller role (value: 1)
     */
        /** @brief target role */
    constexpr std::uint32_t I3C_CFGR_CRINIT_B_0x0 = 0;
        /** @brief controller role */
    constexpr std::uint32_t I3C_CFGR_CRINIT_B_0x1 = 1;

    /** @brief No arbitrable header after a start (when I3C acts as a controller) */
    using I3C_CFGR_NOARBH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An arbitrable header (0b111_1110 + RnW = 0) is emitted after a start and before a legacy Iless thansup>2less than/sup>C message or an I3C SDR private read/write message (default). (value: 0)
     *          - B_0x1: No arbitrable header (value: 1)
     */
        /** @brief An arbitrable header (0b111_1110 + RnW = 0) is emitted after a start and before a legacy Iless thansup>2less than/sup>C message or an I3C SDR private read/write message (default). */
    constexpr std::uint32_t I3C_CFGR_NOARBH_B_0x0 = 0;
        /** @brief No arbitrable header */
    constexpr std::uint32_t I3C_CFGR_NOARBH_B_0x1 = 1;

    /** @brief HDR reset pattern enable (when I3C acts as a controller) */
    using I3C_CFGR_RSTPTRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: standard stop emitted at the end of a frame (value: 0)
     *          - B_0x1: HDR reset pattern is inserted before the stop of any emitted frame that includes a RSTACT CCC command (value: 1)
     */
        /** @brief standard stop emitted at the end of a frame */
    constexpr std::uint32_t I3C_CFGR_RSTPTRN_B_0x0 = 0;
        /** @brief HDR reset pattern is inserted before the stop of any emitted frame that includes a RSTACT CCC command */
    constexpr std::uint32_t I3C_CFGR_RSTPTRN_B_0x1 = 1;

    /** @brief HDR exit pattern enable (when I3C acts as a controller) */
    using I3C_CFGR_EXITPTRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDR exit pattern is not sent after the issued message header (MTYPE[3:0] = 0001 in the I3C_CR register). (value: 0)
     *          - B_0x1: HDR exit pattern is sent after the issued message header (MTYPE[3:0] = 0001). (value: 1)
     */
        /** @brief HDR exit pattern is not sent after the issued message header (MTYPE[3:0] = 0001 in the I3C_CR register). */
    constexpr std::uint32_t I3C_CFGR_EXITPTRN_B_0x0 = 0;
        /** @brief HDR exit pattern is sent after the issued message header (MTYPE[3:0] = 0001). */
    constexpr std::uint32_t I3C_CFGR_EXITPTRN_B_0x1 = 1;

    /** @brief High-keeper enable on SDA line (when I3C acts as a controller) */
    using I3C_CFGR_HKSDAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-keeper is disabled (value: 0)
     *          - B_0x1: High-keeper is enabled, and the weak pull-up is effective on the T bit, instead of the open-drain class pull-up. (value: 1)
     */
        /** @brief High-keeper is disabled */
    constexpr std::uint32_t I3C_CFGR_HKSDAEN_B_0x0 = 0;
        /** @brief High-keeper is enabled, and the weak pull-up is effective on the T bit, instead of the open-drain class pull-up. */
    constexpr std::uint32_t I3C_CFGR_HKSDAEN_B_0x1 = 1;

    /** @brief Hot-join request acknowledge (when I3C acts as a controller) */
    using I3C_CFGR_HJACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hot-join request is not acknowledged (value: 0)
     *          - B_0x1: hot-join request is acknowledged (value: 1)
     */
        /** @brief hot-join request is not acknowledged */
    constexpr std::uint32_t I3C_CFGR_HJACK_B_0x0 = 0;
        /** @brief hot-join request is acknowledged */
    constexpr std::uint32_t I3C_CFGR_HJACK_B_0x1 = 1;

    /** @brief RX-FIFO DMA request enable (whatever I3C acts as controller/target) */
    using I3C_CFGR_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode is disabled for RX-FIFO (value: 0)
     *          - B_0x1: DMA mode is enabled for RX-FIFO (value: 1)
     */
        /** @brief DMA mode is disabled for RX-FIFO */
    constexpr std::uint32_t I3C_CFGR_RXDMAEN_B_0x0 = 0;
        /** @brief DMA mode is enabled for RX-FIFO */
    constexpr std::uint32_t I3C_CFGR_RXDMAEN_B_0x1 = 1;

    /** @brief RX-FIFO flush (whatever I3C acts as controller/target) */
    using I3C_CFGR_RXFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: flush RX-FIFO (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_RXFLUSH_B_0x0 = 0;
        /** @brief flush RX-FIFO */
    constexpr std::uint32_t I3C_CFGR_RXFLUSH_B_0x1 = 1;

    /** @brief RX-FIFO threshold (whatever I3C acts as controller/target) */
    using I3C_CFGR_RXTHRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1-byte threshold (value: 0)
     *          - B_0x1: 1-word/4-bytes threshold (value: 1)
     */
        /** @brief 1-byte threshold */
    constexpr std::uint32_t I3C_CFGR_RXTHRES_B_0x0 = 0;
        /** @brief 1-word/4-bytes threshold */
    constexpr std::uint32_t I3C_CFGR_RXTHRES_B_0x1 = 1;

    /** @brief TX-FIFO DMA request enable (whatever I3C acts as controller/target) */
    using I3C_CFGR_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode is disabled for TX-FIFO (value: 0)
     *          - B_0x1: DMA mode is enabled for TX-FIFO (value: 1)
     */
        /** @brief DMA mode is disabled for TX-FIFO */
    constexpr std::uint32_t I3C_CFGR_TXDMAEN_B_0x0 = 0;
        /** @brief DMA mode is enabled for TX-FIFO */
    constexpr std::uint32_t I3C_CFGR_TXDMAEN_B_0x1 = 1;

    /** @brief TX-FIFO flush (whatever I3C acts as controller/target) */
    using I3C_CFGR_TXFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: flush TX-FIFO (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_TXFLUSH_B_0x0 = 0;
        /** @brief flush TX-FIFO */
    constexpr std::uint32_t I3C_CFGR_TXFLUSH_B_0x1 = 1;

    /** @brief TX-FIFO threshold (whatever I3C acts as controller/target) */
    using I3C_CFGR_TXTHRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1-byte threshold (value: 0)
     *          - B_0x1: 1-word / 4-byte threshold (value: 1)
     */
        /** @brief 1-byte threshold */
    constexpr std::uint32_t I3C_CFGR_TXTHRES_B_0x0 = 0;
        /** @brief 1-word / 4-byte threshold */
    constexpr std::uint32_t I3C_CFGR_TXTHRES_B_0x1 = 1;

    /** @brief S-FIFO DMA request enable (when I3C acts as controller) */
    using I3C_CFGR_SDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode is disabled for reading status register I3C_SR (value: 0)
     *          - B_0x1: DMA mode is enabled for reading status register I3C_SR (value: 1)
     */
        /** @brief DMA mode is disabled for reading status register I3C_SR */
    constexpr std::uint32_t I3C_CFGR_SDMAEN_B_0x0 = 0;
        /** @brief DMA mode is enabled for reading status register I3C_SR */
    constexpr std::uint32_t I3C_CFGR_SDMAEN_B_0x1 = 1;

    /** @brief S-FIFO flush (when I3C acts as controller) */
    using I3C_CFGR_SFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: flush S-FIFO (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_SFLUSH_B_0x0 = 0;
        /** @brief flush S-FIFO */
    constexpr std::uint32_t I3C_CFGR_SFLUSH_B_0x1 = 1;

    /** @brief S-FIFO enable / status receive mode (when I3C acts as controller) */
    using I3C_CFGR_SMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: S-FIFO is disabled (value: 0)
     *          - B_0x1: S-FIFO is enabled. (value: 1)
     */
        /** @brief S-FIFO is disabled */
    constexpr std::uint32_t I3C_CFGR_SMODE_B_0x0 = 0;
        /** @brief S-FIFO is enabled. */
    constexpr std::uint32_t I3C_CFGR_SMODE_B_0x1 = 1;

    /** @brief Transmit mode (when I3C acts as controller) */
    using I3C_CFGR_TMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-FIFO and TX-FIFO are not preloaded before starting to emit a frame transfer. (value: 0)
     *          - B_0x1: C-FIFO and TX-FIFO are first preloaded (also TX-FIFO if needed, depending on the frame format) before starting to emit a frame transfer. (value: 1)
     */
        /** @brief C-FIFO and TX-FIFO are not preloaded before starting to emit a frame transfer. */
    constexpr std::uint32_t I3C_CFGR_TMODE_B_0x0 = 0;
        /** @brief C-FIFO and TX-FIFO are first preloaded (also TX-FIFO if needed, depending on the frame format) before starting to emit a frame transfer. */
    constexpr std::uint32_t I3C_CFGR_TMODE_B_0x1 = 1;

    /** @brief C-FIFO DMA request enable (when I3C acts as controller) */
    using I3C_CFGR_CDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode is disabled for C-FIFO (value: 0)
     *          - B_0x1: DMA mode is enabled for C-FIFO (value: 1)
     */
        /** @brief DMA mode is disabled for C-FIFO */
    constexpr std::uint32_t I3C_CFGR_CDMAEN_B_0x0 = 0;
        /** @brief DMA mode is enabled for C-FIFO */
    constexpr std::uint32_t I3C_CFGR_CDMAEN_B_0x1 = 1;

    /** @brief C-FIFO flush (when I3C acts as controller) */
    using I3C_CFGR_CFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: flush C-FIFO (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_CFLUSH_B_0x0 = 0;
        /** @brief flush C-FIFO */
    constexpr std::uint32_t I3C_CFGR_CFLUSH_B_0x1 = 1;

    /** @brief Frame transfer set (software trigger) (when I3C acts as controller) */
    using I3C_CFGR_TSFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: setting this bit initiates a frame transfer by causing the hardware to assert the flag CFNFF in the I3C_EVR register (C-FIFO not full and a control word is needed) (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_TSFSET_B_0x0 = 0;
        /** @brief setting this bit initiates a frame transfer by causing the hardware to assert the flag CFNFF in the I3C_EVR register (C-FIFO not full and a control word is needed) */
    constexpr std::uint32_t I3C_CFGR_TSFSET_B_0x1 = 1;

    /** @brief I3C receive data byte register */
    using I3C_RDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit received data on I3C bus. */
    using I3C_RDR_RDB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C receive data word register */
    using I3C_RDWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit received data (earliest byte on I3C bus). */
    using I3C_RDWR_RDB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit received data (next byte after RDB0 on I3C bus). */
    using I3C_RDWR_RDB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit received data (next byte after RDB1 on I3C bus). */
    using I3C_RDWR_RDB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit received data (latest byte on I3C bus). */
    using I3C_RDWR_RDB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C transmit data byte register */
    using I3C_TDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit data to transmit on I3C bus. */
    using I3C_TDR_TDB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C transmit data word register */
    using I3C_TDWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit transmit data (earliest byte on I3C bus) */
    using I3C_TDWR_TDB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit transmit data (next byte after TDB0[7:0] on I3C bus). */
    using I3C_TDWR_TDB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit transmit data (next byte after TDB1[7:0] on I3C bus). */
    using I3C_TDWR_TDB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit transmit data (latest byte on I3C bus). */
    using I3C_TDWR_TDB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C IBI payload data register */
    using I3C_IBIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit IBI payload data (earliest byte on I3C bus, MDB[7:0] mandatory data byte). */
    using I3C_IBIDR_IBIDB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit IBI payload data (next byte on I3C bus after IBIDB0[7:0]). */
    using I3C_IBIDR_IBIDB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit IBI payload data (next byte on I3C bus after IBIDB1[7:0]). */
    using I3C_IBIDR_IBIDB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit IBI payload data (latest byte on I3C bus). */
    using I3C_IBIDR_IBIDB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C target transmit configuration register */
    using I3C_TGTTDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data counter, in bytes (when I3C is configured as target) */
    using I3C_TGTTDR_TGTTDCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preload of the TX-FIFO (when I3C is configured as target) */
    using I3C_TGTTDR_PRELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TX-FIFO preload (value: 0)
     *          - B_0x1: TX-FIFO preload (value: 1)
     */
        /** @brief no TX-FIFO preload */
    constexpr std::uint32_t I3C_TGTTDR_PRELOAD_B_0x0 = 0;
        /** @brief TX-FIFO preload */
    constexpr std::uint32_t I3C_TGTTDR_PRELOAD_B_0x1 = 1;

    /** @brief I3C status register */
    using I3C_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data counter */
    using I3C_SR_XDCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A private read message is ended prematurely by the target (when the I3C acts as controller) */
    using I3C_SR_ABT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no early completion from the target (value: 0)
     *          - B_0x1: early completion from the target (value: 1)
     */
        /** @brief no early completion from the target */
    constexpr std::uint32_t I3C_SR_ABT_B_0x0 = 0;
        /** @brief early completion from the target */
    constexpr std::uint32_t I3C_SR_ABT_B_0x1 = 1;

    /** @brief Message direction */
    using I3C_SR_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write (value: 0)
     *          - B_0x1: read (value: 1)
     */
        /** @brief write */
    constexpr std::uint32_t I3C_SR_DIR_B_0x0 = 0;
        /** @brief read */
    constexpr std::uint32_t I3C_SR_DIR_B_0x1 = 1;

    /** @brief Message identifier/counter of a given frame (when the I3C acts as controller) */
    using I3C_SR_MID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C status error register */
    using I3C_SER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Protocol error code/type */
    using I3C_SER_CODERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CE0 error (transaction after sending CCC): (value: 0)
     *          - B_0x1: CE1 error (monitoring error): (value: 1)
     *          - B_0x2: CE2 error (no response to broadcast address): (value: 2)
     *          - B_0x3: CE3 error (failed controller-role hand-off): (value: 3)
     *          - B_0x8: TE0 error (invalid broadcast address 0b111_1110 + W): (value: 8)
     *          - B_0x9: TE1 error (CCC code): (value: 9)
     *          - B_0xA: TE2 error (write data): (value: 10)
     *          - B_0xB: TE3 error (assigned address during dynamic address arbitration): (value: 11)
     *          - B_0xC: TE4 error (0b111_1110 + R missing after Sr during dynamic address arbitration): (value: 12)
     *          - B_0xD: TE5 error (transaction after detecting CCC): (value: 13)
     *          - B_0xE: TE6 error (monitoring error): (value: 14)
     */
        /** @brief CE0 error (transaction after sending CCC): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0x0 = 0;
        /** @brief CE1 error (monitoring error): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0x1 = 1;
        /** @brief CE2 error (no response to broadcast address): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0x2 = 2;
        /** @brief CE3 error (failed controller-role hand-off): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0x3 = 3;
        /** @brief TE0 error (invalid broadcast address 0b111_1110 + W): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0x8 = 8;
        /** @brief TE1 error (CCC code): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0x9 = 9;
        /** @brief TE2 error (write data): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xA = 10;
        /** @brief TE3 error (assigned address during dynamic address arbitration): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xB = 11;
        /** @brief TE4 error (0b111_1110 + R missing after Sr during dynamic address arbitration): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xC = 12;
        /** @brief TE5 error (transaction after detecting CCC): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xD = 13;
        /** @brief TE6 error (monitoring error): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xE = 14;

    /** @brief Protocol error */
    using I3C_SER_PERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: whatever controller or target, hardware detected a protocol error, as detailed in CODERR[3:0] (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_PERR_B_0x0 = 0;
        /** @brief whatever controller or target, hardware detected a protocol error, as detailed in CODERR[3:0] */
    constexpr std::uint32_t I3C_SER_PERR_B_0x1 = 1;

    /** @brief SCL stall error (when the I3C acts as target) */
    using I3C_SER_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: target detected that SCL was stable for more than 125 s during an I3C SDR data read (during a direct CCC read, a private read, or an IB) (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_STALL_B_0x0 = 0;
        /** @brief target detected that SCL was stable for more than 125 s during an I3C SDR data read (during a direct CCC read, a private read, or an IB) */
    constexpr std::uint32_t I3C_SER_STALL_B_0x1 = 1;

    /** @brief RX-FIFO overrun or TX-FIFO underrun */
    using I3C_SER_DOVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: whatever controller or target, hardware detected either: (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_DOVR_B_0x0 = 0;
        /** @brief whatever controller or target, hardware detected either: */
    constexpr std::uint32_t I3C_SER_DOVR_B_0x1 = 1;

    /** @brief C-FIFO underrun or S-FIFO overrun (when the I3C acts as controller) */
    using I3C_SER_COVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: controller detected either: (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_COVR_B_0x0 = 0;
        /** @brief controller detected either: */
    constexpr std::uint32_t I3C_SER_COVR_B_0x1 = 1;

    /** @brief Address not acknowledged (when the I3C is configured as controller) */
    using I3C_SER_ANACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: controller detected that the static/dynamic address was not acknowledged by a target, either during: (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_ANACK_B_0x0 = 0;
        /** @brief controller detected that the static/dynamic address was not acknowledged by a target, either during: */
    constexpr std::uint32_t I3C_SER_ANACK_B_0x1 = 1;

    /** @brief Data not acknowledged (when the I3C acts as controller) */
    using I3C_SER_DNACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: controller detected that a data byte is not acknowledged by a target, either during: (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_DNACK_B_0x0 = 0;
        /** @brief controller detected that a data byte is not acknowledged by a target, either during: */
    constexpr std::uint32_t I3C_SER_DNACK_B_0x1 = 1;

    /** @brief Data error (when the I3C acts as controller) */
    using I3C_SER_DERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: controller detected a data error during the controller-role hand-off procedure (GETACCCR CCC, formerly known as GETACCMST) when the received target address or/and the parity bit do no match. (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_DERR_B_0x0 = 0;
        /** @brief controller detected a data error during the controller-role hand-off procedure (GETACCCR CCC, formerly known as GETACCMST) when the received target address or/and the parity bit do no match. */
    constexpr std::uint32_t I3C_SER_DERR_B_0x1 = 1;

    /** @brief I3C received message register */
    using I3C_RMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI received payload data count (when the I3C is configured as controller) */
    using I3C_RMR_IBIRDCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received CCC code (when the I3C is configured as target) */
    using I3C_RMR_RCODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received target address (when the I3C is configured as controller) */
    using I3C_RMR_RADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C event register */
    using I3C_EVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-FIFO empty flag (whatever the I3C acts as controller) */
    using I3C_EVR_CFEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX-FIFO empty flag (whatever the I3C acts as controller/target) */
    using I3C_EVR_TXFEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-FIFO not full flag (when the I3C acts as controller) */
    using I3C_EVR_CFNFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief S-FIFO not empty flag (when the I3C acts as controller) */
    using I3C_EVR_SFNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX-FIFO not full flag (whatever the I3C acts as controller/target) */
    using I3C_EVR_TXFNFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX-FIFO not empty flag (whatever the I3C acts as controller/target) */
    using I3C_EVR_RXFNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last written data byte/word flag (whatever the I3C acts as controller/target) */
    using I3C_EVR_TXLASTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last read data byte/word flag (when the I3C acts as controller) */
    using I3C_EVR_RXLASTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame complete flag (whatever the I3C acts as controller/target) */
    using I3C_EVR_FCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target-initiated read end flag (when the I3C acts as controller) */
    using I3C_EVR_RXTGTENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flag (whatever the I3C acts as controller/target) */
    using I3C_EVR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI flag (when the I3C acts as controller) */
    using I3C_EVR_IBIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI end flag (when the I3C acts as target) */
    using I3C_EVR_IBIENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controller-role request flag (when the I3C acts as controller) */
    using I3C_EVR_CRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controller-role update flag (when the I3C acts as target) */
    using I3C_EVR_CRUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hot-join flag (when the I3C acts as controller) */
    using I3C_EVR_HJF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up/missed start flag (when the I3C acts as target) */
    using I3C_EVR_WKPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Get flag (when the I3C acts as target) */
    using I3C_EVR_GETF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Get status flag (when the I3C acts as target) */
    using I3C_EVR_STAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dynamic address update flag (when the I3C acts as target) */
    using I3C_EVR_DAUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum write length update flag (when the I3C acts as target) */
    using I3C_EVR_MWLUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum read length update flag (when the I3C acts as target) */
    using I3C_EVR_MRLUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset pattern flag (when the I3C acts as target) */
    using I3C_EVR_RSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Activity state update flag (when the I3C acts as target) */
    using I3C_EVR_ASUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt/controller-role/hot-join update flag (when the I3C acts as target) */
    using I3C_EVR_INTUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEFTGTS flag (when the I3C acts as target) */
    using I3C_EVR_DEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Group addressing flag (when the I3C acts as target) */
    using I3C_EVR_GRPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C interrupt enable register */
    using I3C_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-FIFO not full interrupt enable when the I3C acts as controller */
    using I3C_IER_CFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_CFNFIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_CFNFIE_B_0x1 = 1;

    /** @brief S-FIFO not empty interrupt enable when the I3C acts as controller */
    using I3C_IER_SFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_SFNEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_SFNEIE_B_0x1 = 1;

    /** @brief TX-FIFO not full interrupt enable (whatever the I3C acts as controller/target) */
    using I3C_IER_TXFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_TXFNFIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_TXFNFIE_B_0x1 = 1;

    /** @brief RX-FIFO not empty interrupt enable (whatever the I3C acts as controller/target) */
    using I3C_IER_RXFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_RXFNEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_RXFNEIE_B_0x1 = 1;

    /** @brief frame complete interrupt enable (whatever the I3C acts as controller/target) */
    using I3C_IER_FCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_FCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_FCIE_B_0x1 = 1;

    /** @brief target-initiated read end interrupt enable (when the I3C acts as controller) */
    using I3C_IER_RXTGTENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_RXTGTENDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_RXTGTENDIE_B_0x1 = 1;

    /** @brief error interrupt enable (whatever the I3C acts as controller/target) */
    using I3C_IER_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_ERRIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_ERRIE_B_0x1 = 1;

    /** @brief IBI request interrupt enable (when the I3C acts as controller) */
    using I3C_IER_IBIIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_IBIIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_IBIIE_B_0x1 = 1;

    /** @brief IBI end interrupt enable (when the I3C acts as target) */
    using I3C_IER_IBIENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_IBIENDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_IBIENDIE_B_0x1 = 1;

    /** @brief Controller-role request interrupt enable (when the I3C acts as controller) */
    using I3C_IER_CRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_CRIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_CRIE_B_0x1 = 1;

    /** @brief Controller-role update interrupt enable (when the I3C acts as target) */
    using I3C_IER_CRUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_CRUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_CRUPDIE_B_0x1 = 1;

    /** @brief Hot-join interrupt enable (when the I3C acts as controller) */
    using I3C_IER_HJIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_HJIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_HJIE_B_0x1 = 1;

    /** @brief Wake-up interrupt enable (when the I3C acts as target) */
    using I3C_IER_WKPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_WKPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_WKPIE_B_0x1 = 1;

    /** @brief GETxxx CCC interrupt enable (except GETSTATUS of format 1) (when the I3C acts as target) */
    using I3C_IER_GETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_GETIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_GETIE_B_0x1 = 1;

    /** @brief format 1 GETSTATUS CCC interrupt enable (when the I3C acts as target) */
    using I3C_IER_STAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_STAIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_STAIE_B_0x1 = 1;

    /** @brief ENTDAA/RSTDAA/SETNEWDA CCC interrupt enable (when the I3C acts as target) */
    using I3C_IER_DAUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_DAUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_DAUPDIE_B_0x1 = 1;

    /** @brief SETMWL CCC interrupt enable (when the I3C acts as target) */
    using I3C_IER_MWLUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_MWLUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_MWLUPDIE_B_0x1 = 1;

    /** @brief SETMRL CCC interrupt enable (when the I3C acts as target) */
    using I3C_IER_MRLUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_MRLUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_MRLUPDIE_B_0x1 = 1;

    /** @brief reset pattern interrupt enable (when the I3C acts as target) */
    using I3C_IER_RSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_RSTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_RSTIE_B_0x1 = 1;

    /** @brief ENTASx CCC interrupt enable (when the I3C acts as target) */
    using I3C_IER_ASUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_ASUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_ASUPDIE_B_0x1 = 1;

    /** @brief ENEC/DISEC CCC interrupt enable (when the I3C acts as target) */
    using I3C_IER_INTUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_INTUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_INTUPDIE_B_0x1 = 1;

    /** @brief DEFTGTS CCC interrupt enable (when the I3C acts as target) */
    using I3C_IER_DEFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_DEFIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_DEFIE_B_0x1 = 1;

    /** @brief DEFGRPA CCC interrupt enable (when the I3C acts as target) */
    using I3C_IER_GRPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_GRPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_GRPIE_B_0x1 = 1;

    /** @brief I3C clear event register */
    using I3C_CEVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear frame complete flag (whatever the I3C acts as controller/target) */
    using I3C_CEVR_CFCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear FCF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CFCF_B_0x0 = 0;
        /** @brief clear FCF */
    constexpr std::uint32_t I3C_CEVR_CFCF_B_0x1 = 1;

    /** @brief Clear target-initiated read end flag (when the I3C acts as controller) */
    using I3C_CEVR_CRXTGTENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear RXTGTENDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CRXTGTENDF_B_0x0 = 0;
        /** @brief clear RXTGTENDF */
    constexpr std::uint32_t I3C_CEVR_CRXTGTENDF_B_0x1 = 1;

    /** @brief Clear error flag (whatever the I3C acts as controller/target) */
    using I3C_CEVR_CERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear ERRF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CERRF_B_0x0 = 0;
        /** @brief clear ERRF */
    constexpr std::uint32_t I3C_CEVR_CERRF_B_0x1 = 1;

    /** @brief Clear IBI request flag (when the I3C acts as controller) */
    using I3C_CEVR_CIBIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear IBIF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CIBIF_B_0x0 = 0;
        /** @brief clear IBIF */
    constexpr std::uint32_t I3C_CEVR_CIBIF_B_0x1 = 1;

    /** @brief Clear IBI end flag (when the I3C acts as target) */
    using I3C_CEVR_CIBIENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear IBIENDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CIBIENDF_B_0x0 = 0;
        /** @brief clear IBIENDF */
    constexpr std::uint32_t I3C_CEVR_CIBIENDF_B_0x1 = 1;

    /** @brief Clear controller-role request flag (when the I3C acts as controller) */
    using I3C_CEVR_CCRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear CRF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CCRF_B_0x0 = 0;
        /** @brief clear CRF */
    constexpr std::uint32_t I3C_CEVR_CCRF_B_0x1 = 1;

    /** @brief Clear controller-role update flag (when the I3C acts as target) */
    using I3C_CEVR_CCRUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear CRUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CCRUPDF_B_0x0 = 0;
        /** @brief clear CRUPDF */
    constexpr std::uint32_t I3C_CEVR_CCRUPDF_B_0x1 = 1;

    /** @brief Clear hot-join flag (when the I3C acts as controller) */
    using I3C_CEVR_CHJF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear HJF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CHJF_B_0x0 = 0;
        /** @brief clear HJF */
    constexpr std::uint32_t I3C_CEVR_CHJF_B_0x1 = 1;

    /** @brief Clear wake-up flag (when the I3C acts as target) */
    using I3C_CEVR_CWKPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear WKPF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CWKPF_B_0x0 = 0;
        /** @brief clear WKPF */
    constexpr std::uint32_t I3C_CEVR_CWKPF_B_0x1 = 1;

    /** @brief Clear GETxxx CCC flag (except GETSTATUS of format 1) (when the I3C acts as target) */
    using I3C_CEVR_CGETF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear GETF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CGETF_B_0x0 = 0;
        /** @brief clear GETF */
    constexpr std::uint32_t I3C_CEVR_CGETF_B_0x1 = 1;

    /** @brief Clear format 1 GETSTATUS CCC flag (when the I3C acts as target) */
    using I3C_CEVR_CSTAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear STAF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CSTAF_B_0x0 = 0;
        /** @brief clear STAF */
    constexpr std::uint32_t I3C_CEVR_CSTAF_B_0x1 = 1;

    /** @brief Clear ENTDAA/RSTDAA/SETNEWDA CCC flag (when the I3C acts as target) */
    using I3C_CEVR_CDAUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear DAUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CDAUPDF_B_0x0 = 0;
        /** @brief clear DAUPDF */
    constexpr std::uint32_t I3C_CEVR_CDAUPDF_B_0x1 = 1;

    /** @brief Clear SETMWL CCC flag (when the I3C acts as target) */
    using I3C_CEVR_CMWLUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear MWLUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CMWLUPDF_B_0x0 = 0;
        /** @brief clear MWLUPDF */
    constexpr std::uint32_t I3C_CEVR_CMWLUPDF_B_0x1 = 1;

    /** @brief Clear SETMRL CCC flag (when the I3C acts as target) */
    using I3C_CEVR_CMRLUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear MRLUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CMRLUPDF_B_0x0 = 0;
        /** @brief clear MRLUPDF */
    constexpr std::uint32_t I3C_CEVR_CMRLUPDF_B_0x1 = 1;

    /** @brief Clear reset pattern flag (when the I3C acts as target) */
    using I3C_CEVR_CRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear RSTF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CRSTF_B_0x0 = 0;
        /** @brief clear RSTF */
    constexpr std::uint32_t I3C_CEVR_CRSTF_B_0x1 = 1;

    /** @brief Clear ENTASx CCC flag (when the I3C acts as target) */
    using I3C_CEVR_CASUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear ASUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CASUPDF_B_0x0 = 0;
        /** @brief clear ASUPDF */
    constexpr std::uint32_t I3C_CEVR_CASUPDF_B_0x1 = 1;

    /** @brief Clear ENEC/DISEC CCC flag (when the I3C acts as target) */
    using I3C_CEVR_CINTUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear CINTUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CINTUPDF_B_0x0 = 0;
        /** @brief clear CINTUPDF */
    constexpr std::uint32_t I3C_CEVR_CINTUPDF_B_0x1 = 1;

    /** @brief Clear DEFTGTS CCC flag (when the I3C acts as target) */
    using I3C_CEVR_CDEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear DEFF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CDEFF_B_0x0 = 0;
        /** @brief clear DEFF */
    constexpr std::uint32_t I3C_CEVR_CDEFF_B_0x1 = 1;

    /** @brief Clear DEFGRPA CCC flag (when the I3C acts as target) */
    using I3C_CEVR_CGRPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear GRPF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CGRPF_B_0x0 = 0;
        /** @brief clear GRPF */
    constexpr std::uint32_t I3C_CEVR_CGRPF_B_0x1 = 1;

    /** @brief I3C own device characteristics register */
    using I3C_DEVR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dynamic address is valid (when the I3C acts as target) */
    using I3C_DEVR0_DAVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7-bit dynamic address */
    using I3C_DEVR0_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request enable (when the I3C acts as target) */
    using I3C_DEVR0_IBIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IBI request disabled (value: 0)
     *          - B_0x1: IBI request enabled (value: 1)
     */
        /** @brief IBI request disabled */
    constexpr std::uint32_t I3C_DEVR0_IBIEN_B_0x0 = 0;
        /** @brief IBI request enabled */
    constexpr std::uint32_t I3C_DEVR0_IBIEN_B_0x1 = 1;

    /** @brief Controller-role request enable (when the I3C acts as target) */
    using I3C_DEVR0_CREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: controller-role request disabled (value: 0)
     *          - B_0x1: controller-role request enabled (value: 1)
     */
        /** @brief controller-role request disabled */
    constexpr std::uint32_t I3C_DEVR0_CREN_B_0x0 = 0;
        /** @brief controller-role request enabled */
    constexpr std::uint32_t I3C_DEVR0_CREN_B_0x1 = 1;

    /** @brief Hot-join request enable (when the I3C acts as target) */
    using I3C_DEVR0_HJEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hot-join request disabled (value: 0)
     *          - B_0x1: hot-join request enabled (value: 1)
     */
        /** @brief hot-join request disabled */
    constexpr std::uint32_t I3C_DEVR0_HJEN_B_0x0 = 0;
        /** @brief hot-join request enabled */
    constexpr std::uint32_t I3C_DEVR0_HJEN_B_0x1 = 1;

    /** @brief Activity state (when the I3C acts as target) */
    using I3C_DEVR0_AS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: activity state 0 (value: 0)
     *          - B_0x1: activity state 1 (value: 1)
     *          - B_0x2: activity state 2 (value: 2)
     *          - B_0x3: activity state 3 (value: 3)
     */
        /** @brief activity state 0 */
    constexpr std::uint32_t I3C_DEVR0_AS_B_0x0 = 0;
        /** @brief activity state 1 */
    constexpr std::uint32_t I3C_DEVR0_AS_B_0x1 = 1;
        /** @brief activity state 2 */
    constexpr std::uint32_t I3C_DEVR0_AS_B_0x2 = 2;
        /** @brief activity state 3 */
    constexpr std::uint32_t I3C_DEVR0_AS_B_0x3 = 3;

    /** @brief Reset action/level on received reset pattern (when the I3C acts as target) */
    using I3C_DEVR0_RSTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset action (value: 0)
     *          - B_0x1: first level of reset: the application software must either: (value: 1)
     *          - B_0x2: second level of reset: the application software must issue a warm reset, also known as a system reset. (value: 2)
     *          - B_0x3: no reset action (value: 3)
     */
        /** @brief no reset action */
    constexpr std::uint32_t I3C_DEVR0_RSTACT_B_0x0 = 0;
        /** @brief first level of reset: the application software must either: */
    constexpr std::uint32_t I3C_DEVR0_RSTACT_B_0x1 = 1;
        /** @brief second level of reset: the application software must issue a warm reset, also known as a system reset. */
    constexpr std::uint32_t I3C_DEVR0_RSTACT_B_0x2 = 2;
        /** @brief no reset action */
    constexpr std::uint32_t I3C_DEVR0_RSTACT_B_0x3 = 3;

    /** @brief Reset action is valid (when the I3C acts as target) */
    using I3C_DEVR0_RSTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C device 1 characteristics register */
    using I3C_DEVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Assigned I3C dynamic address to target x (when the I3C acts as controller) */
    using I3C_DEVR1_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request acknowledge (when the I3C acts as controller) */
    using I3C_DEVR1_IBIACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an IBI request from target x must be NACK-ed (value: 0)
     *          - B_0x1: an IBI request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed (value: 1)
     */
        /** @brief an IBI request from target x must be NACK-ed */
    constexpr std::uint32_t I3C_DEVR1_IBIACK_B_0x0 = 0;
        /** @brief an IBI request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed */
    constexpr std::uint32_t I3C_DEVR1_IBIACK_B_0x1 = 1;

    /** @brief Controller-role request acknowledge (when the I3C acts as controller) */
    using I3C_DEVR1_CRACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a controller-role request from target x must be NACK-ed (value: 0)
     *          - B_0x1: a controller-role request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed (value: 1)
     */
        /** @brief a controller-role request from target x must be NACK-ed */
    constexpr std::uint32_t I3C_DEVR1_CRACK_B_0x0 = 0;
        /** @brief a controller-role request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed */
    constexpr std::uint32_t I3C_DEVR1_CRACK_B_0x1 = 1;

    /** @brief IBI data enable (when the I3C acts as controller) */
    using I3C_DEVR1_IBIDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the acknowledged IBI from target x (value: 0)
     *          - B_0x1: the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x (value: 1)
     */
        /** @brief no data byte follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR1_IBIDEN_B_0x0 = 0;
        /** @brief the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR1_IBIDEN_B_0x1 = 1;

    /** @brief Suspend/stop I3C transfer on received IBI (when the I3C acts as controller) */
    using I3C_DEVR1_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-FIFO and TX-FIFO are not flushed after an IBI request from target x is acknowledged and completed, and depending on the presence or absence of a next control word, a repeated start or a stop is emitted (value: 0)
     *          - B_0x1: I3C transfer is stopped and both C-FIFO and TX-FIFO are flushed after receiving an IBI request from target x (value: 1)
     */
        /** @brief C-FIFO and TX-FIFO are not flushed after an IBI request from target x is acknowledged and completed, and depending on the presence or absence of a next control word, a repeated start or a stop is emitted */
    constexpr std::uint32_t I3C_DEVR1_SUSP_B_0x0 = 0;
        /** @brief I3C transfer is stopped and both C-FIFO and TX-FIFO are flushed after receiving an IBI request from target x */
    constexpr std::uint32_t I3C_DEVR1_SUSP_B_0x1 = 1;

    /** @brief DA[6:0] write disabled (when the I3C acts as controller) */
    using I3C_DEVR1_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write to DA[7:0] and to IBIDEN in the I3C_DEVRx register is allowed (value: 0)
     *          - B_0x1: write to DA[7:0] and to IBIDEN is disabled/locked (value: 1)
     */
        /** @brief write to DA[7:0] and to IBIDEN in the I3C_DEVRx register is allowed */
    constexpr std::uint32_t I3C_DEVR1_DIS_B_0x0 = 0;
        /** @brief write to DA[7:0] and to IBIDEN is disabled/locked */
    constexpr std::uint32_t I3C_DEVR1_DIS_B_0x1 = 1;

    /** @brief I3C device 2 characteristics register */
    using I3C_DEVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Assigned I3C dynamic address to target x (when the I3C acts as controller) */
    using I3C_DEVR2_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request acknowledge (when the I3C acts as controller) */
    using I3C_DEVR2_IBIACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an IBI request from target x must be NACK-ed (value: 0)
     *          - B_0x1: an IBI request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed (value: 1)
     */
        /** @brief an IBI request from target x must be NACK-ed */
    constexpr std::uint32_t I3C_DEVR2_IBIACK_B_0x0 = 0;
        /** @brief an IBI request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed */
    constexpr std::uint32_t I3C_DEVR2_IBIACK_B_0x1 = 1;

    /** @brief Controller-role request acknowledge (when the I3C acts as controller) */
    using I3C_DEVR2_CRACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a controller-role request from target x must be NACK-ed (value: 0)
     *          - B_0x1: a controller-role request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed (value: 1)
     */
        /** @brief a controller-role request from target x must be NACK-ed */
    constexpr std::uint32_t I3C_DEVR2_CRACK_B_0x0 = 0;
        /** @brief a controller-role request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed */
    constexpr std::uint32_t I3C_DEVR2_CRACK_B_0x1 = 1;

    /** @brief IBI data enable (when the I3C acts as controller) */
    using I3C_DEVR2_IBIDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the acknowledged IBI from target x (value: 0)
     *          - B_0x1: the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x (value: 1)
     */
        /** @brief no data byte follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR2_IBIDEN_B_0x0 = 0;
        /** @brief the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR2_IBIDEN_B_0x1 = 1;

    /** @brief Suspend/stop I3C transfer on received IBI (when the I3C acts as controller) */
    using I3C_DEVR2_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-FIFO and TX-FIFO are not flushed after an IBI request from target x is acknowledged and completed, and depending on the presence or absence of a next control word, a repeated start or a stop is emitted (value: 0)
     *          - B_0x1: I3C transfer is stopped and both C-FIFO and TX-FIFO are flushed after receiving an IBI request from target x (value: 1)
     */
        /** @brief C-FIFO and TX-FIFO are not flushed after an IBI request from target x is acknowledged and completed, and depending on the presence or absence of a next control word, a repeated start or a stop is emitted */
    constexpr std::uint32_t I3C_DEVR2_SUSP_B_0x0 = 0;
        /** @brief I3C transfer is stopped and both C-FIFO and TX-FIFO are flushed after receiving an IBI request from target x */
    constexpr std::uint32_t I3C_DEVR2_SUSP_B_0x1 = 1;

    /** @brief DA[6:0] write disabled (when the I3C acts as controller) */
    using I3C_DEVR2_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write to DA[7:0] and to IBIDEN in the I3C_DEVRx register is allowed (value: 0)
     *          - B_0x1: write to DA[7:0] and to IBIDEN is disabled/locked (value: 1)
     */
        /** @brief write to DA[7:0] and to IBIDEN in the I3C_DEVRx register is allowed */
    constexpr std::uint32_t I3C_DEVR2_DIS_B_0x0 = 0;
        /** @brief write to DA[7:0] and to IBIDEN is disabled/locked */
    constexpr std::uint32_t I3C_DEVR2_DIS_B_0x1 = 1;

    /** @brief I3C device 3 characteristics register */
    using I3C_DEVR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Assigned I3C dynamic address to target x (when the I3C acts as controller) */
    using I3C_DEVR3_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request acknowledge (when the I3C acts as controller) */
    using I3C_DEVR3_IBIACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an IBI request from target x must be NACK-ed (value: 0)
     *          - B_0x1: an IBI request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed (value: 1)
     */
        /** @brief an IBI request from target x must be NACK-ed */
    constexpr std::uint32_t I3C_DEVR3_IBIACK_B_0x0 = 0;
        /** @brief an IBI request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed */
    constexpr std::uint32_t I3C_DEVR3_IBIACK_B_0x1 = 1;

    /** @brief Controller-role request acknowledge (when the I3C acts as controller) */
    using I3C_DEVR3_CRACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a controller-role request from target x must be NACK-ed (value: 0)
     *          - B_0x1: a controller-role request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed (value: 1)
     */
        /** @brief a controller-role request from target x must be NACK-ed */
    constexpr std::uint32_t I3C_DEVR3_CRACK_B_0x0 = 0;
        /** @brief a controller-role request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed */
    constexpr std::uint32_t I3C_DEVR3_CRACK_B_0x1 = 1;

    /** @brief IBI data enable (when the I3C acts as controller) */
    using I3C_DEVR3_IBIDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the acknowledged IBI from target x (value: 0)
     *          - B_0x1: the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x (value: 1)
     */
        /** @brief no data byte follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR3_IBIDEN_B_0x0 = 0;
        /** @brief the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR3_IBIDEN_B_0x1 = 1;

    /** @brief Suspend/stop I3C transfer on received IBI (when the I3C acts as controller) */
    using I3C_DEVR3_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-FIFO and TX-FIFO are not flushed after an IBI request from target x is acknowledged and completed, and depending on the presence or absence of a next control word, a repeated start or a stop is emitted (value: 0)
     *          - B_0x1: I3C transfer is stopped and both C-FIFO and TX-FIFO are flushed after receiving an IBI request from target x (value: 1)
     */
        /** @brief C-FIFO and TX-FIFO are not flushed after an IBI request from target x is acknowledged and completed, and depending on the presence or absence of a next control word, a repeated start or a stop is emitted */
    constexpr std::uint32_t I3C_DEVR3_SUSP_B_0x0 = 0;
        /** @brief I3C transfer is stopped and both C-FIFO and TX-FIFO are flushed after receiving an IBI request from target x */
    constexpr std::uint32_t I3C_DEVR3_SUSP_B_0x1 = 1;

    /** @brief DA[6:0] write disabled (when the I3C acts as controller) */
    using I3C_DEVR3_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write to DA[7:0] and to IBIDEN in the I3C_DEVRx register is allowed (value: 0)
     *          - B_0x1: write to DA[7:0] and to IBIDEN is disabled/locked (value: 1)
     */
        /** @brief write to DA[7:0] and to IBIDEN in the I3C_DEVRx register is allowed */
    constexpr std::uint32_t I3C_DEVR3_DIS_B_0x0 = 0;
        /** @brief write to DA[7:0] and to IBIDEN is disabled/locked */
    constexpr std::uint32_t I3C_DEVR3_DIS_B_0x1 = 1;

    /** @brief I3C device 4 characteristics register */
    using I3C_DEVR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Assigned I3C dynamic address to target x (when the I3C acts as controller) */
    using I3C_DEVR4_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request acknowledge (when the I3C acts as controller) */
    using I3C_DEVR4_IBIACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an IBI request from target x must be NACK-ed (value: 0)
     *          - B_0x1: an IBI request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed (value: 1)
     */
        /** @brief an IBI request from target x must be NACK-ed */
    constexpr std::uint32_t I3C_DEVR4_IBIACK_B_0x0 = 0;
        /** @brief an IBI request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed */
    constexpr std::uint32_t I3C_DEVR4_IBIACK_B_0x1 = 1;

    /** @brief Controller-role request acknowledge (when the I3C acts as controller) */
    using I3C_DEVR4_CRACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a controller-role request from target x must be NACK-ed (value: 0)
     *          - B_0x1: a controller-role request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed (value: 1)
     */
        /** @brief a controller-role request from target x must be NACK-ed */
    constexpr std::uint32_t I3C_DEVR4_CRACK_B_0x0 = 0;
        /** @brief a controller-role request (with 7-bit dynamic address DA[6:0]) from target x must be ACKed */
    constexpr std::uint32_t I3C_DEVR4_CRACK_B_0x1 = 1;

    /** @brief IBI data enable (when the I3C acts as controller) */
    using I3C_DEVR4_IBIDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the acknowledged IBI from target x (value: 0)
     *          - B_0x1: the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x (value: 1)
     */
        /** @brief no data byte follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR4_IBIDEN_B_0x0 = 0;
        /** @brief the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR4_IBIDEN_B_0x1 = 1;

    /** @brief Suspend/stop I3C transfer on received IBI (when the I3C acts as controller) */
    using I3C_DEVR4_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-FIFO and TX-FIFO are not flushed after an IBI request from target x is acknowledged and completed, and depending on the presence or absence of a next control word, a repeated start or a stop is emitted (value: 0)
     *          - B_0x1: I3C transfer is stopped and both C-FIFO and TX-FIFO are flushed after receiving an IBI request from target x (value: 1)
     */
        /** @brief C-FIFO and TX-FIFO are not flushed after an IBI request from target x is acknowledged and completed, and depending on the presence or absence of a next control word, a repeated start or a stop is emitted */
    constexpr std::uint32_t I3C_DEVR4_SUSP_B_0x0 = 0;
        /** @brief I3C transfer is stopped and both C-FIFO and TX-FIFO are flushed after receiving an IBI request from target x */
    constexpr std::uint32_t I3C_DEVR4_SUSP_B_0x1 = 1;

    /** @brief DA[6:0] write disabled (when the I3C acts as controller) */
    using I3C_DEVR4_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write to DA[7:0] and to IBIDEN in the I3C_DEVRx register is allowed (value: 0)
     *          - B_0x1: write to DA[7:0] and to IBIDEN is disabled/locked (value: 1)
     */
        /** @brief write to DA[7:0] and to IBIDEN in the I3C_DEVRx register is allowed */
    constexpr std::uint32_t I3C_DEVR4_DIS_B_0x0 = 0;
        /** @brief write to DA[7:0] and to IBIDEN is disabled/locked */
    constexpr std::uint32_t I3C_DEVR4_DIS_B_0x1 = 1;

    /** @brief I3C maximum read length register */
    using I3C_MAXRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum data read length (when I3C acts as target) */
    using I3C_MAXRLR_MRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI payload data maximum size, in bytes (when I3C acts as target) */
    using I3C_MAXRLR_IBIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: null payload data size (only allowed when BCR2 = 0 in the I3C_BCR register) (value: 0)
     *          - B_0x1: 1 byte (mandatory data byte MDB[7:0] (value: 1)
     *          - B_0x2: 2 bytes (including first MDB[7:0]) (value: 2)
     *          - B_0x3: 3 bytes (including first MDB[7:0]) (value: 3)
     *          - B_0x4: 4 bytes (including first MDB[7:0]) (value: 4)
     */
        /** @brief null payload data size (only allowed when BCR2 = 0 in the I3C_BCR register) */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x0 = 0;
        /** @brief 1 byte (mandatory data byte MDB[7:0] */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x1 = 1;
        /** @brief 2 bytes (including first MDB[7:0]) */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x2 = 2;
        /** @brief 3 bytes (including first MDB[7:0]) */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x3 = 3;
        /** @brief 4 bytes (including first MDB[7:0]) */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x4 = 4;

    /** @brief I3C maximum write length register */
    using I3C_MAXWLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum data write length (when I3C acts as target) */
    using I3C_MAXWLR_MWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C timing register 0 */
    using I3C_TIMINGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL low duration in I3C push-pull phases, in number of kernel clocks cycles: */
    using I3C_TIMINGR0_SCLL_PP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL high duration, used for I3C messages (both in push-pull and open-drain phases), in number of kernel clocks cycles: */
    using I3C_TIMINGR0_SCLH_I3C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL low duration in open-drain phases, used for legacy Iless thansup>2less than/sup>C messages and for I3C open-drain phases (address phase following a start, ACK phase during controller-initiated messages, and T bit phase during direct/private/IBI payload), in number of kernel clocks cycles: */
    using I3C_TIMINGR0_SCLL_OD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL high duration, used for legacy Iless thansup>2less than/sup>C messages, in number of kernel clocks cycles: */
    using I3C_TIMINGR0_SCLH_I2C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C timing register 1 */
    using I3C_TIMINGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of kernel clock cycles to set a time unit of 1 s, whatever I3C acts as controller or target. */
    using I3C_TIMINGR1_AVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Activity state of the new controller (when I3C acts as active controller) */
    using I3C_TIMINGR1_ASNCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of kernel clocks cycles that is used to set some MIPI timings like bus free condition time (when the I3C acts as controller) */
    using I3C_TIMINGR1_FREE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDA hold time (when the I3C acts as controller), in number of kernel clocks cycles (refer to MIPI timing SDA hold time in push-pull tless thansub>HD_PPless than/sub>): */
    using I3C_TIMINGR1_SDA_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C timing register 2 */
    using I3C_TIMINGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controller clock stall enable on T-bit phase of data (and on the ACK/NACK phase of data byte of a legacy Iless thansup>2less than/sup>C read) */
    using I3C_TIMINGR2_STALLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no stall (value: 0)
     *          - B_0x1: stall enabled (value: 1)
     */
        /** @brief no stall */
    constexpr std::uint32_t I3C_TIMINGR2_STALLT_B_0x0 = 0;
        /** @brief stall enabled */
    constexpr std::uint32_t I3C_TIMINGR2_STALLT_B_0x1 = 1;

    /** @brief Controller clock stall enable on PAR phase of Data */
    using I3C_TIMINGR2_STALLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no stall (value: 0)
     *          - B_0x1: stall enabled (value: 1)
     */
        /** @brief no stall */
    constexpr std::uint32_t I3C_TIMINGR2_STALLD_B_0x0 = 0;
        /** @brief stall enabled */
    constexpr std::uint32_t I3C_TIMINGR2_STALLD_B_0x1 = 1;

    /** @brief Controller clock stall enable on PAR phase of CCC */
    using I3C_TIMINGR2_STALLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no stall (value: 0)
     *          - B_0x1: stall enabled (value: 1)
     */
        /** @brief no stall */
    constexpr std::uint32_t I3C_TIMINGR2_STALLC_B_0x0 = 0;
        /** @brief stall enabled */
    constexpr std::uint32_t I3C_TIMINGR2_STALLC_B_0x1 = 1;

    /** @brief Controller clock stall enable on ACK phase */
    using I3C_TIMINGR2_STALLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no stall (value: 0)
     *          - B_0x1: stall enabled (value: 1)
     */
        /** @brief no stall */
    constexpr std::uint32_t I3C_TIMINGR2_STALLA_B_0x0 = 0;
        /** @brief stall enabled */
    constexpr std::uint32_t I3C_TIMINGR2_STALLA_B_0x1 = 1;

    /** @brief Controller clock stall time, in number of kernel clock cycles */
    using I3C_TIMINGR2_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C bus characteristics register */
    using I3C_BCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief max data speed limitation */
    using I3C_BCR_BCR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no limitation (value: 0)
     *          - B_0x1: limitation, as described by I3C_GETMXDSR. (value: 1)
     */
        /** @brief no limitation */
    constexpr std::uint32_t I3C_BCR_BCR0_B_0x0 = 0;
        /** @brief limitation, as described by I3C_GETMXDSR. */
    constexpr std::uint32_t I3C_BCR_BCR0_B_0x1 = 1;

    /** @brief in-band interrupt (IBI) payload */
    using I3C_BCR_BCR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the accepted IBI (value: 0)
     *          - B_0x1: at least one mandatory data byte follows the accepted IBI (and at most 4 data bytes) (value: 1)
     */
        /** @brief no data byte follows the accepted IBI */
    constexpr std::uint32_t I3C_BCR_BCR2_B_0x0 = 0;
        /** @brief at least one mandatory data byte follows the accepted IBI (and at most 4 data bytes) */
    constexpr std::uint32_t I3C_BCR_BCR2_B_0x1 = 1;

    /** @brief Controller capable */
    using I3C_BCR_BCR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C target (no controller capable) (value: 0)
     *          - B_0x1: I3C controller capable (value: 1)
     */
        /** @brief I3C target (no controller capable) */
    constexpr std::uint32_t I3C_BCR_BCR6_B_0x0 = 0;
        /** @brief I3C controller capable */
    constexpr std::uint32_t I3C_BCR_BCR6_B_0x1 = 1;

    /** @brief I3C device characteristics register */
    using I3C_DCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device characteristics ID */
    using I3C_DCR_DCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: generic device (for v1. (value: 0)
     */
        /** @brief generic device (for v1. */
    constexpr std::uint32_t I3C_DCR_DCR_B_0x00 = 0;

    /** @brief I3C get capability register */
    using I3C_GETCAPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI MDB support for pending read notification */
    using I3C_GETCAPR_CAPPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this I3C when acting as target sends an IBI request without a mandatory data byte value indicating a pending read notification (value: 0)
     *          - B_0x1: this I3C when acting as target sends an IBI request with a mandatory data byte value (MDB[7:5] = 101), indicating a pending read notification (value: 1)
     */
        /** @brief this I3C when acting as target sends an IBI request without a mandatory data byte value indicating a pending read notification */
    constexpr std::uint32_t I3C_GETCAPR_CAPPEND_B_0x0 = 0;
        /** @brief this I3C when acting as target sends an IBI request with a mandatory data byte value (MDB[7:5] = 101), indicating a pending read notification */
    constexpr std::uint32_t I3C_GETCAPR_CAPPEND_B_0x1 = 1;

    /** @brief I3C controller-role capability register */
    using I3C_CRCAPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delayed controller-role hand-off */
    using I3C_CRCAPR_CAPDHOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this I3C does not needs additional time to process a controller-role hand-off (value: 0)
     *          - B_0x1: this I3C needs additional time to process a controller-role hand-off (value: 1)
     */
        /** @brief this I3C does not needs additional time to process a controller-role hand-off */
    constexpr std::uint32_t I3C_CRCAPR_CAPDHOFF_B_0x0 = 0;
        /** @brief this I3C needs additional time to process a controller-role hand-off */
    constexpr std::uint32_t I3C_CRCAPR_CAPDHOFF_B_0x1 = 1;

    /** @brief group management support (when acting as controller) */
    using I3C_CRCAPR_CAPGRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this I3C does not support group address capabilities (value: 0)
     *          - B_0x1: this I3C supports group address capabilities (when becoming controller) (value: 1)
     */
        /** @brief this I3C does not support group address capabilities */
    constexpr std::uint32_t I3C_CRCAPR_CAPGRP_B_0x0 = 0;
        /** @brief this I3C supports group address capabilities (when becoming controller) */
    constexpr std::uint32_t I3C_CRCAPR_CAPGRP_B_0x1 = 1;

    /** @brief I3C get max data speed register */
    using I3C_GETMXDSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controller hand-off activity state */
    using I3C_GETMXDSR_HOFFAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: activity state 0 is the initial activity state of this I3C before and when becoming controller (value: 0)
     *          - B_0x1: activity state 1 is the initial activity state of this I3C when becoming controller (value: 1)
     *          - B_0x2: activity state 2 is the initial activity state of this I3C when becoming controller (value: 2)
     *          - B_0x3: activity state 3 is the initial activity state of this I3C when becoming controller (value: 3)
     */
        /** @brief activity state 0 is the initial activity state of this I3C before and when becoming controller */
    constexpr std::uint32_t I3C_GETMXDSR_HOFFAS_B_0x0 = 0;
        /** @brief activity state 1 is the initial activity state of this I3C when becoming controller */
    constexpr std::uint32_t I3C_GETMXDSR_HOFFAS_B_0x1 = 1;
        /** @brief activity state 2 is the initial activity state of this I3C when becoming controller */
    constexpr std::uint32_t I3C_GETMXDSR_HOFFAS_B_0x2 = 2;
        /** @brief activity state 3 is the initial activity state of this I3C when becoming controller */
    constexpr std::uint32_t I3C_GETMXDSR_HOFFAS_B_0x3 = 3;

    /** @brief GETMXDS CCC format */
    using I3C_GETMXDSR_FMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: format 1 (2 bytes with MaxWr with no defining byte, MaxRd) (value: 0)
     *          - B_0x1: format 2: (5 bytes w. (value: 1)
     *          - B_0x2: format 2 (5 bytes with MaxWr with no defining byte, MaxRd, and middle byte of MaxRdTurn) (value: 2)
     *          - B_0x3: format 2 (5 bytes with MaxWr with no defining byte, MaxRd, MSB of MaxRdTurn) (value: 3)
     */
        /** @brief format 1 (2 bytes with MaxWr with no defining byte, MaxRd) */
    constexpr std::uint32_t I3C_GETMXDSR_FMT_B_0x0 = 0;
        /** @brief format 2: (5 bytes w. */
    constexpr std::uint32_t I3C_GETMXDSR_FMT_B_0x1 = 1;
        /** @brief format 2 (5 bytes with MaxWr with no defining byte, MaxRd, and middle byte of MaxRdTurn) */
    constexpr std::uint32_t I3C_GETMXDSR_FMT_B_0x2 = 2;
        /** @brief format 2 (5 bytes with MaxWr with no defining byte, MaxRd, MSB of MaxRdTurn) */
    constexpr std::uint32_t I3C_GETMXDSR_FMT_B_0x3 = 3;

    /** @brief programmed byte of the 3-byte MaxRdTurn (maximum read turnaround byte) */
    using I3C_GETMXDSR_RDTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock-to-data turnaround time (tless thansub>SCOless than/sub>) */
    using I3C_GETMXDSR_TSCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tless thansub>SCOless than/sub> less than or equal to 12 ns (value: 0)
     *          - B_0x1: tless thansub>SCOless than/sub> > 12 ns (refer to the datasheet for more details) (value: 1)
     */
        /** @brief tless thansub>SCOless than/sub> less than or equal to 12 ns */
    constexpr std::uint32_t I3C_GETMXDSR_TSCO_B_0x0 = 0;
        /** @brief tless thansub>SCOless than/sub> > 12 ns (refer to the datasheet for more details) */
    constexpr std::uint32_t I3C_GETMXDSR_TSCO_B_0x1 = 1;

    /** @brief I3C extended provisioned ID register */
    using I3C_EPIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4-bit MIPI Instance ID */
    using I3C_EPIDR_MIPIID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief provisioned ID type selector */
    using I3C_EPIDR_IDTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 15-bit MIPI manufacturer ID */
    using I3C_EPIDR_MIPIMID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
