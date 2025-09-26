/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M3_CONTROL_HPP
#define EMBEDDED_PP_CORTEX_M3_CONTROL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System Control registers */
namespace Cortex_M3::Control {

    /** @brief ACTLR */
    using ACTLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISFOLD */
    using ACTLR_DISFOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Enabled: No description (value: 0)
     *          - Disabled: No description (value: 1)
     */
        /** @brief Enabled value */
    constexpr std::uint32_t ACTLR_DISFOLD_Enabled = 0;
        /** @brief Disabled value */
    constexpr std::uint32_t ACTLR_DISFOLD_Disabled = 1;

    /** @brief DISDEFWBUF */
    using ACTLR_DISDEFWBUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Enabled: No description (value: 0)
     *          - Disabled: No description (value: 1)
     */
        /** @brief Enabled value */
    constexpr std::uint32_t ACTLR_DISDEFWBUF_Enabled = 0;
        /** @brief Disabled value */
    constexpr std::uint32_t ACTLR_DISDEFWBUF_Disabled = 1;

    /** @brief DISMCYCINT */
    using ACTLR_DISMCYCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Enabled: No description (value: 0)
     *          - Disabled: No description (value: 1)
     */
        /** @brief Enabled value */
    constexpr std::uint32_t ACTLR_DISMCYCINT_Enabled = 0;
        /** @brief Disabled value */
    constexpr std::uint32_t ACTLR_DISMCYCINT_Disabled = 1;

    /** @brief ICSR */
    using ICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMIPENDSET */
    using ICSR_NMIPENDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Do_not_activate: No description (value: 0)
     *          - Activate_NMI_exception: No description (value: 1)
     */
        /** @brief Do_not_activate value */
    constexpr std::uint32_t ICSR_NMIPENDSET_Do_not_activate = 0;
        /** @brief Activate_NMI_exception value */
    constexpr std::uint32_t ICSR_NMIPENDSET_Activate_NMI_exception = 1;

    /** @brief PENDSVSET */
    using ICSR_PENDSVSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Do_not_set: No description (value: 0)
     *          - Set_pending: No description (value: 1)
     */
        /** @brief Do_not_set value */
    constexpr std::uint32_t ICSR_PENDSVSET_Do_not_set = 0;
        /** @brief Set_pending value */
    constexpr std::uint32_t ICSR_PENDSVSET_Set_pending = 1;

    /** @brief PENDSVCLR */
    using ICSR_PENDSVCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Do_not_clear: No description (value: 0)
     *          - Clear_pending: No description (value: 1)
     */
        /** @brief Do_not_clear value */
    constexpr std::uint32_t ICSR_PENDSVCLR_Do_not_clear = 0;
        /** @brief Clear_pending value */
    constexpr std::uint32_t ICSR_PENDSVCLR_Clear_pending = 1;

    /** @brief PENDSTSET */
    using ICSR_PENDSTSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Do_not_set: No description (value: 0)
     *          - Set_pending: No description (value: 1)
     */
        /** @brief Do_not_set value */
    constexpr std::uint32_t ICSR_PENDSTSET_Do_not_set = 0;
        /** @brief Set_pending value */
    constexpr std::uint32_t ICSR_PENDSTSET_Set_pending = 1;

    /** @brief PENDSTCLR */
    using ICSR_PENDSTCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Do_not_clear: No description (value: 0)
     *          - Clear_pending: No description (value: 1)
     */
        /** @brief Do_not_clear value */
    constexpr std::uint32_t ICSR_PENDSTCLR_Do_not_clear = 0;
        /** @brief Clear_pending value */
    constexpr std::uint32_t ICSR_PENDSTCLR_Clear_pending = 1;

    /** @brief ISRPREEMPT */
    using ICSR_ISRPREEMPT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Will_not_service: No description (value: 0)
     *          - Will_service_pending_exception: No description (value: 1)
     */
        /** @brief Will_not_service value */
    constexpr std::uint32_t ICSR_ISRPREEMPT_Will_not_service = 0;
        /** @brief Will_service_pending_exception value */
    constexpr std::uint32_t ICSR_ISRPREEMPT_Will_service_pending_exception = 1;

