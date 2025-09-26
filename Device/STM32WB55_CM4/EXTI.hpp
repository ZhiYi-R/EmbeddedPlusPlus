/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB55_CM4_EXTI_HPP
#define EMBEDDED_PP_STM32WB55_CM4_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief External interrupt/event controller */
namespace STM32WB55_CM4::EXTI {

    /** @brief rising trigger selection register */
    using RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_RT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 22, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_RT_31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger selection register */
    using FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input */
    using FTSR1_FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 22, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input */
    using FTSR1_FT_31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software interrupt event register */
    using SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event */
    using SWIER1_SWI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 22, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event */
    using SWIER1_SWI_31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI pending register */
    using PR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs Pending bit */
    using PR1_PIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 22, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs Pending bit */
    using PR1_PIF_31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger selection register */
    using RTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR2_RT33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR2_RT40_41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger selection register */
    using FTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input */
    using FTSR2_FT33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input */
    using FTSR2_FT40_41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software interrupt event register */
    using SWIER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event */
    using SWIER2_SWI33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event */
    using SWIER2_SWI40_41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending register */
    using PR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+32 Pending bit. */
    using PR2_PIF33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+32 Pending bit. */
    using PR2_PIF40_41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with interrupt mask register */
    using C1IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) wakeup with interrupt Mask on Event input */
    using C1IMR1_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with interrupt mask register */
    using C2IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) wakeup with interrupt Mask on Event input */
    using C2IMR1_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with event mask register */
    using C1EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C1EMR1_EM0_15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C1EMR1_EM17_21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with event mask register */
    using C2EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C2EMR1_EM0_15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C2EMR1_EM17_21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with interrupt mask register */
    using C1IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm Wakeup with interrupt Mask on Event input */
    using C1IMR2_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 17, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with interrupt mask register */
    using C2IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm Wakeup with interrupt Mask on Event input */
    using C2IMR2_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 17, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with event mask register */
    using C1EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C1EMR2_EM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with event mask register */
    using C2EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C2EMR2_EM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware configuration registers */
    using HWCFGR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration CPU event generation */
    using HWCFGR5_CPUEVENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware configuration registers */
    using HWCFGR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration CPU event generation */
    using HWCFGR6_CPUEVENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI Hardware configuration registers */
    using HWCFGR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration CPU event generation */
    using HWCFGR7_CPUEVENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware configuration registers */
    using HWCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration event trigger type */
    using HWCFGR2_EVENT_TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware configuration registers */
    using HWCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration event trigger type */
    using HWCFGR3_EVENT_TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware configuration registers */
    using HWCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration event trigger type */
    using HWCFGR4_EVENT_TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware configuration register 1 */
    using HWCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration number of event */
    using HWCFGR1_NBEVENTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration number of CPUs */
    using HWCFGR1_NBCPUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW configuration of CPU(m) event output enable */
    using HWCFGR1_CPUEVTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI IP Version register */
    using VERR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minor Revision number */
    using VERR_MINREV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Major Revision number */
    using VERR_MAJREV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Identification register */
    using IPIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP Identification */
    using IPIDR_IPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size ID register */
    using SIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size Identification */
    using SIDR_SID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
