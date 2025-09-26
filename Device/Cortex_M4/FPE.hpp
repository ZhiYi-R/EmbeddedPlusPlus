/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M4_FPE_HPP
#define EMBEDDED_PP_CORTEX_M4_FPE_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System Control registers for the FP extension */
namespace Cortex_M4::FPE {

    /** @brief FPCCR */
    using FPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ASPEN */
    using FPCCR_ASPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSPEN */
    using FPCCR_LSPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disable: No description (value: 0)
     *          - Enable: No description (value: 1)
     */
        /** @brief Disable value */
    constexpr std::uint32_t FPCCR_LSPEN_Disable = 0;
        /** @brief Enable value */
    constexpr std::uint32_t FPCCR_LSPEN_Enable = 1;

    /** @brief MONRDY */
    using FPCCR_MONRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_Able: No description (value: 0)
     *          - Able: No description (value: 1)
     */
        /** @brief Not_Able value */
    constexpr std::uint32_t FPCCR_MONRDY_Not_Able = 0;
        /** @brief Able value */
    constexpr std::uint32_t FPCCR_MONRDY_Able = 1;

    /** @brief BFRDY */
    using FPCCR_BFRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_Able: No description (value: 0)
     *          - Able: No description (value: 1)
     */
        /** @brief Not_Able value */
    constexpr std::uint32_t FPCCR_BFRDY_Not_Able = 0;
        /** @brief Able value */
    constexpr std::uint32_t FPCCR_BFRDY_Able = 1;

    /** @brief MMRDY */
    using FPCCR_MMRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_Able: No description (value: 0)
     *          - Able: No description (value: 1)
     */
        /** @brief Not_Able value */
    constexpr std::uint32_t FPCCR_MMRDY_Not_Able = 0;
        /** @brief Able value */
    constexpr std::uint32_t FPCCR_MMRDY_Able = 1;

    /** @brief HFRDY */
    using FPCCR_HFRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_Able: No description (value: 0)
     *          - Able: No description (value: 1)
     */
        /** @brief Not_Able value */
    constexpr std::uint32_t FPCCR_HFRDY_Not_Able = 0;
        /** @brief Able value */
    constexpr std::uint32_t FPCCR_HFRDY_Able = 1;

    /** @brief THREAD */
    using FPCCR_THREAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Handler: No description (value: 0)
     *          - Thread: No description (value: 1)
     */
        /** @brief Handler value */
    constexpr std::uint32_t FPCCR_THREAD_Handler = 0;
        /** @brief Thread value */
    constexpr std::uint32_t FPCCR_THREAD_Thread = 1;

    /** @brief USER */
    using FPCCR_USER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Privileged: No description (value: 0)
     *          - Unprivileged: No description (value: 1)
     */
        /** @brief Privileged value */
    constexpr std::uint32_t FPCCR_USER_Privileged = 0;
        /** @brief Unprivileged value */
    constexpr std::uint32_t FPCCR_USER_Unprivileged = 1;

    /** @brief LSPACT */
    using FPCCR_LSPACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_Active: No description (value: 0)
     *          - Active: No description (value: 1)
     */
        /** @brief Not_Active value */
    constexpr std::uint32_t FPCCR_LSPACT_Not_Active = 0;
        /** @brief Active value */
    constexpr std::uint32_t FPCCR_LSPACT_Active = 1;

    /** @brief FPCAR */
    using FPCAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FPDSCR */
    using FPDSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHP */
    using FPDSCR_AHP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DN */
    using FPDSCR_DN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FZ */
    using FPDSCR_FZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RMode */
    using FPDSCR_RMode = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MVFR0 */
    using MVFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FP_Rounding_modes */
    using MVFR0_FP_Rounding_modes = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Supported: No description (value: 1)
     */
        /** @brief Supported value */
    constexpr std::uint32_t MVFR0_FP_Rounding_modes_Supported = 1;

    /** @brief Short_vectors */
    using MVFR0_Short_vectors = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_Supported: No description (value: 0)
     */
        /** @brief Not_Supported value */
    constexpr std::uint32_t MVFR0_Short_vectors_Not_Supported = 0;

    /** @brief Square_root */
    using MVFR0_Square_root = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Supported: No description (value: 1)
     */
        /** @brief Supported value */
    constexpr std::uint32_t MVFR0_Square_root_Supported = 1;

    /** @brief Divide */
    using MVFR0_Divide = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Supported: No description (value: 1)
     */
        /** @brief Supported value */
    constexpr std::uint32_t MVFR0_Divide_Supported = 1;

    /** @brief FP_exception_trapping */
    using MVFR0_FP_exception_trapping = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_Supported: No description (value: 0)
     */
        /** @brief Not_Supported value */
    constexpr std::uint32_t MVFR0_FP_exception_trapping_Not_Supported = 0;

    /** @brief Double_precision */
    using MVFR0_Double_precision = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_Supported: No description (value: 0)
     */
        /** @brief Not_Supported value */
    constexpr std::uint32_t MVFR0_Double_precision_Not_Supported = 0;

    /** @brief Single_precision */
    using MVFR0_Single_precision = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Supported: No description (value: 2)
     */
        /** @brief Supported value */
    constexpr std::uint32_t MVFR0_Single_precision_Supported = 2;

    /** @brief A_SIMD */
    using MVFR0_A_SIMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _16x64: No description (value: 1)
     */
        /** @brief _16x64 value */
    constexpr std::uint32_t MVFR0_A_SIMD__16x64 = 1;

    /** @brief MVFR1 */
    using MVFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FP_fused_MAC */
    using MVFR1_FP_fused_MAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Supported: No description (value: 1)
     */
        /** @brief Supported value */
    constexpr std::uint32_t MVFR1_FP_fused_MAC_Supported = 1;

    /** @brief FP_HPFP */
    using MVFR1_FP_HPFP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Supported: No description (value: 1)
     */
        /** @brief Supported value */
    constexpr std::uint32_t MVFR1_FP_HPFP_Supported = 1;

    /** @brief D_NaN */
    using MVFR1_D_NaN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Supported: No description (value: 1)
     */
        /** @brief Supported value */
    constexpr std::uint32_t MVFR1_D_NaN_Supported = 1;

    /** @brief FtZ */
    using MVFR1_FtZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Supported: No description (value: 1)
     */
        /** @brief Supported value */
    constexpr std::uint32_t MVFR1_FtZ_Supported = 1;

}

#endif
