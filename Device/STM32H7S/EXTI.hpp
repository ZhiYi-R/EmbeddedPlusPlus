/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_EXTI_HPP
#define EMBEDDED_PP_STM32H7S_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Extended interrupt and event controller */
namespace STM32H7S::EXTI {

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR0_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR0_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR1_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR1_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR2_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR2_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR3_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR3_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR4_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR4_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR5_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR5_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR6_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR6_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR7_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR7_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR8_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR8_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR9_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR9_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR10_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR10_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR11_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR11_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR12_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR12_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR13_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR13_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR14_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR14_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR15_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR15_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR16_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR16_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR17_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR17_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR18_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR18_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR19_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR19_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR20_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR20_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x. */
    using EXTI_RTSR1_TR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR21_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_TR21_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR0_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR0_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR1_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR1_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR2_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR2_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR3_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR3_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR4_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR4_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR5_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR5_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR6_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR6_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR7_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR7_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR8_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR8_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR9_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR9_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR10_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR10_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR11_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR11_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR12_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR12_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR13_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR13_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR14_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR14_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR15_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR15_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR16_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR16_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR17_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR17_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR18_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR18_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR19_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR19_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR20_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR20_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x. */
    using EXTI_FTSR1_TR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_TR21_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_TR21_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER0_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER0_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER1_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER1_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER2_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER2_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER3_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER3_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER4_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER4_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER5_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER5_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER6_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER6_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER7_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER7_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER8_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER8_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER9_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER9_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER10_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER10_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER11_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER11_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER12_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER12_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER13_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER13_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER14_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER14_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER15_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER15_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER16_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER16_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER17_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER17_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER18_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER18_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER19_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER19_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER20_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER20_B_0x1 = 1;

    /** @brief Software interrupt on line x This bitfield alway returns 0 when read. */
    using EXTI_SWIER1_SWIER21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER21_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER1_SWIER21_B_0x1 = 1;

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x+32.<sup>(1)</sup> */
    using EXTI_RTSR2_TR34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR34_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR34_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x+32.<sup>(1)</sup> */
    using EXTI_RTSR2_TR46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR46_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR46_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x+32.<sup>(1)</sup> */
    using EXTI_RTSR2_TR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR49_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR49_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x+32.<sup>(1)</sup> */
    using EXTI_RTSR2_TR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR51_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR51_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x+32. */
    using EXTI_RTSR2_TR54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR54_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_TR54_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x+32.<sup>(1)</sup> */
    using EXTI_FTSR2_TR34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR34_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR34_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x+32.<sup>(1)</sup> */
    using EXTI_FTSR2_TR46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR46_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR46_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x+32.<sup>(1)</sup> */
    using EXTI_FTSR2_TR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR49_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR49_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x+32.<sup>(1)</sup> */
    using EXTI_FTSR2_TR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR51_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR51_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x+32. */
    using EXTI_FTSR2_TR54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR54_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_TR54_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x+32 Always returns 0 when read. */
    using EXTI_SWIER2_SWIER34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER34_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER34_B_0x1 = 1;

    /** @brief Software interrupt on line x+32 Always returns 0 when read. */
    using EXTI_SWIER2_SWIER46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER46_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER46_B_0x1 = 1;

    /** @brief Software interrupt on line x+32 Always returns 0 when read. */
    using EXTI_SWIER2_SWIER49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER49_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER49_B_0x1 = 1;

    /** @brief Software interrupt on line x+32 Always returns 0 when read. */
    using EXTI_SWIER2_SWIER51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER51_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER51_B_0x1 = 1;

    /** @brief Software interrupt on line x+32 Always returns 0 when read. */
    using EXTI_SWIER2_SWIER54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER54_B_0x0 = 0;
        /** @brief Writing a 1 to this bit triggers an event on line x. This bit is auto cleared by HW. */
    constexpr std::uint32_t EXTI_SWIER2_SWIER54_B_0x1 = 1;

