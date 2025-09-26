/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_TAMP_S_HPP
#define EMBEDDED_PP_STM32N655_TAMP_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Tamper and backup registers */
namespace STM32N655::TAMP_S {

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

    /** @brief Tamper detection on TAMP_IN2 enableless thansup>(1)less than/sup> */
    using TAMP_CR1_TAMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN2 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN2 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN2 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP2E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN2 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP2E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN3 enableless thansup>(1)less than/sup> */
    using TAMP_CR1_TAMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN3 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN3 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN3 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP3E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN3 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP3E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN4 enableless thansup>(1)less than/sup> */
    using TAMP_CR1_TAMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN4 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN4 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN4 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP4E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN4 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP4E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN5 enableless thansup>(1)less than/sup> */
    using TAMP_CR1_TAMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN5 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN5 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN5 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP5E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN5 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP5E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN6 enableless thansup>(1)less than/sup> */
    using TAMP_CR1_TAMP6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN6 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN6 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN6 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP6E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN6 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP6E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN7 enableless thansup>(1)less than/sup> */
    using TAMP_CR1_TAMP7E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN7 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN7 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN7 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP7E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN7 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP7E_B_0x1 = 1;

    /** @brief Internal tamper 1 enable */
    using TAMP_CR1_ITAMP1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 1 disabled. (value: 0)
     *          - B_0x1: Internal tamper 1 enabled. (value: 1)
     */
        /** @brief Internal tamper 1 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP1E_B_0x0 = 0;
        /** @brief Internal tamper 1 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP1E_B_0x1 = 1;

    /** @brief Internal tamper 2 enable */
    using TAMP_CR1_ITAMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 2 disabled. (value: 0)
     *          - B_0x1: Internal tamper 2 enabled. (value: 1)
     */
        /** @brief Internal tamper 2 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP2E_B_0x0 = 0;
        /** @brief Internal tamper 2 enabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP2E_B_0x1 = 1;

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
     *          - B_0x0: Tamper 2 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Tamper 2 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Tamper 2 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP2POM_B_0x0 = 0;
        /** @brief Tamper 2 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP2POM_B_0x1 = 1;

    /** @brief Tamper 3 potential mode */
    using TAMP_CR2_TAMP3POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Tamper 3 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Tamper 3 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP3POM_B_0x0 = 0;
        /** @brief Tamper 3 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP3POM_B_0x1 = 1;

    /** @brief Tamper 4 potential mode */
    using TAMP_CR2_TAMP4POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 4 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Tamper 4 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Tamper 4 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP4POM_B_0x0 = 0;
        /** @brief Tamper 4 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP4POM_B_0x1 = 1;

    /** @brief Tamper 5 potential mode */
    using TAMP_CR2_TAMP5POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 5 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Tamper 5 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Tamper 5 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP5POM_B_0x0 = 0;
        /** @brief Tamper 5 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP5POM_B_0x1 = 1;

    /** @brief Tamper 6 potential mode */
    using TAMP_CR2_TAMP6POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 6 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Tamper 6 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Tamper 6 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP6POM_B_0x0 = 0;
        /** @brief Tamper 6 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP6POM_B_0x1 = 1;

    /** @brief Tamper 7 potential mode */
    using TAMP_CR2_TAMP7POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 7 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Tamper 7 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Tamper 7 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP7POM_B_0x0 = 0;
        /** @brief Tamper 7 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR2_TAMP7POM_B_0x1 = 1;

    /** @brief Tamper 1 mask */
    using TAMP_CR2_TAMP1MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 event generates a trigger event and TAMP1F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers and device secretsless thansup>(1)less than/sup> are not erased. (value: 1)
     */
        /** @brief Tamper 1 event generates a trigger event and TAMP1F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP1MSK_B_0x0 = 0;
        /** @brief Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers and device secretsless thansup>(1)less than/sup> are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP1MSK_B_0x1 = 1;

    /** @brief Tamper 2 mask */
    using TAMP_CR2_TAMP2MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 event generates a trigger event and TAMP2F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers and device secretsless thansup>(1)less than/sup> are not erased. (value: 1)
     */
        /** @brief Tamper 2 event generates a trigger event and TAMP2F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP2MSK_B_0x0 = 0;
        /** @brief Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers and device secretsless thansup>(1)less than/sup> are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP2MSK_B_0x1 = 1;

    /** @brief Tamper 3 mask */
    using TAMP_CR2_TAMP3MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 event generates a trigger event and TAMP3F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers and device secretsless thansup>(1)less than/sup> are not erased. (value: 1)
     */
        /** @brief Tamper 3 event generates a trigger event and TAMP3F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP3MSK_B_0x0 = 0;
        /** @brief Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers and device secretsless thansup>(1)less than/sup> are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP3MSK_B_0x1 = 1;

    /** @brief Backup registers and device secretsless thansup>(1)less than/sup> access blocked */
    using TAMP_CR2_BKBLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: backup registers and device secretsless thansup>(1)less than/sup> can be accessed if no tamper flag is set (value: 0)
     *          - B_0x1: backup registers and device secretsless thansup>(1)less than/sup> cannot be accessed (value: 1)
     */
        /** @brief backup registers and device secretsless thansup>(1)less than/sup> can be accessed if no tamper flag is set */
    constexpr std::uint32_t TAMP_CR2_BKBLOCK_B_0x0 = 0;
        /** @brief backup registers and device secretsless thansup>(1)less than/sup> cannot be accessed */
    constexpr std::uint32_t TAMP_CR2_BKBLOCK_B_0x1 = 1;

