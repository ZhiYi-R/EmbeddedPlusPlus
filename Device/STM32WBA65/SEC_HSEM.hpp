/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA65_SEC_HSEM_HPP
#define EMBEDDED_PP_STM32WBA65_SEC_HSEM_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief HSEM address block description */
namespace STM32WBA65::SEC_HSEM {

    /** @brief HSEM register semaphore 0 */
    using HSEM_R0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R0_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R0_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R0_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R0_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R0_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R0_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R0_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R0_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R0_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R0_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R0_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 1 */
    using HSEM_R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R1_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R1_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R1_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R1_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R1_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R1_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R1_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R1_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R1_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R1_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R1_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 2 */
    using HSEM_R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R2_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R2_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R2_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R2_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R2_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R2_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R2_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R2_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R2_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R2_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R2_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 3 */
    using HSEM_R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R3_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R3_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R3_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R3_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R3_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R3_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R3_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R3_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R3_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R3_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R3_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 4 */
    using HSEM_R4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R4_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R4_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R4_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R4_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R4_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R4_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R4_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R4_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R4_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R4_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R4_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 5 */
    using HSEM_R5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R5_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R5_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R5_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R5_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R5_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R5_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R5_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R5_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R5_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R5_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R5_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 6 */
    using HSEM_R6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R6_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R6_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R6_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R6_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R6_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R6_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R6_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R6_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R6_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R6_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R6_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 7 */
    using HSEM_R7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R7_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R7_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R7_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R7_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R7_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R7_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R7_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R7_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R7_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R7_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R7_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 8 */
    using HSEM_R8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R8_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R8_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R8_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R8_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R8_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R8_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R8_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R8_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R8_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R8_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R8_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 9 */
    using HSEM_R9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R9_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R9_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R9_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R9_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R9_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R9_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R9_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R9_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R9_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R9_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R9_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 10 */
    using HSEM_R10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R10_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R10_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R10_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R10_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R10_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R10_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R10_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R10_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R10_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R10_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R10_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 11 */
    using HSEM_R11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R11_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R11_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R11_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R11_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R11_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R11_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R11_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R11_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R11_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R11_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R11_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 12 */
    using HSEM_R12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R12_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R12_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R12_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R12_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R12_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R12_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R12_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R12_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R12_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R12_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R12_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 13 */
    using HSEM_R13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R13_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R13_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R13_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R13_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R13_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R13_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R13_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R13_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R13_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R13_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R13_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 14 */
    using HSEM_R14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R14_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R14_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R14_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R14_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R14_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R14_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R14_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R14_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R14_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R14_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R14_LOCK_B_0x1 = 1;

    /** @brief HSEM register semaphore 15 */
    using HSEM_R15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore PROCID */
    using HSEM_R15_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_R15_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure */
    using HSEM_R15_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_R15_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_R15_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_R15_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privilege compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_R15_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privilege compartment. */
    constexpr std::uint32_t HSEM_R15_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_R15_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. (value: 0)
     *          - B_0x1: On write try to lock semaphore, on read semaphore is locked. (value: 1)
     */
        /** @brief On write free semaphore (only when LOCKID and PROCID match), on read semaphore is free. */
    constexpr std::uint32_t HSEM_R15_LOCK_B_0x0 = 0;
        /** @brief On write try to lock semaphore, on read semaphore is locked. */
    constexpr std::uint32_t HSEM_R15_LOCK_B_0x1 = 1;