    /** @brief EXTI interrupt mask register */
    using EXTI_IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR0_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR0_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR1_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR1_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR2_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR2_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR3_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR3_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR4_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR4_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR5_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR5_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR6_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR6_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR7_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR7_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR8_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR8_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR9_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR9_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR10_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR10_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR11_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR11_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR12_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR12_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR13_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR13_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR14_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR14_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR15_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR15_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR16_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR16_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR17_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR17_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR18_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR18_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR19_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR19_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR20_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR20_B_0x1 = 1;

    /** @brief CPU interrupt mask on configurable event input x */
    using EXTI_IMR1_MR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR21_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR21_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR22_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR22_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR23_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR23_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR24_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR24_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR25_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR25_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR26_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR26_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR27_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR27_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR28_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR28_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR29_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR29_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR30_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR30_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input x */
    using EXTI_IMR1_MR31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR1_MR31_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR1_MR31_B_0x1 = 1;

    /** @brief EXTI event mask register */
    using EXTI_EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR0_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR0_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR1_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR1_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR2_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR2_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR3_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR3_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR4_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR4_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR5_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR5_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR6_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR6_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR7_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR7_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR8_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR8_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR9_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR9_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR10_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR10_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR11_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR11_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR12_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR12_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR13_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR13_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR14_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR14_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR15_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR15_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR16_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR16_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR17_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR17_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR18_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR18_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR19_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR19_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR20_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR20_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR21_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR21_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR22_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR22_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR23_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR23_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR24_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR24_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR25_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR25_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR26_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR26_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR27_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR27_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR28_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR28_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR29_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR29_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR30_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR30_B_0x1 = 1;

    /** @brief CPU event mask on event input x */
    using EXTI_EMR1_MR31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR1_MR31_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR1_MR31_B_0x1 = 1;

    /** @brief EXTI pending register */
    using EXTI_PR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR0_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR0_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR1_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR1_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR2_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR2_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR3_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR3_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR4_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR4_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR5_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR5_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR6_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR6_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR7_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR7_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR8_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR8_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR9_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR9_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR10_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR10_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR11_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR11_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR12_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR12_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR13_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR13_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR14_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR14_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR15_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR15_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR16_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR16_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR17_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR17_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR18_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR18_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR19_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR19_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR20_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR20_B_0x1 = 1;

    /** @brief Configurable event inputs x Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR1_PR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR21_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR1_PR21_B_0x1 = 1;

    /** @brief EXTI interrupt mask register */
    using EXTI_IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR32_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR32_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR33_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR33_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR34_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR34_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR35_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR35_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR36_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR36_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR37_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR37_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR38_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR38_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR39_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR39_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR40_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR40_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR41_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR41_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR42_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR42_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR43_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR43_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR44_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR44_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR45_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR45_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR46_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR46_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR47_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR47_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR48_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR48_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR49_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR49_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR50_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR50_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR51_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR51_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR52_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR52_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR53_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR53_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR54_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR54_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR55_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR55_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR56_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR56_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR57_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR57_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR58_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR58_B_0x1 = 1;

    /** @brief CPU interrupt mask on direct event input i */
    using EXTI_IMR2_MR59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR2_MR59_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR2_MR59_B_0x1 = 1;

