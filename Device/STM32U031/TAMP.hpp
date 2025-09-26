/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U031_TAMP_HPP
#define EMBEDDED_PP_STM32U031_TAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief TAMP register block */
namespace STM32U031::TAMP {

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

    /** @brief Tamper detection on TAMP_IN2 enable<sup>(1)</sup> */
    using TAMP_CR1_TAMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN2 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN2 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN2 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP2E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN2 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP2E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN3 enable<sup>(1)</sup> */
    using TAMP_CR1_TAMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN3 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN3 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN3 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP3E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN3 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP3E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN4 enable<sup>(1)</sup> */
    using TAMP_CR1_TAMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN4 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN4 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN4 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP4E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN4 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP4E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN5 enable<sup>(1)</sup> */
    using TAMP_CR1_TAMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN5 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN5 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN5 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP5E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN5 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP5E_B_0x1 = 1;

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

    /** @brief Internal tamper 4 enable */
    using TAMP_CR1_ITAMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 4 disabled. (value: 0)
     *          - B_0x1: Internal tamper 4 enabled. (value: 1)
     */
        /** @brief Internal tamper 4 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP4E_B_0x0 = 0;
        /** @brief Internal tamper 4 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP4E_B_0x1 = 1;

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

    /** @brief TAMP control register 2 */
    using TAMP_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper 1 potential mode */
    using TAMP_CR2_TAMP1POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 event detection is in confirmed mode. (value: 0)
     *          - B_0x1: Tamper 1 event detection is in potential mode. (value: 1)
     */
        /** @brief Tamper 1 event detection is in confirmed mode. */
    constexpr std::uint32_t TAMP_CR2_TAMP1POM_B_0x0 = 0;
        /** @brief Tamper 1 event detection is in potential mode. */
    constexpr std::uint32_t TAMP_CR2_TAMP1POM_B_0x1 = 1;

