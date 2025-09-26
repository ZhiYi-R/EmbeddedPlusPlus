/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA55_TAMP_HPP
#define EMBEDDED_PP_STM32WBA55_TAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Tamper and backup registers */
namespace STM32WBA55::TAMP {

    /** @brief TAMP control register 1 */
    using TAMP_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper detection on TAMP_IN1 enable */
    using TAMP_CR1_TAMP1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN1 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN1 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN1 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP1E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN1 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP1E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN2 enable */
    using TAMP_CR1_TAMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN2 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN2 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN2 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP2E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN2 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP2E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN3 enable */
    using TAMP_CR1_TAMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN3 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN3 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN3 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP3E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN3 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP3E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN4 enable */
    using TAMP_CR1_TAMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN4 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN4 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN4 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP4E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN4 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP4E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN5 enable */
    using TAMP_CR1_TAMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN5 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN5 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN5 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP5E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN5 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP5E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN6 enable */
    using TAMP_CR1_TAMP6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN6 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN6 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN6 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP6E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN6 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP6E_B_0x1 = 1;

    /** @brief Internal tamper 3 enable */
    using TAMP_CR1_ITAMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 3 disabled. (value: 0)
     *          - B_0x1: Internal tamper 3 enabled. (value: 1)
     */
        /** @brief Internal tamper 3 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP3E_B_0x0 = 0;
        /** @brief Internal tamper 3 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP3E_B_0x1 = 1;

    /** @brief Internal tamper 5 enable */
    using TAMP_CR1_ITAMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 5 disabled. (value: 0)
     *          - B_0x1: Internal tamper 5 enabled. (value: 1)
     */
        /** @brief Internal tamper 5 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP5E_B_0x0 = 0;
        /** @brief Internal tamper 5 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP5E_B_0x1 = 1;

    /** @brief Internal tamper 6 enable */
    using TAMP_CR1_ITAMP6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 6 disabled. (value: 0)
     *          - B_0x1: Internal tamper 6 enabled. (value: 1)
     */
        /** @brief Internal tamper 6 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP6E_B_0x0 = 0;
        /** @brief Internal tamper 6 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP6E_B_0x1 = 1;

    /** @brief Internal tamper 7 enable */
    using TAMP_CR1_ITAMP7E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 7 disabled. (value: 0)
     *          - B_0x1: Internal tamper 7 enabled (value: 1)
     */
        /** @brief Internal tamper 7 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP7E_B_0x0 = 0;
        /** @brief Internal tamper 7 enabled */
    constexpr std::uint32_t TAMP_CR1_ITAMP7E_B_0x1 = 1;

    /** @brief Internal tamper 8 enable */
    using TAMP_CR1_ITAMP8E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 8 disabled. (value: 0)
     *          - B_0x1: Internal tamper 8 enabled. (value: 1)
     */
        /** @brief Internal tamper 8 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP8E_B_0x0 = 0;
        /** @brief Internal tamper 8 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP8E_B_0x1 = 1;

    /** @brief Internal tamper 9 enable */
    using TAMP_CR1_ITAMP9E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 9 disabled. (value: 0)
     *          - B_0x1: Internal tamper 9 enabled. (value: 1)
     */
        /** @brief Internal tamper 9 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP9E_B_0x0 = 0;
        /** @brief Internal tamper 9 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP9E_B_0x1 = 1;

    /** @brief Internal tamper 11 enable */
    using TAMP_CR1_ITAMP11E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 11 disabled. (value: 0)
     *          - B_0x1: Internal tamper 11 enabled. (value: 1)
     */
        /** @brief Internal tamper 11 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP11E_B_0x0 = 0;
        /** @brief Internal tamper 11 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP11E_B_0x1 = 1;

    /** @brief Internal tamper 12 enable */
    using TAMP_CR1_ITAMP12E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 12 disabled. (value: 0)
     *          - B_0x1: Internal tamper 12 enabled. (value: 1)
     */
        /** @brief Internal tamper 12 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP12E_B_0x0 = 0;
        /** @brief Internal tamper 12 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP12E_B_0x1 = 1;

    /** @brief Internal tamper 13 enable */
    using TAMP_CR1_ITAMP13E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 13 disabled. (value: 0)
     *          - B_0x1: Internal tamper 13 enabled. (value: 1)
     */
        /** @brief Internal tamper 13 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP13E_B_0x0 = 0;
        /** @brief Internal tamper 13 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP13E_B_0x1 = 1;

    /** @brief TAMP control register 2 */
    using TAMP_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper 1 no erase */
    using TAMP_CR2_TAMP1NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 event erases the backup registers and all device secrets. (value: 0)
     *          - B_0x1: Tamper 1 event does not erase the backup registers and device secrets. (value: 1)
     */
        /** @brief Tamper 1 event erases the backup registers and all device secrets. */
    constexpr std::uint32_t TAMP_CR2_TAMP1NOER_B_0x0 = 0;
        /** @brief Tamper 1 event does not erase the backup registers and device secrets. */
    constexpr std::uint32_t TAMP_CR2_TAMP1NOER_B_0x1 = 1;