    /** @brief ISRPENDING */
    using ICSR_ISRPENDING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Interrupt_not_pending: No description (value: 0)
     *          - Interrupt_pending: No description (value: 1)
     */
        /** @brief Interrupt_not_pending value */
    constexpr std::uint32_t ICSR_ISRPENDING_Interrupt_not_pending = 0;
        /** @brief Interrupt_pending value */
    constexpr std::uint32_t ICSR_ISRPENDING_Interrupt_pending = 1;

    /** @brief VECTPENDING */
    using ICSR_VECTPENDING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RETTOBASE */
    using ICSR_RETTOBASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Active_exception: No description (value: 0)
     *          - No_Active_Exception: No description (value: 1)
     */
        /** @brief Active_exception value */
    constexpr std::uint32_t ICSR_RETTOBASE_Active_exception = 0;
        /** @brief No_Active_Exception value */
    constexpr std::uint32_t ICSR_RETTOBASE_No_Active_Exception = 1;

    /** @brief VECTACTIVE */
    using ICSR_VECTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR */
    using VTOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TBLOFF */
    using VTOR_TBLOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TBLBASE */
    using VTOR_TBLBASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - CODE: No description (value: 0)
     *          - SRAM: No description (value: 1)
     */
        /** @brief CODE value */
    constexpr std::uint32_t VTOR_TBLBASE_CODE = 0;
        /** @brief SRAM value */
    constexpr std::uint32_t VTOR_TBLBASE_SRAM = 1;

    /** @brief DEMCR */
    using DEMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MON_EN */
    using DEMCR_MON_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MON_PEND */
    using DEMCR_MON_PEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AIRCR */
    using AIRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTKEY */
    using AIRCR_VECTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNKNOWN */
    using AIRCR_VECTKEYSTAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENDIANNESS */
    using AIRCR_ENDIANNESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Little_endian: No description (value: 0)
     *          - Big_endian: No description (value: 1)
     */
        /** @brief Little_endian value */
    constexpr std::uint32_t AIRCR_ENDIANNESS_Little_endian = 0;
        /** @brief Big_endian value */
    constexpr std::uint32_t AIRCR_ENDIANNESS_Big_endian = 1;

    /** @brief PRIGROUP */
    using AIRCR_PRIGROUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSRESETREQ */
    using AIRCR_SYSRESETREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Do_not_request_reset: No description (value: 0)
     *          - Request_reset: No description (value: 1)
     */
        /** @brief Do_not_request_reset value */
    constexpr std::uint32_t AIRCR_SYSRESETREQ_Do_not_request_reset = 0;
        /** @brief Request_reset value */
    constexpr std::uint32_t AIRCR_SYSRESETREQ_Request_reset = 1;

    /** @brief VECTCLRACTIVE */
    using AIRCR_VECTCLRACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Do_not_clear: No description (value: 0)
     *          - Clear_state_information: No description (value: 1)
     */
        /** @brief Do_not_clear value */
    constexpr std::uint32_t AIRCR_VECTCLRACTIVE_Do_not_clear = 0;
        /** @brief Clear_state_information value */
    constexpr std::uint32_t AIRCR_VECTCLRACTIVE_Clear_state_information = 1;

    /** @brief SCR */
    using SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEVONPEND */
    using SCR_SEVONPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_wakeup: No description (value: 0)
     *          - Wakeup: No description (value: 1)
     */
        /** @brief Not_wakeup value */
    constexpr std::uint32_t SCR_SEVONPEND_Not_wakeup = 0;
        /** @brief Wakeup value */
    constexpr std::uint32_t SCR_SEVONPEND_Wakeup = 1;

    /** @brief SLEEPDEEP */
    using SCR_SLEEPDEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_deep_sleep: No description (value: 0)
     *          - Deep_sleep: No description (value: 1)
     */
        /** @brief Not_deep_sleep value */
    constexpr std::uint32_t SCR_SLEEPDEEP_Not_deep_sleep = 0;
        /** @brief Deep_sleep value */
    constexpr std::uint32_t SCR_SLEEPDEEP_Deep_sleep = 1;

    /** @brief SLEEPONEXIT */
    using SCR_SLEEPONEXIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Do_not_enter: No description (value: 0)
     *          - Enter: No description (value: 1)
     */
        /** @brief Do_not_enter value */
    constexpr std::uint32_t SCR_SLEEPONEXIT_Do_not_enter = 0;
        /** @brief Enter value */
    constexpr std::uint32_t SCR_SLEEPONEXIT_Enter = 1;

