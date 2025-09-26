/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H755_CM4_AXI_HPP
#define EMBEDDED_PP_STM32H755_CM4_AXI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief AXI interconnect registers */
namespace STM32H755_CM4::AXI {

    /** @brief AXI interconnect - peripheral ID4 register */
    using AXI_PERIPH_ID_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 continuation code */
    using AXI_PERIPH_ID_4_JEP106CON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Register file size */
    using AXI_PERIPH_ID_4_KCOUNT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - peripheral ID0 register */
    using AXI_PERIPH_ID_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral part number bits 0 to 7 */
    using AXI_PERIPH_ID_0_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - peripheral ID1 register */
    using AXI_PERIPH_ID_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral part number bits 8 to 11 */
    using AXI_PERIPH_ID_1_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 identity bits 0 to 3 */
    using AXI_PERIPH_ID_1_JEP106I = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - peripheral ID2 register */
    using AXI_PERIPH_ID_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 Identity bits 4 to 6 */
    using AXI_PERIPH_ID_2_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 code flag */
    using AXI_PERIPH_ID_2_JEDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral revision number */
    using AXI_PERIPH_ID_2_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - peripheral ID3 register */
    using AXI_PERIPH_ID_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Customer modification */
    using AXI_PERIPH_ID_3_CUST_MOD_NUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Customer version */
    using AXI_PERIPH_ID_3_REV_AND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - component ID0 register */
    using AXI_COMP_ID_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble bits 0 to 7 */
    using AXI_COMP_ID_0_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - component ID1 register */
    using AXI_COMP_ID_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble bits 8 to 11 */
    using AXI_COMP_ID_1_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component class */
    using AXI_COMP_ID_1_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - component ID2 register */
    using AXI_COMP_ID_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble bits 12 to 19 */
    using AXI_COMP_ID_2_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - component ID3 register */
    using AXI_COMP_ID_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble bits 20 to 27 */
    using AXI_COMP_ID_3_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix issuing functionality register */
    using AXI_TARG1_FN_MOD_ISS_BM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief READ_ISS_OVERRIDE */
    using AXI_TARG1_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch matrix write issuing override for target */
    using AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix issuing functionality register */
    using AXI_TARG2_FN_MOD_ISS_BM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief READ_ISS_OVERRIDE */
    using AXI_TARG2_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch matrix write issuing override for target */
    using AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix issuing functionality register */
    using AXI_TARG3_FN_MOD_ISS_BM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief READ_ISS_OVERRIDE */
    using AXI_TARG3_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch matrix write issuing override for target */
    using AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix issuing functionality register */
    using AXI_TARG4_FN_MOD_ISS_BM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief READ_ISS_OVERRIDE */
    using AXI_TARG4_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch matrix write issuing override for target */
    using AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix issuing functionality register */
    using AXI_TARG5_FN_MOD_ISS_BM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief READ_ISS_OVERRIDE */
    using AXI_TARG5_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch matrix write issuing override for target */
    using AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix issuing functionality register */
    using AXI_TARG6_FN_MOD_ISS_BM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief READ_ISS_OVERRIDE */
    using AXI_TARG6_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch matrix write issuing override for target */
    using AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix issuing functionality register */
    using AXI_TARG7_FN_MOD_ISS_BM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x800C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief READ_ISS_OVERRIDE */
    using AXI_TARG7_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch matrix write issuing override for target */
    using AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix functionality 2 register */
    using AXI_TARG1_FN_MOD2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable packing of beats to match the output data width */
    using AXI_TARG1_FN_MOD2_BYPASS_MERGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix functionality 2 register */
    using AXI_TARG2_FN_MOD2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable packing of beats to match the output data width */
    using AXI_TARG2_FN_MOD2_BYPASS_MERGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x bus matrix functionality 2 register */
    using AXI_TARG7_FN_MOD2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable packing of beats to match the output data width */
    using AXI_TARG7_FN_MOD2_BYPASS_MERGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x long burst functionality modification */
    using AXI_TARG1_FN_MOD_LB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x202C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controls burst breaking of long bursts */
    using AXI_TARG1_FN_MOD_LB_FN_MOD_LB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x long burst functionality modification */
    using AXI_TARG2_FN_MOD_LB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x302C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controls burst breaking of long bursts */
    using AXI_TARG2_FN_MOD_LB_FN_MOD_LB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x long burst functionality modification */
    using AXI_TARG1_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override AMIB read issuing capability */
    using AXI_TARG1_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override AMIB write issuing capability */
    using AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x long burst functionality modification */
    using AXI_TARG2_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override AMIB read issuing capability */
    using AXI_TARG2_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override AMIB write issuing capability */
    using AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - TARG x long burst functionality modification */
    using AXI_TARG7_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override AMIB read issuing capability */
    using AXI_TARG7_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override AMIB write issuing capability */
    using AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x functionality modification 2 register */
    using AXI_INI1_FN_MOD2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disables alteration of transactions by the up-sizer unless required by the protocol */
    using AXI_INI1_FN_MOD2_BYPASS_MERGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x functionality modification 2 register */
    using AXI_INI3_FN_MOD2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disables alteration of transactions by the up-sizer unless required by the protocol */
    using AXI_INI3_FN_MOD2_BYPASS_MERGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x AHB functionality modification register */
    using AXI_INI1_FN_MOD_AHB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42028, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Converts all AHB-Lite write transactions to a series of single beat AXI */
    using AXI_INI1_FN_MOD_AHB_RD_INC_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Converts all AHB-Lite read transactions to a series of single beat AXI */
    using AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x AHB functionality modification register */
    using AXI_INI3_FN_MOD_AHB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44028, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Converts all AHB-Lite write transactions to a series of single beat AXI */
    using AXI_INI3_FN_MOD_AHB_RD_INC_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Converts all AHB-Lite read transactions to a series of single beat AXI */
    using AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x read QoS register */
    using AXI_INI1_READ_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read channel QoS setting */
    using AXI_INI1_READ_QOS_AR_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x read QoS register */
    using AXI_INI2_READ_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read channel QoS setting */
    using AXI_INI2_READ_QOS_AR_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x read QoS register */
    using AXI_INI3_READ_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read channel QoS setting */
    using AXI_INI3_READ_QOS_AR_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x read QoS register */
    using AXI_INI4_READ_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read channel QoS setting */
    using AXI_INI4_READ_QOS_AR_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x read QoS register */
    using AXI_INI5_READ_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read channel QoS setting */
    using AXI_INI5_READ_QOS_AR_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x read QoS register */
    using AXI_INI6_READ_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read channel QoS setting */
    using AXI_INI6_READ_QOS_AR_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x write QoS register */
    using AXI_INI1_WRITE_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write channel QoS setting */
    using AXI_INI1_WRITE_QOS_AW_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x write QoS register */
    using AXI_INI2_WRITE_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write channel QoS setting */
    using AXI_INI2_WRITE_QOS_AW_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x write QoS register */
    using AXI_INI3_WRITE_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write channel QoS setting */
    using AXI_INI3_WRITE_QOS_AW_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x write QoS register */
    using AXI_INI4_WRITE_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write channel QoS setting */
    using AXI_INI4_WRITE_QOS_AW_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x write QoS register */
    using AXI_INI5_WRITE_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write channel QoS setting */
    using AXI_INI5_WRITE_QOS_AW_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x write QoS register */
    using AXI_INI6_WRITE_QOS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write channel QoS setting */
    using AXI_INI6_WRITE_QOS_AW_QOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x issuing functionality modification register */
    using AXI_INI1_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB read issuing capability */
    using AXI_INI1_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB write issuing capability */
    using AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x issuing functionality modification register */
    using AXI_INI2_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB read issuing capability */
    using AXI_INI2_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB write issuing capability */
    using AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x issuing functionality modification register */
    using AXI_INI3_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB read issuing capability */
    using AXI_INI3_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB write issuing capability */
    using AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x issuing functionality modification register */
    using AXI_INI4_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB read issuing capability */
    using AXI_INI4_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB write issuing capability */
    using AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x issuing functionality modification register */
    using AXI_INI5_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB read issuing capability */
    using AXI_INI5_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB write issuing capability */
    using AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect - INI x issuing functionality modification register */
    using AXI_INI6_FN_MOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB read issuing capability */
    using AXI_INI6_FN_MOD_READ_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Override ASIB write issuing capability */
    using AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