    /** @brief Tamper 2 no erase */
    using TAMP_CR2_TAMP2NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Tamper 2 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Tamper 2 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP2NOER_B_0x0 = 0;
        /** @brief Tamper 2 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP2NOER_B_0x1 = 1;

    /** @brief Tamper 3 no erase */
    using TAMP_CR2_TAMP3NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Tamper 3 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Tamper 3 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP3NOER_B_0x0 = 0;
        /** @brief Tamper 3 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP3NOER_B_0x1 = 1;

    /** @brief Tamper 4 no erase */
    using TAMP_CR2_TAMP4NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 4 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Tamper 4 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Tamper 4 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP4NOER_B_0x0 = 0;
        /** @brief Tamper 4 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP4NOER_B_0x1 = 1;

    /** @brief Tamper 5 no erase */
    using TAMP_CR2_TAMP5NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 5 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Tamper 5 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Tamper 5 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP5NOER_B_0x0 = 0;
        /** @brief Tamper 5 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP5NOER_B_0x1 = 1;

    /** @brief Tamper 6 no erase */
    using TAMP_CR2_TAMP6NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 6 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Tamper 6 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Tamper 6 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP6NOER_B_0x0 = 0;
        /** @brief Tamper 6 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR2_TAMP6NOER_B_0x1 = 1;

    /** @brief Tamper 1 mask The tamper 1 interrupt must not be enabled when TAMP1MSK is set. */
    using TAMP_CR2_TAMP1MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 event generates a trigger event and TAMP1F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers and device secretssup(1)/sup are not erased. (value: 1)
     */
        /** @brief Tamper 1 event generates a trigger event and TAMP1F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP1MSK_B_0x0 = 0;
        /** @brief Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers and device secretssup(1)/sup are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP1MSK_B_0x1 = 1;

    /** @brief Tamper 2 mask The tamper 2 interrupt must not be enabled when TAMP2MSK is set. */
    using TAMP_CR2_TAMP2MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 event generates a trigger event and TAMP2F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers and device secretssup(1)/sup are not erased. (value: 1)
     */
        /** @brief Tamper 2 event generates a trigger event and TAMP2F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP2MSK_B_0x0 = 0;
        /** @brief Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers and device secretssup(1)/sup are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP2MSK_B_0x1 = 1;

    /** @brief Tamper 3 mask The tamper 3 interrupt must not be enabled when TAMP3MSK is set. */
    using TAMP_CR2_TAMP3MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 event generates a trigger event and TAMP3F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers and device secretssup(1)/sup are not erased. (value: 1)
     */
        /** @brief Tamper 3 event generates a trigger event and TAMP3F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP3MSK_B_0x0 = 0;
        /** @brief Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers and device secretssup(1)/sup are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP3MSK_B_0x1 = 1;

    /** @brief Backup registers and device secretssup(1)/sup access blocked */
    using TAMP_CR2_BKBLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: backup registers and device secretssup(1)/sup can be accessed if no tamper flag is set (value: 0)
     *          - B_0x1: backup registers and device secretssup(1)/sup cannot be accessed (value: 1)
     */
        /** @brief backup registers and device secretssup(1)/sup can be accessed if no tamper flag is set */
    constexpr std::uint32_t TAMP_CR2_BKBLOCK_B_0x0 = 0;
        /** @brief backup registers and device secretssup(1)/sup cannot be accessed */
    constexpr std::uint32_t TAMP_CR2_BKBLOCK_B_0x1 = 1;

    /** @brief Backup registers and device secretssup(1)/sup erase Writing '1' to this bit reset the backup registers and device secretssup(1)/sup. Writing 0 has no effect. This bit is always read as 0. */
    using TAMP_CR2_BKERASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active level for tamper 1 input If TAMPFLT=00 Tamper 1 input rising edge triggers a tamper detection event. If TAMPFLT=00 Tamper 1 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP1TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 1 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different 00 Tamper 1 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 1 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different 00 Tamper 1 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x1 = 1;

    /** @brief Active level for tamper 2 input If TAMPFLT = 00 Tamper 2 input rising edge triggers a tamper detection event. If TAMPFLT=00 Tamper 2 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP2TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 2 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different 00 Tamper 2 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 2 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different 00 Tamper 2 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x1 = 1;

    /** @brief Active level for tamper 3 input If TAMPFLT=00 Tamper 3 input rising edge triggers a tamper detection event. If TAMPFLT=00 Tamper 3 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP3TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 3 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different 00 Tamper 3 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 3 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP3TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different 00 Tamper 3 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP3TRG_B_0x1 = 1;

    /** @brief Active level for tamper 4 input (active mode disabled) If TAMPFLT=00 Tamper 4 input rising edge triggers a tamper detection event. If TAMPFLT=00 Tamper 4 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP4TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 4 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different 00 Tamper 4 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 4 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP4TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different 00 Tamper 4 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP4TRG_B_0x1 = 1;

    /** @brief Active level for tamper 5 input (active mode disabled) If TAMPFLT=00 Tamper 5 input rising edge triggers a tamper detection event. If TAMPFLT=00 Tamper 5 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP5TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 5 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different 00 Tamper 5 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 5 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP5TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different 00 Tamper 5 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP5TRG_B_0x1 = 1;

    /** @brief Active level for tamper 6 input (active mode disabled) If TAMPFLT=00 Tamper 6 input rising edge triggers a tamper detection event. If TAMPFLT=00 Tamper 6 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP6TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 6 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different 00 Tamper 6 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 6 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP6TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different 00 Tamper 6 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP6TRG_B_0x1 = 1;

    /** @brief TAMP control register 3 */
    using TAMP_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal Tamper 3 no erase */
    using TAMP_CR3_ITAMP3NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 3 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 3 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 3 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP3NOER_B_0x0 = 0;
        /** @brief Internal Tamper 3 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP3NOER_B_0x1 = 1;

    /** @brief Internal Tamper 5 no erase */
    using TAMP_CR3_ITAMP5NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 5 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 5 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 5 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP5NOER_B_0x0 = 0;
        /** @brief Internal Tamper 5 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP5NOER_B_0x1 = 1;

    /** @brief Internal Tamper 6 no erase */
    using TAMP_CR3_ITAMP6NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 6 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 6 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 6 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP6NOER_B_0x0 = 0;
        /** @brief Internal Tamper 6 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP6NOER_B_0x1 = 1;

    /** @brief Internal Tamper 7 no erase */
    using TAMP_CR3_ITAMP7NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 7 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 7 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 7 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP7NOER_B_0x0 = 0;
        /** @brief Internal Tamper 7 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP7NOER_B_0x1 = 1;

    /** @brief Internal Tamper 8 no erase */
    using TAMP_CR3_ITAMP8NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 8 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 8 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 8 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP8NOER_B_0x0 = 0;
        /** @brief Internal Tamper 8 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP8NOER_B_0x1 = 1;

    /** @brief Internal Tamper 9 no erase */
    using TAMP_CR3_ITAMP9NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 9 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 9 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 9 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP9NOER_B_0x0 = 0;
        /** @brief Internal Tamper 9 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP9NOER_B_0x1 = 1;

    /** @brief Internal Tamper 11 no erase */
    using TAMP_CR3_ITAMP11NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 11 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 11 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 11 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP11NOER_B_0x0 = 0;
        /** @brief Internal Tamper 11 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP11NOER_B_0x1 = 1;

    /** @brief Internal Tamper 12 no erase */
    using TAMP_CR3_ITAMP12NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 12 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 12 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 12 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP12NOER_B_0x0 = 0;
        /** @brief Internal Tamper 12 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP12NOER_B_0x1 = 1;

    /** @brief Internal Tamper 13 no erase */
    using TAMP_CR3_ITAMP13NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Tamper 13 event erases the backup registers and all device secretssup(1)/sup. (value: 0)
     *          - B_0x1: Internal Tamper 13 event does not erase the backup registers and device secretssup(2)/sup. (value: 1)
     */
        /** @brief Internal Tamper 13 event erases the backup registers and all device secretssup(1)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP13NOER_B_0x0 = 0;
        /** @brief Internal Tamper 13 event does not erase the backup registers and device secretssup(2)/sup. */
    constexpr std::uint32_t TAMP_CR3_ITAMP13NOER_B_0x1 = 1;