    /** @brief EXTI event mask register */
    using EXTI_EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 32 is masked (value: 0)
     *          - B_0x1: Event request from line 32 is unmasked (value: 1)
     */
        /** @brief Event request from line 32 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR32_B_0x0 = 0;
        /** @brief Event request from line 32 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR32_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 33 is masked (value: 0)
     *          - B_0x1: Event request from line 33 is unmasked (value: 1)
     */
        /** @brief Event request from line 33 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR33_B_0x0 = 0;
        /** @brief Event request from line 33 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR33_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 34 is masked (value: 0)
     *          - B_0x1: Event request from line 34 is unmasked (value: 1)
     */
        /** @brief Event request from line 34 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR34_B_0x0 = 0;
        /** @brief Event request from line 34 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR34_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 35 is masked (value: 0)
     *          - B_0x1: Event request from line 35 is unmasked (value: 1)
     */
        /** @brief Event request from line 35 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR35_B_0x0 = 0;
        /** @brief Event request from line 35 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR35_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 36 is masked (value: 0)
     *          - B_0x1: Event request from line 36 is unmasked (value: 1)
     */
        /** @brief Event request from line 36 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR36_B_0x0 = 0;
        /** @brief Event request from line 36 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR36_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 37 is masked (value: 0)
     *          - B_0x1: Event request from line 37 is unmasked (value: 1)
     */
        /** @brief Event request from line 37 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR37_B_0x0 = 0;
        /** @brief Event request from line 37 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR37_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 38 is masked (value: 0)
     *          - B_0x1: Event request from line 38 is unmasked (value: 1)
     */
        /** @brief Event request from line 38 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR38_B_0x0 = 0;
        /** @brief Event request from line 38 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR38_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 39 is masked (value: 0)
     *          - B_0x1: Event request from line 39 is unmasked (value: 1)
     */
        /** @brief Event request from line 39 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR39_B_0x0 = 0;
        /** @brief Event request from line 39 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR39_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 40 is masked (value: 0)
     *          - B_0x1: Event request from line 40 is unmasked (value: 1)
     */
        /** @brief Event request from line 40 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR40_B_0x0 = 0;
        /** @brief Event request from line 40 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR40_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 41 is masked (value: 0)
     *          - B_0x1: Event request from line 41 is unmasked (value: 1)
     */
        /** @brief Event request from line 41 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR41_B_0x0 = 0;
        /** @brief Event request from line 41 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR41_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 42 is masked (value: 0)
     *          - B_0x1: Event request from line 42 is unmasked (value: 1)
     */
        /** @brief Event request from line 42 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR42_B_0x0 = 0;
        /** @brief Event request from line 42 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR42_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 43 is masked (value: 0)
     *          - B_0x1: Event request from line 43 is unmasked (value: 1)
     */
        /** @brief Event request from line 43 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR43_B_0x0 = 0;
        /** @brief Event request from line 43 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR43_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 44 is masked (value: 0)
     *          - B_0x1: Event request from line 44 is unmasked (value: 1)
     */
        /** @brief Event request from line 44 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR44_B_0x0 = 0;
        /** @brief Event request from line 44 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR44_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 45 is masked (value: 0)
     *          - B_0x1: Event request from line 45 is unmasked (value: 1)
     */
        /** @brief Event request from line 45 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR45_B_0x0 = 0;
        /** @brief Event request from line 45 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR45_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 46 is masked (value: 0)
     *          - B_0x1: Event request from line 46 is unmasked (value: 1)
     */
        /** @brief Event request from line 46 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR46_B_0x0 = 0;
        /** @brief Event request from line 46 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR46_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 47 is masked (value: 0)
     *          - B_0x1: Event request from line 47 is unmasked (value: 1)
     */
        /** @brief Event request from line 47 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR47_B_0x0 = 0;
        /** @brief Event request from line 47 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR47_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 48 is masked (value: 0)
     *          - B_0x1: Event request from line 48 is unmasked (value: 1)
     */
        /** @brief Event request from line 48 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR48_B_0x0 = 0;
        /** @brief Event request from line 48 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR48_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 49 is masked (value: 0)
     *          - B_0x1: Event request from line 49 is unmasked (value: 1)
     */
        /** @brief Event request from line 49 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR49_B_0x0 = 0;
        /** @brief Event request from line 49 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR49_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 50 is masked (value: 0)
     *          - B_0x1: Event request from line 50 is unmasked (value: 1)
     */
        /** @brief Event request from line 50 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR50_B_0x0 = 0;
        /** @brief Event request from line 50 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR50_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 51 is masked (value: 0)
     *          - B_0x1: Event request from line 51 is unmasked (value: 1)
     */
        /** @brief Event request from line 51 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR51_B_0x0 = 0;
        /** @brief Event request from line 51 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR51_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 52 is masked (value: 0)
     *          - B_0x1: Event request from line 52 is unmasked (value: 1)
     */
        /** @brief Event request from line 52 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR52_B_0x0 = 0;
        /** @brief Event request from line 52 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR52_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 53 is masked (value: 0)
     *          - B_0x1: Event request from line 53 is unmasked (value: 1)
     */
        /** @brief Event request from line 53 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR53_B_0x0 = 0;
        /** @brief Event request from line 53 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR53_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 54 is masked (value: 0)
     *          - B_0x1: Event request from line 54 is unmasked (value: 1)
     */
        /** @brief Event request from line 54 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR54_B_0x0 = 0;
        /** @brief Event request from line 54 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR54_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 55 is masked (value: 0)
     *          - B_0x1: Event request from line 55 is unmasked (value: 1)
     */
        /** @brief Event request from line 55 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR55_B_0x0 = 0;
        /** @brief Event request from line 55 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR55_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 56 is masked (value: 0)
     *          - B_0x1: Event request from line 56 is unmasked (value: 1)
     */
        /** @brief Event request from line 56 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR56_B_0x0 = 0;
        /** @brief Event request from line 56 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR56_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 57 is masked (value: 0)
     *          - B_0x1: Event request from line 57 is unmasked (value: 1)
     */
        /** @brief Event request from line 57 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR57_B_0x0 = 0;
        /** @brief Event request from line 57 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR57_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 58 is masked (value: 0)
     *          - B_0x1: Event request from line 58 is unmasked (value: 1)
     */
        /** @brief Event request from line 58 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR58_B_0x0 = 0;
        /** @brief Event request from line 58 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR58_B_0x1 = 1;

    /** @brief CPU event mask on event input i */
    using EXTI_EMR2_MR59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 59 is masked (value: 0)
     *          - B_0x1: Event request from line 59 is unmasked (value: 1)
     */
        /** @brief Event request from line 59 is masked */
    constexpr std::uint32_t EXTI_EMR2_MR59_B_0x0 = 0;
        /** @brief Event request from line 59 is unmasked */
    constexpr std::uint32_t EXTI_EMR2_MR59_B_0x1 = 1;

