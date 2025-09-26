/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H735_EXTI_HPP
#define EMBEDDED_PP_STM32H735_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief External interrupt/event controller */
namespace STM32H735::EXTI {

    /** @brief EXTI rising trigger selection register */
    using RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_TR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI falling trigger selection register */
    using FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using FTSR1_TR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI software interrupt event register */
    using SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using SWIER1_SWIER21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI D3 pending mask register */
    using D3PMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using D3PMR1_MR25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI D3 pending clear selection register low */
    using D3PCR1L = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate (n/2) */
    using D3PCR1L_PCS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI D3 pending clear selection register high */
    using D3PCR1H = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2) */
    using D3PCR1H_PCS19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2) */
    using D3PCR1H_PCS20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2) */
    using D3PCR1H_PCS21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2) */
    using D3PCR1H_PCS25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI rising trigger selection register */
    using RTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input x+32 */
    using RTSR2_TR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input x+32 */
    using RTSR2_TR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI falling trigger selection register */
    using FTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input x+32 */
    using FTSR2_TR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input x+32 */
    using FTSR2_TR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI software interrupt event register */
    using SWIER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x+32 */
    using SWIER2_SWIER49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x+32 */
    using SWIER2_SWIER51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI D3 pending mask register */
    using D3PMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+32 */
    using D3PMR2_MR53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI D3 pending clear selection register low */
    using D3PCR2L = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2) */
    using D3PCR2L_PCS35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2) */
    using D3PCR2L_PCS34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2) */
    using D3PCR2L_PCS41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI D3 pending clear selection register high */
    using D3PCR2H = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pending request clear input signal selection on Event input x= truncate ((n+96)/2) */
    using D3PCR2H_PCS48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pending request clear input signal selection on Event input x= truncate ((n+96)/2) */
    using D3PCR2H_PCS49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pending request clear input signal selection on Event input x= truncate ((n+96)/2) */
    using D3PCR2H_PCS50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pending request clear input signal selection on Event input x= truncate ((n+96)/2) */
    using D3PCR2H_PCS51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pending request clear input signal selection on Event input x= truncate ((n+96)/2) */
    using D3PCR2H_PCS52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pending request clear input signal selection on Event input x= truncate ((n+96)/2) */
    using D3PCR2H_PCS53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI rising trigger selection register */
    using RTSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input x+64 */
    using RTSR3_TR82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input x+64 */
    using RTSR3_TR84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input x+64 */
    using RTSR3_TR85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input x+64 */
    using RTSR3_TR86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI falling trigger selection register */
    using FTSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input x+64 */
    using FTSR3_TR82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input x+64 */
    using FTSR3_TR84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input x+64 */
    using FTSR3_TR85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input x+64 */
    using FTSR3_TR86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI software interrupt event register */
    using SWIER3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x+64 */
    using SWIER3_SWIER82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x+64 */
    using SWIER3_SWIER84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x+64 */
    using SWIER3_SWIER85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x+64 */
    using SWIER3_SWIER86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI D3 pending mask register */
    using D3PMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending Mask on Event input x+64 */
    using D3PMR3_MR88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI D3 pending clear selection register high */
    using D3PCR3H = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 Pending request clear input signal selection on Event input x= truncate N+160/2 */
    using D3PCR3H_PCS88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI interrupt mask register */
    using CPUIMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using CPUIMR1_MR31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI event mask register */
    using CPUEMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUEMR1_MR31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI pending register */
    using CPUPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x */
    using CPUPR1_PR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI interrupt mask register */
    using CPUIMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUIMR2_MR31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI event mask register */
    using CPUEMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+32 */
    using CPUEMR2_MR63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI pending register */
    using CPUPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+32 Pending bit */
    using CPUPR2_PR49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+32 Pending bit */
    using CPUPR2_PR51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI interrupt mask register */
    using CPUIMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Interrupt Mask on Direct Event input x+64 */
    using CPUIMR3_MR88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI event mask register */
    using CPUEMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Event mask on Event input x+64 */
    using CPUEMR3_MR88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI pending register */
    using CPUPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+64 Pending bit */
    using CPUPR3_PR82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+64 Pending bit */
    using CPUPR3_PR84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+64 Pending bit */
    using CPUPR3_PR85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+64 Pending bit */
    using CPUPR3_PR86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