    /** @brief TAMP filter control register */
    using TAMP_FLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper sampling frequency Determines the frequency at which each of the TAMP_INx inputs are sampled. */
    using TAMP_FLTCR_TAMPFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTCCLK / 32768 (1Hz when RTCCLK = 32768Hz) (value: 0)
     *          - B_0x1: RTCCLK / 16384 (2Hz when RTCCLK = 32768Hz) (value: 1)
     *          - B_0x2: RTCCLK / 8192 (4Hz when RTCCLK = 32768Hz) (value: 2)
     *          - B_0x3: RTCCLK / 4096 (8Hz when RTCCLK = 32768Hz) (value: 3)
     *          - B_0x4: RTCCLK / 2048 (16Hz when RTCCLK = 32768Hz) (value: 4)
     *          - B_0x5: RTCCLK / 1024 (32Hz when RTCCLK = 32768Hz) (value: 5)
     *          - B_0x6: RTCCLK / 512 (64Hz when RTCCLK = 32768Hz) (value: 6)
     *          - B_0x7: RTCCLK / 256 (128Hz when RTCCLK = 32768Hz) (value: 7)
     */
        /** @brief RTCCLK / 32768 (1Hz when RTCCLK = 32768Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x0 = 0;
        /** @brief RTCCLK / 16384 (2Hz when RTCCLK = 32768Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x1 = 1;
        /** @brief RTCCLK / 8192 (4Hz when RTCCLK = 32768Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x2 = 2;
        /** @brief RTCCLK / 4096 (8Hz when RTCCLK = 32768Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x3 = 3;
        /** @brief RTCCLK / 2048 (16Hz when RTCCLK = 32768Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x4 = 4;
        /** @brief RTCCLK / 1024 (32Hz when RTCCLK = 32768Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x5 = 5;
        /** @brief RTCCLK / 512 (64Hz when RTCCLK = 32768Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x6 = 6;
        /** @brief RTCCLK / 256 (128Hz when RTCCLK = 32768Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x7 = 7;

    /** @brief TAMP_INx filter count These bits determines the number of consecutive samples at the specified level (TAMP*TRG) needed to activate a tamper event. TAMPFLT is valid for each of the TAMP_INx inputs. */
    using TAMP_FLTCR_TAMPFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper event is activated on edge of TAMP_INx input transitions to the active level (no internal pull-up on TAMP_INx input). (value: 0)
     *          - B_0x1: Tamper event is activated after 2 consecutive samples at the active level. (value: 1)
     *          - B_0x2: Tamper event is activated after 4 consecutive samples at the active level. (value: 2)
     *          - B_0x3: Tamper event is activated after 8 consecutive samples at the active level. (value: 3)
     */
        /** @brief Tamper event is activated on edge of TAMP_INx input transitions to the active level (no internal pull-up on TAMP_INx input). */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFLT_B_0x0 = 0;
        /** @brief Tamper event is activated after 2 consecutive samples at the active level. */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFLT_B_0x1 = 1;
        /** @brief Tamper event is activated after 4 consecutive samples at the active level. */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFLT_B_0x2 = 2;
        /** @brief Tamper event is activated after 8 consecutive samples at the active level. */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFLT_B_0x3 = 3;

    /** @brief TAMP_INx precharge duration These bit determines the duration of time during which the pull-up/is activated before each sample. TAMPPRCH is valid for each of the TAMP_INx inputs. */
    using TAMP_FLTCR_TAMPPRCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 RTCCLK cycle (value: 0)
     *          - B_0x1: 2 RTCCLK cycles (value: 1)
     *          - B_0x2: 4 RTCCLK cycles (value: 2)
     *          - B_0x3: 8 RTCCLK cycles (value: 3)
     */
        /** @brief 1 RTCCLK cycle */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPRCH_B_0x0 = 0;
        /** @brief 2 RTCCLK cycles */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPRCH_B_0x1 = 1;
        /** @brief 4 RTCCLK cycles */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPRCH_B_0x2 = 2;
        /** @brief 8 RTCCLK cycles */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPRCH_B_0x3 = 3;

    /** @brief TAMP_INx pull-up disable This bit determines if each of the TAMPx pins are precharged before each sample. */
    using TAMP_FLTCR_TAMPPUDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Precharge TAMP_INx pins before sampling (enable internal pull-up) (value: 0)
     *          - B_0x1: Disable precharge of TAMP_INx pins. (value: 1)
     */
        /** @brief Precharge TAMP_INx pins before sampling (enable internal pull-up) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPUDIS_B_0x0 = 0;
        /** @brief Disable precharge of TAMP_INx pins. */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPUDIS_B_0x1 = 1;