    /** @brief CCR */
    using CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STKALIGN */
    using CCR_STKALIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _4_Byte: No description (value: 0)
     *          - _8_Byte: No description (value: 1)
     */
        /** @brief _4_Byte value */
    constexpr std::uint32_t CCR_STKALIGN__4_Byte = 0;
        /** @brief _8_Byte value */
    constexpr std::uint32_t CCR_STKALIGN__8_Byte = 1;

    /** @brief BFHFNMIGN */
    using CCR_BFHFNMIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Fault: No description (value: 0)
     *          - Ignore: No description (value: 1)
     */
        /** @brief Fault value */
    constexpr std::uint32_t CCR_BFHFNMIGN_Fault = 0;
        /** @brief Ignore value */
    constexpr std::uint32_t CCR_BFHFNMIGN_Ignore = 1;

    /** @brief DIV_0_TRP */
    using CCR_DIV_0_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t CCR_DIV_0_TRP_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t CCR_DIV_0_TRP_Enabled = 1;

    /** @brief UNALIGN_TRP */
    using CCR_UNALIGN_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t CCR_UNALIGN_TRP_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t CCR_UNALIGN_TRP_Enabled = 1;

    /** @brief USERSETMPEND */
    using CCR_USERSETMPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t CCR_USERSETMPEND_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t CCR_USERSETMPEND_Enabled = 1;

    /** @brief NONBASETHRDENA */
    using CCR_NONBASETHRDENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t CCR_NONBASETHRDENA_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t CCR_NONBASETHRDENA_Enabled = 1;

    /** @brief SHPR1 */
    using SHPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_7 */
    using SHPR1_PRI_7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_6 */
    using SHPR1_PRI_6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_5 */
    using SHPR1_PRI_5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_4 */
    using SHPR1_PRI_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR2 */
    using SHPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_11 */
    using SHPR2_PRI_11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_10 */
    using SHPR2_PRI_10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_9 */
    using SHPR2_PRI_9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_8 */
    using SHPR2_PRI_8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR3 */
    using SHPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_15 */
    using SHPR3_PRI_15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_14 */
    using SHPR3_PRI_14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_13 */
    using SHPR3_PRI_13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_12 */
    using SHPR3_PRI_12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHCSR */
    using SHCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USGFAULTENA */
    using SHCSR_USGFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t SHCSR_USGFAULTENA_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t SHCSR_USGFAULTENA_Enabled = 1;

    /** @brief BUSFAULTENA */
    using SHCSR_BUSFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t SHCSR_BUSFAULTENA_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t SHCSR_BUSFAULTENA_Enabled = 1;

    /** @brief MEMFAULTENA */
    using SHCSR_MEMFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t SHCSR_MEMFAULTENA_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t SHCSR_MEMFAULTENA_Enabled = 1;

    /** @brief SVCALLPENDED */
    using SHCSR_SVCALLPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_pending: No description (value: 0)
     *          - Pending: No description (value: 1)
     */
        /** @brief Not_pending value */
    constexpr std::uint32_t SHCSR_SVCALLPENDED_Not_pending = 0;
        /** @brief Pending value */
    constexpr std::uint32_t SHCSR_SVCALLPENDED_Pending = 1;

    /** @brief BUSFAULTPENDED */
    using SHCSR_BUSFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_pending: No description (value: 0)
     *          - Pending: No description (value: 1)
     */
        /** @brief Not_pending value */
    constexpr std::uint32_t SHCSR_BUSFAULTPENDED_Not_pending = 0;
        /** @brief Pending value */
    constexpr std::uint32_t SHCSR_BUSFAULTPENDED_Pending = 1;

    /** @brief MEMFAULTPENDED */
    using SHCSR_MEMFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_pending: No description (value: 0)
     *          - Pending: No description (value: 1)
     */
        /** @brief Not_pending value */
    constexpr std::uint32_t SHCSR_MEMFAULTPENDED_Not_pending = 0;
        /** @brief Pending value */
    constexpr std::uint32_t SHCSR_MEMFAULTPENDED_Pending = 1;

    /** @brief USGFAULTPENDED */
    using SHCSR_USGFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_pending: No description (value: 0)
     *          - Pending: No description (value: 1)
     */
        /** @brief Not_pending value */
    constexpr std::uint32_t SHCSR_USGFAULTPENDED_Not_pending = 0;
        /** @brief Pending value */
    constexpr std::uint32_t SHCSR_USGFAULTPENDED_Pending = 1;