    /** @brief EXTI pending register */
    using EXTI_PR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+32 Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR2_PR34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR34_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR34_B_0x1 = 1;

    /** @brief Configurable event inputs x+32 Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR2_PR46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR46_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR46_B_0x1 = 1;

    /** @brief Configurable event inputs x+32 Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR2_PR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR49_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR49_B_0x1 = 1;

    /** @brief Configurable event inputs x+32 Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR2_PR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR51_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR51_B_0x1 = 1;

    /** @brief Configurable event inputs x+32 Pending bit This bit is set when the selected edge event arrives on the external interrupt line. This bit is cleared by writing a 1 into the bit or by changing the sensitivity of the edge detector. */
    using EXTI_PR2_PR54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred (value: 0)
     *          - B_0x1: selected trigger request occurred (value: 1)
     */
        /** @brief No trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR54_B_0x0 = 0;
        /** @brief selected trigger request occurred */
    constexpr std::uint32_t EXTI_PR2_PR54_B_0x1 = 1;

    /** @brief EXTI interrupt mask register */
    using EXTI_IMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU interrupt mask on direct event input x+64 */
    using EXTI_IMR3_MR77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt request from line x is masked (value: 0)
     *          - B_0x1: Interrupt request from line x is unmasked (value: 1)
     */
        /** @brief Interrupt request from line x is masked */
    constexpr std::uint32_t EXTI_IMR3_MR77_B_0x0 = 0;
        /** @brief Interrupt request from line x is unmasked */
    constexpr std::uint32_t EXTI_IMR3_MR77_B_0x1 = 1;

    /** @brief EXTI event mask register */
    using EXTI_EMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU event mask on event input x+64 */
    using EXTI_EMR3_MR77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line x is masked (value: 0)
     *          - B_0x1: Event request from line x is unmasked (value: 1)
     */
        /** @brief Event request from line x is masked */
    constexpr std::uint32_t EXTI_EMR3_MR77_B_0x0 = 0;
        /** @brief Event request from line x is unmasked */
    constexpr std::uint32_t EXTI_EMR3_MR77_B_0x1 = 1;

}

#endif