    /** @brief TAMP active tamper control register 1 */
    using TAMP_ATCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper 1 active mode */
    using TAMP_ATCR1_TAMP1AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 1 detection mode is active. (value: 1)
     */
        /** @brief Tamper 1 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP1AM_B_0x0 = 0;
        /** @brief Tamper 1 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP1AM_B_0x1 = 1;

    /** @brief Tamper 2 active mode */
    using TAMP_ATCR1_TAMP2AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 2 detection mode is active. (value: 1)
     */
        /** @brief Tamper 2 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP2AM_B_0x0 = 0;
        /** @brief Tamper 2 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP2AM_B_0x1 = 1;

    /** @brief Tamper 3 active mode */
    using TAMP_ATCR1_TAMP3AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 3 detection mode is active. (value: 1)
     */
        /** @brief Tamper 3 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP3AM_B_0x0 = 0;
        /** @brief Tamper 3 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP3AM_B_0x1 = 1;

    /** @brief Tamper 4 active mode */
    using TAMP_ATCR1_TAMP4AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 4 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 4 detection mode is active. (value: 1)
     */
        /** @brief Tamper 4 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP4AM_B_0x0 = 0;
        /** @brief Tamper 4 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP4AM_B_0x1 = 1;

    /** @brief Tamper 5 active mode */
    using TAMP_ATCR1_TAMP5AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 5 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 5 detection mode is active. (value: 1)
     */
        /** @brief Tamper 5 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP5AM_B_0x0 = 0;
        /** @brief Tamper 5 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP5AM_B_0x1 = 1;

    /** @brief Tamper 6 active mode */
    using TAMP_ATCR1_TAMP6AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 6 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 6 detection mode is active. (value: 1)
     */
        /** @brief Tamper 6 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP6AM_B_0x0 = 0;
        /** @brief Tamper 6 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP6AM_B_0x1 = 1;

    /** @brief Active tamper shared output 1 selection The selected output must be available in the package pinout */
    using TAMP_ATCR1_ATOSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL1 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL1 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL1 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL1 = TAMP_OUT4 (value: 3)
     */
        /** @brief TAMPOUTSEL1 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL1_B_0x0 = 0;
        /** @brief TAMPOUTSEL1 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL1_B_0x1 = 1;
        /** @brief TAMPOUTSEL1 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL1_B_0x2 = 2;
        /** @brief TAMPOUTSEL1 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL1_B_0x3 = 3;

    /** @brief Active tamper shared output 2 selection The selected output must be available in the package pinout */
    using TAMP_ATCR1_ATOSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL2 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL2 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL2 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL2 = TAMP_OUT4 (value: 3)
     */
        /** @brief TAMPOUTSEL2 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL2_B_0x0 = 0;
        /** @brief TAMPOUTSEL2 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL2_B_0x1 = 1;
        /** @brief TAMPOUTSEL2 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL2_B_0x2 = 2;
        /** @brief TAMPOUTSEL2 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL2_B_0x3 = 3;

    /** @brief Active tamper shared output 3 selection The selected output must be available in the package pinout */
    using TAMP_ATCR1_ATOSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL3 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL3 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL3 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL3 = TAMP_OUT4 (value: 3)
     */
        /** @brief TAMPOUTSEL3 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL3_B_0x0 = 0;
        /** @brief TAMPOUTSEL3 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL3_B_0x1 = 1;
        /** @brief TAMPOUTSEL3 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL3_B_0x2 = 2;
        /** @brief TAMPOUTSEL3 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL3_B_0x3 = 3;

    /** @brief Active tamper shared output 4 selection The selected output must be available in the package pinout. */
    using TAMP_ATCR1_ATOSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL4 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL4 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL4 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL4 = TAMP_OUT4 (value: 3)
     */
        /** @brief TAMPOUTSEL4 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL4_B_0x0 = 0;
        /** @brief TAMPOUTSEL4 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL4_B_0x1 = 1;
        /** @brief TAMPOUTSEL4 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL4_B_0x2 = 2;
        /** @brief TAMPOUTSEL4 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL4_B_0x3 = 3;

    /** @brief Active tamper RTC asynchronous prescaler clock selection These bits selects the RTC asynchronous prescaler stage output. The selected clock is CK_ATPRE. ... Note: These bits can be written only when all active tampers are disabled. The write protection remains for up to 1.5 CK_ATPRE cycles after all the active tampers are disable. */
    using TAMP_ATCR1_ATCKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTCCLK is selected (value: 0)
     *          - B_0x1: RTCCLK/2 is selected (value: 1)
     *          - B_0x2: RTCCLK/4 is selected (value: 2)
     *          - B_0x7: RTCCLK/128 is selected (value: 7)
     */
        /** @brief RTCCLK is selected */
    constexpr std::uint32_t TAMP_ATCR1_ATCKSEL_B_0x0 = 0;
        /** @brief RTCCLK/2 is selected */
    constexpr std::uint32_t TAMP_ATCR1_ATCKSEL_B_0x1 = 1;
        /** @brief RTCCLK/4 is selected */
    constexpr std::uint32_t TAMP_ATCR1_ATCKSEL_B_0x2 = 2;
        /** @brief RTCCLK/128 is selected */
    constexpr std::uint32_t TAMP_ATCR1_ATCKSEL_B_0x7 = 7;

    /** @brief Active tamper output change period The tamper output is changed every CK_ATPER = (2supATPER /supx CK_ATPRE) cycles. Refer to Table713: Minimum ATPER value. */
    using TAMP_ATCR1_ATPER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper output sharing TAMP_IN1 is compared with TAMPOUTSEL1 TAMP_IN2 is compared with TAMPOUTSEL2 TAMP_IN3 is compared with TAMPOUTSEL3 TAMP_IN4 is compared with TAMPOUTSEL4 TAMP_IN5 is compared with TAMPOUTSEL5 TAMP_IN6 is compared with TAMPOUTSEL6 */
    using TAMP_ATCR1_ATOSHARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Each active tamper input TAMP_INi is compared with its dedicated output TAMP_OUTi (value: 0)
     *          - B_0x1: Each active tamper input TAMP_INi is compared with TAMPOUTSELx as defined below, with TAMPOUTSELx defined by ATOSELx bits. (value: 1)
     */
        /** @brief Each active tamper input TAMP_INi is compared with its dedicated output TAMP_OUTi */
    constexpr std::uint32_t TAMP_ATCR1_ATOSHARE_B_0x0 = 0;
        /** @brief Each active tamper input TAMP_INi is compared with TAMPOUTSELx as defined below, with TAMPOUTSELx defined by ATOSELx bits. */
    constexpr std::uint32_t TAMP_ATCR1_ATOSHARE_B_0x1 = 1;

    /** @brief Active tamper filter enable */
    using TAMP_ATCR1_FLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active tamper filtering disable (value: 0)
     *          - B_0x1: Active tamper filtering enable: a tamper event is detected when 2 comparison mismatches occur out of 4 consecutive samples. (value: 1)
     */
        /** @brief Active tamper filtering disable */
    constexpr std::uint32_t TAMP_ATCR1_FLTEN_B_0x0 = 0;
        /** @brief Active tamper filtering enable: a tamper event is detected when 2 comparison mismatches occur out of 4 consecutive samples. */
    constexpr std::uint32_t TAMP_ATCR1_FLTEN_B_0x1 = 1;