    /** @brief SYSTICKACT */
    using SHCSR_SYSTICKACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_active: No description (value: 0)
     *          - Active: No description (value: 1)
     */
        /** @brief Not_active value */
    constexpr std::uint32_t SHCSR_SYSTICKACT_Not_active = 0;
        /** @brief Active value */
    constexpr std::uint32_t SHCSR_SYSTICKACT_Active = 1;

    /** @brief PENDSVACT */
    using SHCSR_PENDSVACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_active: No description (value: 0)
     *          - Active: No description (value: 1)
     */
        /** @brief Not_active value */
    constexpr std::uint32_t SHCSR_PENDSVACT_Not_active = 0;
        /** @brief Active value */
    constexpr std::uint32_t SHCSR_PENDSVACT_Active = 1;

    /** @brief MONITORACT */
    using SHCSR_MONITORACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_active: No description (value: 0)
     *          - Active: No description (value: 1)
     */
        /** @brief Not_active value */
    constexpr std::uint32_t SHCSR_MONITORACT_Not_active = 0;
        /** @brief Active value */
    constexpr std::uint32_t SHCSR_MONITORACT_Active = 1;

    /** @brief SVCALLACT */
    using SHCSR_SVCALLACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_active: No description (value: 0)
     *          - Active: No description (value: 1)
     */
        /** @brief Not_active value */
    constexpr std::uint32_t SHCSR_SVCALLACT_Not_active = 0;
        /** @brief Active value */
    constexpr std::uint32_t SHCSR_SVCALLACT_Active = 1;

    /** @brief USGFAULTACT */
    using SHCSR_USGFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_active: No description (value: 0)
     *          - Active: No description (value: 1)
     */
        /** @brief Not_active value */
    constexpr std::uint32_t SHCSR_USGFAULTACT_Not_active = 0;
        /** @brief Active value */
    constexpr std::uint32_t SHCSR_USGFAULTACT_Active = 1;

    /** @brief BUSFAULTACT */
    using SHCSR_BUSFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_active: No description (value: 0)
     *          - Active: No description (value: 1)
     */
        /** @brief Not_active value */
    constexpr std::uint32_t SHCSR_BUSFAULTACT_Not_active = 0;
        /** @brief Active value */
    constexpr std::uint32_t SHCSR_BUSFAULTACT_Active = 1;

    /** @brief MEMFAULTACT */
    using SHCSR_MEMFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_active: No description (value: 0)
     *          - Active: No description (value: 1)
     */
        /** @brief Not_active value */
    constexpr std::uint32_t SHCSR_MEMFAULTACT_Not_active = 0;
        /** @brief Active value */
    constexpr std::uint32_t SHCSR_MEMFAULTACT_Active = 1;

    /** @brief CFSR */
    using CFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIVBYZERO */
    using CFSR_DIVBYZERO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_DIVBYZERO_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_DIVBYZERO_Occurred = 1;

    /** @brief UNALIGNED */
    using CFSR_UNALIGNED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_UNALIGNED_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_UNALIGNED_Occurred = 1;

    /** @brief NOCP */
    using CFSR_NOCP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_NOCP_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_NOCP_Occurred = 1;

    /** @brief INVPC */
    using CFSR_INVPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_INVPC_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_INVPC_Occurred = 1;

    /** @brief INVSTATE */
    using CFSR_INVSTATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_INVSTATE_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_INVSTATE_Occurred = 1;

    /** @brief UNDEFINSTR */
    using CFSR_UNDEFINSTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_UNDEFINSTR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_UNDEFINSTR_Occurred = 1;

    /** @brief BFARVALID */
    using CFSR_BFARVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_valid: No description (value: 0)
     *          - Valid: No description (value: 1)
     */
        /** @brief Not_valid value */
    constexpr std::uint32_t CFSR_BFARVALID_Not_valid = 0;
        /** @brief Valid value */
    constexpr std::uint32_t CFSR_BFARVALID_Valid = 1;

    /** @brief LSPERR */
    using CFSR_LSPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_LSPERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_LSPERR_Occurred = 1;

    /** @brief STKERR */
    using CFSR_STKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_STKERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_STKERR_Occurred = 1;

    /** @brief UNSTKERR */
    using CFSR_UNSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_UNSTKERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_UNSTKERR_Occurred = 1;