    /** @brief Tamper 2 potential mode */
    using TAMP_CR2_TAMP2POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 event detection is in confirmed mode<sup>(1)</sup>. (value: 0)
     *          - B_0x1: Tamper 2 event detection is in potential mode<sup>(2)</sup>. (value: 1)
     */
        /** @brief Tamper 2 event detection is in confirmed mode<sup>(1)</sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP2POM_B_0x0 = 0;
        /** @brief Tamper 2 event detection is in potential mode<sup>(2)</sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP2POM_B_0x1 = 1;

    /** @brief Tamper 3 potential mode */
    using TAMP_CR2_TAMP3POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 event detection is in confirmed mode<sup>(1)</sup>. (value: 0)
     *          - B_0x1: Tamper 3 event detection is in potential mode<sup>(2)</sup>. (value: 1)
     */
        /** @brief Tamper 3 event detection is in confirmed mode<sup>(1)</sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP3POM_B_0x0 = 0;
        /** @brief Tamper 3 event detection is in potential mode<sup>(2)</sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP3POM_B_0x1 = 1;

    /** @brief Tamper 4 potential mode */
    using TAMP_CR2_TAMP4POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 4 event detection is in confirmed mode<sup>(1)</sup>. (value: 0)
     *          - B_0x1: Tamper 4 event detection is in potential mode<sup>(2)</sup>. (value: 1)
     */
        /** @brief Tamper 4 event detection is in confirmed mode<sup>(1)</sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP4POM_B_0x0 = 0;
        /** @brief Tamper 4 event detection is in potential mode<sup>(2)</sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP4POM_B_0x1 = 1;

    /** @brief Tamper 5 potential mode */
    using TAMP_CR2_TAMP5POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 5 event detection is in confirmed mode<sup>(1)</sup>. (value: 0)
     *          - B_0x1: Tamper 5 event detection is in potential mode<sup>(2)</sup>. (value: 1)
     */
        /** @brief Tamper 5 event detection is in confirmed mode<sup>(1)</sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP5POM_B_0x0 = 0;
        /** @brief Tamper 5 event detection is in potential mode<sup>(2)</sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP5POM_B_0x1 = 1;

    /** @brief Tamper 1 mask The tamper 1 interrupt must not be enabled when TAMP1MSK is set. */
    using TAMP_CR2_TAMP1MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 event generates a trigger event and TAMP1F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers and device secrets<sup>(1)</sup> are not erased. (value: 1)
     */
        /** @brief Tamper 1 event generates a trigger event and TAMP1F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP1MSK_B_0x0 = 0;
        /** @brief Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers and device secrets<sup>(1)</sup> are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP1MSK_B_0x1 = 1;

    /** @brief Tamper 2 mask The tamper 2 interrupt must not be enabled when TAMP2MSK is set. */
    using TAMP_CR2_TAMP2MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 event generates a trigger event and TAMP2F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers and device secrets<sup>(1)</sup> are not erased. (value: 1)
     */
        /** @brief Tamper 2 event generates a trigger event and TAMP2F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP2MSK_B_0x0 = 0;
        /** @brief Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers and device secrets<sup>(1)</sup> are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP2MSK_B_0x1 = 1;

    /** @brief Tamper 3 mask The tamper 3 interrupt must not be enabled when TAMP3MSK is set. */
    using TAMP_CR2_TAMP3MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 event generates a trigger event and TAMP3F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers and device secrets<sup>(1)</sup> are not erased. (value: 1)
     */
        /** @brief Tamper 3 event generates a trigger event and TAMP3F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP3MSK_B_0x0 = 0;
        /** @brief Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers and device secrets<sup>(1)</sup> are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP3MSK_B_0x1 = 1;

    /** @brief Backup registers and device secrets<sup>(1)</sup> access blocked */
    using TAMP_CR2_BKBLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: backup registers and device secrets<sup>(1)</sup> can be accessed if no tamper flag is set (value: 0)
     *          - B_0x1: backup registers and device secrets<sup>(1)</sup> cannot be accessed (value: 1)
     */
        /** @brief backup registers and device secrets<sup>(1)</sup> can be accessed if no tamper flag is set */
    constexpr std::uint32_t TAMP_CR2_BKBLOCK_B_0x0 = 0;
        /** @brief backup registers and device secrets<sup>(1)</sup> cannot be accessed */
    constexpr std::uint32_t TAMP_CR2_BKBLOCK_B_0x1 = 1;

    /** @brief Backup registers and device secrets<sup>(1)</sup> erase Writing 1 to this bit reset the backup registers and device secrets<sup>(1)</sup>. Writing 0 has no effect. This bit is always read as 0. */
    using TAMP_CR2_BKERASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active level for tamper 1 input If TAMPFLT1=100 tamper 1 input rising edge triggers a tamper detection event. If TAMPFLT1=100 tamper 1 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP1TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different from 00 tamper 1 input staying low triggers a tamper detection event (value: 0)
     *          - B_0x1: If TAMPFLT different from 00 tamper 1 input staying low triggers a tamper detection event (value: 1)
     */
        /** @brief If TAMPFLT different from 00 tamper 1 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different from 00 tamper 1 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x1 = 1;

    /** @brief Active level for tamper 2 input If TAMPFLT = 00 tamper 2 input rising edge triggers a tamper detection event. If TAMPFLT1=100 tamper 2 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP2TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different from 00 tamper 2 input staying low triggers a tamper detection event (value: 0)
     *          - B_0x1: If TAMPFLT different from 00 tamper 2 input staying low triggers a tamper detection event (value: 1)
     */
        /** @brief If TAMPFLT different from 00 tamper 2 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different from 00 tamper 2 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x1 = 1;

    /** @brief Active level for tamper 3 input If TAMPFLT1=100 tamper 3 input rising edge triggers a tamper detection event. If TAMPFLT1=100 tamper 3 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP3TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different from 00 tamper 3 input staying low triggers a tamper detection event (value: 0)
     *          - B_0x1: If TAMPFLT different from 00 tamper 3 input staying low triggers a tamper detection event (value: 1)
     */
        /** @brief If TAMPFLT different from 00 tamper 3 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP3TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different from 00 tamper 3 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP3TRG_B_0x1 = 1;

    /** @brief Active level for tamper 4 input (active mode disabled) If TAMPFLT1=100 tamper 4 input rising edge triggers a tamper detection event. If TAMPFLT1=100 tamper 4 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP4TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different from 00 tamper 4 input staying low triggers a tamper detection event (value: 0)
     *          - B_0x1: If TAMPFLT different from 00 tamper 4 input staying low triggers a tamper detection event (value: 1)
     */
        /** @brief If TAMPFLT different from 00 tamper 4 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP4TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different from 00 tamper 4 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP4TRG_B_0x1 = 1;

    /** @brief Active level for tamper 5 input (active mode disabled) If TAMPFLT1=100 tamper 5 input rising edge triggers a tamper detection event. If TAMPFLT1=100 tamper 5 input falling edge triggers a tamper detection event. */
    using TAMP_CR2_TAMP5TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different from 00 tamper 5 input staying low triggers a tamper detection event (value: 0)
     *          - B_0x1: If TAMPFLT different from 00 tamper 5 input staying low triggers a tamper detection event (value: 1)
     */
        /** @brief If TAMPFLT different from 00 tamper 5 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP5TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different from 00 tamper 5 input staying low triggers a tamper detection event */
    constexpr std::uint32_t TAMP_CR2_TAMP5TRG_B_0x1 = 1;