    /** @brief TAMP active tamper seed register */
    using TAMP_ATSEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pseudo-random generator seed value This register must be written four times with 32-bit values to provide the 128-bit seed to the PRNG. Writing to this register automatically sends the seed value to the PRNG. */
    using TAMP_ATSEEDR_SEED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP active tamper output register */
    using TAMP_ATOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pseudo-random generator value This field provides the values of the PRNG output. Because of potential inconsistencies due to synchronization delays, PRNG must be read at least twice. The read value is correct if it is equal to previous read value. This field can only be read when the APB is in secure mode. */
    using TAMP_ATOR_PRNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Seed running flag This flag is set by hardware when a new seed is written in the TAMP_ATSEEDR. It is cleared by hardware when the PRNG has absorbed this new seed, and by system reset. The TAMP APB cock must not be switched off as long as SEEDF is set. */
    using TAMP_ATOR_SEEDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper initialization status This flag is set by hardware when the PRNG has absorbed the first 128-bit seed, meaning that the enabled active tampers are functional. This flag is cleared when the active tampers are disabled. */
    using TAMP_ATOR_INITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP active tamper control register 2 */
    using TAMP_ATCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper shared output 1 selection The selected output must be available in the package pinout. Bits 9:8 are the mirror of ATOSEL1[1:0] in the TAMP_ATCR1, and so can also be read or written through TAMP_ATCR1. */
    using TAMP_ATCR2_ATOSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL1 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL1 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL1 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL1 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL1 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL1 = TAMP_OUT6 (value: 5)
     */
        /** @brief TAMPOUTSEL1 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL1_B_0x0 = 0;
        /** @brief TAMPOUTSEL1 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL1_B_0x1 = 1;
        /** @brief TAMPOUTSEL1 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL1_B_0x2 = 2;
        /** @brief TAMPOUTSEL1 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL1_B_0x3 = 3;
        /** @brief TAMPOUTSEL1 = TAMP_OUT5 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL1_B_0x4 = 4;
        /** @brief TAMPOUTSEL1 = TAMP_OUT6 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL1_B_0x5 = 5;

    /** @brief Active tamper shared output 2 selection The selected output must be available in the package pinout. Bits 12:11 are the mirror of ATOSEL2[1:0] in the TAMP_ATCR1, and so can also be read or written through TAMP_ATCR1. */
    using TAMP_ATCR2_ATOSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL2 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL2 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL2 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL2 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL2 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL2 = TAMP_OUT6 (value: 5)
     */
        /** @brief TAMPOUTSEL2 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL2_B_0x0 = 0;
        /** @brief TAMPOUTSEL2 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL2_B_0x1 = 1;
        /** @brief TAMPOUTSEL2 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL2_B_0x2 = 2;
        /** @brief TAMPOUTSEL2 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL2_B_0x3 = 3;
        /** @brief TAMPOUTSEL2 = TAMP_OUT5 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL2_B_0x4 = 4;
        /** @brief TAMPOUTSEL2 = TAMP_OUT6 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL2_B_0x5 = 5;

    /** @brief Active tamper shared output 3 selection The selected output must be available in the package pinout. Bits 15:14 are the mirror of ATOSEL3[1:0] in the TAMP_ATCR1, and so can also be read or written through TAMP_ATCR1. */
    using TAMP_ATCR2_ATOSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL3 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL3 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL3 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL3 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL3 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL3 = TAMP_OUT6 (value: 5)
     */
        /** @brief TAMPOUTSEL3 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL3_B_0x0 = 0;
        /** @brief TAMPOUTSEL3 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL3_B_0x1 = 1;
        /** @brief TAMPOUTSEL3 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL3_B_0x2 = 2;
        /** @brief TAMPOUTSEL3 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL3_B_0x3 = 3;
        /** @brief TAMPOUTSEL3 = TAMP_OUT5 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL3_B_0x4 = 4;
        /** @brief TAMPOUTSEL3 = TAMP_OUT6 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL3_B_0x5 = 5;

    /** @brief Active tamper shared output 4 selection The selected output must be available in the package pinout. Bits 18:17 are the mirror of ATOSEL2[1:0] in the TAMP_ATCR1, and so can also be read or written through TAMP_ATCR1. */
    using TAMP_ATCR2_ATOSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL4 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL4 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL4 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL4 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL4 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL4 = TAMP_OUT6 (value: 5)
     */
        /** @brief TAMPOUTSEL4 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL4_B_0x0 = 0;
        /** @brief TAMPOUTSEL4 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL4_B_0x1 = 1;
        /** @brief TAMPOUTSEL4 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL4_B_0x2 = 2;
        /** @brief TAMPOUTSEL4 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL4_B_0x3 = 3;
        /** @brief TAMPOUTSEL4 = TAMP_OUT5 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL4_B_0x4 = 4;
        /** @brief TAMPOUTSEL4 = TAMP_OUT6 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL4_B_0x5 = 5;

    /** @brief Active tamper shared output 5 selection The selected output must be available in the package pinout. */
    using TAMP_ATCR2_ATOSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL5 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL5 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL5 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL5 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL5 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL5 = TAMP_OUT6 (value: 5)
     */
        /** @brief TAMPOUTSEL5 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL5_B_0x0 = 0;
        /** @brief TAMPOUTSEL5 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL5_B_0x1 = 1;
        /** @brief TAMPOUTSEL5 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL5_B_0x2 = 2;
        /** @brief TAMPOUTSEL5 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL5_B_0x3 = 3;
        /** @brief TAMPOUTSEL5 = TAMP_OUT5 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL5_B_0x4 = 4;
        /** @brief TAMPOUTSEL5 = TAMP_OUT6 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL5_B_0x5 = 5;

    /** @brief Active tamper shared output 6 selection The selected output must be available in the package pinout. */
    using TAMP_ATCR2_ATOSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL6 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL6 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL6 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL6 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL6 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL6 = TAMP_OUT6 (value: 5)
     */
        /** @brief TAMPOUTSEL6 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL6_B_0x0 = 0;
        /** @brief TAMPOUTSEL6 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL6_B_0x1 = 1;
        /** @brief TAMPOUTSEL6 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL6_B_0x2 = 2;
        /** @brief TAMPOUTSEL6 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL6_B_0x3 = 3;
        /** @brief TAMPOUTSEL6 = TAMP_OUT5 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL6_B_0x4 = 4;
        /** @brief TAMPOUTSEL6 = TAMP_OUT6 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL6_B_0x5 = 5;

    /** @brief TAMP secure configuration register */
    using TAMP_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup registers read/write protection offset BKPRWSEC value must be from 0 to 32. Protection zone 1 is defined for backup registers from TAMP_BKP0R to TAMP_BKPxR (x = BKPRWSEC-1, with BKPRWSEC greater than or equal 1). if TZEN=1, these backup registers can be read and written only with secure access. If BKPRWSEC = 0: there is no protection zone 1. Refer to Figure871: Backup registers protection zones. Note: If TZEN=0: the protection zone 1 can be read and written with non-secure access. Note: If BKPRWPRIV is set, BKPRWSEC[7:0] can be written only in privileged mode. */
    using TAMP_SECCFGR_BKPRWSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Monotonic counter 1 secure protection */
    using TAMP_SECCFGR_CNT1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Monotonic counter 1 (TAMP_COUNT1R) can be read and written when the APB access is secure or non-secure. (value: 0)
     *          - B_0x1: Monotonic counter 1 (TAMP_COUNT1R) can be read and written only when the APB access is secure. (value: 1)
     */
        /** @brief Monotonic counter 1 (TAMP_COUNT1R) can be read and written when the APB access is secure or non-secure. */
    constexpr std::uint32_t TAMP_SECCFGR_CNT1SEC_B_0x0 = 0;
        /** @brief Monotonic counter 1 (TAMP_COUNT1R) can be read and written only when the APB access is secure. */
    constexpr std::uint32_t TAMP_SECCFGR_CNT1SEC_B_0x1 = 1;