    /** @brief Backup registers and device secretsless thansup>(1)less than/sup> erase */
    using TAMP_CR2_BKERASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active level for tamper 1 input */
    using TAMP_CR2_TAMP1TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different to 00 tamper 1 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different to 00 tamper 1 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different to 00 tamper 1 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different to 00 tamper 1 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x1 = 1;

    /** @brief Active level for tamper 2 input */
    using TAMP_CR2_TAMP2TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different to 00 tamper 2 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different to 00 tamper 2 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different to 00 tamper 2 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different to 00 tamper 2 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x1 = 1;

    /** @brief Active level for tamper 3 input */
    using TAMP_CR2_TAMP3TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different to 00 tamper 3 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different to 00 tamper 3 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different to 00 tamper 3 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP3TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different to 00 tamper 3 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP3TRG_B_0x1 = 1;

    /** @brief Active level for tamper 4 input (active mode disabled) */
    using TAMP_CR2_TAMP4TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different to 00 tamper 4 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different to 00 tamper 4 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different to 00 tamper 4 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP4TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different to 00 tamper 4 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP4TRG_B_0x1 = 1;

    /** @brief Active level for tamper 5 input (active mode disabled) */
    using TAMP_CR2_TAMP5TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different to 00 tamper 5 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different to 00 tamper 5 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different to 00 tamper 5 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP5TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different to 00 tamper 5 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP5TRG_B_0x1 = 1;

    /** @brief Active level for tamper 6 input (active mode disabled) */
    using TAMP_CR2_TAMP6TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different to 00 tamper 6 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different to 00 tamper 6 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different to 00 tamper 6 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP6TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different to 00 tamper 6 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP6TRG_B_0x1 = 1;

    /** @brief Active level for tamper 7 input (active mode disabled) */
    using TAMP_CR2_TAMP7TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different to 00 tamper 7 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different to 00 tamper 7 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different to 00 tamper 7 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP7TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different to 00 tamper 7 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP7TRG_B_0x1 = 1;

    /** @brief TAMP control register 3 */
    using TAMP_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 1 potential mode */
    using TAMP_CR3_ITAMP1POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 1 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 1 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 1 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP1POM_B_0x0 = 0;
        /** @brief Internal tamper 1 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP1POM_B_0x1 = 1;

    /** @brief Internal tamper 2 potential mode */
    using TAMP_CR3_ITAMP2POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 2 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 2 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 2 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP2POM_B_0x0 = 0;
        /** @brief Internal tamper 2 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP2POM_B_0x1 = 1;

    /** @brief Internal tamper 3 potential mode */
    using TAMP_CR3_ITAMP3POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 3 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 3 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 3 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP3POM_B_0x0 = 0;
        /** @brief Internal tamper 3 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP3POM_B_0x1 = 1;

    /** @brief Internal tamper 4 potential mode */
    using TAMP_CR3_ITAMP4POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 4 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 4 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 4 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP4POM_B_0x0 = 0;
        /** @brief Internal tamper 4 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP4POM_B_0x1 = 1;

    /** @brief Internal tamper 5 potential mode */
    using TAMP_CR3_ITAMP5POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 5 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 5 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 5 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP5POM_B_0x0 = 0;
        /** @brief Internal tamper 5 event detection is in potential modeless thansup>(2)less than/sup>. */
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

