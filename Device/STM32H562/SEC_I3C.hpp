/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H562_SEC_I3C_HPP
#define EMBEDDED_PP_STM32H562_SEC_I3C_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Improved inter-integrated circuit */
namespace STM32H562::SEC_I3C {

    /** @brief I3C message control register */
    using I3C_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief count of data to transfer during a read or write message, in bytes (whatever I3C is acting as controller/target) Linear encoding up to 64 Kbytes -1 ... */
    using I3C_CR_DCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data to transfer (value: 0)
     *          - B_0x1: 1 byte (value: 1)
     *          - B_0x2: 2 bytes (value: 2)
     *          - B_0xFFFF: 64 Kbytes 1 byte (value: 65535)
     */
        /** @brief no data to transfer */
    constexpr std::uint32_t I3C_CR_DCNT_B_0x0 = 0;
        /** @brief 1 byte */
    constexpr std::uint32_t I3C_CR_DCNT_B_0x1 = 1;
        /** @brief 2 bytes */
    constexpr std::uint32_t I3C_CR_DCNT_B_0x2 = 2;
        /** @brief 64 Kbytes 1 byte */
    constexpr std::uint32_t I3C_CR_DCNT_B_0xFFFF = 65535;

    /** @brief read / non-write message (when I3C is acting as controller) When I3C is acting as controller, this field is used if MTYPE[3:0]=0010 (private message) or MTYPE[3:0]=0011 (direct message) or MTYPE[3:0]=0100 (legacy I2C message), in order to emit the RnW bit on the I3C bus. */
    using I3C_CR_RNW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write message (value: 0)
     *          - B_0x1: read message (value: 1)
     */
        /** @brief write message */
    constexpr std::uint32_t I3C_CR_RNW_B_0x0 = 0;
        /** @brief read message */
    constexpr std::uint32_t I3C_CR_RNW_B_0x1 = 1;

    /** @brief 7-bit I3C dynamic / I2C static target address (when I3C is acting as controller) When I3C is acting as controller, this field is used if MTYPE[3:0]=0010 (private message) or MTYPE[3:0]=0011 (direct message) or MTYPE[3:0]=0100 (legacy I2C message) */
    using I3C_CR_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief message type (whatever I3C is acting as controller/target) Bits[26:0] are ignored. After M2 error detection on an I3C SDR message, this is needed for SCL 'stuck at' recovery. Bits[26:0] are ignored. If I3C_CFGR.EXITPTRN=1, an HDR exit pattern is emitted on the bus to generate an escalation fault. Bits[23:17] (ADD[6:0]) is the emitted 7-bit dynamic address. Bit[16] (RNW) is the emitted RnW bit. The transferred private message is: {S / S+7'h7E+RnW=0+Sr / Sr+*} + 7-bit DynAddr + RnW + (8-bit Data + T)* + Sr/P. After a S (START), depending on I3C_CFGR.NOARBH, the arbitrable header (7'h7E+RnW=0) is inserted or not. Sr+*: after a Sr (Repeated Start), the hardware automatically inserts (7'h7E+RnW=0) if needed, i.e. if it follows an I3C direct message without ending by a P (Stop). Bits[23:17] (ADD[6:0]) is the emitted 7-bit dynamic address. Bit[16] (RNW) is the emitted RnW bit. The transferred direct message is: Sr + 7-bit DynAddr + RnW + (8-bit Data + T)* + Sr/P Bits[23:17] (ADD[6:0]) is the emitted 7-bit static address. Bit[16] (RNW) is the emitted RnW bit. The transferred legacy I2C message is: {S / S+ 7'h7E+RnW=0 + Sr / Sr+*} + 7-bit StaAddr + RnW + (8-bit Data + T)* + Sr/P. After a S (START), depending on I3C_CFGR.NOARBH, the arbitrable header (7'h7E+RnW=0) is inserted or not. Sr+*: after a Sr (Repeated Start), the hardware automatically inserts (7'h7E+RnW=0) if needed, i.e. if it follows an I3C direct message without ending by a P (Stop). 1xxx: reserved (when I3C is acting as I3C controller, used when target) 0xxx: reserved {S +} 7'h02 addr + RnW=0 {S +} 7-bit I3C_DEVR0.DA[6:0] + RnW=0 after a bus available condition (the target first emits a START request), or once the controller drives a START. {S +} 7-bit I3C_DEVR0.DA[6:0] + RnW=1 (+Ack/Nack from controller) When acknowledged from controller, the next (optional, depending on I3C_BCR.BCR2) transmitted IBI payload data is defined by I3C_CR.DCNT[15:0] and must be consistently programmed vs the maximum IBI payload data size which is defined by I3C_IBIDR.IBIP[2:0]. Others: reserved */
    using I3C_CR_MTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER: SCL output clock stops running until next control word is executed (value: 0)
     *          - B_0x1_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER: header message (value: 1)
     *          - B_0x2_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER: private message (value: 2)
     *          - B_0x3_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER: direct message (2nd part of an I3C SDR direct CCC command) (value: 3)
     *          - B_0x4_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER: legacy I2C message (value: 4)
     *          - B_0x6_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER: reserved (for this 1st alternate register description) (value: 6)
     *          - B_0x8_WHEN_I3C_IS_ACTING_AS_I3C_TARGET: hot-join request (W) (value: 8)
     *          - B_0x9_WHEN_I3C_IS_ACTING_AS_I3C_TARGET: controller-role request (W) (value: 9)
     *          - B_0xA_WHEN_I3C_IS_ACTING_AS_I3C_TARGET: IBI (in-band interrupt) request (R) (value: 10)
     */
        /** @brief SCL output clock stops running until next control word is executed */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x0_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER = 0;
        /** @brief header message */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x1_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER = 1;
        /** @brief private message */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x2_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER = 2;
        /** @brief direct message (2nd part of an I3C SDR direct CCC command) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x3_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER = 3;
        /** @brief legacy I2C message */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x4_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER = 4;
        /** @brief reserved (for this 1st alternate register description) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x6_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER = 6;
        /** @brief hot-join request (W) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x8_WHEN_I3C_IS_ACTING_AS_I3C_TARGET = 8;
        /** @brief controller-role request (W) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0x9_WHEN_I3C_IS_ACTING_AS_I3C_TARGET = 9;
        /** @brief IBI (in-band interrupt) request (R) */
    constexpr std::uint32_t I3C_CR_MTYPE_B_0xA_WHEN_I3C_IS_ACTING_AS_I3C_TARGET = 10;

    /** @brief message end type (when the I3C is acting as controller) */
    using I3C_CR_MEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this message from controller ends with a Repeated START (Sr) (value: 0)
     *          - B_0x1: this message from controller ends with a STOP (P), being the last message of a frame (value: 1)
     */
        /** @brief this message from controller ends with a Repeated START (Sr) */
    constexpr std::uint32_t I3C_CR_MEND_B_0x0 = 0;
        /** @brief this message from controller ends with a STOP (P), being the last message of a frame */
    constexpr std::uint32_t I3C_CR_MEND_B_0x1 = 1;

    /** @brief I3C message control register alternate */
    using I3C_CR_ALTERNATE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief count of data to transfer during a read or write message, in bytes (when I3C is acting as controller) Linear encoding up to 64 Kbytes -1. ... */
    using I3C_CR_ALTERNATE_DCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data to transfer (allowed for write message and only for GET CCC read commands. Mandated value when emitting ENTDAA) (value: 0)
     *          - B_0x1: 1 byte (value: 1)
     *          - B_0x2: 2 bytes (value: 2)
     *          - B_0xFFFF: 64 Kbytes 1 byte (value: 65535)
     */
        /** @brief no data to transfer (allowed for write message and only for GET CCC read commands. Mandated value when emitting ENTDAA) */
    constexpr std::uint32_t I3C_CR_ALTERNATE_DCNT_B_0x0 = 0;
        /** @brief 1 byte */
    constexpr std::uint32_t I3C_CR_ALTERNATE_DCNT_B_0x1 = 1;
        /** @brief 2 bytes */
    constexpr std::uint32_t I3C_CR_ALTERNATE_DCNT_B_0x2 = 2;
        /** @brief 64 Kbytes 1 byte */
    constexpr std::uint32_t I3C_CR_ALTERNATE_DCNT_B_0xFFFF = 65535;

    /** @brief 8-bit CCC code (when I3C is acting as controller) If Bit[23]=CCC[7]=1, this is the 1st part of an I3C SDR direct CCC command. If Bit[23]=CCC[7]=0, this is an I3C SDR broadcast CCC command (including ENTDAA and ENTHDR0). */
    using I3C_CR_ALTERNATE_CCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief message type (when I3C is acting as controller) Bits[23:16] (CCC[7:0]) is the emitted 8-bit CCC code If Bit[23]=CCC[7]=1: this is the 1st part of an I3C SDR direct CCC command The transferred direct CCC command message is: {S / S+7'h7E +RnW=0 / Sr+*} + (direct CCC + T) + (8-bit Data + T)* + Sr After a S (START), depending on I3C_CFGR.NOARBH, the arbitrable header (7'h7E+RnW=0) is inserted or not. Sr+*: after a Sr (Repeated Start), the hardware automatically inserts (7'h7E+R/W). If Bit[23]=CCC[7]=0: this is an I3C SDR broadcast CCC command (including ENTDAA and ENTHDR0) The transferred broadcast CCC command message is: {S / S+7'h7E +RnW=0 / Sr+*} + (broadcast CCC + T) + (8-bit Data + T)* + Sr/P After a S (START), depending on I3C_CFGR.NOARBH, the arbitrable header (7'h7E+RnW=0) is inserted or not. Sr+*: after a Sr (Repeated Start), the hardware automatically inserts (7'h7E+R/W). others: reserved */
    using I3C_CR_ALTERNATE_MTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x6_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER: CCC command (value: 6)
     */
        /** @brief CCC command */
    constexpr std::uint32_t I3C_CR_ALTERNATE_MTYPE_B_0x6_WHEN_I3C_IS_ACTING_AS_I3C_CONTROLLER = 6;

    /** @brief message end type (when I3C is acting as controller) */
    using I3C_CR_ALTERNATE_MEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this message from the controller ends with a Repeated START (Sr) (value: 0)
     *          - B_0x1: the message from the controller ends with a STOP (P), being the last message of a frame (value: 1)
     */
        /** @brief this message from the controller ends with a Repeated START (Sr) */
    constexpr std::uint32_t I3C_CR_ALTERNATE_MEND_B_0x0 = 0;
        /** @brief the message from the controller ends with a STOP (P), being the last message of a frame */
    constexpr std::uint32_t I3C_CR_ALTERNATE_MEND_B_0x1 = 1;

    /** @brief I3C configuration register */
    using I3C_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C enable (whatever I3C is acting as controller/target) - Except registers, the peripheral is under reset (a.k.a. partial reset). - Before clearing EN, when I3C is acting as a controller, all the possible target requests must be disabled using DISEC CCC. - When I3C is acting as a target, software should not disable the I3C, unless a partial reset is needed. In this state, some register fields can not be modified (like CRINIT, HKSDAEN for the I3C_CFGR) */
    using I3C_CFGR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C is disabled (value: 0)
     *          - B_0x1: I3C is enabled (value: 1)
     */
        /** @brief I3C is disabled */
    constexpr std::uint32_t I3C_CFGR_EN_B_0x0 = 0;
        /** @brief I3C is enabled */
    constexpr std::uint32_t I3C_CFGR_EN_B_0x1 = 1;

    /** @brief initial controller/target role This bit can be modified only when I3C_CFGR.EN = 0. Once enabled by setting I3C_CFGR.EN = 1, I3C peripheral initially acts as an I3C target. I3C does not drive SCL line and does not enable SDA pull-up, until it eventually acquires the controller role. Once enabled by setting I3C_CFGR.EN = 1, I3C peripheral initially acts as a controller. It has the I3C controller role, so drives SCL line and enables SDA pull-up, until it eventually offers the controller role to an I3C secondary controller. */
    using I3C_CFGR_CRINIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: target role (value: 0)
     *          - B_0x1: controller role (value: 1)
     */
        /** @brief target role */
    constexpr std::uint32_t I3C_CFGR_CRINIT_B_0x0 = 0;
        /** @brief controller role */
    constexpr std::uint32_t I3C_CFGR_CRINIT_B_0x1 = 1;