    /** @brief Backup registers write protection offset BKPWSEC value must be from 0 to 32. Protection zone 2 is defined for backup registers from TAMP_BKPyR (y = BKPRWSEC) to TAMP_BKPzR (z = BKPWSEC-1, with BKPWSECBKPRWSEC): if TZEN=1, these backup registers can be written only with secure access. They can be read with secure or non-secure access. If BKPWSEC = 0 or if BKPWSEC less than or equal BKPRWSEC: there is no protection zone 2. Protection zone 3 is defined for backup registers from TAMP_BKPtR (t = BKPWSEC if BKPWSEC greater than or equal BKPRWSEC, else t = BKPRWSEC). They can be read or written with secure or non-secure access. If BKPWSEC=32: there is no protection zone 3. Refer to Figure871: Backup registers protection zones. Note: If TZEN=0: the protection zone 2 can be read and written with non-secure access. Note: If BKPWPRIV is set, BKPRWSEC[7:0] can be written only in privileged mode. */
    using TAMP_SECCFGR_BKPWSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot hardware key lock This bit can be read and can only be written to 1 by software. It is cleared by hardware together with the backup registers following a tamper detection event or when the readout protection (RDP) is disabled. */
    using TAMP_SECCFGR_BHKLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The Backup registers from TAMP_BKP0R to TAMP_BKP7R can be accessed according to the Protection zone they belong to. (value: 0)
     *          - B_0x1: The backup registers from TAMP_BKP0R to TAMP_BKP7R cannot be accessed neither in read nor in write (they are read as 0 and write ignore). (value: 1)
     */
        /** @brief The Backup registers from TAMP_BKP0R to TAMP_BKP7R can be accessed according to the Protection zone they belong to. */
    constexpr std::uint32_t TAMP_SECCFGR_BHKLOCK_B_0x0 = 0;
        /** @brief The backup registers from TAMP_BKP0R to TAMP_BKP7R cannot be accessed neither in read nor in write (they are read as 0 and write ignore). */
    constexpr std::uint32_t TAMP_SECCFGR_BHKLOCK_B_0x1 = 1;

    /** @brief Tamper protection (excluding monotonic counters and backup registers) Note: Refer to Section75.3.5: TAMP secure protection modes for details on the read protection. */
    using TAMP_SECCFGR_TAMPSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper configuration and interrupt can be written when the APB access is secure or non-secure. (value: 0)
     *          - B_0x1: Tamper configuration and interrupt can be written only when the APB access is secure. (value: 1)
     */
        /** @brief Tamper configuration and interrupt can be written when the APB access is secure or non-secure. */
    constexpr std::uint32_t TAMP_SECCFGR_TAMPSEC_B_0x0 = 0;
        /** @brief Tamper configuration and interrupt can be written only when the APB access is secure. */
    constexpr std::uint32_t TAMP_SECCFGR_TAMPSEC_B_0x1 = 1;

    /** @brief TAMP privilege configuration register */
    using TAMP_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Monotonic counter 1 privilege protection */
    using TAMP_PRIVCFGR_CNT1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Monotonic counter 1 (TAMP_COUNT1R) can be read and written when the APB access is privileged or non-privileged. (value: 0)
     *          - B_0x1: Monotonic counter 1 (TAMP_COUNT1R) can be read and written only when the APB access is privileged. (value: 1)
     */
        /** @brief Monotonic counter 1 (TAMP_COUNT1R) can be read and written when the APB access is privileged or non-privileged. */
    constexpr std::uint32_t TAMP_PRIVCFGR_CNT1PRIV_B_0x0 = 0;
        /** @brief Monotonic counter 1 (TAMP_COUNT1R) can be read and written only when the APB access is privileged. */
    constexpr std::uint32_t TAMP_PRIVCFGR_CNT1PRIV_B_0x1 = 1;

    /** @brief Backup registers zone 1 privilege protection */
    using TAMP_PRIVCFGR_BKPRWPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup registers zone 1 can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: Backup registers zone 1 can be read and written only with privileged access (value: 1)
     */
        /** @brief Backup registers zone 1 can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t TAMP_PRIVCFGR_BKPRWPRIV_B_0x0 = 0;
        /** @brief Backup registers zone 1 can be read and written only with privileged access */
    constexpr std::uint32_t TAMP_PRIVCFGR_BKPRWPRIV_B_0x1 = 1;

    /** @brief Backup registers zone 2 privilege protection */
    using TAMP_PRIVCFGR_BKPWPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup registers zone 2 can be written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: Backup registers zone 2 can be written only with privileged access. (value: 1)
     */
        /** @brief Backup registers zone 2 can be written with privileged or unprivileged access. */
    constexpr std::uint32_t TAMP_PRIVCFGR_BKPWPRIV_B_0x0 = 0;
        /** @brief Backup registers zone 2 can be written only with privileged access. */
    constexpr std::uint32_t TAMP_PRIVCFGR_BKPWPRIV_B_0x1 = 1;

    /** @brief Tamper privilege protection (excluding backup registers) Note: Refer to Section75.3.7: TAMP privilege protection modes for details on the read protection. */
    using TAMP_PRIVCFGR_TAMPPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper configuration and interrupt can be written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: Tamper configuration and interrupt can be written only with privileged access. (value: 1)
     */
        /** @brief Tamper configuration and interrupt can be written with privileged or unprivileged access. */
    constexpr std::uint32_t TAMP_PRIVCFGR_TAMPPRIV_B_0x0 = 0;
        /** @brief Tamper configuration and interrupt can be written only with privileged access. */
    constexpr std::uint32_t TAMP_PRIVCFGR_TAMPPRIV_B_0x1 = 1;

    /** @brief TAMP interrupt enable register */
    using TAMP_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper 1 interrupt enable */
    using TAMP_IER_TAMP1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 1 interrupt enabled. (value: 1)
     */
        /** @brief Tamper 1 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP1IE_B_0x0 = 0;
        /** @brief Tamper 1 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_TAMP1IE_B_0x1 = 1;

    /** @brief Tamper 2 interrupt enable */
    using TAMP_IER_TAMP2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 2 interrupt enabled. (value: 1)
     */
        /** @brief Tamper 2 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP2IE_B_0x0 = 0;
        /** @brief Tamper 2 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_TAMP2IE_B_0x1 = 1;

    /** @brief Tamper 3 interrupt enable */
    using TAMP_IER_TAMP3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 3 interrupt enabled.. (value: 1)
     */
        /** @brief Tamper 3 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP3IE_B_0x0 = 0;
        /** @brief Tamper 3 interrupt enabled.. */
    constexpr std::uint32_t TAMP_IER_TAMP3IE_B_0x1 = 1;