    /** @brief Internal tamper 7 potential mode */
    using TAMP_CR3_ITAMP7POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 7 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 7 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 7 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP7POM_B_0x0 = 0;
        /** @brief Internal tamper 7 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP7POM_B_0x1 = 1;

    /** @brief Internal tamper 8 potential mode */
    using TAMP_CR3_ITAMP8POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 8 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 8 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 8 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP8POM_B_0x0 = 0;
        /** @brief Internal tamper 8 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP8POM_B_0x1 = 1;

    /** @brief Internal tamper 9 potential mode */
    using TAMP_CR3_ITAMP9POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 9 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 9 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 9 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP9POM_B_0x0 = 0;
        /** @brief Internal tamper 9 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP9POM_B_0x1 = 1;

    /** @brief Internal tamper 11 potential mode */
    using TAMP_CR3_ITAMP11POM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 11 event detection is in confirmed modeless thansup>(1)less than/sup>. (value: 0)
     *          - B_0x1: Internal tamper 11 event detection is in potential modeless thansup>(2)less than/sup>. (value: 1)
     */
        /** @brief Internal tamper 11 event detection is in confirmed modeless thansup>(1)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP11POM_B_0x0 = 0;
        /** @brief Internal tamper 11 event detection is in potential modeless thansup>(2)less than/sup>. */
    constexpr std::uint32_t TAMP_CR3_ITAMP11POM_B_0x1 = 1;

    /** @brief TAMP filter control register */
    using TAMP_FLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper sampling frequency */
    using TAMP_FLTCR_TAMPFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTCCLK / 32768 (1 Hz when RTCCLK = 32768 Hz) (value: 0)
     *          - B_0x1: RTCCLK / 16384 (2 Hz when RTCCLK = 32768 Hz) (value: 1)
     *          - B_0x2: RTCCLK / 8192 (4 Hz when RTCCLK = 32768 Hz) (value: 2)
     *          - B_0x3: RTCCLK / 4096 (8 Hz when RTCCLK = 32768 Hz) (value: 3)
     *          - B_0x4: RTCCLK / 2048 (16 Hz when RTCCLK = 32768 Hz) (value: 4)
     *          - B_0x5: RTCCLK / 1024 (32 Hz when RTCCLK = 32768 Hz) (value: 5)
     *          - B_0x6: RTCCLK / 512 (64 Hz when RTCCLK = 32768 Hz) (value: 6)
     *          - B_0x7: RTCCLK / 256 (128 Hz when RTCCLK = 32768 Hz) (value: 7)
     */
        /** @brief RTCCLK / 32768 (1 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x0 = 0;
        /** @brief RTCCLK / 16384 (2 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x1 = 1;
        /** @brief RTCCLK / 8192 (4 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x2 = 2;
        /** @brief RTCCLK / 4096 (8 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x3 = 3;
        /** @brief RTCCLK / 2048 (16 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x4 = 4;
        /** @brief RTCCLK / 1024 (32 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x5 = 5;
        /** @brief RTCCLK / 512 (64 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x6 = 6;
        /** @brief RTCCLK / 256 (128 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x7 = 7;

    /** @brief TAMP_INx filter count */
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

    /** @brief TAMP_INx precharge duration */
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

    /** @brief TAMP_INx pull-up disable */
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

    /** @brief Tamper 7 active mode */
    using TAMP_ATCR1_TAMP7AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 7 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 7 detection mode is active. (value: 1)
     */
        /** @brief Tamper 7 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP7AM_B_0x0 = 0;
        /** @brief Tamper 7 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP7AM_B_0x1 = 1;

    /** @brief Active tamper shared output 1 selection */
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