    /** @brief HSEM read lock register semaphore 0 */
    using HSEM_RLR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR0_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR0_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR0_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR0_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR0_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR0_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR0_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR0_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR0_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 1 */
    using HSEM_RLR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR1_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR1_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR1_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR1_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR1_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR1_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR1_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR1_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR1_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 2 */
    using HSEM_RLR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR2_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR2_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR2_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR2_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR2_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR2_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR2_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR2_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR2_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 3 */
    using HSEM_RLR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR3_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR3_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR3_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR3_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR3_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR3_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR3_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR3_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR3_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 4 */
    using HSEM_RLR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR4_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR4_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR4_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR4_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR4_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR4_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR4_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR4_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR4_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 5 */
    using HSEM_RLR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR5_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR5_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR5_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR5_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR5_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR5_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR5_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR5_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR5_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 6 */
    using HSEM_RLR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR6_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR6_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR6_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR6_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR6_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR6_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR6_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR6_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR6_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 7 */
    using HSEM_RLR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR7_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR7_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR7_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR7_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR7_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR7_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR7_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR7_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR7_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 8 */
    using HSEM_RLR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR8_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR8_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR8_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR8_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR8_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR8_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR8_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR8_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR8_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 9 */
    using HSEM_RLR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR9_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR9_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR9_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR9_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR9_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR9_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR9_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR9_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR9_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 10 */
    using HSEM_RLR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR10_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR10_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR10_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR10_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR10_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR10_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR10_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR10_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR10_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 11 */
    using HSEM_RLR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR11_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR11_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR11_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR11_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR11_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR11_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR11_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR11_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR11_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 12 */
    using HSEM_RLR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR12_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR12_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR12_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR12_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR12_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR12_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR12_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR12_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR12_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 13 */
    using HSEM_RLR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR13_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR13_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR13_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR13_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR13_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR13_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR13_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR13_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR13_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 14 */
    using HSEM_RLR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR14_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR14_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR14_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR14_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR14_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR14_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR14_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR14_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR14_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM read lock register semaphore 15 */
    using HSEM_RLR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore processor ID */
    using HSEM_RLR15_PROCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore LOCKID */
    using HSEM_RLR15_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore secure. */
    using HSEM_RLR15_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by non-secure compartment. (value: 0)
     *          - B_0x1: Semaphore locked by secure compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by non-secure compartment. */
    constexpr std::uint32_t HSEM_RLR15_SEC_B_0x0 = 0;
        /** @brief Semaphore locked by secure compartment. */
    constexpr std::uint32_t HSEM_RLR15_SEC_B_0x1 = 1;

    /** @brief Semaphore privilege */
    using HSEM_RLR15_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore free or locked by unprivileged compartment. (value: 0)
     *          - B_0x1: Semaphore locked by privileged compartment. (value: 1)
     */
        /** @brief Semaphore free or locked by unprivileged compartment. */
    constexpr std::uint32_t HSEM_RLR15_PRIV_B_0x0 = 0;
        /** @brief Semaphore locked by privileged compartment. */
    constexpr std::uint32_t HSEM_RLR15_PRIV_B_0x1 = 1;

    /** @brief Lock indication */
    using HSEM_RLR15_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM non-secure interrupt enable register */
    using HSEM_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure Interrupt semaphore x enable bit */
    using HSEM_IER_ISE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure Interrupt generation for semaphore x disabled (masked) (value: 0)
     *          - B_0x1: Non-secure Interrupt generation for semaphore x enabled (not masked) (value: 1)
     */
        /** @brief Non-secure Interrupt generation for semaphore x disabled (masked) */
    constexpr std::uint32_t HSEM_IER_ISE_B_0x0 = 0;
        /** @brief Non-secure Interrupt generation for semaphore x enabled (not masked) */
    constexpr std::uint32_t HSEM_IER_ISE_B_0x1 = 1;

    /** @brief HSEM non-secure interrupt clear register */
    using HSEM_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure Interrupt semaphore x clear bit */
    using HSEM_ICR_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure Interrupt semaphore x status ISFx and masked status MISFx not affected. (value: 0)
     *          - B_0x1: non-secure Interrupt semaphore x status ISFx and masked status MISFx cleared. (value: 1)
     */
        /** @brief non-secure Interrupt semaphore x status ISFx and masked status MISFx not affected. */
    constexpr std::uint32_t HSEM_ICR_ISC_B_0x0 = 0;
        /** @brief non-secure Interrupt semaphore x status ISFx and masked status MISFx cleared. */
    constexpr std::uint32_t HSEM_ICR_ISC_B_0x1 = 1;

    /** @brief HSEM non-secure interrupt status register */
    using HSEM_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt semaphore x status bit before enable (mask) */
    using HSEM_ISR_ISF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt semaphore x status, no interrupt pending (value: 0)
     *          - B_0x1: Interrupt semaphore x status, interrupt pending (value: 1)
     */
        /** @brief Interrupt semaphore x status, no interrupt pending */
    constexpr std::uint32_t HSEM_ISR_ISF_B_0x0 = 0;
        /** @brief Interrupt semaphore x status, interrupt pending */
    constexpr std::uint32_t HSEM_ISR_ISF_B_0x1 = 1;

    /** @brief HSEM non-secure interrupt status register */
    using HSEM_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Masked non-secure interrupt semaphore x status bit after enable (mask) */
    using HSEM_MISR_MISF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure interrupt semaphore x status after masking not pending (value: 0)
     *          - B_0x1: non-secure interrupt semaphore x status after masking pending (value: 1)
     */
        /** @brief non-secure interrupt semaphore x status after masking not pending */
    constexpr std::uint32_t HSEM_MISR_MISF_B_0x0 = 0;
        /** @brief non-secure interrupt semaphore x status after masking pending */
    constexpr std::uint32_t HSEM_MISR_MISF_B_0x1 = 1;

