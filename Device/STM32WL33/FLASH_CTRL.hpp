/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_FLASH_CTRL_HPP
#define EMBEDDED_PP_STM32WL33_FLASH_CTRL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief 4kb addressable space */
namespace STM32WL33::FLASH_CTRL {

    /** @brief COMMAND register */
    using COMMAND = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Macro commands for flash operations (may require DATA0...DATA3 to be set): - 0x11 : ERASE - 0x22 : MASSERASE - 0x33 : WRITE - 0x55 : MASSREAD - 0xAA : SLEEP - 0xBB : WAKEUP - 0xCC : BURSTWRITE - 0xEE : OTPWRITE - 0xFF : KEYWRITE */
    using COMMAND_COMMAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CONFIG register */
    using CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU access routing (it supersedes PREMAP configuration): - 0 : FLASH memory addressed - 1 : SRAM0 memory addressed */
    using CONFIG_REMAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst write Control: - 0 : burst write allowed - 1 : burst write forbidden */
    using CONFIG_DIS_GROUP_WRITE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add latency to flash read opeations: - 00 : no latency - 01 : 1 clock cycle latency - 10 : 2 clock cycles latency - 11 : 3 clock cycles latency */
    using CONFIG_WAIT_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory power-down mode enable in SLEEP mode This bit allows to have the Flash memory in power-down mode or in idle mode when the device is in Sleep mode. - 0: When the device is in Sleep mode, the NVM is in Idle mode. - 1: When the device is in Sleep mode, the NVM is in power-down mode. */
    using CONFIG_SLEEP_SM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IRQSTAT register */
    using IRQSTAT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: clear, 0: inactive) CMDDONE_MIS flag */
    using IRQSTAT_CMDDONE_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: clear, 0: inactive) CMDSTART_MIS flag */
    using IRQSTAT_CMDSTART_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: clear, 0: inactive) CMDBUSYERR_MIS flag */
    using IRQSTAT_CMDBUSYERR_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: clear, 0: inactive) ILLCMD_MIS flag */
    using IRQSTAT_ILLCMD_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: clear, 0: inactive) READOK_MIS flag */
    using IRQSTAT_READOK_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: clear, 0: inactive) FNREADY_MIS flag */
    using IRQSTAT_FNREADY_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IRQMASK register */
    using IRQMASK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: mask, 0: inactive) CMDDONE_MIS mask */
    using IRQMASK_CMDDONEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: mask, 0: inactive) CMDSTART_MIS mask */
    using IRQMASK_CMDSTARTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: mask, 0: inactive) CMDBUSYERR_MIS mask */
    using IRQMASK_CMDBUSYERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: mask, 0: inactive) ILLCMD_MIS mask */
    using IRQMASK_ILLCMDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: mask, 0: inactive) READOK_MIS mask */
    using IRQMASK_READOKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: mask, 0: inactive) FNREADY_MIS mask */
    using IRQMASK_FNREADYM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IRQRAW register */
    using IRQRAW = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: active, 0: inactive) COMMAND sequence ended */
    using IRQRAW_CMDDONE_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: active, 0: inactive) COMMAND sequence started */
    using IRQRAW_CMDSTART_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: active, 0: inactive) COMMAND issued while flash busy */
    using IRQRAW_CMDBUSYERR_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: active, 0: inactive) Illegal command issued */
    using IRQRAW_ILLCMD_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: active, 0: inactive) READ COMMAND completed successfully */
    using IRQRAW_READOK_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (1: active, 0: inactive) COMMAND issued while flash in sleep-mode (SLM=1) */
    using IRQRAW_CMDSLEEPERR_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SIZE register */
    using SIZE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum valid address for flash memory: - 00 : 0x03FFF (64kb) - 01 : 0x07FFF (128kb) - 10 : 0x0BFFF (192kb) - 11 : 0x0FFFF (256kb) */
    using SIZE_FLASH_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 17, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAM memory size selection: - 0 : 16kb - 1 : 32kb */
    using SIZE_RAM_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory protection (0: no key present, 1: key present) */
    using SIZE_FLASH_SECURE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash+JTAG protection (0: no JTAG protection - see FLASH_SECURE, 1: Flash and JTAG protected) */
    using SIZE_JTAG_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Package selection: - 0- : CSP - 10 : 32pins - 11 : 48pins */
    using SIZE_PACKAGE_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief First segment, 7-bit page protection size (number of pages to protect in segment, first page included) */
    using PAGEPROT0_SEGSIZE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief First segment, 7-bit page protection offset (first page number in protected segment) */
    using PAGEPROT0_SEGOFFSET0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second segment, 7-bit page protection size (number of pages to protect in segment, first page included) */
    using PAGEPROT0_SEGSIZE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second segment, 7-bit page protection offset (first page number in protected segment) */
    using PAGEPROT0_SEGOFFSET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAGEPROT1 register */
    using PAGEPROT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Third segment, 7-bit page protection size (number of pages to protect in segment, first page included) */
    using PAGEPROT1_SEGSIZE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Third segment, 7-bit page protection offset (first page number in protected segment) */
    using PAGEPROT1_SEGOFFSET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fourth segment, 7-bit page protection size (number of pages to protect in segment, first page included) */
    using PAGEPROT1_SEGSIZE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fourth segment, 7-bit page protection offset (first page number in protected segment) */
    using PAGEPROT1_SEGOFFSET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief UNLOCK012 register */
    using UNLOCK012 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (NOT TO BE DOCUMENTED) Remove read-write protection from IFR0, IFR1, IFR2 sectors */
    using UNLOCK012_UNLOCK012 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNLOCK3 register */
    using UNLOCK3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (NOT TO BE DOCUMENTED) Remove read-write protection from IFR3 sector */
    using UNLOCK3_UNLOCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