    /** @brief Active tamper shared output 2 selection */
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

    /** @brief Active tamper shared output 3 selection */
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

    /** @brief Active tamper shared output 4 selection */
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

    /** @brief Active tamper RTC asynchronous prescaler clock selection */
    using TAMP_ATCR1_ATCKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper output change period */
    using TAMP_ATCR1_ATPER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper output sharing */
    using TAMP_ATCR1_ATOSHARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Each active tamper input TAMP_INi is compared with its dedicated output TAMP_OUTi (value: 0)
     *          - B_0x1: Each active tamper input TAMP_INi is compared with TAMPOUTSELi defined by ATOSELi bits. (value: 1)
     */
        /** @brief Each active tamper input TAMP_INi is compared with its dedicated output TAMP_OUTi */
    constexpr std::uint32_t TAMP_ATCR1_ATOSHARE_B_0x0 = 0;
        /** @brief Each active tamper input TAMP_INi is compared with TAMPOUTSELi defined by ATOSELi bits. */
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
    /** @brief Pseudo-random generator seed value */
    using TAMP_ATSEEDR_SEED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP active tamper output register */
    using TAMP_ATOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pseudo-random generator value */
    using TAMP_ATOR_PRNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Seed running flag */
    using TAMP_ATOR_SEEDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper initialization status */
    using TAMP_ATOR_INITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP active tamper control register 2 */
    using TAMP_ATCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper shared output 1 selection */
    using TAMP_ATCR2_ATOSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL1 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL1 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL1 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL1 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL1 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL1 = TAMP_OUT6 (value: 5)
     *          - B_0x6: TAMPOUTSEL1 = TAMP_OUT7 (value: 6)
     *          - B_0x7: TAMPOUTSEL1 = TAMP_OUT8 (value: 7)
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
        /** @brief TAMPOUTSEL1 = TAMP_OUT7 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL1_B_0x6 = 6;
        /** @brief TAMPOUTSEL1 = TAMP_OUT8 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL1_B_0x7 = 7;

    /** @brief Active tamper shared output 2 selection */
    using TAMP_ATCR2_ATOSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL2 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL2 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL2 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL2 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL2 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL2 = TAMP_OUT6 (value: 5)
     *          - B_0x6: TAMPOUTSEL2 = TAMP_OUT7 (value: 6)
     *          - B_0x7: TAMPOUTSEL2 = TAMP_OUT8 (value: 7)
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
        /** @brief TAMPOUTSEL2 = TAMP_OUT7 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL2_B_0x6 = 6;
        /** @brief TAMPOUTSEL2 = TAMP_OUT8 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL2_B_0x7 = 7;

    /** @brief Active tamper shared output 3 selection */
    using TAMP_ATCR2_ATOSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL3 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL3 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL3 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL3 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL3 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL3 = TAMP_OUT6 (value: 5)
     *          - B_0x6: TAMPOUTSEL3 = TAMP_OUT7 (value: 6)
     *          - B_0x7: TAMPOUTSEL3 = TAMP_OUT8 (value: 7)
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
        /** @brief TAMPOUTSEL3 = TAMP_OUT7 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL3_B_0x6 = 6;
        /** @brief TAMPOUTSEL3 = TAMP_OUT8 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL3_B_0x7 = 7;

    /** @brief Active tamper shared output 4 selection */
    using TAMP_ATCR2_ATOSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL4 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL4 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL4 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL4 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL4 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL4 = TAMP_OUT6 (value: 5)
     *          - B_0x6: TAMPOUTSEL4 = TAMP_OUT7 (value: 6)
     *          - B_0x7: TAMPOUTSEL4 = TAMP_OUT8 (value: 7)
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
        /** @brief TAMPOUTSEL4 = TAMP_OUT7 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL4_B_0x6 = 6;
        /** @brief TAMPOUTSEL4 = TAMP_OUT8 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL4_B_0x7 = 7;

    /** @brief Active tamper shared output 5 selection */
    using TAMP_ATCR2_ATOSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL5 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL5 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL5 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL5 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL5 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL5 = TAMP_OUT6 (value: 5)
     *          - B_0x6: TAMPOUTSEL5 = TAMP_OUT7 (value: 6)
     *          - B_0x7: TAMPOUTSEL5 = TAMP_OUT8 (value: 7)
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
        /** @brief TAMPOUTSEL5 = TAMP_OUT7 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL5_B_0x6 = 6;
        /** @brief TAMPOUTSEL5 = TAMP_OUT8 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL5_B_0x7 = 7;

    /** @brief Active tamper shared output 6 selection */
    using TAMP_ATCR2_ATOSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL6 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL6 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL6 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL6 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL6 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL6 = TAMP_OUT6 (value: 5)
     *          - B_0x6: TAMPOUTSEL6 = TAMP_OUT7 (value: 6)
     *          - B_0x7: TAMPOUTSEL6 = TAMP_OUT8 (value: 7)
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
        /** @brief TAMPOUTSEL6 = TAMP_OUT7 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL6_B_0x6 = 6;
        /** @brief TAMPOUTSEL6 = TAMP_OUT8 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL6_B_0x7 = 7;

    /** @brief Active tamper shared output 7 selection */
    using TAMP_ATCR2_ATOSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL7 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL7 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL7 = TAMP_OUT3 (value: 2)
     *          - B_0x3: TAMPOUTSEL7 = TAMP_OUT4 (value: 3)
     *          - B_0x4: TAMPOUTSEL7 = TAMP_OUT5 (value: 4)
     *          - B_0x5: TAMPOUTSEL7 = TAMP_OUT6 (value: 5)
     *          - B_0x6: TAMPOUTSEL7 = TAMP_OUT7 (value: 6)
     *          - B_0x7: TAMPOUTSEL7 = TAMP_OUT8 (value: 7)
     */
        /** @brief TAMPOUTSEL7 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL7_B_0x0 = 0;
        /** @brief TAMPOUTSEL7 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL7_B_0x1 = 1;
        /** @brief TAMPOUTSEL7 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL7_B_0x2 = 2;
        /** @brief TAMPOUTSEL7 = TAMP_OUT4 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL7_B_0x3 = 3;
        /** @brief TAMPOUTSEL7 = TAMP_OUT5 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL7_B_0x4 = 4;
        /** @brief TAMPOUTSEL7 = TAMP_OUT6 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL7_B_0x5 = 5;
        /** @brief TAMPOUTSEL7 = TAMP_OUT7 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL7_B_0x6 = 6;
        /** @brief TAMPOUTSEL7 = TAMP_OUT8 */
    constexpr std::uint32_t TAMP_ATCR2_ATOSEL7_B_0x7 = 7;

