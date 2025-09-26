/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WLE5_CM4_SYSCFG_CONTINUE_HPP
#define EMBEDDED_PP_STM32WLE5_CM4_SYSCFG_CONTINUE_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System configuration controller */
namespace STM32WLE5_CM4::SYSCFG_continue {

    /** @brief IMR1 */
    using IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI15 interrupt mask to CPU1 */
    using IMR1_EXTI15IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI14 interrupt mask to CPU1 */
    using IMR1_EXTI14IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI13 interrupt mask to CPU1 */
    using IMR1_EXTI13IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI12 interrupt mask to CPU1 */
    using IMR1_EXTI12IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI11 interrupt mask to CPU1 */
    using IMR1_EXTI11IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI10 interrupt mask to CPU1 */
    using IMR1_EXTI10IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI9 interrupt mask to CPU1 */
    using IMR1_EXTI9IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI8 interrupt mask to CPU1 */
    using IMR1_EXTI8IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI7 interrupt mask to CPU1 */
    using IMR1_EXTI7IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI6 interrupt mask to CPU1 */
    using IMR1_EXTI6IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI5 interrupt mask to CPU1 */
    using IMR1_EXTI5IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCSSRUIM */
    using IMR1_RTCSSRUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCSTAMPTAMPLSECSSIM */
    using IMR1_RTCSTAMPTAMPLSECSSIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMR2 */
    using IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral xxx interrupt mask to CPU1 */
    using IMR2_PVDIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral xxx interrupt mask to CPU1 */
    using IMR2_PVM3IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C2IMR1 */
    using C2IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI15 interrupt mask to CPU2 */
    using C2IMR1_EXTI15IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI14 interrupt mask to CPU2 */
    using C2IMR1_EXTI14IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI13 interrupt mask to CPU2 */
    using C2IMR1_EXTI13IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI12 interrupt mask to CPU2 */
    using C2IMR1_EXTI12IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI11 interrupt mask to CPU2 */
    using C2IMR1_EXTI11IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI10 interrupt mask to CPU2 */
    using C2IMR1_EXTI10IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI9 interrupt mask to CPU2 */
    using C2IMR1_EXTI9IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI8 interrupt mask to CPU2 */
    using C2IMR1_EXTI8IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI7 interrupt mask to CPU2 */
    using C2IMR1_EXTI7IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI6 interrupt mask to CPU2 */
    using C2IMR1_EXTI6IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI5 interrupt mask to CPU2 */
    using C2IMR1_EXTI5IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI4 interrupt mask to CPU2 */
    using C2IMR1_EXTI4IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI3 interrupt mask to CPU2 */
    using C2IMR1_EXTI3IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI2 interrupt mask to CPU2 */
    using C2IMR1_EXTI2IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI1 interrupt mask to CPU2 */
    using C2IMR1_EXTI1IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral EXTI0 interrupt mask to CPU2 */
    using C2IMR1_EXTI0IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DAC1 interrupt mask to CPU2 */
    using C2IMR1_DAC1IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral ADC interrupt mask to CPU2 */
    using C2IMR1_ADCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral COMP interrupt mask to CPU2 */
    using C2IMR1_COMPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral FLASH interrupt mask to CPU2 */
    using C2IMR1_FLASHIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral RCC interrupt mask to CPU2 */
    using C2IMR1_RCCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral RTCWKUP interrupt mask to CPU2 */
    using C2IMR1_RTCWKUPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCSSRUIM */
    using C2IMR1_RTCSSRUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral RTCALARM interrupt mask to CPU2 */
    using C2IMR1_RTCALARMIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral RTCSTAMPTAMPLSECSS interrupt mask to CPU2 */
    using C2IMR1_RTCSTAMPTAMPLSECSSIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES1IM */
    using C2IMR1_AES1IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKAIM */
    using C2IMR1_PKAIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C2IMR2 */
    using C2IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral PVD interrupt mask to CPU2 */
    using C2IMR2_PVDIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral PVM3 interrupt mask to CPU2 */
    using C2IMR2_PVM3IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMAMUX1 interrupt mask to CPU2 */
    using C2IMR2_DMAMUX1IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA2CH7 interrupt mask to CPU2 */
    using C2IMR2_DMA2CH7IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA2CH6 interrupt mask to CPU2 */
    using C2IMR2_DMA2CH6IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA2CH5 interrupt mask to CPU2 */
    using C2IMR2_DMA2CH5IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA2CH4 interrupt mask to CPU2 */
    using C2IMR2_DMA2CH4IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA2CH3 interrupt mask to CPU2 */
    using C2IMR2_DMA2CH3IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA2CH2 interrupt mask to CPU2 */
    using C2IMR2_DMA2CH2IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA2CH1 interrupt mask to CPU2 */
    using C2IMR2_DMA2CH1IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA1CH7 interrupt mask to CPU2 */
    using C2IMR2_DMA1CH7IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA1CH6 interrupt mask to CPU2 */
    using C2IMR2_DMA1CH6IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA1CH5 interrupt mask to CPU2 */
    using C2IMR2_DMA1CH5IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA1CH4 interrupt mask to CPU2 */
    using C2IMR2_DMA1CH4IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA1CH3 interrupt mask to CPU2 */
    using C2IMR2_DMA1CH3IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA1CH2 interrupt mask to CPU2 */
    using C2IMR2_DMA1CH2IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral DMA1CH1 interrupt mask to CPU2 */
    using C2IMR2_DMA1CH1IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
