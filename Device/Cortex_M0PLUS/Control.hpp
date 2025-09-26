/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M0PLUS_CONTROL_HPP
#define EMBEDDED_PP_CORTEX_M0PLUS_CONTROL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System Control registers */
namespace Cortex_M0PLUS::Control {

    /** @brief ICSR */
    using ICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief VECTACTIVE */
    using ICSR_VECTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AIRCR */
    using AIRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTKEY */
    using AIRCR_VECTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief CCR */
    using CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STKALIGN */
    using CCR_STKALIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNALIGN_TRP */
    using CCR_UNALIGN_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR2 */
    using SHPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_11 */
    using SHPR2_PRI_11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR3 */
    using SHPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_15 */
    using SHPR3_PRI_15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_14 */
    using SHPR3_PRI_14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHCSR */
    using SHCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief VTOR */
    using VTOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TBLOFF */
    using VTOR_TBLOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