    /** @brief TAMP secure configuration register */
    using TAMP_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup registers read/write protection offset */
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

    /** @brief Backup registers write protection offset */
    using TAMP_SECCFGR_BKPWSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Boot hardware key lock */
    using TAMP_SECCFGR_BHKLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The Backup registers from TAMP_BKP0R to TAMP_BKP7R can be accessed according to the Protection zone they belong to. (value: 0)
     *          - B_0x1: The backup registers from TAMP_BKP0R to TAMP_BKP7R cannot be accessed neither in read nor in write (they are read as 0 and write ignore). (value: 1)
     */
        /** @brief The Backup registers from TAMP_BKP0R to TAMP_BKP7R can be accessed according to the Protection zone they belong to. */
    constexpr std::uint32_t TAMP_SECCFGR_BHKLOCK_B_0x0 = 0;
        /** @brief The backup registers from TAMP_BKP0R to TAMP_BKP7R cannot be accessed neither in read nor in write (they are read as 0 and write ignore). */
    constexpr std::uint32_t TAMP_SECCFGR_BHKLOCK_B_0x1 = 1;

    /** @brief Tamper protection (excluding monotonic counters and backup registers) */
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

    /** @brief Tamper privilege protection (excluding backup registers) */
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

    /** @brief Tamper 7interrupt enable */
    using TAMP_IER_TAMP7IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 7 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 7interrupt enabled. (value: 1)
     */
        /** @brief Tamper 7 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP7IE_B_0x0 = 0;
        /** @brief Tamper 7interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_TAMP7IE_B_0x1 = 1;

    /** @brief Internal tamper 1 interrupt enable */
    using TAMP_IER_ITAMP1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 1 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 1 interrupt enabled (value: 1)
     */
        /** @brief Internal tamper 1 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP1IE_B_0x0 = 0;
        /** @brief Internal tamper 1 interrupt enabled */
    constexpr std::uint32_t TAMP_IER_ITAMP1IE_B_0x1 = 1;

