/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB06_FLASH_CTRL_HPP
#define EMBEDDED_PP_STM32WB06_FLASH_CTRL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief 4kb addressable space */
namespace STM32WB06::FLASH_CTRL {

    /** @brief COMMAND register */
    using COMMAND = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Macro commands for flash operations (may require DATA0...DATA3 to be set): - 0x11 : ERASE - 0x22 : MASSERASE - 0x33 : WRITE - 0x55 : MASSREAD - 0xAA : SLEEP - 0xBB : WAKEUP - 0xCC : BURSTWRITE - 0xEE : OTPWRITE - 0xFF : KEYWRITE */
    using COMMAND_COMMAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CONFIG register */
    using CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit to redirect boot area on SRAM0. */
    using CONFIG_REMAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst write Control: - 0 : burst write allowed - 1 : burst write forbidden */
    using CONFIG_DIS_GROUP_WRITE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of wait states to be inserted on Flash read (AHB accesses) */
    using CONFIG_WAIT_STATES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IRQSTAT register */
    using IRQSTAT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command done masked interrupt status. */
    using IRQSTAT_CMDDONE_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command started masked interrupt status. */
    using IRQSTAT_CMDSTART_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command error masked interrupt status. */
    using IRQSTAT_CMDERR_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal command masked interrupt status */
    using IRQSTAT_ILLCMD_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mass read OK masked interrupt status. */
    using IRQSTAT_READOK_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IRQMASK register */
    using IRQMASK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command done mask */
    using IRQMASK_CMDDONEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command started mask. */
    using IRQMASK_CMDSTARTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command error mask. */
    using IRQMASK_CMDERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal command mask. */
    using IRQMASK_ILLCMDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mass read OK mask. */
    using IRQMASK_READOKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IRQRAW register */
    using IRQRAW = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command done raw/unmasked interrupt status. This it is set once the requested command execution is completed. Cleared by writing 1. */
    using IRQRAW_CMDDONE_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command started raw/unmasked interrupt status. This bit is set once the requested command execution has started. */
    using IRQRAW_CMDSTART_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command error raw/unmasked interrupt status */
    using IRQRAW_CMDERR_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal command raw/unmasked interrupt status. */
    using IRQRAW_ILLCMD_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mass read OK raw/unmasked interrupt status */
    using IRQRAW_READOK_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SIZE register */
    using SIZE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum valid address for flash memory: - 00 : 0x0BFFF (192kb) - 01 : 0x0FFFF (256kb) - 10 : 0x17FFF (384kb) - 11 : 0x1FFFF (512kb) */
    using SIZE_FLASH_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAM memory size selection: - 00 : 32kb - 01 : 32kb - 10 : 48kb - 11 : 64kb */
    using SIZE_RAM_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory protection (0: no key present, 1: key present) */
    using SIZE_FLASH_SECURE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash+SWD protection: 0: No SWD protection (refer to FLASH_SECURE) 1: Flash and SWD protected */
    using SIZE_SWD_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRESS register */
    using ADDRESS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash column address offset to be used with some COMMAND */
    using ADDRESS_YADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash row address offset to be used with some COMMAND */
    using ADDRESS_XADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LFSRVAL register */
    using LFSRVAL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash read data CRC signature */
    using LFSRVAL_LFSRVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAGEPROT0 register */
    using PAGEPROT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief First segment definition. */
    using PAGEPROT0_SEG0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second segment definition. See SEG0 description for details on SEG1[31:16] content */
    using PAGEPROT0_SEG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAGEPROT1 register */
    using PAGEPROT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Third segment definition. See PAGEPROT0 SEG0 description for details on SEG2[15:0] content */
    using PAGEPROT1_SEG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fourth segment definition. See PAGEPROT0 SEG0 description for details on SEG3[15:0] content. */
    using PAGEPROT1_SEG3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATA0 register */
    using DATA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Value to be used as DATA for any COMMAND of type WRITE and compare value for MASSREAD */
    using DATA0_DATA0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATA1 register */
    using DATA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Value to be used as DATA for any COMMAND of type WRITE */
    using DATA1_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATA2 register */
    using DATA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Value to be used as DATA for any COMMAND of type WRITE */
    using DATA2_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATA3 register */
    using DATA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Value to be used as DATA for any COMMAND of type WRITE */
    using DATA3_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