    /** @brief TAMP control register 3 */
    using TAMP_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 3 potential mode */
    using TAMP_CR3_ITAMP3POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 3 event detection is in confirmed mode<sup>(1)</sup>. (value: 0)
     *          - B_0x1: Internal tamper 3 event detection is in potential mode<sup>(2)</sup>. (value: 1)
     */
        /** @brief Internal tamper 3 event detection is in confirmed mode<sup>(1)</sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP3POM_B_0x0 = 0;
        /** @brief Internal tamper 3 event detection is in potential mode<sup>(2)</sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP3POM_B_0x1 = 1;

    /** @brief Internal tamper 4 potential mode */
    using TAMP_CR3_ITAMP4POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 4 event detection is in confirmed mode<sup>(1)</sup>. (value: 0)
     *          - B_0x1: Internal tamper 4 event detection is in potential mode<sup>(2)</sup>. (value: 1)
     */
        /** @brief Internal tamper 4 event detection is in confirmed mode<sup>(1)</sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP4POM_B_0x0 = 0;
        /** @brief Internal tamper 4 event detection is in potential mode<sup>(2)</sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP4POM_B_0x1 = 1;

    /** @brief Internal tamper 5 potential mode */
    using TAMP_CR3_ITAMP5POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 5 event detection is in confirmed mode<sup>(1)</sup>. (value: 0)
     *          - B_0x1: Internal tamper 5 event detection is in potential mode<sup>(2)</sup>. (value: 1)
     */
        /** @brief Internal tamper 5 event detection is in confirmed mode<sup>(1)</sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP5POM_B_0x0 = 0;
        /** @brief Internal tamper 5 event detection is in potential mode<sup>(2)</sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP5POM_B_0x1 = 1;

    /** @brief Internal tamper 6 potential mode */
    using TAMP_CR3_ITAMP6POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 6 event detection is in confirmed mode. (value: 0)
     *          - B_0x1: Internal tamper 6 event detection is in potential mode. (value: 1)
     */
        /** @brief Internal tamper 6 event detection is in confirmed mode. */
    constexpr std::uint32_t TAMP_CR3_ITAMP6POM_B_0x0 = 0;
        /** @brief Internal tamper 6 event detection is in potential mode. */
    constexpr std::uint32_t TAMP_CR3_ITAMP6POM_B_0x1 = 1;