    /** @brief Internal tamper 2 interrupt enable */
    using TAMP_IER_ITAMP2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 2 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 2 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 2 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP2IE_B_0x0 = 0;
        /** @brief Internal tamper 2 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP2IE_B_0x1 = 1;

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

    /** @brief TAMP status register */
    using TAMP_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 detection flag */
    using TAMP_SR_TAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 detection flag */
    using TAMP_SR_TAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 detection flag */
    using TAMP_SR_TAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP4 detection flag */
    using TAMP_SR_TAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP5 detection flag */
    using TAMP_SR_TAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP6 detection flag */
    using TAMP_SR_TAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP7 detection flag */
    using TAMP_SR_TAMP7F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 1 flag */
    using TAMP_SR_ITAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 2 flag */
    using TAMP_SR_ITAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 3 flag */
    using TAMP_SR_ITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 4 flag */
    using TAMP_SR_ITAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 5 flag */
    using TAMP_SR_ITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 6 flag */
    using TAMP_SR_ITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 7 flag */
    using TAMP_SR_ITAMP7F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 8 flag */
    using TAMP_SR_ITAMP8F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 9 flag */
    using TAMP_SR_ITAMP9F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 11 flag */
    using TAMP_SR_ITAMP11F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP non-secure masked interrupt status register */
    using TAMP_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 non-secure interrupt masked flag */
    using TAMP_MISR_TAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 non-secure interrupt masked flag */
    using TAMP_MISR_TAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 non-secure interrupt masked flag */
    using TAMP_MISR_TAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP4 non-secure interrupt masked flag */
    using TAMP_MISR_TAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP5 non-secure interrupt masked flag */
    using TAMP_MISR_TAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP6 non-secure interrupt masked flag */
    using TAMP_MISR_TAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP7 non-secure interrupt masked flag */
    using TAMP_MISR_TAMP7MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 1 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 2 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 3 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 4 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 5 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 6 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 7 tamper non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP7MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 8 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP8MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 9 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP9MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 11 non-secure interrupt masked flag */
    using TAMP_MISR_ITAMP11MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP secure masked interrupt status register */
    using TAMP_SMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 secure interrupt masked flag */
    using TAMP_SMISR_TAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 secure interrupt masked flag */
    using TAMP_SMISR_TAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 secure interrupt masked flag */
    using TAMP_SMISR_TAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP4 secure interrupt masked flag */
    using TAMP_SMISR_TAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP5 secure interrupt masked flag */
    using TAMP_SMISR_TAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP6 secure interrupt masked flag */
    using TAMP_SMISR_TAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP7 secure interrupt masked flag */
    using TAMP_SMISR_TAMP7MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 1 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 2 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 3 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 4 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 5 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 6 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 7 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP7MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal tamper 8 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP8MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 9 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP9MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief internal tamper 11 secure interrupt masked flag */
    using TAMP_SMISR_ITAMP11MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP status clear register */
    using TAMP_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP1 detection flag */
    using TAMP_SCR_CTAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP2 detection flag */
    using TAMP_SCR_CTAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP3 detection flag */
    using TAMP_SCR_CTAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP4 detection flag */
    using TAMP_SCR_CTAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP5 detection flag */
    using TAMP_SCR_CTAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP6 detection flag */
    using TAMP_SCR_CTAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP7 detection flag */
    using TAMP_SCR_CTAMP7F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP1 detection flag */
    using TAMP_SCR_CITAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP2 detection flag */
    using TAMP_SCR_CITAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP3 detection flag */
    using TAMP_SCR_CITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP4 detection flag */
    using TAMP_SCR_CITAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP5 detection flag */
    using TAMP_SCR_CITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP6 detection flag */
    using TAMP_SCR_CITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP7 detection flag */
    using TAMP_SCR_CITAMP7F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP8 detection flag */
    using TAMP_SCR_CITAMP8F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP9 detection flag */
    using TAMP_SCR_CITAMP9F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP11 detection flag */
    using TAMP_SCR_CITAMP11F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP monotonic counter 1 register */
    using TAMP_COUNT1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This register is read-only only and is incremented by one when a write access is done to this register. This register cannot roll-over and is frozen when reaching the maximum value. */
    using TAMP_COUNT1R_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP option register */
    using TAMP_OR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>COREless than/sub> monitoring */
    using TAMP_OR_VCOREMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>COREless than/sub> monitoring disable (value: 0)
     *          - B_0x1: Vless thansub>COREless than/sub> monitoring enable (value: 1)
     */
        /** @brief Vless thansub>COREless than/sub> monitoring disable */
    constexpr std::uint32_t TAMP_OR_VCOREMEN_B_0x0 = 0;
        /** @brief Vless thansub>COREless than/sub> monitoring enable */
    constexpr std::uint32_t TAMP_OR_VCOREMEN_B_0x1 = 1;