    /** @brief no arbitrable header after a START (when I3C is acting as a controller) This bit can be modified only when there is no on-going frame. - The target address is emitted directly after a START in case of a legacy I2C message or an I3C SDR private read/write message. - This is a more performing option (when is useless the emission of the 0x7E arbitrable header), but this is to be used only when the controller is sure that the addressed target device can not emit concurrently an IBI or a controller-role request (to insure no misinterpretation and no potential conflict between the address emitted by the controller in open-drain mode and the same address a target device can emit after a START, for IBI or MR). */
    using I3C_CFGR_NOARBH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An arbitrable header (7'h7E + RnW=0) is emitted after a START and before a legacy I2C message or an I3C SDR private read/write message (default). (value: 0)
     *          - B_0x1: No arbitrable header (value: 1)
     */
        /** @brief An arbitrable header (7'h7E + RnW=0) is emitted after a START and before a legacy I2C message or an I3C SDR private read/write message (default). */
    constexpr std::uint32_t I3C_CFGR_NOARBH_B_0x0 = 0;
        /** @brief No arbitrable header */
    constexpr std::uint32_t I3C_CFGR_NOARBH_B_0x1 = 1;

    /** @brief HDR reset pattern enable (when I3C is acting as a controller) This bit can be modified only when there is no on-going frame. */
    using I3C_CFGR_RSTPTRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: standard STOP emitted at the end of a frame (value: 0)
     *          - B_0x1: HDR reset pattern is inserted before the STOP of any emitted frame that includes a RSTACT CCC command (value: 1)
     */
        /** @brief standard STOP emitted at the end of a frame */
    constexpr std::uint32_t I3C_CFGR_RSTPTRN_B_0x0 = 0;
        /** @brief HDR reset pattern is inserted before the STOP of any emitted frame that includes a RSTACT CCC command */
    constexpr std::uint32_t I3C_CFGR_RSTPTRN_B_0x1 = 1;

    /** @brief HDR Exit Pattern enable (when I3C is acting as a controller) This bit can be modified only when there is no on-going frame. This is used to send only the header to test ownership of the bus when there is a suspicion of problem after controller-role hand-off (new controller didn't assert its controller-role by accessing the previous one in less than Activity State time). The HDR Exit Pattern is sent even if the message header {S/Sr + 0x7E addr + W } is ACKed. */
    using I3C_CFGR_EXITPTRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDR Exit Pattern is not sent after the message header (MTYPE[3:0]=0001) (value: 0)
     *          - B_0x1: HDR Exit Pattern is sent after the message header (MTYPE[3:0]=0001) to generate an escalation fault (value: 1)
     */
        /** @brief HDR Exit Pattern is not sent after the message header (MTYPE[3:0]=0001) */
    constexpr std::uint32_t I3C_CFGR_EXITPTRN_B_0x0 = 0;
        /** @brief HDR Exit Pattern is sent after the message header (MTYPE[3:0]=0001) to generate an escalation fault */
    constexpr std::uint32_t I3C_CFGR_EXITPTRN_B_0x1 = 1;

    /** @brief High-keeper enable on SDA line (when I3C is acting as a controller) This bit can be modified only when I3C_CFGR.EN=0. */
    using I3C_CFGR_HKSDAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-Keeper is disabled (value: 0)
     *          - B_0x1: High-Keeper is enabled, and the weak pull-up is effective on the T bit, instead of the open-drain class pull-up. (value: 1)
     */
        /** @brief High-Keeper is disabled */
    constexpr std::uint32_t I3C_CFGR_HKSDAEN_B_0x0 = 0;
        /** @brief High-Keeper is enabled, and the weak pull-up is effective on the T bit, instead of the open-drain class pull-up. */
    constexpr std::uint32_t I3C_CFGR_HKSDAEN_B_0x1 = 1;

    /** @brief Hot Join request acknowledge (when I3C is acting as a controller) After the NACK, the message continues as initially programmed (the hot-joining target is aware of the NACK and surely emits another hot-join request later on). After the ACK, the message continues as initially programmed. The software is aware by the HJ interrupt (flag I3C_EVR.HJF is set) and initiates the ENTDAA sequence later on, potentially preventing others Hot Join requests with a Disable target events command (DISEC, with DISHJ=1). Independently of the HJACK configuration, further Hot Join request(s) are NACKed until the Hot Join flag, HJF, is cleared. However, a NACKed target can be assigned a dynamic address by the ENTDAA sequence initiated later on by the first HJ request, preventing this target to emit an HJ request again. */
    using I3C_CFGR_HJACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hot Join request is NACKed (value: 0)
     *          - B_0x1: Hot Join request is ACKed (value: 1)
     */
        /** @brief Hot Join request is NACKed */
    constexpr std::uint32_t I3C_CFGR_HJACK_B_0x0 = 0;
        /** @brief Hot Join request is ACKed */
    constexpr std::uint32_t I3C_CFGR_HJACK_B_0x1 = 1;

    /** @brief RX-FIFO DMA request enable (whatever I3C is acting as controller/target) - Software reads and pops a data byte/word from RX-FIFO i.e. reads I3C_RDR or I3C_RDWR register. - A next data byte/word is to be read by the software either via polling on the flag I3C_EVR.RXFNEF=1 or via interrupt notification (enabled by I3C_IER.RXFNEIE=1). - DMA reads and pops data byte(s)/word(s) from RX-FIFO i.e. reads I3C_RDR or I3C_RDWR register. - A next data byte/word is automatically read by the programmed hardware (i.e. via the asserted RX-FIFO DMA request from the I3C and the programmed DMA channel). */
    using I3C_CFGR_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode is disabled for RX-FIFO (value: 0)
     *          - B_0x1: DMA mode is enabled for RX-FIFO (value: 1)
     */
        /** @brief DMA mode is disabled for RX-FIFO */
    constexpr std::uint32_t I3C_CFGR_RXDMAEN_B_0x0 = 0;
        /** @brief DMA mode is enabled for RX-FIFO */
    constexpr std::uint32_t I3C_CFGR_RXDMAEN_B_0x1 = 1;

    /** @brief RX-FIFO flush (whatever I3C is acting as controller/target) This bit can only be written. */
    using I3C_CFGR_RXFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: flush RX-FIFO (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_RXFLUSH_B_0x0 = 0;
        /** @brief flush RX-FIFO */
    constexpr std::uint32_t I3C_CFGR_RXFLUSH_B_0x1 = 1;

    /** @brief RX-FIFO threshold (whatever I3C is acting as controller/target) This threshold defines, compared to the RX-FIFO level, when the I3C_EVR.RXFNEF flag is set (and consequently if RXDMAEN=1 when is asserted a DMA RX request). RXFNEF is set when 1 byte is to be read in RX-FIFO (i.e. in I3C_RDR). RXFNEF is set when 4 bytes are to be read in RX-FIFO (i.e. in I3C_RDWR). */
    using I3C_CFGR_RXTHRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1-byte threshold (value: 0)
     *          - B_0x1: 4-byte threshold (value: 1)
     */
        /** @brief 1-byte threshold */
    constexpr std::uint32_t I3C_CFGR_RXTHRES_B_0x0 = 0;
        /** @brief 4-byte threshold */
    constexpr std::uint32_t I3C_CFGR_RXTHRES_B_0x1 = 1;

    /** @brief TX-FIFO DMA request enable (whatever I3C is acting as controller/target) - Software writes and pushes a data byte/word into TX-FIFO i.e. writes I3C_TDR or I3C_TDWR register, to be transmitted over the I3C bus. - A next data byte/word is to be written by the software either via polling on the flag I3C_EVR.TXFNFF=1 or via interrupt notification (enabled by I3C_IER.TXFNFIE=1). - DMA writes and pushes data byte(s)/word(s) into TX-FIFO i.e. writes I3C_TDR or I3C_TDWR register. - A next data byte/word transfer is automatically pushed by the programmed hardware (i.e. via the asserted TX-FIFO DMA request from the I3C and the programmed DMA channel). */
    using I3C_CFGR_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode is disabled for TX-FIFO (value: 0)
     *          - B_0x1: DMA mode is enabled for TX-FIFO (value: 1)
     */
        /** @brief DMA mode is disabled for TX-FIFO */
    constexpr std::uint32_t I3C_CFGR_TXDMAEN_B_0x0 = 0;
        /** @brief DMA mode is enabled for TX-FIFO */
    constexpr std::uint32_t I3C_CFGR_TXDMAEN_B_0x1 = 1;

    /** @brief TX-FIFO flush (whatever I3C is acting as controller/target) This bit can only be written. When the I3C is acting as target, this bit can be used to flush the TX-FIFO on a private read if the controller has early ended the read data (i.e. driven low the T bit) and there is/are remaining data in the TX-FIFO (i.e. I3C_SR.ABT=1 and I3C_SR.XDCNT[15:0] I3C_TGTTDR.TGTTDCNT[15:0]). */
    using I3C_CFGR_TXFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: flush TX-FIFO (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_TXFLUSH_B_0x0 = 0;
        /** @brief flush TX-FIFO */
    constexpr std::uint32_t I3C_CFGR_TXFLUSH_B_0x1 = 1;

    /** @brief TX-FIFO threshold (whatever I3C is acting as controller/target) This threshold defines, compared to the TX-FIFO level, when the I3C_EVR.TXFNFF flag is set (and consequently if TXDMAEN=1 when is asserted a DMA TX request). TXFNFF is set when 1 byte is to be written in TX-FIFO (i.e. in I3C_TDR). TXFNFF is set when 4 bytes are to be written in TX-FIFO (i.e. in I3C_TDWR). */
    using I3C_CFGR_TXTHRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1-byte threshold (value: 0)
     *          - B_0x1: 4-byte threshold (value: 1)
     */
        /** @brief 1-byte threshold */
    constexpr std::uint32_t I3C_CFGR_TXTHRES_B_0x0 = 0;
        /** @brief 4-byte threshold */
    constexpr std::uint32_t I3C_CFGR_TXTHRES_B_0x1 = 1;

    /** @brief S-FIFO DMA request enable (when I3C is acting as controller) Condition: When RMODE=1 (FIFO is enabled for the status): - Software reads and pops a status word from S-FIFO i.e. reads I3C_SR register after a completed frame (I3C_EVR.FCF=1) or an error (I3C_EVR.ERRF=1). - A status word can be read by the software either via polling on these register flags or via interrupt notification (enabled by I3C_IER.FCIE=1 and I3C_IER.ERRIE=1). - DMA reads and pops status word(s) from S-FIFO i.e. reads I3C_SR register. - Status word(s) are automatically read by the programmed hardware (i.e. via the asserted S-FIFO DMA request from the I3C and the programmed DMA channel). */
    using I3C_CFGR_SDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode is disabled for S-FIFO (value: 0)
     *          - B_0x1: DMA mode is enabled for S-FIFO (value: 1)
     */
        /** @brief DMA mode is disabled for S-FIFO */
    constexpr std::uint32_t I3C_CFGR_SDMAEN_B_0x0 = 0;
        /** @brief DMA mode is enabled for S-FIFO */
    constexpr std::uint32_t I3C_CFGR_SDMAEN_B_0x1 = 1;

    /** @brief S-FIFO flush (when I3C is acting as controller) When I3C is acting as I3C controller, this bit can only be written (and is only used when I3C is acting as controller). */
    using I3C_CFGR_SFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: flush S-FIFO (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_SFLUSH_B_0x0 = 0;
        /** @brief flush S-FIFO */
    constexpr std::uint32_t I3C_CFGR_SFLUSH_B_0x1 = 1;

    /** @brief S-FIFO enable / status receive mode (when I3C is acting as controller) When I3C is acting as I3C controller, this bit is used for the enabling the FIFO for the status (S-FIFO) vs the received status from the target on the I3C bus. When I3C is acting as target, this bit must be cleared. - Status register (i.e. I3C_SR) is used without FIFO mechanism. - There is no SCL stretch if a new status register content is not read. - Status register must be read before being lost/overwritten. All message status must be read. There is SCL stretch when there is no more space in the S-FIFO. */
    using I3C_CFGR_RMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: S-FIFO is disabled, and the (value: 0)
     *          - B_0x1: S-FIFO is enabled. (value: 1)
     */
        /** @brief S-FIFO is disabled, and the */
    constexpr std::uint32_t I3C_CFGR_RMODE_B_0x0 = 0;
        /** @brief S-FIFO is enabled. */
    constexpr std::uint32_t I3C_CFGR_RMODE_B_0x1 = 1;

    /** @brief transmit mode (when I3C is acting as controller) When I3C is acting as I3C controller, this bit is used for the C-FIFO and TX-FIFO management vs the emitted frame on the I3C bus. A frame transfer starts as soon as first control word is present in C-FIFO. */
    using I3C_CFGR_TMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-FIFO and TX-FIFO are not preloaded before starting to emit a frame transfer. (value: 0)
     *          - B_0x1: C-FIFO and TX-FIFO are first preloaded (also TX-FIFO if needed (depending on the frame format) before starting to emit a frame transfer. (value: 1)
     */
        /** @brief C-FIFO and TX-FIFO are not preloaded before starting to emit a frame transfer. */
    constexpr std::uint32_t I3C_CFGR_TMODE_B_0x0 = 0;
        /** @brief C-FIFO and TX-FIFO are first preloaded (also TX-FIFO if needed (depending on the frame format) before starting to emit a frame transfer. */
    constexpr std::uint32_t I3C_CFGR_TMODE_B_0x1 = 1;

    /** @brief C-FIFO DMA request enable (when I3C is acting as controller) When I3C is acting as controller: - Software writes and pushes control word(s) into C-FIFO i.e. writes I3C_CR register, as needed for a given frame. - A next control word transfer can be written by software either via polling on the flag I3C_EVR.CFNFF=1 or via interrupt notification (enabled by I3C_IER.CFNFIE=1). - DMA writes and pushes control word(s) into C-FIFO i.e. writes I3C_CR register, as needed for a given frame. - A next control word transfer is automatically written by the programmed hardware (i.e. via the asserted C-FIFO DMA request from the I3C and the programmed DMA channel). */
    using I3C_CFGR_CDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode is disabled for C-FIFO (value: 0)
     *          - B_0x1: DMA mode is enabled for C-FIFO (value: 1)
     */
        /** @brief DMA mode is disabled for C-FIFO */
    constexpr std::uint32_t I3C_CFGR_CDMAEN_B_0x0 = 0;
        /** @brief DMA mode is enabled for C-FIFO */
    constexpr std::uint32_t I3C_CFGR_CDMAEN_B_0x1 = 1;

    /** @brief C-FIFO flush (when I3C is acting as controller) This bit can only be written. */
    using I3C_CFGR_CFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: flush C-FIFO (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_CFLUSH_B_0x0 = 0;
        /** @brief flush C-FIFO */
    constexpr std::uint32_t I3C_CFGR_CFLUSH_B_0x1 = 1;

    /** @brief frame transfer set (a.k.a. software trigger) (when I3C is acting as controller) This bit can only be written. When I3C is acting as I3C controller: Note: If this bit is not set, the other alternative for the software to initiate a frame transfer is to directly write the first control word register (i.e. I3C_CR) while C-FIFO is empty (i.e. I3C_EVR.CFEF=1). Then, if the first written control word is not tagged as a message end (i.e I3C_CR.MEND=0), it causes the hardware to assert the flag I3C_EVR.CFNFF (C-FIFO not full and a next control word is needed). */
    using I3C_CFGR_TSFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: setting this bit initiates a frame transfer by causing the hardware to assert the flag I3C_EVR.CFNFF (C-FIFO not full and a control word is needed) (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t I3C_CFGR_TSFSET_B_0x0 = 0;
        /** @brief setting this bit initiates a frame transfer by causing the hardware to assert the flag I3C_EVR.CFNFF (C-FIFO not full and a control word is needed) */
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
    /** @brief 8-bit IBI payload data (earliest byte on I3C bus, i.e. MDB[7:0] mandatory data byte). */
    using I3C_IBIDR_IBIDB0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit IBI payload data (next byte on I3C bus after IBIDB0[7:0]). */
    using I3C_IBIDR_IBIDB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit IBI payload data (next byte on I3C bus after IBIDB1[7:0]). */
    using I3C_IBIDR_IBIDB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit IBI payload data (latest byte on I3C bus). */
    using I3C_IBIDR_IBIDB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C target transmit configuration register */
    using I3C_TGTTDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transmit data counter, in bytes (when I3C is configured as target) This field must be written by software in the same access when is asserted PRELOAD, in order to define the number of bytes to preload and to transmit. This field is updated by hardware and reports, when read, the remaining number of bytes to be loaded into the TX-FIFO. */
    using I3C_TGTTDR_TGTTDCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief preload of the TX-FIFO (when I3C is configured as target) This bit must be written and asserted by software in the same access when is written and defined the number of bytes to preload into the TX-FIFO and to transmit. This bit is cleared by hardware when all the data bytes to transmit are loaded into the TX-FIFO. */
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
    /** @brief data counter - When the I3C is acting as controller: number of targets detected on the bus - When the I3C is acting as target: number of transmitted bytes - Whatever the I3C is acting as controller or target: number of data bytes read from or transmitted on the I3C bus during the MID[7:0] message */
    using I3C_SR_XDCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief a private read message is completed/aborted prematurely by the target (when the I3C is acting as controller) When the I3C is acting as controller, this bit indicates if the private read data which is transmitted by the target early terminates (i.e. the target drives T bit low earlier vs what does expect the controller in terms of programmed number of read data bytes i.e. I3C_CR.DCNT[15:0]). */
    using I3C_SR_ABT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no early completion/abort from the target (value: 0)
     *          - B_0x1: early completion/abort from the target (value: 1)
     */
        /** @brief no early completion/abort from the target */
    constexpr std::uint32_t I3C_SR_ABT_B_0x0 = 0;
        /** @brief early completion/abort from the target */
    constexpr std::uint32_t I3C_SR_ABT_B_0x1 = 1;

    /** @brief message direction Whatever the I3C is acting as controller or target, this bit indicates the direction of the related message on the I3C bus Note: ENTDAA CCC is considered as a write command. */
    using I3C_SR_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write (value: 0)
     *          - B_0x1: read (value: 1)
     */
        /** @brief write */
    constexpr std::uint32_t I3C_SR_DIR_B_0x0 = 0;
        /** @brief read */
    constexpr std::uint32_t I3C_SR_DIR_B_0x1 = 1;

    /** @brief message identifier/counter of a given frame (when the I3C is acting as controller) When the I3C is acting as controller, this field identifies the control word message (i.e. I3C_CR) to which the I3C_SR status register refers. First message of a frame is identified with MID[7:0]=0. This field is incremented (by hardware) on the completion of a new message control word (i.e. I3C_CR) over I3C bus. This field is reset for every new frame start. */
    using I3C_SR_MID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C status error register */
    using I3C_SER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief protocol error code/type controller detected an illegally formatted CCC controller detected that transmitted data on the bus is different from expected controller detected a not acknowledged broadcast address (7'hE) controller detected the new controller did not drive bus after controller-role hand-off target detected an invalid broadcast address 7'hE+W target detected a parity error on a CCC code via a parity check (vs T bit) target detected a parity error on a write data via a parity check (vs T bit) target detected a parity error on the assigned address during dynamic address arbitration via a parity check (vs PAR bit) target detected a 7'hE+R missing after Sr during dynamic address arbitration target detected an illegally formatted CCC target detected that transmitted data on the bus is different from expected others: reserved */
    using I3C_SER_CODERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CE0 error (transaction after sending CCC): (value: 0)
     *          - B_0x1: CE1 error (monitoring error): (value: 1)
     *          - B_0x2: CE2 error (no response to broadcast address): (value: 2)
     *          - B_0x3: CE3 error (failed controller-role hand-off): (value: 3)
     *          - B_0x8: TE0 error (invalid broadcast address 7'hE+W): (value: 8)
     *          - B_0x9: TE1 error (CCC code): (value: 9)
     *          - B_0xA: TE2 error (write data): (value: 10)
     *          - B_0xB: TE3 error (assigned address during dynamic address arbitration): (value: 11)
     *          - B_0xC: TE4 error (7'hE+R missing after Sr during dynamic address arbitration): (value: 12)
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
        /** @brief TE0 error (invalid broadcast address 7'hE+W): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0x8 = 8;
        /** @brief TE1 error (CCC code): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0x9 = 9;
        /** @brief TE2 error (write data): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xA = 10;
        /** @brief TE3 error (assigned address during dynamic address arbitration): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xB = 11;
        /** @brief TE4 error (7'hE+R missing after Sr during dynamic address arbitration): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xC = 12;
        /** @brief TE5 error (transaction after detecting CCC): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xD = 13;
        /** @brief TE6 error (monitoring error): */
    constexpr std::uint32_t I3C_SER_CODERR_B_0xE = 14;

    /** @brief protocol error */
    using I3C_SER_PERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: whatever controller or target, hardware detected a protocol error, as detailed in CODERR[3:0] (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_PERR_B_0x0 = 0;
        /** @brief whatever controller or target, hardware detected a protocol error, as detailed in CODERR[3:0] */
    constexpr std::uint32_t I3C_SER_PERR_B_0x1 = 1;

    /** @brief SCL stall error (when the I3C is acting as target) */
    using I3C_SER_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: target detected that SCL was stable for more than 125 s during a I3C SDR read (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_STALL_B_0x0 = 0;
        /** @brief target detected that SCL was stable for more than 125 s during a I3C SDR read */
    constexpr std::uint32_t I3C_SER_STALL_B_0x1 = 1;

    /** @brief RX-FIFO overrun or TX-FIFO underrun i) a TX-FIFO underrun: TX-FIFO is empty and a write data byte has to be transmitted ii) a RX-FIFO overrun: RX-FIFO is full and a new data byte is received */
    using I3C_SER_DOVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: whatever controller or target, hardware detected either: (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_DOVR_B_0x0 = 0;
        /** @brief whatever controller or target, hardware detected either: */
    constexpr std::uint32_t I3C_SER_DOVR_B_0x1 = 1;

    /** @brief C-FIFO underrun or S-FIFO overrun (when the I3C is acting as controller) i) a C-FIFO underrun: control FIFO is empty and a restart has to be emitted ii) a S-FIFO overrun: S-FIFO is full and a new message ends */
    using I3C_SER_COVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: controller detected either: (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_COVR_B_0x0 = 0;
        /** @brief controller detected either: */
    constexpr std::uint32_t I3C_SER_COVR_B_0x1 = 1;

    /** @brief address not acknowledged (when the I3C is configured as controller) i) a legacy I2C read/write transfer ii) a direct CCC write transfer iii) the second trial of a direct CCC read transfer iv) a private read/write transfer */
    using I3C_SER_ANACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: controller detected that the static/dynamic address was not acknowledged by a target, either during: (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_ANACK_B_0x0 = 0;
        /** @brief controller detected that the static/dynamic address was not acknowledged by a target, either during: */
    constexpr std::uint32_t I3C_SER_ANACK_B_0x1 = 1;

    /** @brief data not acknowledged (when the I3C is acting as controller) i) a legacy I2C write transfer ii) the second trial when sending dynamic address during ENTDAA procedure */
    using I3C_SER_DNACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: controller detected that a data byte is not acknowledged by a target, either during: (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_DNACK_B_0x0 = 0;
        /** @brief controller detected that a data byte is not acknowledged by a target, either during: */
    constexpr std::uint32_t I3C_SER_DNACK_B_0x1 = 1;

    /** @brief data error (when the I3C is acting as controller) */
    using I3C_SER_DERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no detected error (value: 0)
     *          - B_0x1: controller detected a data error during the controller-role hand-off procedure (GETACCCR CCC, formerly known as GETACCMST) when the received target address or/and the parity bit do no match. Active controller keeps controller-role. (value: 1)
     */
        /** @brief no detected error */
    constexpr std::uint32_t I3C_SER_DERR_B_0x0 = 0;
        /** @brief controller detected a data error during the controller-role hand-off procedure (GETACCCR CCC, formerly known as GETACCMST) when the received target address or/and the parity bit do no match. Active controller keeps controller-role. */
    constexpr std::uint32_t I3C_SER_DERR_B_0x1 = 1;

    /** @brief I3C received message register */
    using I3C_RMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI received payload data count (when the I3C is configured as controller) When the I3C is configured as controller, this field logs the number of data bytes effectively received in the I3C_IBIDR register. */
    using I3C_RMR_IBIRDCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief received CCC code (when the I3C is configured as target) When the I3C is configured as target, this field logs the received CCC code. */
    using I3C_RMR_RCODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief received target address (when the I3C is configured as controller) When the I3C is configured as controller, this field logs the received dynamic address from the target during acknowledged IBI or controller-role request. */
    using I3C_RMR_RADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C event register */
    using I3C_EVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-FIFO empty flag (whatever the I3C is acting as controller/target) This flag is asserted by hardware to indicate that the C-FIFO is empty when controller, and that the I3C_CR register contains no control word (i.e. none IBI/CR/HJ request) when target. This flag is de-asserted by hardware to indicate that the C-FIFO is not empty when controller, and that the I3C_CR register contains one control word (i.e. a pending IBI/CR/HJ request) when target. Note: When the I3C is acting as controller, if the C-FIFO and TX-FIFO preload is configured (i.e. I3C_CFGR.TMODE=1), the software must wait for TXFEF=1 and CFEF=1 before starting a new frame transfer. */
    using I3C_EVR_CFEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX-FIFO empty flag (whatever the I3C is acting as controller/target) This flag is asserted by hardware to indicate that the TX-FIFO is empty. This flag is de-asserted by hardware to indicate that the TX-FIFO is not empty. Note: When the I3C is acting as controller, if the C-FIFO and TX-FIFO preload is configured (i.e. I3C_CFGR.TMODE=1), the software must wait for TXFEF=1 and CFEF=1 before starting a new frame transfer. */
    using I3C_EVR_TXFEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-FIFO not full flag (when the I3C is acting as controller) When the I3C is acting as controller, this flag is asserted by hardware to indicate that a control word is to be written to the C-FIFO. This flag is de-asserted by hardware to indicate that a control word is not to be written to the C-FIFO. Note: The software must wait for CFNFF=1 (by polling or via the enabled interrupt) before writing to C-FIFO (i.e. writing to I3C_CR). */
    using I3C_EVR_CFNFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief S-FIFO not empty flag (when the I3C is acting as controller) When the I3C is acting as controller, if the S-FIFO is enabled (i.e. I3C_CFGR.RMODE=1), this flag is asserted by hardware to indicate that a status word is to be read from the S-FIFO. This flag is de-asserted by hardware to indicate that a status word is not to be read from the S-FIFO. */
    using I3C_EVR_SFNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX-FIFO not full flag (whatever the I3C is acting as controller/target) This flag is asserted by hardware to indicate that a data byte/word is to be written to the TX-FIFO. This flag is de-asserted by hardware to indicate that a data byte/word is not to be written to the TX-FIFO. Note: The software must wait for TXFNFF=1 (by polling or via the enabled interrupt) before writing to TX-FIFO (i.e. writing to I3C_TDR or I3C_TDWR depending on I3C_CFGR.TXTHRES). Note: When the I3C is acting as target, if the software intends to use the TXFNFF flag for writing into I3C_TDR/I3C_TDWR, it must have configured and set the TX-FIFO preload (i.e. write I3C_TGTTDR.PRELOAD). */
    using I3C_EVR_TXFNFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX-FIFO not empty flag (whatever the I3C is acting as controller/target) This flag is asserted by hardware to indicate that a data byte is to be read from the RX-FIFO. This flag is de-asserted by hardware to indicate that a data byte is not to be read from the RX-FIFO. Note: The software must wait for RXFNEF=1 (by polling or via the enabled interrupt) before reading from RX-FIFO (i.e. writing to I3C_RDR or I3C_RDWR depending on I3C_CFGR.RXTHRES). */
    using I3C_EVR_RXFNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief last written data byte/word flag (whatever the I3C is acting as controller/target) This flag is asserted by hardware to indicate that the last data byte/word (depending on I3C_CFGR.TXTHRES) of a message is to be written to the TX-FIFO. This flag is de-asserted by hardware when the last data byte/word of a message is written. */
    using I3C_EVR_TXLASTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief last read data byte/word flag (whatever the I3C is acting as controller/target) This flag is asserted by hardware to indicate that the last data byte/word (depending on I3C_CFGR.RXTHRES) of a message is to be read from the RX-FIFO. This flag is de-asserted by hardware when the last data byte/word of a message is read. */
    using I3C_EVR_RXLASTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame complete flag (whatever the I3C is acting as controller/target) When the I3C is acting as controller, this flag is asserted by hardware to indicate that a frame has been (normally) completed on the I3C bus, i.e when a stop is issued. When the I3C is acting as target, this flag is asserted by hardware to indicate that a message addressed to/by this target has been (normally) completed on the I3C bus, i.e when a next stop or repeated start is then issued by the controller. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CFCF bit. */
    using I3C_EVR_FCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief target-initiated read end flag (when the I3C is acting as controller) When the I3C is acting as controller, this flag is asserted by hardware to indicate that the target has prematurely ended a read transfer. Then, software should read I3C_SR to get more information on the prematurely read transfer. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CRXTGTENDF bit. */
    using I3C_EVR_RXTGTENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief flag (whatever the I3C is acting as controller/target) This flag is asserted by hardware to indicate that an error occurred.Then, software should read I3C_SER to get the error type. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CERRF bit. */
    using I3C_EVR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI flag (when the I3C is acting as controller) When the I3C is acting as controller, this flag is asserted by hardware to indicate that an IBI request has been received. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CIBIF bit. */
    using I3C_EVR_IBIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI end flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that a IBI transfer has been received and completed (IBI acknowledged and IBI data bytes read by controller if any). This flag is cleared when software writes 1 into corresponding I3C_CEVR.CIBIENDF bit. */
    using I3C_EVR_IBIENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief controller-role request flag (when the I3C is acting as controller) When the I3C is acting as controller, this flag is asserted by hardware to indicate that a controller-role request has been acknowledged and completed (by hardware). The software should then issue a GETACCCR CCC (get accept controller role) for the controller-role hand-off procedure. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CCRF bit. */
    using I3C_EVR_CRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief controller-role update flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that it has now gained the controller role after the completed controller-role hand-off procedure. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CCRUPDF bit. */
    using I3C_EVR_CRUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief hot-join flag (when the I3C is acting as controller) When the I3C is acting as controller, this flag is asserted by hardware to indicate that an hot join request has been received. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CHJF bit. */
    using I3C_EVR_HJF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief wakeup/missed start flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that a start has been detected (i.e. a SDA falling edge followed by a SCL falling edge) but on the next SCL falling edge, the I3C kernel clock is (still) gated. Thus an I3C bus transaction may have been lost by the target. The corresponding interrupt may be used to wakeup the device from a low power mode (Sleep or Stop mode). This flag is cleared when software writes 1 into corresponding I3C_CEVR.CWKPF bit. */
    using I3C_EVR_WKPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief get flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that any direct CCC of get type (GET*** CCC) has been received. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CGETF bit. */
    using I3C_EVR_GETF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief get status flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that a direct GETSTATUS CCC (get status) has been received. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CSTAF bit. */
    using I3C_EVR_STAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief dynamic address update flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that a dynamic address update has been received via any of the broadcast ENTDAA, RSTDAA and direct SETNEWDA CCC. Then, software should read I3C_DEVR0.DA[6:0] to get the maximum write length value. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CDAUPDF bit. */
    using I3C_EVR_DAUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief maximum write length update flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that a direct SETMWL CCC (set max write length) has been received. Then, software should read I3C_MAXWLR.MWL[15:0] to get the maximum write length value. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CMWLUPDF bit. */
    using I3C_EVR_MWLUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief maximum read length update flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that a direct SETMRL CCC (set max read length) has been received. Then, software should read I3C_MAXRLR.MRL[15:0] to get the maximum read length value. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CMRLUPDF bit. */
    using I3C_EVR_MRLUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset pattern flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that a reset pattern has been detected (i.e. 14 SDA transitions while SCL is low, followed by repeated start, then stop). Then, software should read I3C_DEVR0.RSTACT[1:0] and I3C_DEVR0.RSTVAL, to know what reset level is required. If RSTVAL=1: when the RSTF is asserted (and/or the corresponding interrupt if enabled), I3C_DEVR0.RSTACT[1:0] dictates the reset action to be performed by the software if any. If RSTVAL=0: when the RSTF is asserted (and/or the corresponding interrupt if enabled), the software should issue an I3C reset after a first detected reset pattern, and a system reset on the second one. The corresponding interrupt may be used to wakeup the device from a low power mode (Sleep or Stop mode). This flag is cleared when software writes 1 into corresponding I3C_CEVR.CRSTF bit. */
    using I3C_EVR_RSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief activity state update flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that the direct or broadcast ENTASx CCC (with x=0...3) has been received. Then, software should read I3C_DEVR0.AS[1:0]. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CASUPDF bit. */
    using I3C_EVR_ASUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt/controller-role/hot-join update flag (when the I3C is acting as target) When the I3C is acting as target, this flag is asserted by hardware to indicate that the direct or broadcast ENEC/DISEC CCC (enable/disable target events) has been received, where a target event is either an interrupt/IBI request, a controller-role request, or an hot-join request. Then, software should read respectively I3C_DEVR0.IBIEN, I3C_DEVR0.CREN or I3C_DEVR0.HJEN. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CINTUPDF bit. */
    using I3C_EVR_INTUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEFTGTS flag (when the I3C is acting as target) When the I3C is acting as target (and is typically controller capable), this flag is asserted by hardware to indicate that the broadcast DEFTGTS CCC (define list of targets) has been received. Then, software may store the received data for when getting the controller role. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CDEFF bit. */
    using I3C_EVR_DEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief group addressing flag (when the I3C is acting as target) When the I3C is acting as target (and is typically controller capable), this flag is asserted by hardware to indicate that the broadcast DEFGRPA CCC (define list of group addresses) has been received. Then, software may store the received data for when getting the controller role. This flag is cleared when software writes 1 into corresponding I3C_CEVR.CGRPF bit. */
    using I3C_EVR_GRPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C interrupt enable register */
    using I3C_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-FIFO not full interrupt enable (whatever the I3C is acting as controller/target) */
    using I3C_IER_CFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_CFNFIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_CFNFIE_B_0x1 = 1;

    /** @brief S-FIFO not empty interrupt enable (whatever the I3C is acting as controller/target) */
    using I3C_IER_SFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_SFNEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_SFNEIE_B_0x1 = 1;

    /** @brief TX-FIFO not full interrupt enable (whatever the I3C is acting as controller/target) */
    using I3C_IER_TXFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_TXFNFIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_TXFNFIE_B_0x1 = 1;

    /** @brief RX-FIFO not empty interrupt enable (whatever the I3C is acting as controller/target) */
    using I3C_IER_RXFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_RXFNEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_RXFNEIE_B_0x1 = 1;

    /** @brief frame complete interrupt enable (whatever the I3C is acting as controller/target) */
    using I3C_IER_FCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_FCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_FCIE_B_0x1 = 1;

    /** @brief target-initiated read end interrupt enable (when the I3C is acting as controller) */
    using I3C_IER_RXTGTENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_RXTGTENDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_RXTGTENDIE_B_0x1 = 1;

    /** @brief error interrupt enable (whatever the I3C is acting as controller/target) */
    using I3C_IER_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_ERRIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_ERRIE_B_0x1 = 1;

    /** @brief IBI request interrupt enable (when the I3C is acting as controller) */
    using I3C_IER_IBIIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_IBIIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_IBIIE_B_0x1 = 1;

    /** @brief IBI end interrupt enable (when the I3C is acting as target) */
    using I3C_IER_IBIENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_IBIENDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_IBIENDIE_B_0x1 = 1;

    /** @brief controller-role request interrupt enable (when the I3C is acting as controller) */
    using I3C_IER_CRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_CRIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_CRIE_B_0x1 = 1;

    /** @brief controller-role update interrupt enable (when the I3C is acting as target) */
    using I3C_IER_CRUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_CRUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_CRUPDIE_B_0x1 = 1;

    /** @brief hot-join interrupt enable (when the I3C is acting as controller) */
    using I3C_IER_HJIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_HJIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_HJIE_B_0x1 = 1;

    /** @brief wakeup interrupt enable (when the I3C is acting as target) */
    using I3C_IER_WKPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_WKPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_WKPIE_B_0x1 = 1;

    /** @brief GETxxx CCC interrupt enable (when the I3C is acting as target) */
    using I3C_IER_GETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_GETIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_GETIE_B_0x1 = 1;

    /** @brief GETSTATUS CCC interrupt enable (when the I3C is acting as target) */
    using I3C_IER_STAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_STAIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_STAIE_B_0x1 = 1;

    /** @brief ENTDAA/RSTDAA/SETNEWDA CCC interrupt enable (when the I3C is acting as target) */
    using I3C_IER_DAUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_DAUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_DAUPDIE_B_0x1 = 1;

    /** @brief SETMWL CCC interrupt enable (when the I3C is acting as target) */
    using I3C_IER_MWLUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_MWLUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_MWLUPDIE_B_0x1 = 1;

    /** @brief SETMRL CCC interrupt enable (when the I3C is acting as target) */
    using I3C_IER_MRLUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_MRLUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_MRLUPDIE_B_0x1 = 1;

    /** @brief reset pattern interrupt enable (when the I3C is acting as target) */
    using I3C_IER_RSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_RSTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_RSTIE_B_0x1 = 1;

    /** @brief ENTASx CCC interrupt enable (when the I3C is acting as target) */
    using I3C_IER_ASUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_ASUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_ASUPDIE_B_0x1 = 1;

    /** @brief ENEC/DISEC CCC interrupt enable (when the I3C is acting as target) */
    using I3C_IER_INTUPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_INTUPDIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_INTUPDIE_B_0x1 = 1;

    /** @brief DEFTGTS CCC interrupt enable (when the I3C is acting as target) */
    using I3C_IER_DEFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t I3C_IER_DEFIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t I3C_IER_DEFIE_B_0x1 = 1;

    /** @brief DEFGRPA CCC interrupt enable (when the I3C is acting as target) */
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
    /** @brief clear frame complete flag (whatever the I3C is acting as controller/target) */
    using I3C_CEVR_CFCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.FCF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CFCF_B_0x0 = 0;
        /** @brief clear I3C_EVR.FCF */
    constexpr std::uint32_t I3C_CEVR_CFCF_B_0x1 = 1;

    /** @brief clear target-initiated read end flag (when the I3C is acting as controller) */
    using I3C_CEVR_CRXTGTENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.RXTGTENDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CRXTGTENDF_B_0x0 = 0;
        /** @brief clear I3C_EVR.RXTGTENDF */
    constexpr std::uint32_t I3C_CEVR_CRXTGTENDF_B_0x1 = 1;

    /** @brief clear error flag (whatever the I3C is acting as controller/target) */
    using I3C_CEVR_CERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.ERRF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CERRF_B_0x0 = 0;
        /** @brief clear I3C_EVR.ERRF */
    constexpr std::uint32_t I3C_CEVR_CERRF_B_0x1 = 1;

    /** @brief clear IBI request flag (when the I3C is acting as controller) */
    using I3C_CEVR_CIBIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.IBIF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CIBIF_B_0x0 = 0;
        /** @brief clear I3C_EVR.IBIF */
    constexpr std::uint32_t I3C_CEVR_CIBIF_B_0x1 = 1;

    /** @brief clear IBI end flag (when the I3C is acting as target) */
    using I3C_CEVR_CIBIENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.IBIENDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CIBIENDF_B_0x0 = 0;
        /** @brief clear I3C_EVR.IBIENDF */
    constexpr std::uint32_t I3C_CEVR_CIBIENDF_B_0x1 = 1;

    /** @brief clear controller-role request flag (when the I3C is acting as controller) */
    using I3C_CEVR_CCRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.CRF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CCRF_B_0x0 = 0;
        /** @brief clear I3C_EVR.CRF */
    constexpr std::uint32_t I3C_CEVR_CCRF_B_0x1 = 1;

    /** @brief clear controller-role update flag (when the I3C is acting as target) */
    using I3C_CEVR_CCRUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.CRUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CCRUPDF_B_0x0 = 0;
        /** @brief clear I3C_EVR.CRUPDF */
    constexpr std::uint32_t I3C_CEVR_CCRUPDF_B_0x1 = 1;

    /** @brief clear hot-join flag (when the I3C is acting as controller) */
    using I3C_CEVR_CHJF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.HJF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CHJF_B_0x0 = 0;
        /** @brief clear I3C_EVR.HJF */
    constexpr std::uint32_t I3C_CEVR_CHJF_B_0x1 = 1;

    /** @brief clear wakeup flag (when the I3C is acting as target) */
    using I3C_CEVR_CWKPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.WKPF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CWKPF_B_0x0 = 0;
        /** @brief clear I3C_EVR.WKPF */
    constexpr std::uint32_t I3C_CEVR_CWKPF_B_0x1 = 1;

    /** @brief clear GETxxx CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CGETF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.GETF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CGETF_B_0x0 = 0;
        /** @brief clear I3C_EVR.GETF */
    constexpr std::uint32_t I3C_CEVR_CGETF_B_0x1 = 1;

    /** @brief clear GETSTATUS CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CSTAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.STAF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CSTAF_B_0x0 = 0;
        /** @brief clear I3C_EVR.STAF */
    constexpr std::uint32_t I3C_CEVR_CSTAF_B_0x1 = 1;

    /** @brief clear ENTDAA/RSTDAA/SETNEWDA CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CDAUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.DAUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CDAUPDF_B_0x0 = 0;
        /** @brief clear I3C_EVR.DAUPDF */
    constexpr std::uint32_t I3C_CEVR_CDAUPDF_B_0x1 = 1;

    /** @brief clear SETMWL CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CMWLUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.MWLUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CMWLUPDF_B_0x0 = 0;
        /** @brief clear I3C_EVR.MWLUPDF */
    constexpr std::uint32_t I3C_CEVR_CMWLUPDF_B_0x1 = 1;

    /** @brief clear SETMRL CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CMRLUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.MRLUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CMRLUPDF_B_0x0 = 0;
        /** @brief clear I3C_EVR.MRLUPDF */
    constexpr std::uint32_t I3C_CEVR_CMRLUPDF_B_0x1 = 1;

    /** @brief clear reset pattern flag (when the I3C is acting as target) */
    using I3C_CEVR_CRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.RSTF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CRSTF_B_0x0 = 0;
        /** @brief clear I3C_EVR.RSTF */
    constexpr std::uint32_t I3C_CEVR_CRSTF_B_0x1 = 1;

    /** @brief clear ENTASx CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CASUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.ASUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CASUPDF_B_0x0 = 0;
        /** @brief clear I3C_EVR.ASUPDF */
    constexpr std::uint32_t I3C_CEVR_CASUPDF_B_0x1 = 1;

    /** @brief clear ENEC/DISEC CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CINTUPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.CINTUPDF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CINTUPDF_B_0x0 = 0;
        /** @brief clear I3C_EVR.CINTUPDF */
    constexpr std::uint32_t I3C_CEVR_CINTUPDF_B_0x1 = 1;

    /** @brief clear DEFTGTS CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CDEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.DEFF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CDEFF_B_0x0 = 0;
        /** @brief clear I3C_EVR.DEFF */
    constexpr std::uint32_t I3C_CEVR_CDEFF_B_0x1 = 1;

    /** @brief clear DEFGRPA CCC flag (when the I3C is acting as target) */
    using I3C_CEVR_CGRPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear I3C_EVR.GRPF (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t I3C_CEVR_CGRPF_B_0x0 = 0;
        /** @brief clear I3C_EVR.GRPF */
    constexpr std::uint32_t I3C_CEVR_CGRPF_B_0x1 = 1;

    /** @brief I3C own device characteristics register */
    using I3C_DEVR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief dynamic address is valid (when the I3C is acting as target) When the I3C is acting as controller, this field can be written by software, for validating its own dynamic address, for example before a controller-role hand-off. When the I3C is acting as target, this field is asserted by hardware on the acknowledge of the broadcast ENTDAA CCC or the direct SETNEWDA CCC, and this field is cleared by hardware on the acknowledge of the broadcast RSTDAA CCC. */
    using I3C_DEVR0_DAVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7-bit dynamic address When the I3C is acting as controller, this field can be written by software, for defining its own dynamic address. When the I3C is acting as target, this field is updated by hardware on the reception of either the broadcast ENTDAA CCC or the direct SETNEWDA CCC. */
    using I3C_DEVR0_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request enable (when the I3C is acting as target) This field is initially written by software when I3C_CFGR.EN=0, and is updated by hardware on the reception of DISEC CCC with DISINT=1 (i.e. cleared) and the reception of ENEC CCC with ENINT=1 (i.e. set). */
    using I3C_DEVR0_IBIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IBI request disabled (value: 0)
     *          - B_0x1: IBI request enabled (value: 1)
     */
        /** @brief IBI request disabled */
    constexpr std::uint32_t I3C_DEVR0_IBIEN_B_0x0 = 0;
        /** @brief IBI request enabled */
    constexpr std::uint32_t I3C_DEVR0_IBIEN_B_0x1 = 1;

    /** @brief controller-role request enable (when the I3C is acting as target) This field is initially written by software when I3C_CFGR.EN=0, and is updated by hardware on the reception of DISEC CCC with DISCR=1 (i.e. cleared) and the reception of ENEC CCC with ENCR=1 (i.e. set). */
    using I3C_DEVR0_CREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: controller-role request disabled (value: 0)
     *          - B_0x1: controller-role request enabled (value: 1)
     */
        /** @brief controller-role request disabled */
    constexpr std::uint32_t I3C_DEVR0_CREN_B_0x0 = 0;
        /** @brief controller-role request enabled */
    constexpr std::uint32_t I3C_DEVR0_CREN_B_0x1 = 1;

    /** @brief hot-join request enable (when the I3C is acting as target) This field is initially written by software when I3C_CFGR.EN=0, and is updated by hardware on the reception of DISEC CCC with DISHJ=1 (i.e. cleared) and the reception of ENEC CCC with ENHJ=1 (i.e. set). */
    using I3C_DEVR0_HJEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hot-join request disabled (value: 0)
     *          - B_0x1: hot-join request enabled (value: 1)
     */
        /** @brief hot-join request disabled */
    constexpr std::uint32_t I3C_DEVR0_HJEN_B_0x0 = 0;
        /** @brief hot-join request enabled */
    constexpr std::uint32_t I3C_DEVR0_HJEN_B_0x1 = 1;

    /** @brief activity state (when the I3C is acting as target) This read field is updated by hardware on the reception of a ENTASx CCC (enter activity state, with x=0-3): */
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

    /** @brief reset action/level on received reset pattern (when the I3C is acting as target) This read field is used by hardware on the reception of a direct read RSTACT CCC in order to return the corresponding data byte on the I3C bus. */
    using I3C_DEVR0_RSTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset action (value: 0)
     *          - B_0x1: first level of reset: the application software should either: (value: 1)
     *          - B_0x2: second level of reset: the application software should issue a warm reset, also known as (value: 2)
     *          - B_0x3: no reset action (value: 3)
     */
        /** @brief no reset action */
    constexpr std::uint32_t I3C_DEVR0_RSTACT_B_0x0 = 0;
        /** @brief first level of reset: the application software should either: */
    constexpr std::uint32_t I3C_DEVR0_RSTACT_B_0x1 = 1;
        /** @brief second level of reset: the application software should issue a warm reset, also known as */
    constexpr std::uint32_t I3C_DEVR0_RSTACT_B_0x2 = 2;
        /** @brief no reset action */
    constexpr std::uint32_t I3C_DEVR0_RSTACT_B_0x3 = 3;

    /** @brief reset action is valid (when the I3C is acting as target) This read bit is asserted by hardware to indicate that the RTSACT[1:0] field has been updated on the reception of a broadcast or direct write RSTACT CCC (target reset action) and is valid. This field is cleared by hardware when the target receives a frame start. If RSTVAL=1: when the RSTF is asserted (and/or the corresponding interrupt if enabled), I3C_DEVR0.RSTACT[1:0] dictates the reset action to be performed by the software if any. If RSTVAL=0: when the RSTF is asserted (and/or the corresponding interrupt if enabled), the software should issue an I3C reset after a first detected reset pattern, and a system reset on the second one. */
    using I3C_DEVR0_RSTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C device 1 characteristics register */
    using I3C_DEVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief assigned I3C dynamic address to target x (when the I3C is acting as controller) When the I3C is acting as controller, this field should be written by software to store the 7-bit dynamic address that the controller sends via a broadcast ENTDAA or a direct SETNEWDA CCC which has been acknowledged by the target x. Writing to this field has no impact when the read field I3C_DEVRx.DIS=1. */
    using I3C_DEVR1_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request acknowledge (when the I3C is acting as controller) When the I3C is acting as controller, this bit is written by software to define the acknowledge policy to be applied on the I3C bus on the reception of a IBI request from target x: - After the NACK, the message continues as initially programmed (the target is aware of the NACK and can emit another IBI request later on) - The field DIS is asserted by hardware to protect DA[6:0] from being modified by software meanwhile the hardware can store internally the current DA[6:0] into the kernel clock domain. - After the ACK, the controller logs the IBI payload data, if any, depending on I3C_DEVRx.IBIDEN. - The software is notified by the IBI flag (i.e. I3C_EVR.IBIF=1) and/or the corresponding interrupt if enabled; - Independently from IBIACK configuration for this or other devices, further IBI request(s) are NACKed until IBI request flag (i.e. I3C_EVR.IBIF) and controller-role request flag (i.e. I3C_EVR.CRF) are both cleared. */
    using I3C_DEVR1_IBIACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an IBI request from target x is to be NACKed (value: 0)
     *          - B_0x1: an IBI request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed (value: 1)
     */
        /** @brief an IBI request from target x is to be NACKed */
    constexpr std::uint32_t I3C_DEVR1_IBIACK_B_0x0 = 0;
        /** @brief an IBI request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed */
    constexpr std::uint32_t I3C_DEVR1_IBIACK_B_0x1 = 1;

    /** @brief controller-role request acknowledge (when the I3C is acting as controller) When the I3C is acting as controller, this bit is written by software to define the acknowledge policy to be applied on the I3C bus on the reception of a controller-role request from target x: After the NACK, the message continues as initially programmed (the target is aware of the NACK and can emit another controller-role request later on) - The field DIS is asserted by hardware to protect DA[6:0] from being modified by software meanwhile the hardware can store internally the current DA[6:0] into the kernel clock domain. - After the ACK, the message continues as initially programmed. The software is notified by the controller-role request flag (i.e. I3C_EVR.CRF=1) and/or the corresponding interrupt if enabled; For effectively granting the controller-role to the requesting secondary controller, software should issue a GETACCCR (formerly known as GETACCMST), followed by a STOP. - Independently of CRACK configuration for this or other devices, further controller-role request(s) are NACKed until controller-role request flag (i.e. I3C_EVR.CRF) and IBI flag (i.e. I3C_EVR.IBIF) are both cleared. */
    using I3C_DEVR1_CRACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a controller-role request from target x is to be NACKed (value: 0)
     *          - B_0x1: a controller-role request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed (value: 1)
     */
        /** @brief a controller-role request from target x is to be NACKed */
    constexpr std::uint32_t I3C_DEVR1_CRACK_B_0x0 = 0;
        /** @brief a controller-role request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed */
    constexpr std::uint32_t I3C_DEVR1_CRACK_B_0x1 = 1;

    /** @brief IBI data enable (when the I3C is acting as controller) When the I3C is acting as controller, this bit should be written by software to store the BCR[2] bit as received from the target x during broadcast ENTDAA or direct GETBCR CCC via the received I3C_RDR. Writing to this field has no impact when the read field I3C_DEVRx.DIS=1. */
    using I3C_DEVR1_IBIDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the acknowledged IBI from target x (value: 0)
     *          - B_0x1: the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x (value: 1)
     */
        /** @brief no data byte follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR1_IBIDEN_B_0x0 = 0;
        /** @brief the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR1_IBIDEN_B_0x1 = 1;

    /** @brief suspend/stop I3C transfer on received IBI (when the I3C is acting as controller) When the I3C is acting as controller, this bit is used to receive an IBI from target x with pending read notification feature (i.e. with received MDB[7:5]=3'b101). If this bit is set, when an IBI is received (i.e. I3C_EVR.IBIF=1), a Stop is emitted on the I3C bus and the C-FIFO is automatically flushed by hardware; to avoid a next private read communication issue if a previous private read message to the target x was stored in the C-FIFO. */
    using I3C_DEVR1_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C transfer is not stopped and C-FIFO is not flushed (value: 0)
     *          - B_0x1: I3C transfer is stopped and C-FIFO is flushed on a received IBI request from target x (value: 1)
     */
        /** @brief I3C transfer is not stopped and C-FIFO is not flushed */
    constexpr std::uint32_t I3C_DEVR1_SUSP_B_0x0 = 0;
        /** @brief I3C transfer is stopped and C-FIFO is flushed on a received IBI request from target x */
    constexpr std::uint32_t I3C_DEVR1_SUSP_B_0x1 = 1;

    /** @brief DA[6:0] write disabled (when the I3C is acting as controller) When the I3C is acting as controller, once that software set IBIACK=1 or CRACK=1, this read bit is set by hardware (i.e. DIS=1) to lock the configured DA[6:0] and IBIDEN values. Then, to be able to next modify DA[6:0] or IBIDEN, the software must wait for this field DIS to be de-asserted by hardware (i.e. polling on DIS=0) before modifying these two assigned values to the target x. Indeed, the target may be requesting an IBI or a controller-role meanwhile the controller intends to modify DA[6:0] or IBIDEN. */
    using I3C_DEVR1_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write to I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is allowed (value: 0)
     *          - B_0x1: write I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is disabled/locked (value: 1)
     */
        /** @brief write to I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is allowed */
    constexpr std::uint32_t I3C_DEVR1_DIS_B_0x0 = 0;
        /** @brief write I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is disabled/locked */
    constexpr std::uint32_t I3C_DEVR1_DIS_B_0x1 = 1;

    /** @brief I3C device 2 characteristics register */
    using I3C_DEVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief assigned I3C dynamic address to target x (when the I3C is acting as controller) When the I3C is acting as controller, this field should be written by software to store the 7-bit dynamic address that the controller sends via a broadcast ENTDAA or a direct SETNEWDA CCC which has been acknowledged by the target x. Writing to this field has no impact when the read field I3C_DEVRx.DIS=1. */
    using I3C_DEVR2_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request acknowledge (when the I3C is acting as controller) When the I3C is acting as controller, this bit is written by software to define the acknowledge policy to be applied on the I3C bus on the reception of a IBI request from target x: - After the NACK, the message continues as initially programmed (the target is aware of the NACK and can emit another IBI request later on) - The field DIS is asserted by hardware to protect DA[6:0] from being modified by software meanwhile the hardware can store internally the current DA[6:0] into the kernel clock domain. - After the ACK, the controller logs the IBI payload data, if any, depending on I3C_DEVRx.IBIDEN. - The software is notified by the IBI flag (i.e. I3C_EVR.IBIF=1) and/or the corresponding interrupt if enabled; - Independently from IBIACK configuration for this or other devices, further IBI request(s) are NACKed until IBI request flag (i.e. I3C_EVR.IBIF) and controller-role request flag (i.e. I3C_EVR.CRF) are both cleared. */
    using I3C_DEVR2_IBIACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an IBI request from target x is to be NACKed (value: 0)
     *          - B_0x1: an IBI request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed (value: 1)
     */
        /** @brief an IBI request from target x is to be NACKed */
    constexpr std::uint32_t I3C_DEVR2_IBIACK_B_0x0 = 0;
        /** @brief an IBI request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed */
    constexpr std::uint32_t I3C_DEVR2_IBIACK_B_0x1 = 1;

    /** @brief controller-role request acknowledge (when the I3C is acting as controller) When the I3C is acting as controller, this bit is written by software to define the acknowledge policy to be applied on the I3C bus on the reception of a controller-role request from target x: After the NACK, the message continues as initially programmed (the target is aware of the NACK and can emit another controller-role request later on) - The field DIS is asserted by hardware to protect DA[6:0] from being modified by software meanwhile the hardware can store internally the current DA[6:0] into the kernel clock domain. - After the ACK, the message continues as initially programmed. The software is notified by the controller-role request flag (i.e. I3C_EVR.CRF=1) and/or the corresponding interrupt if enabled; For effectively granting the controller-role to the requesting secondary controller, software should issue a GETACCCR (formerly known as GETACCMST), followed by a STOP. - Independently of CRACK configuration for this or other devices, further controller-role request(s) are NACKed until controller-role request flag (i.e. I3C_EVR.CRF) and IBI flag (i.e. I3C_EVR.IBIF) are both cleared. */
    using I3C_DEVR2_CRACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a controller-role request from target x is to be NACKed (value: 0)
     *          - B_0x1: a controller-role request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed (value: 1)
     */
        /** @brief a controller-role request from target x is to be NACKed */
    constexpr std::uint32_t I3C_DEVR2_CRACK_B_0x0 = 0;
        /** @brief a controller-role request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed */
    constexpr std::uint32_t I3C_DEVR2_CRACK_B_0x1 = 1;

    /** @brief IBI data enable (when the I3C is acting as controller) When the I3C is acting as controller, this bit should be written by software to store the BCR[2] bit as received from the target x during broadcast ENTDAA or direct GETBCR CCC via the received I3C_RDR. Writing to this field has no impact when the read field I3C_DEVRx.DIS=1. */
    using I3C_DEVR2_IBIDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the acknowledged IBI from target x (value: 0)
     *          - B_0x1: the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x (value: 1)
     */
        /** @brief no data byte follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR2_IBIDEN_B_0x0 = 0;
        /** @brief the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR2_IBIDEN_B_0x1 = 1;

    /** @brief suspend/stop I3C transfer on received IBI (when the I3C is acting as controller) When the I3C is acting as controller, this bit is used to receive an IBI from target x with pending read notification feature (i.e. with received MDB[7:5]=3'b101). If this bit is set, when an IBI is received (i.e. I3C_EVR.IBIF=1), a Stop is emitted on the I3C bus and the C-FIFO is automatically flushed by hardware; to avoid a next private read communication issue if a previous private read message to the target x was stored in the C-FIFO. */
    using I3C_DEVR2_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C transfer is not stopped and C-FIFO is not flushed (value: 0)
     *          - B_0x1: I3C transfer is stopped and C-FIFO is flushed on a received IBI request from target x (value: 1)
     */
        /** @brief I3C transfer is not stopped and C-FIFO is not flushed */
    constexpr std::uint32_t I3C_DEVR2_SUSP_B_0x0 = 0;
        /** @brief I3C transfer is stopped and C-FIFO is flushed on a received IBI request from target x */
    constexpr std::uint32_t I3C_DEVR2_SUSP_B_0x1 = 1;

    /** @brief DA[6:0] write disabled (when the I3C is acting as controller) When the I3C is acting as controller, once that software set IBIACK=1 or CRACK=1, this read bit is set by hardware (i.e. DIS=1) to lock the configured DA[6:0] and IBIDEN values. Then, to be able to next modify DA[6:0] or IBIDEN, the software must wait for this field DIS to be de-asserted by hardware (i.e. polling on DIS=0) before modifying these two assigned values to the target x. Indeed, the target may be requesting an IBI or a controller-role meanwhile the controller intends to modify DA[6:0] or IBIDEN. */
    using I3C_DEVR2_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write to I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is allowed (value: 0)
     *          - B_0x1: write I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is disabled/locked (value: 1)
     */
        /** @brief write to I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is allowed */
    constexpr std::uint32_t I3C_DEVR2_DIS_B_0x0 = 0;
        /** @brief write I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is disabled/locked */
    constexpr std::uint32_t I3C_DEVR2_DIS_B_0x1 = 1;

    /** @brief I3C device 3 characteristics register */
    using I3C_DEVR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief assigned I3C dynamic address to target x (when the I3C is acting as controller) When the I3C is acting as controller, this field should be written by software to store the 7-bit dynamic address that the controller sends via a broadcast ENTDAA or a direct SETNEWDA CCC which has been acknowledged by the target x. Writing to this field has no impact when the read field I3C_DEVRx.DIS=1. */
    using I3C_DEVR3_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request acknowledge (when the I3C is acting as controller) When the I3C is acting as controller, this bit is written by software to define the acknowledge policy to be applied on the I3C bus on the reception of a IBI request from target x: - After the NACK, the message continues as initially programmed (the target is aware of the NACK and can emit another IBI request later on) - The field DIS is asserted by hardware to protect DA[6:0] from being modified by software meanwhile the hardware can store internally the current DA[6:0] into the kernel clock domain. - After the ACK, the controller logs the IBI payload data, if any, depending on I3C_DEVRx.IBIDEN. - The software is notified by the IBI flag (i.e. I3C_EVR.IBIF=1) and/or the corresponding interrupt if enabled; - Independently from IBIACK configuration for this or other devices, further IBI request(s) are NACKed until IBI request flag (i.e. I3C_EVR.IBIF) and controller-role request flag (i.e. I3C_EVR.CRF) are both cleared. */
    using I3C_DEVR3_IBIACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an IBI request from target x is to be NACKed (value: 0)
     *          - B_0x1: an IBI request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed (value: 1)
     */
        /** @brief an IBI request from target x is to be NACKed */
    constexpr std::uint32_t I3C_DEVR3_IBIACK_B_0x0 = 0;
        /** @brief an IBI request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed */
    constexpr std::uint32_t I3C_DEVR3_IBIACK_B_0x1 = 1;

    /** @brief controller-role request acknowledge (when the I3C is acting as controller) When the I3C is acting as controller, this bit is written by software to define the acknowledge policy to be applied on the I3C bus on the reception of a controller-role request from target x: After the NACK, the message continues as initially programmed (the target is aware of the NACK and can emit another controller-role request later on) - The field DIS is asserted by hardware to protect DA[6:0] from being modified by software meanwhile the hardware can store internally the current DA[6:0] into the kernel clock domain. - After the ACK, the message continues as initially programmed. The software is notified by the controller-role request flag (i.e. I3C_EVR.CRF=1) and/or the corresponding interrupt if enabled; For effectively granting the controller-role to the requesting secondary controller, software should issue a GETACCCR (formerly known as GETACCMST), followed by a STOP. - Independently of CRACK configuration for this or other devices, further controller-role request(s) are NACKed until controller-role request flag (i.e. I3C_EVR.CRF) and IBI flag (i.e. I3C_EVR.IBIF) are both cleared. */
    using I3C_DEVR3_CRACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a controller-role request from target x is to be NACKed (value: 0)
     *          - B_0x1: a controller-role request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed (value: 1)
     */
        /** @brief a controller-role request from target x is to be NACKed */
    constexpr std::uint32_t I3C_DEVR3_CRACK_B_0x0 = 0;
        /** @brief a controller-role request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed */
    constexpr std::uint32_t I3C_DEVR3_CRACK_B_0x1 = 1;

    /** @brief IBI data enable (when the I3C is acting as controller) When the I3C is acting as controller, this bit should be written by software to store the BCR[2] bit as received from the target x during broadcast ENTDAA or direct GETBCR CCC via the received I3C_RDR. Writing to this field has no impact when the read field I3C_DEVRx.DIS=1. */
    using I3C_DEVR3_IBIDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the acknowledged IBI from target x (value: 0)
     *          - B_0x1: the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x (value: 1)
     */
        /** @brief no data byte follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR3_IBIDEN_B_0x0 = 0;
        /** @brief the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR3_IBIDEN_B_0x1 = 1;

    /** @brief suspend/stop I3C transfer on received IBI (when the I3C is acting as controller) When the I3C is acting as controller, this bit is used to receive an IBI from target x with pending read notification feature (i.e. with received MDB[7:5]=3'b101). If this bit is set, when an IBI is received (i.e. I3C_EVR.IBIF=1), a Stop is emitted on the I3C bus and the C-FIFO is automatically flushed by hardware; to avoid a next private read communication issue if a previous private read message to the target x was stored in the C-FIFO. */
    using I3C_DEVR3_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C transfer is not stopped and C-FIFO is not flushed (value: 0)
     *          - B_0x1: I3C transfer is stopped and C-FIFO is flushed on a received IBI request from target x (value: 1)
     */
        /** @brief I3C transfer is not stopped and C-FIFO is not flushed */
    constexpr std::uint32_t I3C_DEVR3_SUSP_B_0x0 = 0;
        /** @brief I3C transfer is stopped and C-FIFO is flushed on a received IBI request from target x */
    constexpr std::uint32_t I3C_DEVR3_SUSP_B_0x1 = 1;

    /** @brief DA[6:0] write disabled (when the I3C is acting as controller) When the I3C is acting as controller, once that software set IBIACK=1 or CRACK=1, this read bit is set by hardware (i.e. DIS=1) to lock the configured DA[6:0] and IBIDEN values. Then, to be able to next modify DA[6:0] or IBIDEN, the software must wait for this field DIS to be de-asserted by hardware (i.e. polling on DIS=0) before modifying these two assigned values to the target x. Indeed, the target may be requesting an IBI or a controller-role meanwhile the controller intends to modify DA[6:0] or IBIDEN. */
    using I3C_DEVR3_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write to I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is allowed (value: 0)
     *          - B_0x1: write I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is disabled/locked (value: 1)
     */
        /** @brief write to I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is allowed */
    constexpr std::uint32_t I3C_DEVR3_DIS_B_0x0 = 0;
        /** @brief write I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is disabled/locked */
    constexpr std::uint32_t I3C_DEVR3_DIS_B_0x1 = 1;

    /** @brief I3C device 4 characteristics register */
    using I3C_DEVR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief assigned I3C dynamic address to target x (when the I3C is acting as controller) When the I3C is acting as controller, this field should be written by software to store the 7-bit dynamic address that the controller sends via a broadcast ENTDAA or a direct SETNEWDA CCC which has been acknowledged by the target x. Writing to this field has no impact when the read field I3C_DEVRx.DIS=1. */
    using I3C_DEVR4_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI request acknowledge (when the I3C is acting as controller) When the I3C is acting as controller, this bit is written by software to define the acknowledge policy to be applied on the I3C bus on the reception of a IBI request from target x: - After the NACK, the message continues as initially programmed (the target is aware of the NACK and can emit another IBI request later on) - The field DIS is asserted by hardware to protect DA[6:0] from being modified by software meanwhile the hardware can store internally the current DA[6:0] into the kernel clock domain. - After the ACK, the controller logs the IBI payload data, if any, depending on I3C_DEVRx.IBIDEN. - The software is notified by the IBI flag (i.e. I3C_EVR.IBIF=1) and/or the corresponding interrupt if enabled; - Independently from IBIACK configuration for this or other devices, further IBI request(s) are NACKed until IBI request flag (i.e. I3C_EVR.IBIF) and controller-role request flag (i.e. I3C_EVR.CRF) are both cleared. */
    using I3C_DEVR4_IBIACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an IBI request from target x is to be NACKed (value: 0)
     *          - B_0x1: an IBI request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed (value: 1)
     */
        /** @brief an IBI request from target x is to be NACKed */
    constexpr std::uint32_t I3C_DEVR4_IBIACK_B_0x0 = 0;
        /** @brief an IBI request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed */
    constexpr std::uint32_t I3C_DEVR4_IBIACK_B_0x1 = 1;

    /** @brief controller-role request acknowledge (when the I3C is acting as controller) When the I3C is acting as controller, this bit is written by software to define the acknowledge policy to be applied on the I3C bus on the reception of a controller-role request from target x: After the NACK, the message continues as initially programmed (the target is aware of the NACK and can emit another controller-role request later on) - The field DIS is asserted by hardware to protect DA[6:0] from being modified by software meanwhile the hardware can store internally the current DA[6:0] into the kernel clock domain. - After the ACK, the message continues as initially programmed. The software is notified by the controller-role request flag (i.e. I3C_EVR.CRF=1) and/or the corresponding interrupt if enabled; For effectively granting the controller-role to the requesting secondary controller, software should issue a GETACCCR (formerly known as GETACCMST), followed by a STOP. - Independently of CRACK configuration for this or other devices, further controller-role request(s) are NACKed until controller-role request flag (i.e. I3C_EVR.CRF) and IBI flag (i.e. I3C_EVR.IBIF) are both cleared. */
    using I3C_DEVR4_CRACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: a controller-role request from target x is to be NACKed (value: 0)
     *          - B_0x1: a controller-role request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed (value: 1)
     */
        /** @brief a controller-role request from target x is to be NACKed */
    constexpr std::uint32_t I3C_DEVR4_CRACK_B_0x0 = 0;
        /** @brief a controller-role request (with 7-bit dynamic address DA[6:0]) from target x is to be ACKed */
    constexpr std::uint32_t I3C_DEVR4_CRACK_B_0x1 = 1;

    /** @brief IBI data enable (when the I3C is acting as controller) When the I3C is acting as controller, this bit should be written by software to store the BCR[2] bit as received from the target x during broadcast ENTDAA or direct GETBCR CCC via the received I3C_RDR. Writing to this field has no impact when the read field I3C_DEVRx.DIS=1. */
    using I3C_DEVR4_IBIDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data byte follows the acknowledged IBI from target x (value: 0)
     *          - B_0x1: the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x (value: 1)
     */
        /** @brief no data byte follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR4_IBIDEN_B_0x0 = 0;
        /** @brief the mandatory data byte MDB[7:0] follows the acknowledged IBI from target x */
    constexpr std::uint32_t I3C_DEVR4_IBIDEN_B_0x1 = 1;

    /** @brief suspend/stop I3C transfer on received IBI (when the I3C is acting as controller) When the I3C is acting as controller, this bit is used to receive an IBI from target x with pending read notification feature (i.e. with received MDB[7:5]=3'b101). If this bit is set, when an IBI is received (i.e. I3C_EVR.IBIF=1), a Stop is emitted on the I3C bus and the C-FIFO is automatically flushed by hardware; to avoid a next private read communication issue if a previous private read message to the target x was stored in the C-FIFO. */
    using I3C_DEVR4_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C transfer is not stopped and C-FIFO is not flushed (value: 0)
     *          - B_0x1: I3C transfer is stopped and C-FIFO is flushed on a received IBI request from target x (value: 1)
     */
        /** @brief I3C transfer is not stopped and C-FIFO is not flushed */
    constexpr std::uint32_t I3C_DEVR4_SUSP_B_0x0 = 0;
        /** @brief I3C transfer is stopped and C-FIFO is flushed on a received IBI request from target x */
    constexpr std::uint32_t I3C_DEVR4_SUSP_B_0x1 = 1;

    /** @brief DA[6:0] write disabled (when the I3C is acting as controller) When the I3C is acting as controller, once that software set IBIACK=1 or CRACK=1, this read bit is set by hardware (i.e. DIS=1) to lock the configured DA[6:0] and IBIDEN values. Then, to be able to next modify DA[6:0] or IBIDEN, the software must wait for this field DIS to be de-asserted by hardware (i.e. polling on DIS=0) before modifying these two assigned values to the target x. Indeed, the target may be requesting an IBI or a controller-role meanwhile the controller intends to modify DA[6:0] or IBIDEN. */
    using I3C_DEVR4_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write to I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is allowed (value: 0)
     *          - B_0x1: write I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is disabled/locked (value: 1)
     */
        /** @brief write to I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is allowed */
    constexpr std::uint32_t I3C_DEVR4_DIS_B_0x0 = 0;
        /** @brief write I3C_DEVRx.DA[7:0] and to I3C_DEVRx.IBIDEN is disabled/locked */
    constexpr std::uint32_t I3C_DEVR4_DIS_B_0x1 = 1;

    /** @brief I3C maximum read length register */
    using I3C_MAXRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief maximum data read length (when I3C is acting as target) This field is initially written by software when I3C_CFGR.EN=0 and updated by hardware on the reception of SETMRL command (with potentially also updated IBIP[2:0]). Software is notified of a MRL update by the I3C_EVR.MRLUPF and the corresponding interrupt if enabled. This field is used by hardware to return the value on the I3C bus when the target receives a GETMRL CCC. */
    using I3C_MAXRLR_MRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI payload data size, in bytes (when I3C is acting as target) This field is initially written by software when I3C_CFGR.EN=0 to set the number of data bytes to be sent to the controller after an IBI request has been acknowledged.This field may be updated by hardware on the reception of SETMRL command (which potentially also updated IBIP[2:0]). Software is notified of a MRL update by the I3C_EVR.MRLUPF and the corresponding interrupt if enabled. others: same as 100 */
    using I3C_MAXRLR_IBIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: null payload data size (only allowed when IC3_BCR.BCR2=0) (value: 0)
     *          - B_0x1: 1 byte (i.e. mandatory data byte MDB[7:0] (value: 1)
     *          - B_0x2: 2 bytes (including first MDB[7:0]) (value: 2)
     *          - B_0x3: 3 bytes (including first MDB[7:0]) (value: 3)
     *          - B_0x4: 4 bytes (including first MDB[7:0]) (value: 4)
     */
        /** @brief null payload data size (only allowed when IC3_BCR.BCR2=0) */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x0 = 0;
        /** @brief 1 byte (i.e. mandatory data byte MDB[7:0] */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x1 = 1;
        /** @brief 2 bytes (including first MDB[7:0]) */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x2 = 2;
        /** @brief 3 bytes (including first MDB[7:0]) */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x3 = 3;
        /** @brief 4 bytes (including first MDB[7:0]) */
    constexpr std::uint32_t I3C_MAXRLR_IBIP_B_0x4 = 4;

    /** @brief I3C maximum write length register */
    using I3C_MAXWLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief maximum data write length (when I3C is acting as target) This field is initially written by software when I3C_CFGR.EN=0 and updated by hardware on the reception of SETMWL command. Software is notified of a MWL update by the I3C_EVR.MWLUPF and the corresponding interrupt if enabled. This field is used by hardware to return the value on the I3C bus when the target receives a GETMWL CCC. */
    using I3C_MAXWLR_MWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C timing register 0 */
    using I3C_TIMINGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL low duration in I3C push-pull phases, in number of kernel clocks cycles: tSCLL_PP = (SCLL_PP + 1) x tI3CCLK SCLL_PP is used to generate tLOW (I3C) timing. */
    using I3C_TIMINGR0_SCLL_PP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL high duration, used for I3C messages (both in push-pull and open-drain phases), in number of kernel clocks cycles: tSCLH_I3C = (SCLH_I3C + 1) x tI3CCLK SCLH_I3C is used to generate both tHIGH (I3C) and tHIGH_MIXED timings. */
    using I3C_TIMINGR0_SCLH_I3C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL low duration in open-drain phases, used for legacy I2C commands and for I3C open-drain phases (address header phase following a START, not a Repeated START), in number of kernel clocks cycles: tSCLL_OD = (SCLL_OD + 1) x tI3CCLK SCLL_OD is used to generate both tLOW (I2C) and tLOW_OD timings (max. of the two). */
    using I3C_TIMINGR0_SCLL_OD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL high duration, used for legacy I2C commands, in number of kernel clocks cycles: tSCLH_I2C = (SCLH_I2C + 1) x tI3CCLK SCLH_I2C is used to generate tHIGH (I2C) timing. */
    using I3C_TIMINGR0_SCLH_I2C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C timing register 1 */
    using I3C_TIMINGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of kernel clock cycles, that is used whatever I3C is acting as controller or target, to set the following MIPI I3C timings, like bus available condition time: When the I3C is acting as target: for bus available condition time: it must wait for (bus available condition) time to be elapsed after a stop and before issuing a start request for an IBI or a controller-role request (i.e. bus free condition is sustained for at least tAVAL). refer to MIPI timing tAVAL = 1 s. This timing is defined by: tAVAL = (AVAL[7:0] + 2) x tI3CCLK for bus idle condition time: it must wait for (bus idle condition) time to be elapsed after that both SDA and SCL are continuously high and stable before issuing a hot-join event. Refer to MIPI v1.1 timing tIDLE = 200 s . This timing is defined by: tIDLE = (AVAL[7:0] + 2) x 200 x tI3CCLK When the I3C is acting as controller, it can not stall the clock beyond a maximum stall time (i.e. stall the SCL clock low), as follows: on first bit of assigned address during dynamic address assignment: it can not stall the clock beyond the MIPI timing tSTALLDAA = 15 ms. This timing is defined by: tSTALLDAA = (AVAL[7:0] + 1) x 15000 x tI3CCLK on ACK/NACK phase of I3C/I2C transfer, on parity bit of write data transfer, on transition bit of I3C read transfer: it can not stall the clock beyond the MIPI timing tSTALL = 100 s. This timing is defined by: tSTALL = (AVAL[7:0] + 1) x 100 x tI3CCLK Whatever the I3C is acting as controller or as (controller-capable) target, during a controller-role hand-off procedure: The new controller must wait for a time (refer to MIPI timing tNEWCRLock) before pulling SDA low (i.e. issuing a start). And the active controller must wait for the same time while monitoring new controller and before testing the new controller by pulling SDA low. This time to wait is dependent on the defined I3C_TIMINGR1.ANSCR[1:0], as follows: If ASNCR[1:0]=00: tNEWCRLock = (AVAL[7:0] + 1) x tI3CCLK If ASNCR[1:0]=01: tNEWCRLock = (AVAL[7:0] + 1) x 100 x tI3CCLK If ASNCR[1:0]=10: tNEWCRLock = (AVAL[7:0] + 1) x 2000 x tI3CCLK If ASNCR[1:0]=11: tNEWCRLock = (AVAL[7:0] + 1) x 50000 x tI3CCLK */
    using I3C_TIMINGR1_AVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief activity state of the new controller (when I3C is acting as active- controller) This field indicates the time to wait before being accessed as new target, refer to the other field AVAL[7:0]. This field can be modified only when the I3C is acting as controller. */
    using I3C_TIMINGR1_ASNCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of kernel clocks cycles that is used to set some MIPI timings like bus free condition time (when the I3C is acting as controller) When the I3C is acting as controller: for I3C start timing: it must wait for (bus free condition) time to be elapsed after a stop and before a start, refer to MIPI timings (I3C) tCAS and (I2C) tBUF. These timings are defined by: tBUF= tCAS = [ (FREE[6:0] + 1) x 2 (0,5 + SDA_HD)] x tI3CCLK Note: for pure I3C bus: tCASmin= 38,4 ns. Note: for pure I3C bus: tCASmax=1s, 100s, 2ms, 50ms for respectively ENTAS0,1,2, and 3. Note: for mixed bus with I2C fm+ device: tBUFmin = 0,5 s. Note: for mixed bus with I2C fm device: tBUFmin = 1,3 s. for I3C repeated start timing: it must wait for time to be elapsed after a repeated start (i.e. SDA is de-asserted) and before driving SCL low, refer to. MIPI timing tCASr. This timing is defined by: tCASr = [ (FREE[6:0] + 1) x 2 (0,5 + SDA_HD)] x tI3CCLK for I3C stop timing: it must wait for time to be elapsed after that the SCL clock is driven high and before the stop condition (i.e. SDA is asserted). This timing is defined by: tCBP = (FREE[6:0] + 1) x tI3CCLK for I3C repeated start timing (T-bit when controller ends read with repeated start followed by stop): it must wait for time to be elapsed after that the SCL clock is driven high and before the repeated start condition (i.e. SDA is de-asserted). This timing is defined by: tCBSr = (FREE[6:0] + 1) x tI3CCLK */
    using I3C_TIMINGR1_FREE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDA hold time (when the I3C is acting as controller), in number of kernel clocks cycles (refer to MIPI timing SDA hold time in push-pull tHD_PP): */
    using I3C_TIMINGR1_SDA_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDA hold time = 0,5 x tI3CCLK (value: 0)
     *          - B_0x1: SDA hold time = 1,5 x tI3CCLK (value: 1)
     */
        /** @brief SDA hold time = 0,5 x tI3CCLK */
    constexpr std::uint32_t I3C_TIMINGR1_SDA_HD_B_0x0 = 0;
        /** @brief SDA hold time = 1,5 x tI3CCLK */
    constexpr std::uint32_t I3C_TIMINGR1_SDA_HD_B_0x1 = 1;

    /** @brief I3C timing register 2 */
    using I3C_TIMINGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controller clock stall on T-bit phase of Data enable The SCL is stalled during STALL x tSCLL_PP in the T-bit phase (before 9th bit). This allows the target to prepare data to be sent. */
    using I3C_TIMINGR2_STALLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief controller clock stall on PAR phase of Data enable The SCL is stalled during STALL x tSCLL_PP in the T-bit phase (before 9th bit). This allows the target to read received data. */
    using I3C_TIMINGR2_STALLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief controller clock stall on PAR phase of CCC enable The SCL is stalled during STALL x tSCLL_PP in the T-bit phase of common command code (before 9th bit). This allows the target to decode the command. */
    using I3C_TIMINGR2_STALLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief controller clock stall enable on ACK phase The SCL is stalled (during tSCLL_STALLas defined by STALL) in the address ACK/NACK phase (before 9th bit). This allows the target to prepare data or the controller to respond to target interrupt. */
    using I3C_TIMINGR2_STALLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no stall (value: 0)
     *          - B_0x1: stall enabled (value: 1)
     */
        /** @brief no stall */
    constexpr std::uint32_t I3C_TIMINGR2_STALLA_B_0x0 = 0;
        /** @brief stall enabled */
    constexpr std::uint32_t I3C_TIMINGR2_STALLA_B_0x1 = 1;

    /** @brief controller clock stall time, in number of kernel clock cycles tSCLL_STALL = STALL x tI3CCLK */
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

    /** @brief controller capable */
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
    /** @brief device characteristics ID others: ID to describe the type of the I3C sensor/device Note: The latest MIPI DCR ID assignments are available at: https://www.mipi.org/MIPI_I3C_device_characteristics_register */
    using I3C_DCR_DCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: generic device (for v1.0 devices) (value: 0)
     */
        /** @brief generic device (for v1.0 devices) */
    constexpr std::uint32_t I3C_DCR_DCR_B_0x0 = 0;

    /** @brief I3C get capability register */
    using I3C_GETCAPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBI MDB support for pending read notification This bit is written by software during bus initialization (i.e. I3C_CFGR.EN=0) and indicates the support (or not) of the pending read notification via the IBI MDB[7:0] value. This bit is used to return the GETCAP3 byte in response to the GETCAPS CCC format 1. */
    using I3C_GETCAPR_CAPPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this I3C when acting as target sends an IBI request without a mandatory data byte value indicating a pending read notification (value: 0)
     *          - B_0x1: this I3C when acting as target sends an IBI request with a mandatory data byte value (i.e. a MDB[7:5]=101) indicating a pending read notification (value: 1)
     */
        /** @brief this I3C when acting as target sends an IBI request without a mandatory data byte value indicating a pending read notification */
    constexpr std::uint32_t I3C_GETCAPR_CAPPEND_B_0x0 = 0;
        /** @brief this I3C when acting as target sends an IBI request with a mandatory data byte value (i.e. a MDB[7:5]=101) indicating a pending read notification */
    constexpr std::uint32_t I3C_GETCAPR_CAPPEND_B_0x1 = 1;

    /** @brief I3C controller-role capability register */
    using I3C_CRCAPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delayed controller-role hand-off This bit is written by software during bus initialization (i.e. I3C_CFGR.EN=0) and indicates if this target I3C may need additional time to process a controller-role hand-off requested by the current controller. This bit is used to return the CRCAP2 byte in response to the GETCAPS CCC format 2. */
    using I3C_CRCAPR_CAPDHOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this I3C does not needs additional time to process a controller-role hand-off (value: 0)
     *          - B_0x1: this I3C needs additional time to process a controller-role hand-off (value: 1)
     */
        /** @brief this I3C does not needs additional time to process a controller-role hand-off */
    constexpr std::uint32_t I3C_CRCAPR_CAPDHOFF_B_0x0 = 0;
        /** @brief this I3C needs additional time to process a controller-role hand-off */
    constexpr std::uint32_t I3C_CRCAPR_CAPDHOFF_B_0x1 = 1;

    /** @brief group management support (when acting as controller) This bit is written by software during bus initialization (i.e. I3C_CFGR.EN=0) and indicates if the I3C is able to support group management when it acts as a controller (after controller-role hand-off) via emitted DEFGRPA, RSTGRPA, and SETGRPA CCC. This bit is used to return the CRCAP1 byte in response to the GETCAPS CCC format 2. */
    using I3C_CRCAPR_CAPGRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: this I3C does not support group address capabilities (value: 0)
     *          - B_0x1: this I3C supports group address capabilities (when becoming controller) (value: 1)
     */
        /** @brief this I3C does not support group address capabilities */
    constexpr std::uint32_t I3C_CRCAPR_CAPGRP_B_0x0 = 0;
        /** @brief this I3C supports group address capabilities (when becoming controller) */
    constexpr std::uint32_t I3C_CRCAPR_CAPGRP_B_0x1 = 1;

    /** @brief I3C get capability register */
    using I3C_GETMXDSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief controller hand-off activity state This bit is written by software during bus initialization (i.e. I3C_CFGR.EN=0) and indicates in which initial activity state the (other) current controller should expect the I3C bus after a controller-role hand-off to this controller-capable I3C, when returning the defining byte CRHDLY (0x91) to a GETMXDS CCC. This 2-bit field is used to return the CRHDLY1 byte in response to the GETCAPS CCC format 3, in order to state which is the activity state of this I3C when becoming controller after a controller-role hand-off, and consequently the time the former controller should wait before testing this I3C to be confirmed its ownership. */
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
     *          - B_0x1: format 2: (5 bytes with MaxWr with no defining byte, MaxRd, MaxRdTurn) (value: 1)
     *          - B_0x2: format 2 (5 bytes with MaxWr with no defining byte, MaxRd, and middle byte of MaxRdTurn) (value: 2)
     *          - B_0x3: format 2 (5 bytes with MaxWr with no defining byte, MaxRd, MSB of MaxRdTurn) (value: 3)
     */
        /** @brief format 1 (2 bytes with MaxWr with no defining byte, MaxRd) */
    constexpr std::uint32_t I3C_GETMXDSR_FMT_B_0x0 = 0;
        /** @brief format 2: (5 bytes with MaxWr with no defining byte, MaxRd, MaxRdTurn) */
    constexpr std::uint32_t I3C_GETMXDSR_FMT_B_0x1 = 1;
        /** @brief format 2 (5 bytes with MaxWr with no defining byte, MaxRd, and middle byte of MaxRdTurn) */
    constexpr std::uint32_t I3C_GETMXDSR_FMT_B_0x2 = 2;
        /** @brief format 2 (5 bytes with MaxWr with no defining byte, MaxRd, MSB of MaxRdTurn) */
    constexpr std::uint32_t I3C_GETMXDSR_FMT_B_0x3 = 3;

    /** @brief programmed byte of the 3-byte MaxRdTurn (maximum read turnaround byte) This bit is written by software during bus initialization (i.e. I3C_CFGR.EN=0) and writes the value of the selected byte (via the FMT[1:0] field) of the 3-byte MaxRdTurn which is returned in response to the GETMXDS CCC format 2 to encode the maximum read turnaround time. */
    using I3C_GETMXDSR_RDTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock-to-data turnaround time (tSCO) This bit is written by software during bus initialization (i.e. I3C_CFGR.EN=0) and is used to specify the clock-to-data turnaround time tSCO (vs the value of 12 ns). This bit is used by the hardware in response to the GETMXDS CCC to return the encoded clock-to-data turnaround time via the returned MaxRd[5:3] bits. */
    using I3C_GETMXDSR_TSCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tSCO = 12 ns (value: 0)
     *          - B_0x1: tSCO 12 ns (and refer to the datasheet for more details) (value: 1)
     */
        /** @brief tSCO = 12 ns */
    constexpr std::uint32_t I3C_GETMXDSR_TSCO_B_0x0 = 0;
        /** @brief tSCO 12 ns (and refer to the datasheet for more details) */
    constexpr std::uint32_t I3C_GETMXDSR_TSCO_B_0x1 = 1;

    /** @brief I3C extended provisioned ID register */
    using I3C_EPIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4-bit MIPI Instance ID This field is written by software to set and identify individually each instance of this I3C IP with a specific number on a single I3C bus. This field represents the bits[15:12] of the 48-bit provisioned ID. Note: The bits[11:0] of the provisioned ID may be 0. */
    using I3C_EPIDR_MIPIID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief provisioned ID type selector This field is set as 0 i.e. vendor fixed value. This field represents the bit[32] of the 48-bit provisioned ID. Note: The bits[31:16] of the provisioned ID may be 0. */
    using I3C_EPIDR_IDTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 15-bit MIPI manufacturer ID This read field is the 15-bit STMicroelectronics MIPI ID i.e. 0x0104. This field represents the bits[47:33] of the 48-bit provisioned ID. */
    using I3C_EPIDR_MIPIMID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