    /** @brief TAMP filter control register */
    using TAMP_FLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper sampling frequency Determines the frequency at which each of the TAMP_INx inputs are sampled. */
    using TAMP_FLTCR_TAMPFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTCCLK / 32768 (11Hz when RTCCLK = 327681Hz) (value: 0)
     *          - B_0x1: RTCCLK / 16384 (21Hz when RTCCLK = 327681Hz) (value: 1)
     *          - B_0x2: RTCCLK / 8192 (41Hz when RTCCLK = 327681Hz) (value: 2)
     *          - B_0x3: RTCCLK / 4096 (81Hz when RTCCLK = 327681Hz) (value: 3)
     *          - B_0x4: RTCCLK / 2048 (161Hz when RTCCLK = 327681Hz) (value: 4)
     *          - B_0x5: RTCCLK / 1024 (321Hz when RTCCLK = 327681Hz) (value: 5)
     *          - B_0x6: RTCCLK / 512 (641Hz when RTCCLK = 327681Hz) (value: 6)
     *          - B_0x7: RTCCLK / 256 (1281Hz when RTCCLK = 327681Hz) (value: 7)
     */
        /** @brief RTCCLK / 32768 (11Hz when RTCCLK = 327681Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x0 = 0;
        /** @brief RTCCLK / 16384 (21Hz when RTCCLK = 327681Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x1 = 1;
        /** @brief RTCCLK / 8192 (41Hz when RTCCLK = 327681Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x2 = 2;
        /** @brief RTCCLK / 4096 (81Hz when RTCCLK = 327681Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x3 = 3;
        /** @brief RTCCLK / 2048 (161Hz when RTCCLK = 327681Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x4 = 4;
        /** @brief RTCCLK / 1024 (321Hz when RTCCLK = 327681Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x5 = 5;
        /** @brief RTCCLK / 512 (641Hz when RTCCLK = 327681Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x6 = 6;
        /** @brief RTCCLK / 256 (1281Hz when RTCCLK = 327681Hz) */
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

    /** @brief Internal tamper 4 interrupt enable */
    using TAMP_IER_ITAMP4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 4 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 4 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 4 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP4IE_B_0x0 = 0;
        /** @brief Internal tamper 4 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP4IE_B_0x1 = 1;

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
    /** @brief Internal tamper 3 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 3. */
    using TAMP_SR_ITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 4 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 4. */
    using TAMP_SR_ITAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 5 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 5. */
    using TAMP_SR_ITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 6 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 6. */
    using TAMP_SR_ITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP masked interrupt status register */
    using TAMP_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 interrupt masked flag This flag is set by hardware when the tamper 1 interrupt is raised. */
    using TAMP_MISR_TAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 interrupt masked flag This flag is set by hardware when the tamper 2 interrupt is raised. */
    using TAMP_MISR_TAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 interrupt masked flag This flag is set by hardware when the tamper 3 interrupt is raised. */
    using TAMP_MISR_TAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP4 interrupt masked flag This flag is set by hardware when the tamper 4 interrupt is raised. */
    using TAMP_MISR_TAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP5 interrupt masked flag This flag is set by hardware when the tamper 5 interrupt is raised. */
    using TAMP_MISR_TAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 3 interrupt masked flag This flag is set by hardware when the internal tamper 3 interrupt is raised. */
    using TAMP_MISR_ITAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 4 interrupt masked flag This flag is set by hardware when the internal tamper 4 interrupt is raised. */
    using TAMP_MISR_ITAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 5 interrupt masked flag This flag is set by hardware when the internal tamper 5 interrupt is raised. */
    using TAMP_MISR_ITAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 6 interrupt masked flag This flag is set by hardware when the internal tamper 6 interrupt is raised. */
    using TAMP_MISR_ITAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Clear ITAMP3 detection flag Writing 1 in this bit clears the ITAMP3F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP4 detection flag Writing 1 in this bit clears the ITAMP4F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP5 detection flag Writing 1 in this bit clears the ITAMP5F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP6 detection flag Writing 1 in this bit clears the ITAMP6F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
}

#endif