    /** @brief Boundary scan enable */
    using TAMP_OR_BSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Boundary scan is disabled (value: 0)
     *          - B_0x1: Boundary scan is enabled (value: 1)
     */
        /** @brief Boundary scan is disabled */
    constexpr std::uint32_t TAMP_OR_BSEN_B_0x0 = 0;
        /** @brief Boundary scan is enabled */
    constexpr std::uint32_t TAMP_OR_BSEN_B_0x1 = 1;

    /** @brief TAMP resources protection configuration register */
    using TAMP_RPCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable resource 0 protection */
    using TAMP_RPCFGR_RPCFG0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Resource 0 is not included in the device secrets protected by TAMP peripheral (value: 0)
     *          - B_0x1: Resource 0 is included in the device secrets protected by TAMP peripheral (value: 1)
     */
        /** @brief Resource 0 is not included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_RPCFGR_RPCFG0_B_0x0 = 0;
        /** @brief Resource 0 is included in the device secrets protected by TAMP peripheral */
    constexpr std::uint32_t TAMP_RPCFGR_RPCFG0_B_0x1 = 1;

    /** @brief TAMP backup 0 register */
    using TAMP_BKP0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP0R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 1 register */
    using TAMP_BKP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP1R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 2 register */
    using TAMP_BKP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP2R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 3 register */
    using TAMP_BKP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP3R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 4 register */
    using TAMP_BKP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP4R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 5 register */
    using TAMP_BKP5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP5R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 6 register */
    using TAMP_BKP6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP6R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 7 register */
    using TAMP_BKP7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP7R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 8 register */
    using TAMP_BKP8R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP8R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 9 register */
    using TAMP_BKP9R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP9R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 10 register */
    using TAMP_BKP10R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP10R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 11 register */
    using TAMP_BKP11R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP11R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 12 register */
    using TAMP_BKP12R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP12R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 13 register */
    using TAMP_BKP13R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP13R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 14 register */
    using TAMP_BKP14R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP14R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 15 register */
    using TAMP_BKP15R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP15R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 16 register */
    using TAMP_BKP16R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP16R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 17 register */
    using TAMP_BKP17R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP17R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 18 register */
    using TAMP_BKP18R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP18R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 19 register */
    using TAMP_BKP19R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP19R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 20 register */
    using TAMP_BKP20R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP20R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 21 register */
    using TAMP_BKP21R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP21R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 22 register */
    using TAMP_BKP22R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP22R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 23 register */
    using TAMP_BKP23R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP23R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 24 register */
    using TAMP_BKP24R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP24R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 25 register */
    using TAMP_BKP25R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP25R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 26 register */
    using TAMP_BKP26R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP26R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 27 register */
    using TAMP_BKP27R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP27R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 28 register */
    using TAMP_BKP28R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP28R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 29 register */
    using TAMP_BKP29R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP29R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 30 register */
    using TAMP_BKP30R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP30R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 31 register */
    using TAMP_BKP31R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. */
    using TAMP_BKP31R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