    /** @brief Tamper 4 interrupt enable */
    using TAMP_IER_TAMP4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 4 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 4 interrupt enabled. (value: 1)
     */
        /** @brief Tamper 4 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP4IE_B_0x0 = 0;
        /** @brief Tamper 4 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_TAMP4IE_B_0x1 = 1;

    /** @brief Tamper 5 interrupt enable */
    using TAMP_IER_TAMP5IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 5 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 5 interrupt enabled. (value: 1)
     */
        /** @brief Tamper 5 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP5IE_B_0x0 = 0;
        /** @brief Tamper 5 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_TAMP5IE_B_0x1 = 1;

    /** @brief Tamper 6 interrupt enable */
    using TAMP_IER_TAMP6IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 6 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 6 interrupt enabled. (value: 1)
     */
        /** @brief Tamper 6 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP6IE_B_0x0 = 0;
        /** @brief Tamper 6 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_TAMP6IE_B_0x1 = 1;

    /** @brief Internal tamper 3 interrupt enable */
    using TAMP_IER_ITAMP3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 3 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 3 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 3 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP3IE_B_0x0 = 0;
        /** @brief Internal tamper 3 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP3IE_B_0x1 = 1;

    /** @brief Internal tamper 5 interrupt enable */
    using TAMP_IER_ITAMP5IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 5 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 5 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 5 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP5IE_B_0x0 = 0;
        /** @brief Internal tamper 5 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP5IE_B_0x1 = 1;

    /** @brief Internal tamper 6 interrupt enable */
    using TAMP_IER_ITAMP6IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 6 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 6 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 6 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP6IE_B_0x0 = 0;
        /** @brief Internal tamper 6 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP6IE_B_0x1 = 1;

    /** @brief Internal tamper 7 interrupt enable */
    using TAMP_IER_ITAMP7IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 7 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 7 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 7 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP7IE_B_0x0 = 0;
        /** @brief Internal tamper 7 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP7IE_B_0x1 = 1;

    /** @brief Internal tamper 8 interrupt enable */
    using TAMP_IER_ITAMP8IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 8 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 8 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 8 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP8IE_B_0x0 = 0;
        /** @brief Internal tamper 8 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP8IE_B_0x1 = 1;

    /** @brief Internal tamper 9 interrupt enable */
    using TAMP_IER_ITAMP9IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 9 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 9 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 9 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP9IE_B_0x0 = 0;
        /** @brief Internal tamper 9 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP9IE_B_0x1 = 1;

    /** @brief Internal tamper 11 interrupt enable */
    using TAMP_IER_ITAMP11IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 11 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 11 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 11 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP11IE_B_0x0 = 0;
        /** @brief Internal tamper 11 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP11IE_B_0x1 = 1;

    /** @brief Internal tamper 12 interrupt enable */
    using TAMP_IER_ITAMP12IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 12 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 12 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 12 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP12IE_B_0x0 = 0;
        /** @brief Internal tamper 12 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP12IE_B_0x1 = 1;

    /** @brief Internal tamper 13 interrupt enable */
    using TAMP_IER_ITAMP13IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 13 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 13 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 13 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP13IE_B_0x0 = 0;
        /** @brief Internal tamper 13 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP13IE_B_0x1 = 1;

    /** @brief TAMP status register */
    using TAMP_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP1 input. */
    using TAMP_SR_TAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP2 input. */
    using TAMP_SR_TAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP3 input. */
    using TAMP_SR_TAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP4 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP4 input. */
    using TAMP_SR_TAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP5 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP5 input. */
    using TAMP_SR_TAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP6 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP6 input. */
    using TAMP_SR_TAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 3 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 3. */
    using TAMP_SR_ITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 5 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 5. */
    using TAMP_SR_ITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 6 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 6. */
    using TAMP_SR_ITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 7 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 7. */
    using TAMP_SR_ITAMP7F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 8 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 8. */
    using TAMP_SR_ITAMP8F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 9 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 9. */
    using TAMP_SR_ITAMP9F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 11 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 11. */
    using TAMP_SR_ITAMP11F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 12 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 12. */
    using TAMP_SR_ITAMP12F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 13 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 13. */
    using TAMP_SR_ITAMP13F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP non-secure masked interrupt status register */
    using TAMP_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 non-secure interrupt masked flag This flag is set by hardware when the tamper 1 non-secure interrupt is raised. */
    using TAMP_MISR_TAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 non-secure interrupt masked flag This flag is set by hardware when the tamper 2 non-secure interrupt is raised. */
    using TAMP_MISR_TAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 non-secure interrupt masked flag This flag is set by hardware when the tamper 3 non-secure interrupt is raised. */
    using TAMP_MISR_TAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP4 non-secure interrupt masked flag This flag is set by hardware when the tamper 4 non-secure interrupt is raised. */
    using TAMP_MISR_TAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP5 non-secure interrupt masked flag This flag is set by hardware when the tamper 5 non-secure interrupt is raised. */
    using TAMP_MISR_TAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP6 non-secure interrupt masked flag This flag is set by hardware when the tamper 6 non-secure interrupt is raised. */
    using TAMP_MISR_TAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 3 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 3 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 5 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 5 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 6 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 6 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 7 tamper non-secure interrupt masked flag This flag is set by hardware when the internal tamper 7 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP7MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 8 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 8 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP8MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 9 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 9 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP9MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 11 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 11 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP11MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 12 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 12 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP12MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 13 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 13 non-secure interrupt is raised. */
    using TAMP_MISR_ITAMP13MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP secure masked interrupt status register */
    using TAMP_SMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 secure interrupt masked flag This flag is set by hardware when the tamper 1 secure interrupt is raised. */
    using TAMP_SMISR_TAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 secure interrupt masked flag This flag is set by hardware when the tamper 2 secure interrupt is raised. */
    using TAMP_SMISR_TAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 secure interrupt masked flag This flag is set by hardware when the tamper 3 secure interrupt is raised. */
    using TAMP_SMISR_TAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP4 secure interrupt masked flag This flag is set by hardware when the tamper 4 secure interrupt is raised. */
    using TAMP_SMISR_TAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP5 secure interrupt masked flag This flag is set by hardware when the tamper 5 secure interrupt is raised. */
    using TAMP_SMISR_TAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP6 secure interrupt masked flag This flag is set by hardware when the tamper 6 secure interrupt is raised. */
    using TAMP_SMISR_TAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 3 secure interrupt masked flag This flag is set by hardware when the internal tamper 3 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 5 secure interrupt masked flag This flag is set by hardware when the internal tamper 5 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 6 secure interrupt masked flag This flag is set by hardware when the internal tamper 6 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 7 secure interrupt masked flag This flag is set by hardware when the internal tamper 7 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP7MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 8 secure interrupt masked flag This flag is set by hardware when the internal tamper 8 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP8MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 9 secure interrupt masked flag This flag is set by hardware when the internal tamper 9 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP9MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 11 secure interrupt masked flag This flag is set by hardware when the internal tamper 11 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP11MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 12 secure interrupt masked flag This flag is set by hardware when the internal tamper 12 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP12MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 13 secure interrupt masked flag This flag is set by hardware when the internal tamper 13 secure interrupt is raised. */
    using TAMP_SMISR_ITAMP13MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP status clear register */
    using TAMP_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP1 detection flag Writing 1 in this bit clears the TAMP1F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP2 detection flag Writing 1 in this bit clears the TAMP2F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP3 detection flag Writing 1 in this bit clears the TAMP3F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP4 detection flag Writing 1 in this bit clears the TAMP4F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP5 detection flag Writing 1 in this bit clears the TAMP5F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP6 detection flag Writing 1 in this bit clears the TAMP6F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP3 detection flag Writing 1 in this bit clears the ITAMP3F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP5 detection flag Writing 1 in this bit clears the ITAMP5F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP6 detection flag Writing 1 in this bit clears the ITAMP6F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP7 detection flag Writing 1 in this bit clears the ITAMP7F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP7F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP8 detection flag Writing 1 in this bit clears the ITAMP8F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP8F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP9 detection flag Writing 1 in this bit clears the ITAMP9F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP9F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP11 detection flag Writing 1 in this bit clears the ITAMP11F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP11F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP12 detection flag Writing 1 in this bit clears the ITAMP12F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP12F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP13 detection flag Writing 1 in this bit clears the ITAMP13F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP13F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP monotonic counter 1 register */
    using TAMP_COUNT1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This register is read-only only and is incremented by one when a write access is done to this register. This register cannot roll-over and is frozen when reaching the maximum value. */
    using TAMP_COUNT1R_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP erase configuration register */
    using TAMP_ERCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable device secrets configuration */
    using TAMP_ERCFGR_ERCFG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Configurable device secrets are not included in the device secrets protected by TAMP peripheral (value: 0)
     *          - B_0x1: Configurable device secrets are is included in the device secrets protected by TAMP peripheral (value: 1)
     */
        /** @brief Configurable device secrets are not included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG1_B_0x0 = 0;
        /** @brief Configurable device secrets are is included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG1_B_0x1 = 1;

    /** @brief Configurable device secrets configuration */
    using TAMP_ERCFGR_ERCFG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Configurable device secrets are not included in the device secrets protected by TAMP peripheral (value: 0)
     *          - B_0x1: Configurable device secrets are is included in the device secrets protected by TAMP peripheral (value: 1)
     */
        /** @brief Configurable device secrets are not included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG2_B_0x0 = 0;
        /** @brief Configurable device secrets are is included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG2_B_0x1 = 1;

    /** @brief Configurable device secrets configuration */
    using TAMP_ERCFGR_ERCFG3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Configurable device secrets are not included in the device secrets protected by TAMP peripheral (value: 0)
     *          - B_0x1: Configurable device secrets are is included in the device secrets protected by TAMP peripheral (value: 1)
     */
        /** @brief Configurable device secrets are not included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG3_B_0x0 = 0;
        /** @brief Configurable device secrets are is included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG3_B_0x1 = 1;

    /** @brief Configurable device secrets configuration */
    using TAMP_ERCFGR_ERCFG4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Configurable device secrets are not included in the device secrets protected by TAMP peripheral (value: 0)
     *          - B_0x1: Configurable device secrets are is included in the device secrets protected by TAMP peripheral (value: 1)
     */
        /** @brief Configurable device secrets are not included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG4_B_0x0 = 0;
        /** @brief Configurable device secrets are is included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG4_B_0x1 = 1;

    /** @brief Configurable device secrets configuration */
    using TAMP_ERCFGR_ERCFG5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Configurable device secrets are not included in the device secrets protected by TAMP peripheral (value: 0)
     *          - B_0x1: Configurable device secrets are is included in the device secrets protected by TAMP peripheral (value: 1)
     */
        /** @brief Configurable device secrets are not included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG5_B_0x0 = 0;
        /** @brief Configurable device secrets are is included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_ERCFGR_ERCFG5_B_0x1 = 1;

    /** @brief TAMP backup 0 register */
    using TAMP_BKP0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP0R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 1 register */
    using TAMP_BKP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP1R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 2 register */
    using TAMP_BKP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP2R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 3 register */
    using TAMP_BKP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP3R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 4 register */
    using TAMP_BKP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP4R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 5 register */
    using TAMP_BKP5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP5R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 6 register */
    using TAMP_BKP6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP6R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 7 register */
    using TAMP_BKP7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP7R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 8 register */
    using TAMP_BKP8R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP8R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 9 register */
    using TAMP_BKP9R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP9R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 10 register */
    using TAMP_BKP10R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP10R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 11 register */
    using TAMP_BKP11R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP11R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 12 register */
    using TAMP_BKP12R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP12R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 13 register */
    using TAMP_BKP13R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP13R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 14 register */
    using TAMP_BKP14R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP14R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 15 register */
    using TAMP_BKP15R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP15R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 16 register */
    using TAMP_BKP16R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP16R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 17 register */
    using TAMP_BKP17R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP17R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 18 register */
    using TAMP_BKP18R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP18R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 19 register */
    using TAMP_BKP19R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP19R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 20 register */
    using TAMP_BKP20R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP20R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 21 register */
    using TAMP_BKP21R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP21R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 22 register */
    using TAMP_BKP22R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP22R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 23 register */
    using TAMP_BKP23R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP23R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 24 register */
    using TAMP_BKP24R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP24R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 25 register */
    using TAMP_BKP25R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP25R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 26 register */
    using TAMP_BKP26R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP26R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 27 register */
    using TAMP_BKP27R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP27R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 28 register */
    using TAMP_BKP28R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP28R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 29 register */
    using TAMP_BKP29R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP29R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 30 register */
    using TAMP_BKP30R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP30R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 31 register */
    using TAMP_BKP31R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP31R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
