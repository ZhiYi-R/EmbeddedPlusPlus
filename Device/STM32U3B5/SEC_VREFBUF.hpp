/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_SEC_VREFBUF_HPP
#define EMBEDDED_PP_STM32U3B5_SEC_VREFBUF_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief VREFBUF address block description */
namespace STM32U3B5::SEC_VREFBUF {

    /** @brief VREFBUF control and status register */
    using VREFBUF_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage reference buffer mode enable */
    using VREFBUF_CSR_ENVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal voltage reference mode disable (external voltage reference mode). (value: 0)
     *          - B_0x1: Internal voltage reference mode (reference buffer enable or hold mode) enable. (value: 1)
     */
        /** @brief Internal voltage reference mode disable (external voltage reference mode). */
    constexpr std::uint32_t VREFBUF_CSR_ENVR_B_0x0 = 0;
        /** @brief Internal voltage reference mode (reference buffer enable or hold mode) enable. */
    constexpr std::uint32_t VREFBUF_CSR_ENVR_B_0x1 = 1;

    /** @brief High impedance mode */
    using VREFBUF_CSR_HIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>REF+less than/sub> pin is internally connected to the voltage reference buffer output. (value: 0)
     *          - B_0x1: Vless thansub>REF+less than/sub> pin is high impedance. (value: 1)
     */
        /** @brief Vless thansub>REF+less than/sub> pin is internally connected to the voltage reference buffer output. */
    constexpr std::uint32_t VREFBUF_CSR_HIZ_B_0x0 = 0;
        /** @brief Vless thansub>REF+less than/sub> pin is high impedance. */
    constexpr std::uint32_t VREFBUF_CSR_HIZ_B_0x1 = 1;

    /** @brief Voltage reference buffer ready */
    using VREFBUF_CSR_VRR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the voltage reference buffer output is not ready. (value: 0)
     *          - B_0x1: the voltage reference buffer output reached the requested level. (value: 1)
     */
        /** @brief the voltage reference buffer output is not ready. */
    constexpr std::uint32_t VREFBUF_CSR_VRR_B_0x0 = 0;
        /** @brief the voltage reference buffer output reached the requested level. */
    constexpr std::uint32_t VREFBUF_CSR_VRR_B_0x1 = 1;

    /** @brief Voltage reference scale */
    using VREFBUF_CSR_VRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF calibration control register */
    using VREFBUF_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trimming code */
    using VREFBUF_CCR_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