    /** @brief HSEM secure interrupt enable register */
    using HSEM_SIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure interrupt semaphore x enable bit */
    using HSEM_SIER_SISE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure interrupt generation for semaphore x is disabled (masked). (value: 0)
     *          - B_0x1: Secure interrupt generation for semaphore x is enabled (not masked). (value: 1)
     */
        /** @brief Secure interrupt generation for semaphore x is disabled (masked). */
    constexpr std::uint32_t HSEM_SIER_SISE_B_0x0 = 0;
        /** @brief Secure interrupt generation for semaphore x is enabled (not masked). */
    constexpr std::uint32_t HSEM_SIER_SISE_B_0x1 = 1;

    /** @brief HSEM secure interrupt clear register */
    using HSEM_SICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure interrupt semaphore x clear bit */
    using HSEM_SICR_SISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure interrupt semaphore x status ISFx and masked status MISFx not affected. (value: 0)
     *          - B_0x1: Secure interrupt semaphore x status ISFx and masked status MISFx cleared. (value: 1)
     */
        /** @brief Secure interrupt semaphore x status ISFx and masked status MISFx not affected. */
    constexpr std::uint32_t HSEM_SICR_SISC_B_0x0 = 0;
        /** @brief Secure interrupt semaphore x status ISFx and masked status MISFx cleared. */
    constexpr std::uint32_t HSEM_SICR_SISC_B_0x1 = 1;

    /** @brief HSEM secure interrupt status register */
    using HSEM_SISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure interrupt semaphore x status bit before enable (mask) */
    using HSEM_SISR_SISF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure interrupt semaphore x status, no interrupt pending. (value: 0)
     *          - B_0x1: Secure interrupt semaphore x status, interrupt pending. (value: 1)
     */
        /** @brief Secure interrupt semaphore x status, no interrupt pending. */
    constexpr std::uint32_t HSEM_SISR_SISF_B_0x0 = 0;
        /** @brief Secure interrupt semaphore x status, interrupt pending. */
    constexpr std::uint32_t HSEM_SISR_SISF_B_0x1 = 1;

    /** @brief HSEM secure masked interrupt status register */
    using HSEM_MSISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure masked interrupt semaphore x status bit after enable (mask) */
    using HSEM_MSISR_SMISF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure interrupt semaphore x status after masking not pending. (value: 0)
     *          - B_0x1: Secure interrupt semaphore x status after masking pending. (value: 1)
     */
        /** @brief Secure interrupt semaphore x status after masking not pending. */
    constexpr std::uint32_t HSEM_MSISR_SMISF_B_0x0 = 0;
        /** @brief Secure interrupt semaphore x status after masking pending. */
    constexpr std::uint32_t HSEM_MSISR_SMISF_B_0x1 = 1;

    /** @brief HSEM security configuration register */
    using HSEM_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore x security attribute */
    using HSEM_SECCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore x non-security, can be accessed by both secure and non-secure processors. (value: 0)
     *          - B_0x1: Semaphore x security, can be accessed only by secure processors. (value: 1)
     */
        /** @brief Semaphore x non-security, can be accessed by both secure and non-secure processors. */
    constexpr std::uint32_t HSEM_SECCFGR_SEC_B_0x0 = 0;
        /** @brief Semaphore x security, can be accessed only by secure processors. */
    constexpr std::uint32_t HSEM_SECCFGR_SEC_B_0x1 = 1;

    /** @brief HSEM privilege configuration register */
    using HSEM_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore x privilege attribute */
    using HSEM_PRIVCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Semaphore x unprivileged, can be accessed by both privileged and unprivileged processors. (value: 0)
     *          - B_0x1: Semaphore x privileged, can be accessed only by privileged processors. (value: 1)
     */
        /** @brief Semaphore x unprivileged, can be accessed by both privileged and unprivileged processors. */
    constexpr std::uint32_t HSEM_PRIVCFGR_PRIV_B_0x0 = 0;
        /** @brief Semaphore x privileged, can be accessed only by privileged processors. */
    constexpr std::uint32_t HSEM_PRIVCFGR_PRIV_B_0x1 = 1;

    /** @brief HSEM clear register */
    using HSEM_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCKID of semaphores to be cleared */
    using HSEM_CR_LOCKID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC value of semaphores to be cleared. */
    using HSEM_CR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV value of semaphores to be cleared. */
    using HSEM_CR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore clear key */
    using HSEM_CR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSEM clear semaphore key register */
    using HSEM_KEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore clear key */
    using HSEM_KEYR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