    /** @brief IMPRECISERR */
    using CFSR_IMPRECISERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_IMPRECISERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_IMPRECISERR_Occurred = 1;

    /** @brief PRECISERR */
    using CFSR_PRECISERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_PRECISERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_PRECISERR_Occurred = 1;

    /** @brief IBUSERR */
    using CFSR_IBUSERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_IBUSERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_IBUSERR_Occurred = 1;

    /** @brief MMARVALID */
    using CFSR_MMARVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_valid: No description (value: 0)
     *          - Valid: No description (value: 1)
     */
        /** @brief Not_valid value */
    constexpr std::uint32_t CFSR_MMARVALID_Not_valid = 0;
        /** @brief Valid value */
    constexpr std::uint32_t CFSR_MMARVALID_Valid = 1;

    /** @brief MLSPERR */
    using CFSR_MLSPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_MLSPERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_MLSPERR_Occurred = 1;

    /** @brief MSTKERR */
    using CFSR_MSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_MSTKERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_MSTKERR_Occurred = 1;

    /** @brief MUNSTKERR */
    using CFSR_MUNSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_MUNSTKERR_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_MUNSTKERR_Occurred = 1;

    /** @brief DACCVIOL */
    using CFSR_DACCVIOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_DACCVIOL_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_DACCVIOL_Occurred = 1;

    /** @brief IACCVIOL */
    using CFSR_IACCVIOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t CFSR_IACCVIOL_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t CFSR_IACCVIOL_Occurred = 1;

    /** @brief HFSR */
    using HFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEBUGEVT */
    using HFSR_DEBUGEVT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t HFSR_DEBUGEVT_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t HFSR_DEBUGEVT_Occurred = 1;

    /** @brief FORCED */
    using HFSR_FORCED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t HFSR_FORCED_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t HFSR_FORCED_Occurred = 1;

    /** @brief VECTTBL */
    using HFSR_VECTTBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_occurred: No description (value: 0)
     *          - Occurred: No description (value: 1)
     */
        /** @brief Not_occurred value */
    constexpr std::uint32_t HFSR_VECTTBL_Not_occurred = 0;
        /** @brief Occurred value */
    constexpr std::uint32_t HFSR_VECTTBL_Occurred = 1;

    /** @brief DFSR */
    using DFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTERNAL */
    using DFSR_EXTERNAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCATCH */
    using DFSR_VCATCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DWTTRAP */
    using DFSR_DWTTRAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKPT */
    using DFSR_BKPT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HALTED */
    using DFSR_HALTED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMFAR */
    using MMFAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFAR */
    using BFAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFSR */
    using AFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPACR */
    using CPACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP11 */
    using CPACR_CP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP11_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP11_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP11_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP11_Full_access = 3;

    /** @brief CP10 */
    using CPACR_CP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP10_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP10_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP10_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP10_Full_access = 3;

    /** @brief CP7 */
    using CPACR_CP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP7_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP7_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP7_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP7_Full_access = 3;

    /** @brief CP6 */
    using CPACR_CP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP6_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP6_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP6_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP6_Full_access = 3;

    /** @brief CP5 */
    using CPACR_CP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP5_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP5_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP5_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP5_Full_access = 3;

    /** @brief CP4 */
    using CPACR_CP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP4_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP4_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP4_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP4_Full_access = 3;

    /** @brief CP3 */
    using CPACR_CP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP3_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP3_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP3_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP3_Full_access = 3;

    /** @brief CP2 */
    using CPACR_CP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP2_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP2_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP2_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP2_Full_access = 3;

    /** @brief CP1 */
    using CPACR_CP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP1_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP1_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP1_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP1_Full_access = 3;

    /** @brief CP0 */
    using CPACR_CP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Access_denied: No description (value: 0)
     *          - Privileged_mode_access_only: No description (value: 1)
     *          - Reserved: No description (value: 2)
     *          - Full_access: No description (value: 3)
     */
        /** @brief Access_denied value */
    constexpr std::uint32_t CPACR_CP0_Access_denied = 0;
        /** @brief Privileged_mode_access_only value */
    constexpr std::uint32_t CPACR_CP0_Privileged_mode_access_only = 1;
        /** @brief Reserved value */
    constexpr std::uint32_t CPACR_CP0_Reserved = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t CPACR_CP0_Full_access = 3;

    /** @brief STIR */
    using STIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INTID */
    using STIR_INTID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
