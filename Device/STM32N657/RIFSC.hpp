/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_RIFSC_HPP
#define EMBEDDED_PP_STM32N657_RIFSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Resource isolation framework security controller */
namespace STM32N657::RIFSC {

    /** @brief RIFSC RISC slave configuration register x */
    using RIFSC_RISC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global lock */
    using RIFSC_RISC_CR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIFSC RISC registers are writable. (value: 0)
     *          - B_0x1: All writes to RIFSC RISC registers are ignored. (value: 1)
     */
        /** @brief RIFSC RISC registers are writable. */
    constexpr std::uint32_t RIFSC_RISC_CR_GLOCK_B_0x0 = 0;
        /** @brief All writes to RIFSC RISC registers are ignored. */
    constexpr std::uint32_t RIFSC_RISC_CR_GLOCK_B_0x1 = 1;

    /** @brief RIFSC RISC slave security configuration register 0 */
    using RIFSC_RISC_SECCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security configuration for peripheral 0 */
    using RIFSC_RISC_SECCFGR0_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 0. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 0. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 0. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC0_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 0. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC0_B_0x1 = 1;

    /** @brief security configuration for peripheral 1 */
    using RIFSC_RISC_SECCFGR0_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 1. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 1. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 1. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC1_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 1. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC1_B_0x1 = 1;

    /** @brief security configuration for peripheral 2 */
    using RIFSC_RISC_SECCFGR0_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 2. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 2. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 2. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC2_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 2. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC2_B_0x1 = 1;

    /** @brief security configuration for peripheral 3 */
    using RIFSC_RISC_SECCFGR0_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 3. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 3. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 3. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC3_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 3. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC3_B_0x1 = 1;

    /** @brief security configuration for peripheral 4 */
    using RIFSC_RISC_SECCFGR0_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 4. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 4. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 4. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC4_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 4. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC4_B_0x1 = 1;

    /** @brief security configuration for peripheral 5 */
    using RIFSC_RISC_SECCFGR0_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 5. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 5. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 5. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC5_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 5. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC5_B_0x1 = 1;

    /** @brief security configuration for peripheral 6 */
    using RIFSC_RISC_SECCFGR0_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 6. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 6. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 6. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC6_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 6. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC6_B_0x1 = 1;

    /** @brief security configuration for peripheral 7 */
    using RIFSC_RISC_SECCFGR0_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 7. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 7. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 7. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC7_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 7. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC7_B_0x1 = 1;

    /** @brief security configuration for peripheral 8 */
    using RIFSC_RISC_SECCFGR0_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 8. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 8. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 8. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC8_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 8. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC8_B_0x1 = 1;

    /** @brief security configuration for peripheral 9 */
    using RIFSC_RISC_SECCFGR0_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 9. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 9. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 9. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC9_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 9. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC9_B_0x1 = 1;

    /** @brief security configuration for peripheral 10 */
    using RIFSC_RISC_SECCFGR0_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 10. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 10. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 10. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC10_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 10. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC10_B_0x1 = 1;

    /** @brief security configuration for peripheral 11 */
    using RIFSC_RISC_SECCFGR0_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 11. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 11. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 11. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC11_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 11. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC11_B_0x1 = 1;

    /** @brief security configuration for peripheral 12 */
    using RIFSC_RISC_SECCFGR0_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 12. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 12. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 12. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC12_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 12. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC12_B_0x1 = 1;

    /** @brief security configuration for peripheral 13 */
    using RIFSC_RISC_SECCFGR0_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 13. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 13. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 13. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC13_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 13. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC13_B_0x1 = 1;

    /** @brief security configuration for peripheral 14 */
    using RIFSC_RISC_SECCFGR0_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 14. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 14. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 14. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC14_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 14. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC14_B_0x1 = 1;

    /** @brief security configuration for peripheral 15 */
    using RIFSC_RISC_SECCFGR0_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 15. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 15. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 15. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC15_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 15. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC15_B_0x1 = 1;

    /** @brief security configuration for peripheral 16 */
    using RIFSC_RISC_SECCFGR0_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 16. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 16. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 16. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC16_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 16. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC16_B_0x1 = 1;

    /** @brief security configuration for peripheral 17 */
    using RIFSC_RISC_SECCFGR0_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 17. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 17. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 17. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC17_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 17. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC17_B_0x1 = 1;

    /** @brief security configuration for peripheral 18 */
    using RIFSC_RISC_SECCFGR0_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 18. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 18. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 18. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC18_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 18. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC18_B_0x1 = 1;

    /** @brief security configuration for peripheral 19 */
    using RIFSC_RISC_SECCFGR0_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 19. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 19. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 19. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC19_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 19. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC19_B_0x1 = 1;

    /** @brief security configuration for peripheral 20 */
    using RIFSC_RISC_SECCFGR0_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 20. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 20. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 20. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC20_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 20. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC20_B_0x1 = 1;

    /** @brief security configuration for peripheral 21 */
    using RIFSC_RISC_SECCFGR0_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 21. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 21. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 21. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC21_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 21. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC21_B_0x1 = 1;

    /** @brief security configuration for peripheral 22 */
    using RIFSC_RISC_SECCFGR0_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 22. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 22. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 22. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC22_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 22. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC22_B_0x1 = 1;

    /** @brief security configuration for peripheral 23 */
    using RIFSC_RISC_SECCFGR0_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 23. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 23. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 23. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC23_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 23. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC23_B_0x1 = 1;

    /** @brief security configuration for peripheral 24 */
    using RIFSC_RISC_SECCFGR0_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 24. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 24. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 24. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC24_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 24. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC24_B_0x1 = 1;

    /** @brief security configuration for peripheral 25 */
    using RIFSC_RISC_SECCFGR0_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 25. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 25. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 25. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC25_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 25. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC25_B_0x1 = 1;

    /** @brief security configuration for peripheral 26 */
    using RIFSC_RISC_SECCFGR0_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 26. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 26. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 26. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC26_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 26. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC26_B_0x1 = 1;

    /** @brief security configuration for peripheral 27 */
    using RIFSC_RISC_SECCFGR0_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 27. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 27. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 27. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC27_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 27. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC27_B_0x1 = 1;

    /** @brief security configuration for peripheral 28 */
    using RIFSC_RISC_SECCFGR0_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 28. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 28. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 28. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC28_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 28. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC28_B_0x1 = 1;

    /** @brief security configuration for peripheral 29 */
    using RIFSC_RISC_SECCFGR0_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 29. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 29. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 29. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC29_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 29. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC29_B_0x1 = 1;

    /** @brief security configuration for peripheral 30 */
    using RIFSC_RISC_SECCFGR0_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 30. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 30. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 30. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC30_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 30. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC30_B_0x1 = 1;

    /** @brief security configuration for peripheral 31 */
    using RIFSC_RISC_SECCFGR0_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 31. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 31. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 31. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC31_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 31. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR0_SEC31_B_0x1 = 1;

    /** @brief RIFSC RISC slave security configuration register 1 */
    using RIFSC_RISC_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security configuration for peripheral 32 */
    using RIFSC_RISC_SECCFGR1_SEC32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 32. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 32. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 32. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC32_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 32. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC32_B_0x1 = 1;

    /** @brief security configuration for peripheral 33 */
    using RIFSC_RISC_SECCFGR1_SEC33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 33. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 33. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 33. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC33_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 33. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC33_B_0x1 = 1;

    /** @brief security configuration for peripheral 34 */
    using RIFSC_RISC_SECCFGR1_SEC34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 34. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 34. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 34. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC34_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 34. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC34_B_0x1 = 1;

    /** @brief security configuration for peripheral 35 */
    using RIFSC_RISC_SECCFGR1_SEC35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 35. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 35. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 35. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC35_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 35. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC35_B_0x1 = 1;

    /** @brief security configuration for peripheral 36 */
    using RIFSC_RISC_SECCFGR1_SEC36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 36. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 36. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 36. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC36_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 36. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC36_B_0x1 = 1;

    /** @brief security configuration for peripheral 37 */
    using RIFSC_RISC_SECCFGR1_SEC37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 37. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 37. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 37. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC37_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 37. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC37_B_0x1 = 1;

    /** @brief security configuration for peripheral 38 */
    using RIFSC_RISC_SECCFGR1_SEC38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 38. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 38. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 38. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC38_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 38. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC38_B_0x1 = 1;

    /** @brief security configuration for peripheral 39 */
    using RIFSC_RISC_SECCFGR1_SEC39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 39. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 39. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 39. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC39_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 39. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC39_B_0x1 = 1;

    /** @brief security configuration for peripheral 40 */
    using RIFSC_RISC_SECCFGR1_SEC40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 40. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 40. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 40. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC40_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 40. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC40_B_0x1 = 1;

    /** @brief security configuration for peripheral 41 */
    using RIFSC_RISC_SECCFGR1_SEC41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 41. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 41. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 41. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC41_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 41. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC41_B_0x1 = 1;

    /** @brief security configuration for peripheral 42 */
    using RIFSC_RISC_SECCFGR1_SEC42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 42. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 42. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 42. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC42_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 42. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC42_B_0x1 = 1;

    /** @brief security configuration for peripheral 43 */
    using RIFSC_RISC_SECCFGR1_SEC43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 43. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 43. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 43. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC43_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 43. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC43_B_0x1 = 1;

    /** @brief security configuration for peripheral 44 */
    using RIFSC_RISC_SECCFGR1_SEC44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 44. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 44. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 44. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC44_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 44. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC44_B_0x1 = 1;

    /** @brief security configuration for peripheral 45 */
    using RIFSC_RISC_SECCFGR1_SEC45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 45. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 45. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 45. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC45_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 45. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC45_B_0x1 = 1;

    /** @brief security configuration for peripheral 46 */
    using RIFSC_RISC_SECCFGR1_SEC46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 46. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 46. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 46. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC46_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 46. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC46_B_0x1 = 1;

    /** @brief security configuration for peripheral 47 */
    using RIFSC_RISC_SECCFGR1_SEC47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 47. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 47. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 47. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC47_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 47. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC47_B_0x1 = 1;

    /** @brief security configuration for peripheral 48 */
    using RIFSC_RISC_SECCFGR1_SEC48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 48. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 48. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 48. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC48_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 48. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC48_B_0x1 = 1;

    /** @brief security configuration for peripheral 49 */
    using RIFSC_RISC_SECCFGR1_SEC49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 49. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 49. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 49. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC49_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 49. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC49_B_0x1 = 1;

    /** @brief security configuration for peripheral 50 */
    using RIFSC_RISC_SECCFGR1_SEC50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 50. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 50. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 50. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC50_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 50. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC50_B_0x1 = 1;

    /** @brief security configuration for peripheral 51 */
    using RIFSC_RISC_SECCFGR1_SEC51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 51. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 51. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 51. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC51_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 51. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC51_B_0x1 = 1;

    /** @brief security configuration for peripheral 52 */
    using RIFSC_RISC_SECCFGR1_SEC52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 52. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 52. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 52. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC52_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 52. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC52_B_0x1 = 1;

    /** @brief security configuration for peripheral 53 */
    using RIFSC_RISC_SECCFGR1_SEC53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 53. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 53. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 53. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC53_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 53. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC53_B_0x1 = 1;

    /** @brief security configuration for peripheral 54 */
    using RIFSC_RISC_SECCFGR1_SEC54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 54. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 54. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 54. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC54_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 54. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC54_B_0x1 = 1;

    /** @brief security configuration for peripheral 55 */
    using RIFSC_RISC_SECCFGR1_SEC55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 55. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 55. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 55. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC55_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 55. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC55_B_0x1 = 1;

    /** @brief security configuration for peripheral 56 */
    using RIFSC_RISC_SECCFGR1_SEC56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 56. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 56. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 56. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC56_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 56. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC56_B_0x1 = 1;

    /** @brief security configuration for peripheral 57 */
    using RIFSC_RISC_SECCFGR1_SEC57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 57. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 57. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 57. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC57_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 57. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC57_B_0x1 = 1;

    /** @brief security configuration for peripheral 58 */
    using RIFSC_RISC_SECCFGR1_SEC58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 58. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 58. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 58. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC58_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 58. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC58_B_0x1 = 1;

    /** @brief security configuration for peripheral 59 */
    using RIFSC_RISC_SECCFGR1_SEC59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 59. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 59. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 59. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC59_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 59. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC59_B_0x1 = 1;

    /** @brief security configuration for peripheral 60 */
    using RIFSC_RISC_SECCFGR1_SEC60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 60. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 60. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 60. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC60_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 60. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC60_B_0x1 = 1;

    /** @brief security configuration for peripheral 61 */
    using RIFSC_RISC_SECCFGR1_SEC61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 61. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 61. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 61. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC61_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 61. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC61_B_0x1 = 1;

    /** @brief security configuration for peripheral 62 */
    using RIFSC_RISC_SECCFGR1_SEC62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 62. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 62. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 62. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC62_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 62. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC62_B_0x1 = 1;

    /** @brief security configuration for peripheral 63 */
    using RIFSC_RISC_SECCFGR1_SEC63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 63. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 63. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 63. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC63_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 63. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR1_SEC63_B_0x1 = 1;

    /** @brief RIFSC RISC slave security configuration register 2 */
    using RIFSC_RISC_SECCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security configuration for peripheral 64 */
    using RIFSC_RISC_SECCFGR2_SEC64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 64. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 64. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 64. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC64_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 64. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC64_B_0x1 = 1;

    /** @brief security configuration for peripheral 65 */
    using RIFSC_RISC_SECCFGR2_SEC65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 65. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 65. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 65. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC65_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 65. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC65_B_0x1 = 1;

    /** @brief security configuration for peripheral 66 */
    using RIFSC_RISC_SECCFGR2_SEC66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 66. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 66. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 66. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC66_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 66. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC66_B_0x1 = 1;

    /** @brief security configuration for peripheral 67 */
    using RIFSC_RISC_SECCFGR2_SEC67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 67. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 67. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 67. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC67_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 67. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC67_B_0x1 = 1;

    /** @brief security configuration for peripheral 68 */
    using RIFSC_RISC_SECCFGR2_SEC68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 68. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 68. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 68. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC68_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 68. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC68_B_0x1 = 1;

    /** @brief security configuration for peripheral 69 */
    using RIFSC_RISC_SECCFGR2_SEC69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 69. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 69. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 69. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC69_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 69. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC69_B_0x1 = 1;

    /** @brief security configuration for peripheral 70 */
    using RIFSC_RISC_SECCFGR2_SEC70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 70. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 70. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 70. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC70_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 70. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC70_B_0x1 = 1;

    /** @brief security configuration for peripheral 71 */
    using RIFSC_RISC_SECCFGR2_SEC71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 71. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 71. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 71. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC71_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 71. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC71_B_0x1 = 1;

    /** @brief security configuration for peripheral 72 */
    using RIFSC_RISC_SECCFGR2_SEC72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 72. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 72. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 72. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC72_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 72. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC72_B_0x1 = 1;

    /** @brief security configuration for peripheral 73 */
    using RIFSC_RISC_SECCFGR2_SEC73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 73. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 73. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 73. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC73_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 73. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC73_B_0x1 = 1;

    /** @brief security configuration for peripheral 74 */
    using RIFSC_RISC_SECCFGR2_SEC74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 74. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 74. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 74. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC74_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 74. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC74_B_0x1 = 1;

    /** @brief security configuration for peripheral 75 */
    using RIFSC_RISC_SECCFGR2_SEC75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 75. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 75. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 75. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC75_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 75. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC75_B_0x1 = 1;

    /** @brief security configuration for peripheral 76 */
    using RIFSC_RISC_SECCFGR2_SEC76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 76. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 76. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 76. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC76_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 76. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC76_B_0x1 = 1;

    /** @brief security configuration for peripheral 77 */
    using RIFSC_RISC_SECCFGR2_SEC77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 77. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 77. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 77. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC77_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 77. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC77_B_0x1 = 1;

    /** @brief security configuration for peripheral 78 */
    using RIFSC_RISC_SECCFGR2_SEC78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 78. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 78. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 78. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC78_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 78. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC78_B_0x1 = 1;

    /** @brief security configuration for peripheral 79 */
    using RIFSC_RISC_SECCFGR2_SEC79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 79. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 79. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 79. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC79_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 79. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC79_B_0x1 = 1;

    /** @brief security configuration for peripheral 80 */
    using RIFSC_RISC_SECCFGR2_SEC80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 80. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 80. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 80. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC80_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 80. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC80_B_0x1 = 1;

    /** @brief security configuration for peripheral 81 */
    using RIFSC_RISC_SECCFGR2_SEC81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 81. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 81. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 81. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC81_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 81. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC81_B_0x1 = 1;

    /** @brief security configuration for peripheral 82 */
    using RIFSC_RISC_SECCFGR2_SEC82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 82. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 82. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 82. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC82_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 82. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC82_B_0x1 = 1;

    /** @brief security configuration for peripheral 83 */
    using RIFSC_RISC_SECCFGR2_SEC83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 83. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 83. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 83. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC83_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 83. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC83_B_0x1 = 1;

    /** @brief security configuration for peripheral 84 */
    using RIFSC_RISC_SECCFGR2_SEC84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 84. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 84. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 84. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC84_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 84. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC84_B_0x1 = 1;

    /** @brief security configuration for peripheral 85 */
    using RIFSC_RISC_SECCFGR2_SEC85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 85. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 85. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 85. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC85_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 85. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC85_B_0x1 = 1;

    /** @brief security configuration for peripheral 86 */
    using RIFSC_RISC_SECCFGR2_SEC86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 86. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 86. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 86. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC86_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 86. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC86_B_0x1 = 1;

    /** @brief security configuration for peripheral 87 */
    using RIFSC_RISC_SECCFGR2_SEC87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 87. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 87. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 87. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC87_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 87. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC87_B_0x1 = 1;

    /** @brief security configuration for peripheral 88 */
    using RIFSC_RISC_SECCFGR2_SEC88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 88. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 88. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 88. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC88_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 88. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC88_B_0x1 = 1;

    /** @brief security configuration for peripheral 89 */
    using RIFSC_RISC_SECCFGR2_SEC89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 89. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 89. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 89. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC89_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 89. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC89_B_0x1 = 1;

    /** @brief security configuration for peripheral 90 */
    using RIFSC_RISC_SECCFGR2_SEC90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 90. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 90. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 90. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC90_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 90. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC90_B_0x1 = 1;

    /** @brief security configuration for peripheral 91 */
    using RIFSC_RISC_SECCFGR2_SEC91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 91. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 91. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 91. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC91_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 91. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC91_B_0x1 = 1;

    /** @brief security configuration for peripheral 92 */
    using RIFSC_RISC_SECCFGR2_SEC92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 92. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 92. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 92. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC92_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 92. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC92_B_0x1 = 1;

    /** @brief security configuration for peripheral 93 */
    using RIFSC_RISC_SECCFGR2_SEC93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 93. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 93. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 93. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC93_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 93. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC93_B_0x1 = 1;

    /** @brief security configuration for peripheral 94 */
    using RIFSC_RISC_SECCFGR2_SEC94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 94. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 94. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 94. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC94_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 94. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC94_B_0x1 = 1;

    /** @brief security configuration for peripheral 95 */
    using RIFSC_RISC_SECCFGR2_SEC95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 95. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 95. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 95. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC95_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 95. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR2_SEC95_B_0x1 = 1;

    /** @brief RIFSC RISC slave security configuration register 3 */
    using RIFSC_RISC_SECCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security configuration for peripheral 96 */
    using RIFSC_RISC_SECCFGR3_SEC96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 96. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 96. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 96. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC96_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 96. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC96_B_0x1 = 1;

    /** @brief security configuration for peripheral 97 */
    using RIFSC_RISC_SECCFGR3_SEC97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 97. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 97. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 97. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC97_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 97. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC97_B_0x1 = 1;

    /** @brief security configuration for peripheral 98 */
    using RIFSC_RISC_SECCFGR3_SEC98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 98. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 98. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 98. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC98_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 98. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC98_B_0x1 = 1;

    /** @brief security configuration for peripheral 99 */
    using RIFSC_RISC_SECCFGR3_SEC99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 99. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 99. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 99. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC99_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 99. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC99_B_0x1 = 1;

    /** @brief security configuration for peripheral 100 */
    using RIFSC_RISC_SECCFGR3_SEC100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 100. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 100. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 100. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC100_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 100. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC100_B_0x1 = 1;

    /** @brief security configuration for peripheral 101 */
    using RIFSC_RISC_SECCFGR3_SEC101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 101. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 101. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 101. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC101_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 101. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC101_B_0x1 = 1;

    /** @brief security configuration for peripheral 102 */
    using RIFSC_RISC_SECCFGR3_SEC102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 102. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 102. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 102. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC102_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 102. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC102_B_0x1 = 1;

    /** @brief security configuration for peripheral 103 */
    using RIFSC_RISC_SECCFGR3_SEC103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 103. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 103. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 103. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC103_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 103. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC103_B_0x1 = 1;

    /** @brief security configuration for peripheral 104 */
    using RIFSC_RISC_SECCFGR3_SEC104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 104. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 104. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 104. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC104_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 104. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC104_B_0x1 = 1;

    /** @brief security configuration for peripheral 105 */
    using RIFSC_RISC_SECCFGR3_SEC105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 105. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 105. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 105. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC105_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 105. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC105_B_0x1 = 1;

    /** @brief security configuration for peripheral 106 */
    using RIFSC_RISC_SECCFGR3_SEC106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 106. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 106. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 106. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC106_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 106. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC106_B_0x1 = 1;

    /** @brief security configuration for peripheral 107 */
    using RIFSC_RISC_SECCFGR3_SEC107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 107. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 107. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 107. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC107_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 107. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC107_B_0x1 = 1;

    /** @brief security configuration for peripheral 108 */
    using RIFSC_RISC_SECCFGR3_SEC108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 108. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 108. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 108. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC108_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 108. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC108_B_0x1 = 1;

    /** @brief security configuration for peripheral 109 */
    using RIFSC_RISC_SECCFGR3_SEC109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 109. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 109. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 109. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC109_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 109. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC109_B_0x1 = 1;

    /** @brief security configuration for peripheral 110 */
    using RIFSC_RISC_SECCFGR3_SEC110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 110. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 110. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 110. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC110_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 110. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC110_B_0x1 = 1;

    /** @brief security configuration for peripheral 111 */
    using RIFSC_RISC_SECCFGR3_SEC111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 111. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 111. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 111. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC111_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 111. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC111_B_0x1 = 1;

    /** @brief security configuration for peripheral 112 */
    using RIFSC_RISC_SECCFGR3_SEC112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 112. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 112. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 112. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC112_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 112. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC112_B_0x1 = 1;

    /** @brief security configuration for peripheral 113 */
    using RIFSC_RISC_SECCFGR3_SEC113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 113. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 113. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 113. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC113_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 113. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC113_B_0x1 = 1;

    /** @brief security configuration for peripheral 114 */
    using RIFSC_RISC_SECCFGR3_SEC114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 114. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 114. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 114. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC114_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 114. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC114_B_0x1 = 1;

    /** @brief security configuration for peripheral 115 */
    using RIFSC_RISC_SECCFGR3_SEC115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 115. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 115. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 115. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC115_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 115. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC115_B_0x1 = 1;

    /** @brief security configuration for peripheral 116 */
    using RIFSC_RISC_SECCFGR3_SEC116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 116. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 116. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 116. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC116_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 116. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC116_B_0x1 = 1;

    /** @brief security configuration for peripheral 117 */
    using RIFSC_RISC_SECCFGR3_SEC117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 117. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 117. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 117. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC117_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 117. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC117_B_0x1 = 1;

    /** @brief security configuration for peripheral 118 */
    using RIFSC_RISC_SECCFGR3_SEC118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 118. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 118. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 118. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC118_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 118. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC118_B_0x1 = 1;

    /** @brief security configuration for peripheral 119 */
    using RIFSC_RISC_SECCFGR3_SEC119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 119. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 119. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 119. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC119_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 119. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC119_B_0x1 = 1;

    /** @brief security configuration for peripheral 120 */
    using RIFSC_RISC_SECCFGR3_SEC120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 120. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 120. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 120. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC120_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 120. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC120_B_0x1 = 1;

    /** @brief security configuration for peripheral 121 */
    using RIFSC_RISC_SECCFGR3_SEC121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 121. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 121. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 121. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC121_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 121. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC121_B_0x1 = 1;

    /** @brief security configuration for peripheral 122 */
    using RIFSC_RISC_SECCFGR3_SEC122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 122. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 122. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 122. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC122_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 122. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC122_B_0x1 = 1;

    /** @brief security configuration for peripheral 123 */
    using RIFSC_RISC_SECCFGR3_SEC123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 123. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 123. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 123. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC123_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 123. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC123_B_0x1 = 1;

    /** @brief security configuration for peripheral 124 */
    using RIFSC_RISC_SECCFGR3_SEC124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 124. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 124. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 124. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC124_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 124. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC124_B_0x1 = 1;

    /** @brief security configuration for peripheral 125 */
    using RIFSC_RISC_SECCFGR3_SEC125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 125. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 125. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 125. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC125_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 125. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC125_B_0x1 = 1;

    /** @brief security configuration for peripheral 126 */
    using RIFSC_RISC_SECCFGR3_SEC126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 126. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 126. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 126. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC126_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 126. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC126_B_0x1 = 1;

    /** @brief security configuration for peripheral 127 */
    using RIFSC_RISC_SECCFGR3_SEC127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 127. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 127. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 127. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC127_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 127. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR3_SEC127_B_0x1 = 1;

    /** @brief RIFSC RISC slave security configuration register 4 */
    using RIFSC_RISC_SECCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security configuration for peripheral 128 */
    using RIFSC_RISC_SECCFGR4_SEC128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 128. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 128. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 128. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC128_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 128. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC128_B_0x1 = 1;

    /** @brief security configuration for peripheral 129 */
    using RIFSC_RISC_SECCFGR4_SEC129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 129. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 129. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 129. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC129_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 129. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC129_B_0x1 = 1;

    /** @brief security configuration for peripheral 130 */
    using RIFSC_RISC_SECCFGR4_SEC130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 130. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 130. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 130. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC130_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 130. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC130_B_0x1 = 1;

    /** @brief security configuration for peripheral 131 */
    using RIFSC_RISC_SECCFGR4_SEC131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 131. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 131. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 131. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC131_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 131. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC131_B_0x1 = 1;

    /** @brief security configuration for peripheral 132 */
    using RIFSC_RISC_SECCFGR4_SEC132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 132. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 132. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 132. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC132_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 132. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC132_B_0x1 = 1;

    /** @brief security configuration for peripheral 133 */
    using RIFSC_RISC_SECCFGR4_SEC133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 133. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 133. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 133. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC133_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 133. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC133_B_0x1 = 1;

    /** @brief security configuration for peripheral 134 */
    using RIFSC_RISC_SECCFGR4_SEC134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 134. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 134. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 134. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC134_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 134. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC134_B_0x1 = 1;

    /** @brief security configuration for peripheral 135 */
    using RIFSC_RISC_SECCFGR4_SEC135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 135. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 135. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 135. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC135_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 135. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC135_B_0x1 = 1;

    /** @brief security configuration for peripheral 136 */
    using RIFSC_RISC_SECCFGR4_SEC136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 136. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 136. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 136. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC136_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 136. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC136_B_0x1 = 1;

    /** @brief security configuration for peripheral 137 */
    using RIFSC_RISC_SECCFGR4_SEC137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 137. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 137. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 137. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC137_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 137. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC137_B_0x1 = 1;

    /** @brief security configuration for peripheral 138 */
    using RIFSC_RISC_SECCFGR4_SEC138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 138. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 138. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 138. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC138_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 138. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC138_B_0x1 = 1;

    /** @brief security configuration for peripheral 139 */
    using RIFSC_RISC_SECCFGR4_SEC139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 139. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 139. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 139. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC139_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 139. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC139_B_0x1 = 1;

    /** @brief security configuration for peripheral 140 */
    using RIFSC_RISC_SECCFGR4_SEC140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 140. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 140. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 140. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC140_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 140. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC140_B_0x1 = 1;

    /** @brief security configuration for peripheral 141 */
    using RIFSC_RISC_SECCFGR4_SEC141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 141. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 141. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 141. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC141_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 141. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC141_B_0x1 = 1;

    /** @brief security configuration for peripheral 142 */
    using RIFSC_RISC_SECCFGR4_SEC142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 142. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 142. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 142. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC142_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 142. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC142_B_0x1 = 1;

    /** @brief security configuration for peripheral 143 */
    using RIFSC_RISC_SECCFGR4_SEC143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 143. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 143. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 143. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC143_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 143. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC143_B_0x1 = 1;

    /** @brief security configuration for peripheral 144 */
    using RIFSC_RISC_SECCFGR4_SEC144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 144. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 144. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 144. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC144_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 144. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC144_B_0x1 = 1;

    /** @brief security configuration for peripheral 145 */
    using RIFSC_RISC_SECCFGR4_SEC145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 145. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 145. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 145. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC145_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 145. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC145_B_0x1 = 1;

    /** @brief security configuration for peripheral 146 */
    using RIFSC_RISC_SECCFGR4_SEC146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 146. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 146. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 146. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC146_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 146. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC146_B_0x1 = 1;

    /** @brief security configuration for peripheral 147 */
    using RIFSC_RISC_SECCFGR4_SEC147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 147. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 147. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 147. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC147_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 147. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC147_B_0x1 = 1;

    /** @brief security configuration for peripheral 148 */
    using RIFSC_RISC_SECCFGR4_SEC148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 148. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 148. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 148. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC148_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 148. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC148_B_0x1 = 1;

    /** @brief security configuration for peripheral 149 */
    using RIFSC_RISC_SECCFGR4_SEC149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 149. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 149. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 149. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC149_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 149. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC149_B_0x1 = 1;

    /** @brief security configuration for peripheral 150 */
    using RIFSC_RISC_SECCFGR4_SEC150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 150. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 150. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 150. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC150_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 150. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC150_B_0x1 = 1;

    /** @brief security configuration for peripheral 151 */
    using RIFSC_RISC_SECCFGR4_SEC151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 151. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 151. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 151. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC151_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 151. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC151_B_0x1 = 1;

    /** @brief security configuration for peripheral 152 */
    using RIFSC_RISC_SECCFGR4_SEC152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 152. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 152. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 152. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC152_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 152. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC152_B_0x1 = 1;

    /** @brief security configuration for peripheral 153 */
    using RIFSC_RISC_SECCFGR4_SEC153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 153. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 153. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 153. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC153_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 153. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC153_B_0x1 = 1;

    /** @brief security configuration for peripheral 154 */
    using RIFSC_RISC_SECCFGR4_SEC154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 154. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 154. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 154. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC154_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 154. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC154_B_0x1 = 1;

    /** @brief security configuration for peripheral 155 */
    using RIFSC_RISC_SECCFGR4_SEC155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 155. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 155. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 155. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC155_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 155. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC155_B_0x1 = 1;

    /** @brief security configuration for peripheral 156 */
    using RIFSC_RISC_SECCFGR4_SEC156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 156. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 156. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 156. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC156_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 156. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC156_B_0x1 = 1;

    /** @brief security configuration for peripheral 157 */
    using RIFSC_RISC_SECCFGR4_SEC157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 157. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 157. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 157. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC157_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 157. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC157_B_0x1 = 1;

    /** @brief security configuration for peripheral 158 */
    using RIFSC_RISC_SECCFGR4_SEC158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 158. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 158. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 158. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC158_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 158. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC158_B_0x1 = 1;

    /** @brief security configuration for peripheral 159 */
    using RIFSC_RISC_SECCFGR4_SEC159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 159. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 159. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 159. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC159_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 159. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR4_SEC159_B_0x1 = 1;

    /** @brief RIFSC RISC slave security configuration register 5 */
    using RIFSC_RISC_SECCFGR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security configuration for peripheral 160 */
    using RIFSC_RISC_SECCFGR5_SEC160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 160. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 160. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 160. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC160_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 160. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC160_B_0x1 = 1;

    /** @brief security configuration for peripheral 161 */
    using RIFSC_RISC_SECCFGR5_SEC161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 161. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 161. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 161. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC161_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 161. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC161_B_0x1 = 1;

    /** @brief security configuration for peripheral 162 */
    using RIFSC_RISC_SECCFGR5_SEC162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 162. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 162. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 162. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC162_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 162. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC162_B_0x1 = 1;

    /** @brief security configuration for peripheral 163 */
    using RIFSC_RISC_SECCFGR5_SEC163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 163. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 163. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 163. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC163_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 163. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC163_B_0x1 = 1;

    /** @brief security configuration for peripheral 164 */
    using RIFSC_RISC_SECCFGR5_SEC164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 164. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 164. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 164. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC164_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 164. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC164_B_0x1 = 1;

    /** @brief security configuration for peripheral 165 */
    using RIFSC_RISC_SECCFGR5_SEC165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 165. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 165. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 165. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC165_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 165. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC165_B_0x1 = 1;

    /** @brief security configuration for peripheral 166 */
    using RIFSC_RISC_SECCFGR5_SEC166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 166. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 166. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 166. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC166_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 166. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC166_B_0x1 = 1;

    /** @brief security configuration for peripheral 167 */
    using RIFSC_RISC_SECCFGR5_SEC167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 167. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 167. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 167. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC167_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 167. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC167_B_0x1 = 1;

    /** @brief security configuration for peripheral 168 */
    using RIFSC_RISC_SECCFGR5_SEC168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 168. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 168. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 168. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC168_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 168. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC168_B_0x1 = 1;

    /** @brief security configuration for peripheral 169 */
    using RIFSC_RISC_SECCFGR5_SEC169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 169. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 169. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 169. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC169_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 169. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC169_B_0x1 = 1;

    /** @brief security configuration for peripheral 170 */
    using RIFSC_RISC_SECCFGR5_SEC170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 170. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 170. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 170. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC170_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 170. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC170_B_0x1 = 1;

    /** @brief security configuration for peripheral 171 */
    using RIFSC_RISC_SECCFGR5_SEC171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 171. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 171. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 171. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC171_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 171. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC171_B_0x1 = 1;

    /** @brief security configuration for peripheral 172 */
    using RIFSC_RISC_SECCFGR5_SEC172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 172. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 172. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 172. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC172_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 172. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC172_B_0x1 = 1;

    /** @brief security configuration for peripheral 173 */
    using RIFSC_RISC_SECCFGR5_SEC173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 173. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 173. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 173. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC173_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 173. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC173_B_0x1 = 1;

    /** @brief security configuration for peripheral 174 */
    using RIFSC_RISC_SECCFGR5_SEC174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 174. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 174. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 174. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC174_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 174. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC174_B_0x1 = 1;

    /** @brief security configuration for peripheral 175 */
    using RIFSC_RISC_SECCFGR5_SEC175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 175. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 175. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 175. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC175_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 175. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC175_B_0x1 = 1;

    /** @brief security configuration for peripheral 176 */
    using RIFSC_RISC_SECCFGR5_SEC176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 176. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 176. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 176. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC176_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 176. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC176_B_0x1 = 1;

    /** @brief security configuration for peripheral 177 */
    using RIFSC_RISC_SECCFGR5_SEC177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 177. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 177. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 177. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC177_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 177. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC177_B_0x1 = 1;

    /** @brief security configuration for peripheral 178 */
    using RIFSC_RISC_SECCFGR5_SEC178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 178. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 178. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 178. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC178_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 178. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC178_B_0x1 = 1;

    /** @brief security configuration for peripheral 179 */
    using RIFSC_RISC_SECCFGR5_SEC179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 179. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 179. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 179. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC179_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 179. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC179_B_0x1 = 1;

    /** @brief security configuration for peripheral 180 */
    using RIFSC_RISC_SECCFGR5_SEC180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 180. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 180. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 180. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC180_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 180. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC180_B_0x1 = 1;

    /** @brief security configuration for peripheral 181 */
    using RIFSC_RISC_SECCFGR5_SEC181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 181. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 181. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 181. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC181_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 181. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC181_B_0x1 = 1;

    /** @brief security configuration for peripheral 182 */
    using RIFSC_RISC_SECCFGR5_SEC182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 182. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 182. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 182. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC182_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 182. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC182_B_0x1 = 1;

    /** @brief security configuration for peripheral 183 */
    using RIFSC_RISC_SECCFGR5_SEC183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 183. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 183. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 183. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC183_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 183. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC183_B_0x1 = 1;

    /** @brief security configuration for peripheral 184 */
    using RIFSC_RISC_SECCFGR5_SEC184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 184. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 184. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 184. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC184_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 184. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC184_B_0x1 = 1;

    /** @brief security configuration for peripheral 185 */
    using RIFSC_RISC_SECCFGR5_SEC185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 185. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 185. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 185. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC185_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 185. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC185_B_0x1 = 1;

    /** @brief security configuration for peripheral 186 */
    using RIFSC_RISC_SECCFGR5_SEC186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 186. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 186. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 186. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC186_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 186. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC186_B_0x1 = 1;

    /** @brief security configuration for peripheral 187 */
    using RIFSC_RISC_SECCFGR5_SEC187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 187. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 187. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 187. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC187_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 187. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC187_B_0x1 = 1;

    /** @brief security configuration for peripheral 188 */
    using RIFSC_RISC_SECCFGR5_SEC188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 188. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 188. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 188. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC188_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 188. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC188_B_0x1 = 1;

    /** @brief security configuration for peripheral 189 */
    using RIFSC_RISC_SECCFGR5_SEC189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 189. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 189. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 189. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC189_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 189. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC189_B_0x1 = 1;

    /** @brief security configuration for peripheral 190 */
    using RIFSC_RISC_SECCFGR5_SEC190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 190. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 190. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 190. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC190_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 190. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC190_B_0x1 = 1;

    /** @brief security configuration for peripheral 191 */
    using RIFSC_RISC_SECCFGR5_SEC191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure and non-secure data access are granted to the peripheral 191. (value: 0)
     *          - B_0x1: Secure data access only are granted to the peripheral 191. (value: 1)
     */
        /** @brief Secure and non-secure data access are granted to the peripheral 191. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC191_B_0x0 = 0;
        /** @brief Secure data access only are granted to the peripheral 191. */
    constexpr std::uint32_t RIFSC_RISC_SECCFGR5_SEC191_B_0x1 = 1;

    /** @brief RIFSC RISFC slave privileged register 0 */
    using RIFSC_RISC_PRIVCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged-only access permission for peripheral 0 */
    using RIFSC_RISC_PRIVCFGR0_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 0. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 0. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 0. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV0_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 0. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV0_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 1 */
    using RIFSC_RISC_PRIVCFGR0_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 1. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 1. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 1. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV1_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 1. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV1_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 2 */
    using RIFSC_RISC_PRIVCFGR0_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 2. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 2. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 2. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV2_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 2. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV2_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 3 */
    using RIFSC_RISC_PRIVCFGR0_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 3. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 3. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 3. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV3_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 3. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV3_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 4 */
    using RIFSC_RISC_PRIVCFGR0_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 4. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 4. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 4. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV4_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 4. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV4_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 5 */
    using RIFSC_RISC_PRIVCFGR0_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 5. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 5. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 5. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV5_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 5. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV5_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 6 */
    using RIFSC_RISC_PRIVCFGR0_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 6. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 6. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 6. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV6_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 6. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV6_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 7 */
    using RIFSC_RISC_PRIVCFGR0_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 7. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 7. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 7. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV7_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 7. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV7_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 8 */
    using RIFSC_RISC_PRIVCFGR0_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 8. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 8. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 8. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV8_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 8. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV8_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 9 */
    using RIFSC_RISC_PRIVCFGR0_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 9. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 9. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 9. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV9_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 9. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV9_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 10 */
    using RIFSC_RISC_PRIVCFGR0_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 10. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 10. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 10. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV10_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 10. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV10_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 11 */
    using RIFSC_RISC_PRIVCFGR0_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 11. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 11. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 11. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV11_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 11. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV11_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 12 */
    using RIFSC_RISC_PRIVCFGR0_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 12. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 12. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 12. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV12_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 12. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV12_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 13 */
    using RIFSC_RISC_PRIVCFGR0_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 13. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 13. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 13. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV13_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 13. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV13_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 14 */
    using RIFSC_RISC_PRIVCFGR0_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 14. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 14. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 14. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV14_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 14. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV14_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 15 */
    using RIFSC_RISC_PRIVCFGR0_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 15. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 15. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 15. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV15_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 15. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV15_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 16 */
    using RIFSC_RISC_PRIVCFGR0_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 16. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 16. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 16. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV16_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 16. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV16_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 17 */
    using RIFSC_RISC_PRIVCFGR0_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 17. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 17. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 17. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV17_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 17. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV17_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 18 */
    using RIFSC_RISC_PRIVCFGR0_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 18. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 18. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 18. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV18_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 18. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV18_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 19 */
    using RIFSC_RISC_PRIVCFGR0_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 19. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 19. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 19. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV19_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 19. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV19_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 20 */
    using RIFSC_RISC_PRIVCFGR0_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 20. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 20. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 20. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV20_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 20. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV20_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 21 */
    using RIFSC_RISC_PRIVCFGR0_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 21. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 21. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 21. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV21_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 21. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV21_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 22 */
    using RIFSC_RISC_PRIVCFGR0_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 22. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 22. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 22. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV22_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 22. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV22_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 23 */
    using RIFSC_RISC_PRIVCFGR0_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 23. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 23. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 23. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV23_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 23. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV23_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 24 */
    using RIFSC_RISC_PRIVCFGR0_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 24. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 24. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 24. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV24_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 24. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV24_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 25 */
    using RIFSC_RISC_PRIVCFGR0_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 25. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 25. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 25. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV25_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 25. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV25_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 26 */
    using RIFSC_RISC_PRIVCFGR0_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 26. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 26. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 26. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV26_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 26. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV26_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 27 */
    using RIFSC_RISC_PRIVCFGR0_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 27. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 27. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 27. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV27_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 27. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV27_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 28 */
    using RIFSC_RISC_PRIVCFGR0_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 28. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 28. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 28. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV28_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 28. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV28_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 29 */
    using RIFSC_RISC_PRIVCFGR0_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 29. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 29. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 29. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV29_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 29. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV29_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 30 */
    using RIFSC_RISC_PRIVCFGR0_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 30. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 30. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 30. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV30_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 30. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV30_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 31 */
    using RIFSC_RISC_PRIVCFGR0_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 31. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 31. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 31. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV31_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 31. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR0_PRIV31_B_0x1 = 1;

    /** @brief RIFSC RISFC slave privileged register 1 */
    using RIFSC_RISC_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged-only access permission for peripheral 32 */
    using RIFSC_RISC_PRIVCFGR1_PRIV32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 32. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 32. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 32. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV32_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 32. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV32_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 33 */
    using RIFSC_RISC_PRIVCFGR1_PRIV33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 33. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 33. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 33. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV33_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 33. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV33_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 34 */
    using RIFSC_RISC_PRIVCFGR1_PRIV34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 34. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 34. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 34. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV34_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 34. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV34_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 35 */
    using RIFSC_RISC_PRIVCFGR1_PRIV35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 35. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 35. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 35. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV35_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 35. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV35_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 36 */
    using RIFSC_RISC_PRIVCFGR1_PRIV36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 36. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 36. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 36. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV36_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 36. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV36_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 37 */
    using RIFSC_RISC_PRIVCFGR1_PRIV37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 37. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 37. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 37. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV37_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 37. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV37_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 38 */
    using RIFSC_RISC_PRIVCFGR1_PRIV38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 38. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 38. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 38. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV38_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 38. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV38_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 39 */
    using RIFSC_RISC_PRIVCFGR1_PRIV39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 39. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 39. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 39. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV39_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 39. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV39_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 40 */
    using RIFSC_RISC_PRIVCFGR1_PRIV40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 40. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 40. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 40. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV40_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 40. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV40_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 41 */
    using RIFSC_RISC_PRIVCFGR1_PRIV41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 41. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 41. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 41. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV41_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 41. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV41_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 42 */
    using RIFSC_RISC_PRIVCFGR1_PRIV42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 42. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 42. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 42. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV42_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 42. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV42_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 43 */
    using RIFSC_RISC_PRIVCFGR1_PRIV43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 43. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 43. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 43. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV43_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 43. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV43_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 44 */
    using RIFSC_RISC_PRIVCFGR1_PRIV44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 44. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 44. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 44. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV44_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 44. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV44_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 45 */
    using RIFSC_RISC_PRIVCFGR1_PRIV45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 45. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 45. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 45. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV45_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 45. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV45_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 46 */
    using RIFSC_RISC_PRIVCFGR1_PRIV46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 46. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 46. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 46. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV46_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 46. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV46_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 47 */
    using RIFSC_RISC_PRIVCFGR1_PRIV47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 47. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 47. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 47. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV47_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 47. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV47_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 48 */
    using RIFSC_RISC_PRIVCFGR1_PRIV48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 48. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 48. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 48. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV48_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 48. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV48_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 49 */
    using RIFSC_RISC_PRIVCFGR1_PRIV49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 49. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 49. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 49. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV49_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 49. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV49_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 50 */
    using RIFSC_RISC_PRIVCFGR1_PRIV50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 50. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 50. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 50. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV50_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 50. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV50_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 51 */
    using RIFSC_RISC_PRIVCFGR1_PRIV51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 51. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 51. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 51. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV51_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 51. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV51_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 52 */
    using RIFSC_RISC_PRIVCFGR1_PRIV52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 52. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 52. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 52. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV52_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 52. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV52_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 53 */
    using RIFSC_RISC_PRIVCFGR1_PRIV53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 53. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 53. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 53. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV53_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 53. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV53_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 54 */
    using RIFSC_RISC_PRIVCFGR1_PRIV54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 54. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 54. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 54. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV54_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 54. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV54_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 55 */
    using RIFSC_RISC_PRIVCFGR1_PRIV55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 55. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 55. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 55. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV55_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 55. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV55_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 56 */
    using RIFSC_RISC_PRIVCFGR1_PRIV56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 56. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 56. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 56. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV56_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 56. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV56_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 57 */
    using RIFSC_RISC_PRIVCFGR1_PRIV57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 57. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 57. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 57. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV57_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 57. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV57_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 58 */
    using RIFSC_RISC_PRIVCFGR1_PRIV58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 58. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 58. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 58. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV58_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 58. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV58_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 59 */
    using RIFSC_RISC_PRIVCFGR1_PRIV59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 59. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 59. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 59. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV59_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 59. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV59_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 60 */
    using RIFSC_RISC_PRIVCFGR1_PRIV60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 60. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 60. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 60. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV60_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 60. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV60_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 61 */
    using RIFSC_RISC_PRIVCFGR1_PRIV61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 61. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 61. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 61. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV61_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 61. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV61_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 62 */
    using RIFSC_RISC_PRIVCFGR1_PRIV62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 62. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 62. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 62. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV62_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 62. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV62_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 63 */
    using RIFSC_RISC_PRIVCFGR1_PRIV63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 63. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 63. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 63. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV63_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 63. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR1_PRIV63_B_0x1 = 1;

    /** @brief RIFSC RISFC slave privileged register 2 */
    using RIFSC_RISC_PRIVCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged-only access permission for peripheral 64 */
    using RIFSC_RISC_PRIVCFGR2_PRIV64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 64. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 64. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 64. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV64_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 64. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV64_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 65 */
    using RIFSC_RISC_PRIVCFGR2_PRIV65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 65. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 65. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 65. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV65_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 65. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV65_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 66 */
    using RIFSC_RISC_PRIVCFGR2_PRIV66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 66. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 66. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 66. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV66_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 66. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV66_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 67 */
    using RIFSC_RISC_PRIVCFGR2_PRIV67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 67. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 67. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 67. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV67_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 67. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV67_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 68 */
    using RIFSC_RISC_PRIVCFGR2_PRIV68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 68. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 68. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 68. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV68_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 68. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV68_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 69 */
    using RIFSC_RISC_PRIVCFGR2_PRIV69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 69. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 69. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 69. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV69_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 69. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV69_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 70 */
    using RIFSC_RISC_PRIVCFGR2_PRIV70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 70. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 70. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 70. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV70_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 70. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV70_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 71 */
    using RIFSC_RISC_PRIVCFGR2_PRIV71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 71. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 71. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 71. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV71_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 71. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV71_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 72 */
    using RIFSC_RISC_PRIVCFGR2_PRIV72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 72. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 72. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 72. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV72_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 72. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV72_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 73 */
    using RIFSC_RISC_PRIVCFGR2_PRIV73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 73. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 73. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 73. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV73_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 73. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV73_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 74 */
    using RIFSC_RISC_PRIVCFGR2_PRIV74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 74. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 74. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 74. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV74_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 74. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV74_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 75 */
    using RIFSC_RISC_PRIVCFGR2_PRIV75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 75. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 75. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 75. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV75_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 75. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV75_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 76 */
    using RIFSC_RISC_PRIVCFGR2_PRIV76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 76. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 76. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 76. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV76_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 76. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV76_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 77 */
    using RIFSC_RISC_PRIVCFGR2_PRIV77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 77. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 77. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 77. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV77_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 77. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV77_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 78 */
    using RIFSC_RISC_PRIVCFGR2_PRIV78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 78. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 78. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 78. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV78_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 78. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV78_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 79 */
    using RIFSC_RISC_PRIVCFGR2_PRIV79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 79. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 79. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 79. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV79_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 79. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV79_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 80 */
    using RIFSC_RISC_PRIVCFGR2_PRIV80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 80. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 80. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 80. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV80_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 80. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV80_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 81 */
    using RIFSC_RISC_PRIVCFGR2_PRIV81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 81. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 81. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 81. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV81_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 81. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV81_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 82 */
    using RIFSC_RISC_PRIVCFGR2_PRIV82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 82. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 82. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 82. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV82_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 82. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV82_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 83 */
    using RIFSC_RISC_PRIVCFGR2_PRIV83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 83. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 83. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 83. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV83_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 83. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV83_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 84 */
    using RIFSC_RISC_PRIVCFGR2_PRIV84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 84. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 84. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 84. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV84_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 84. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV84_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 85 */
    using RIFSC_RISC_PRIVCFGR2_PRIV85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 85. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 85. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 85. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV85_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 85. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV85_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 86 */
    using RIFSC_RISC_PRIVCFGR2_PRIV86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 86. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 86. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 86. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV86_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 86. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV86_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 87 */
    using RIFSC_RISC_PRIVCFGR2_PRIV87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 87. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 87. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 87. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV87_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 87. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV87_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 88 */
    using RIFSC_RISC_PRIVCFGR2_PRIV88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 88. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 88. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 88. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV88_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 88. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV88_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 89 */
    using RIFSC_RISC_PRIVCFGR2_PRIV89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 89. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 89. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 89. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV89_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 89. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV89_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 90 */
    using RIFSC_RISC_PRIVCFGR2_PRIV90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 90. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 90. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 90. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV90_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 90. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV90_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 91 */
    using RIFSC_RISC_PRIVCFGR2_PRIV91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 91. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 91. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 91. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV91_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 91. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV91_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 92 */
    using RIFSC_RISC_PRIVCFGR2_PRIV92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 92. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 92. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 92. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV92_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 92. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV92_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 93 */
    using RIFSC_RISC_PRIVCFGR2_PRIV93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 93. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 93. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 93. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV93_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 93. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV93_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 94 */
    using RIFSC_RISC_PRIVCFGR2_PRIV94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 94. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 94. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 94. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV94_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 94. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV94_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 95 */
    using RIFSC_RISC_PRIVCFGR2_PRIV95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 95. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 95. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 95. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV95_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 95. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR2_PRIV95_B_0x1 = 1;

    /** @brief RIFSC RISFC slave privileged register 3 */
    using RIFSC_RISC_PRIVCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged-only access permission for peripheral 96 */
    using RIFSC_RISC_PRIVCFGR3_PRIV96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 96. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 96. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 96. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV96_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 96. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV96_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 97 */
    using RIFSC_RISC_PRIVCFGR3_PRIV97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 97. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 97. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 97. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV97_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 97. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV97_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 98 */
    using RIFSC_RISC_PRIVCFGR3_PRIV98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 98. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 98. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 98. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV98_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 98. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV98_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 99 */
    using RIFSC_RISC_PRIVCFGR3_PRIV99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 99. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 99. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 99. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV99_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 99. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV99_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 100 */
    using RIFSC_RISC_PRIVCFGR3_PRIV100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 100. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 100. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 100. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV100_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 100. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV100_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 101 */
    using RIFSC_RISC_PRIVCFGR3_PRIV101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 101. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 101. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 101. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV101_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 101. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV101_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 102 */
    using RIFSC_RISC_PRIVCFGR3_PRIV102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 102. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 102. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 102. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV102_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 102. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV102_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 103 */
    using RIFSC_RISC_PRIVCFGR3_PRIV103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 103. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 103. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 103. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV103_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 103. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV103_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 104 */
    using RIFSC_RISC_PRIVCFGR3_PRIV104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 104. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 104. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 104. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV104_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 104. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV104_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 105 */
    using RIFSC_RISC_PRIVCFGR3_PRIV105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 105. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 105. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 105. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV105_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 105. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV105_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 106 */
    using RIFSC_RISC_PRIVCFGR3_PRIV106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 106. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 106. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 106. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV106_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 106. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV106_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 107 */
    using RIFSC_RISC_PRIVCFGR3_PRIV107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 107. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 107. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 107. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV107_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 107. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV107_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 108 */
    using RIFSC_RISC_PRIVCFGR3_PRIV108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 108. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 108. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 108. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV108_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 108. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV108_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 109 */
    using RIFSC_RISC_PRIVCFGR3_PRIV109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 109. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 109. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 109. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV109_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 109. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV109_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 110 */
    using RIFSC_RISC_PRIVCFGR3_PRIV110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 110. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 110. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 110. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV110_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 110. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV110_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 111 */
    using RIFSC_RISC_PRIVCFGR3_PRIV111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 111. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 111. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 111. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV111_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 111. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV111_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 112 */
    using RIFSC_RISC_PRIVCFGR3_PRIV112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 112. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 112. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 112. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV112_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 112. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV112_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 113 */
    using RIFSC_RISC_PRIVCFGR3_PRIV113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 113. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 113. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 113. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV113_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 113. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV113_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 114 */
    using RIFSC_RISC_PRIVCFGR3_PRIV114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 114. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 114. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 114. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV114_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 114. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV114_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 115 */
    using RIFSC_RISC_PRIVCFGR3_PRIV115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 115. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 115. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 115. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV115_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 115. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV115_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 116 */
    using RIFSC_RISC_PRIVCFGR3_PRIV116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 116. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 116. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 116. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV116_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 116. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV116_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 117 */
    using RIFSC_RISC_PRIVCFGR3_PRIV117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 117. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 117. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 117. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV117_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 117. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV117_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 118 */
    using RIFSC_RISC_PRIVCFGR3_PRIV118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 118. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 118. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 118. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV118_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 118. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV118_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 119 */
    using RIFSC_RISC_PRIVCFGR3_PRIV119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 119. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 119. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 119. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV119_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 119. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV119_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 120 */
    using RIFSC_RISC_PRIVCFGR3_PRIV120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 120. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 120. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 120. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV120_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 120. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV120_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 121 */
    using RIFSC_RISC_PRIVCFGR3_PRIV121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 121. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 121. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 121. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV121_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 121. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV121_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 122 */
    using RIFSC_RISC_PRIVCFGR3_PRIV122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 122. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 122. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 122. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV122_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 122. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV122_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 123 */
    using RIFSC_RISC_PRIVCFGR3_PRIV123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 123. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 123. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 123. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV123_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 123. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV123_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 124 */
    using RIFSC_RISC_PRIVCFGR3_PRIV124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 124. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 124. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 124. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV124_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 124. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV124_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 125 */
    using RIFSC_RISC_PRIVCFGR3_PRIV125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 125. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 125. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 125. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV125_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 125. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV125_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 126 */
    using RIFSC_RISC_PRIVCFGR3_PRIV126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 126. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 126. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 126. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV126_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 126. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV126_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 127 */
    using RIFSC_RISC_PRIVCFGR3_PRIV127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 127. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 127. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 127. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV127_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 127. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR3_PRIV127_B_0x1 = 1;

    /** @brief RIFSC RISFC slave privileged register 4 */
    using RIFSC_RISC_PRIVCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged-only access permission for peripheral 128 */
    using RIFSC_RISC_PRIVCFGR4_PRIV128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 128. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 128. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 128. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV128_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 128. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV128_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 129 */
    using RIFSC_RISC_PRIVCFGR4_PRIV129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 129. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 129. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 129. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV129_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 129. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV129_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 130 */
    using RIFSC_RISC_PRIVCFGR4_PRIV130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 130. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 130. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 130. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV130_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 130. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV130_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 131 */
    using RIFSC_RISC_PRIVCFGR4_PRIV131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 131. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 131. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 131. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV131_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 131. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV131_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 132 */
    using RIFSC_RISC_PRIVCFGR4_PRIV132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 132. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 132. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 132. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV132_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 132. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV132_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 133 */
    using RIFSC_RISC_PRIVCFGR4_PRIV133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 133. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 133. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 133. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV133_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 133. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV133_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 134 */
    using RIFSC_RISC_PRIVCFGR4_PRIV134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 134. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 134. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 134. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV134_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 134. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV134_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 135 */
    using RIFSC_RISC_PRIVCFGR4_PRIV135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 135. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 135. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 135. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV135_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 135. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV135_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 136 */
    using RIFSC_RISC_PRIVCFGR4_PRIV136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 136. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 136. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 136. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV136_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 136. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV136_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 137 */
    using RIFSC_RISC_PRIVCFGR4_PRIV137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 137. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 137. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 137. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV137_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 137. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV137_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 138 */
    using RIFSC_RISC_PRIVCFGR4_PRIV138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 138. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 138. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 138. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV138_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 138. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV138_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 139 */
    using RIFSC_RISC_PRIVCFGR4_PRIV139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 139. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 139. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 139. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV139_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 139. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV139_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 140 */
    using RIFSC_RISC_PRIVCFGR4_PRIV140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 140. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 140. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 140. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV140_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 140. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV140_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 141 */
    using RIFSC_RISC_PRIVCFGR4_PRIV141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 141. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 141. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 141. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV141_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 141. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV141_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 142 */
    using RIFSC_RISC_PRIVCFGR4_PRIV142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 142. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 142. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 142. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV142_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 142. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV142_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 143 */
    using RIFSC_RISC_PRIVCFGR4_PRIV143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 143. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 143. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 143. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV143_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 143. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV143_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 144 */
    using RIFSC_RISC_PRIVCFGR4_PRIV144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 144. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 144. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 144. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV144_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 144. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV144_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 145 */
    using RIFSC_RISC_PRIVCFGR4_PRIV145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 145. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 145. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 145. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV145_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 145. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV145_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 146 */
    using RIFSC_RISC_PRIVCFGR4_PRIV146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 146. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 146. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 146. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV146_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 146. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV146_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 147 */
    using RIFSC_RISC_PRIVCFGR4_PRIV147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 147. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 147. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 147. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV147_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 147. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV147_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 148 */
    using RIFSC_RISC_PRIVCFGR4_PRIV148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 148. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 148. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 148. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV148_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 148. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV148_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 149 */
    using RIFSC_RISC_PRIVCFGR4_PRIV149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 149. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 149. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 149. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV149_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 149. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV149_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 150 */
    using RIFSC_RISC_PRIVCFGR4_PRIV150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 150. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 150. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 150. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV150_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 150. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV150_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 151 */
    using RIFSC_RISC_PRIVCFGR4_PRIV151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 151. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 151. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 151. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV151_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 151. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV151_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 152 */
    using RIFSC_RISC_PRIVCFGR4_PRIV152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 152. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 152. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 152. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV152_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 152. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV152_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 153 */
    using RIFSC_RISC_PRIVCFGR4_PRIV153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 153. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 153. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 153. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV153_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 153. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV153_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 154 */
    using RIFSC_RISC_PRIVCFGR4_PRIV154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 154. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 154. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 154. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV154_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 154. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV154_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 155 */
    using RIFSC_RISC_PRIVCFGR4_PRIV155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 155. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 155. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 155. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV155_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 155. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV155_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 156 */
    using RIFSC_RISC_PRIVCFGR4_PRIV156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 156. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 156. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 156. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV156_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 156. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV156_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 157 */
    using RIFSC_RISC_PRIVCFGR4_PRIV157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 157. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 157. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 157. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV157_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 157. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV157_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 158 */
    using RIFSC_RISC_PRIVCFGR4_PRIV158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 158. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 158. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 158. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV158_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 158. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV158_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 159 */
    using RIFSC_RISC_PRIVCFGR4_PRIV159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 159. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 159. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 159. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV159_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 159. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR4_PRIV159_B_0x1 = 1;

    /** @brief RIFSC RISFC slave privileged register 5 */
    using RIFSC_RISC_PRIVCFGR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged-only access permission for peripheral 160 */
    using RIFSC_RISC_PRIVCFGR5_PRIV160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 160. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 160. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 160. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV160_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 160. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV160_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 161 */
    using RIFSC_RISC_PRIVCFGR5_PRIV161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 161. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 161. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 161. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV161_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 161. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV161_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 162 */
    using RIFSC_RISC_PRIVCFGR5_PRIV162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 162. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 162. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 162. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV162_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 162. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV162_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 163 */
    using RIFSC_RISC_PRIVCFGR5_PRIV163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 163. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 163. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 163. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV163_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 163. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV163_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 164 */
    using RIFSC_RISC_PRIVCFGR5_PRIV164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 164. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 164. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 164. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV164_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 164. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV164_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 165 */
    using RIFSC_RISC_PRIVCFGR5_PRIV165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 165. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 165. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 165. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV165_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 165. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV165_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 166 */
    using RIFSC_RISC_PRIVCFGR5_PRIV166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 166. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 166. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 166. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV166_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 166. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV166_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 167 */
    using RIFSC_RISC_PRIVCFGR5_PRIV167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 167. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 167. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 167. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV167_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 167. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV167_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 168 */
    using RIFSC_RISC_PRIVCFGR5_PRIV168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 168. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 168. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 168. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV168_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 168. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV168_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 169 */
    using RIFSC_RISC_PRIVCFGR5_PRIV169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 169. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 169. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 169. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV169_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 169. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV169_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 170 */
    using RIFSC_RISC_PRIVCFGR5_PRIV170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 170. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 170. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 170. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV170_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 170. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV170_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 171 */
    using RIFSC_RISC_PRIVCFGR5_PRIV171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 171. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 171. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 171. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV171_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 171. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV171_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 172 */
    using RIFSC_RISC_PRIVCFGR5_PRIV172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 172. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 172. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 172. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV172_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 172. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV172_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 173 */
    using RIFSC_RISC_PRIVCFGR5_PRIV173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 173. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 173. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 173. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV173_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 173. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV173_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 174 */
    using RIFSC_RISC_PRIVCFGR5_PRIV174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 174. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 174. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 174. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV174_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 174. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV174_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 175 */
    using RIFSC_RISC_PRIVCFGR5_PRIV175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 175. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 175. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 175. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV175_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 175. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV175_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 176 */
    using RIFSC_RISC_PRIVCFGR5_PRIV176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 176. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 176. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 176. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV176_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 176. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV176_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 177 */
    using RIFSC_RISC_PRIVCFGR5_PRIV177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 177. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 177. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 177. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV177_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 177. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV177_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 178 */
    using RIFSC_RISC_PRIVCFGR5_PRIV178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 178. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 178. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 178. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV178_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 178. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV178_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 179 */
    using RIFSC_RISC_PRIVCFGR5_PRIV179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 179. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 179. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 179. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV179_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 179. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV179_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 180 */
    using RIFSC_RISC_PRIVCFGR5_PRIV180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 180. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 180. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 180. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV180_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 180. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV180_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 181 */
    using RIFSC_RISC_PRIVCFGR5_PRIV181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 181. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 181. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 181. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV181_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 181. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV181_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 182 */
    using RIFSC_RISC_PRIVCFGR5_PRIV182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 182. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 182. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 182. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV182_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 182. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV182_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 183 */
    using RIFSC_RISC_PRIVCFGR5_PRIV183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 183. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 183. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 183. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV183_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 183. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV183_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 184 */
    using RIFSC_RISC_PRIVCFGR5_PRIV184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 184. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 184. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 184. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV184_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 184. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV184_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 185 */
    using RIFSC_RISC_PRIVCFGR5_PRIV185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 185. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 185. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 185. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV185_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 185. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV185_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 186 */
    using RIFSC_RISC_PRIVCFGR5_PRIV186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 186. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 186. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 186. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV186_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 186. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV186_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 187 */
    using RIFSC_RISC_PRIVCFGR5_PRIV187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 187. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 187. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 187. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV187_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 187. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV187_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 188 */
    using RIFSC_RISC_PRIVCFGR5_PRIV188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 188. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 188. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 188. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV188_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 188. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV188_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 189 */
    using RIFSC_RISC_PRIVCFGR5_PRIV189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 189. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 189. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 189. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV189_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 189. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV189_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 190 */
    using RIFSC_RISC_PRIVCFGR5_PRIV190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 190. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 190. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 190. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV190_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 190. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV190_B_0x1 = 1;

    /** @brief privileged-only access permission for peripheral 191 */
    using RIFSC_RISC_PRIVCFGR5_PRIV191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged data access are granted to the peripheral 191. (value: 0)
     *          - B_0x1: Privileged data access only are granted to the peripheral 191. (value: 1)
     */
        /** @brief Privileged and unprivileged data access are granted to the peripheral 191. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV191_B_0x0 = 0;
        /** @brief Privileged data access only are granted to the peripheral 191. */
    constexpr std::uint32_t RIFSC_RISC_PRIVCFGR5_PRIV191_B_0x1 = 1;

    /** @brief RIFSC RISC slave resource configuration lock register 0 */
    using RIFSC_RISC_RCFGLOCKR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief resource lock for peripheral 0 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC0 in RIFSC_RISC_SECCFGRx and PRIV0 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC0 and PRIV0 are ignored. (value: 1)
     */
        /** @brief SEC0 in RIFSC_RISC_SECCFGRx and PRIV0 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK0_B_0x0 = 0;
        /** @brief Writes to SEC0 and PRIV0 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK0_B_0x1 = 1;

    /** @brief resource lock for peripheral 1 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC1 in RIFSC_RISC_SECCFGRx and PRIV1 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC1 and PRIV1 are ignored. (value: 1)
     */
        /** @brief SEC1 in RIFSC_RISC_SECCFGRx and PRIV1 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK1_B_0x0 = 0;
        /** @brief Writes to SEC1 and PRIV1 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK1_B_0x1 = 1;

    /** @brief resource lock for peripheral 2 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC2 in RIFSC_RISC_SECCFGRx and PRIV2 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC2 and PRIV2 are ignored. (value: 1)
     */
        /** @brief SEC2 in RIFSC_RISC_SECCFGRx and PRIV2 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK2_B_0x0 = 0;
        /** @brief Writes to SEC2 and PRIV2 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK2_B_0x1 = 1;

    /** @brief resource lock for peripheral 3 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC3 in RIFSC_RISC_SECCFGRx and PRIV3 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC3 and PRIV3 are ignored. (value: 1)
     */
        /** @brief SEC3 in RIFSC_RISC_SECCFGRx and PRIV3 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK3_B_0x0 = 0;
        /** @brief Writes to SEC3 and PRIV3 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK3_B_0x1 = 1;

    /** @brief resource lock for peripheral 4 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC4 in RIFSC_RISC_SECCFGRx and PRIV4 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC4 and PRIV4 are ignored. (value: 1)
     */
        /** @brief SEC4 in RIFSC_RISC_SECCFGRx and PRIV4 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK4_B_0x0 = 0;
        /** @brief Writes to SEC4 and PRIV4 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK4_B_0x1 = 1;

    /** @brief resource lock for peripheral 5 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC5 in RIFSC_RISC_SECCFGRx and PRIV5 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC5 and PRIV5 are ignored. (value: 1)
     */
        /** @brief SEC5 in RIFSC_RISC_SECCFGRx and PRIV5 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK5_B_0x0 = 0;
        /** @brief Writes to SEC5 and PRIV5 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK5_B_0x1 = 1;

    /** @brief resource lock for peripheral 6 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC6 in RIFSC_RISC_SECCFGRx and PRIV6 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC6 and PRIV6 are ignored. (value: 1)
     */
        /** @brief SEC6 in RIFSC_RISC_SECCFGRx and PRIV6 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK6_B_0x0 = 0;
        /** @brief Writes to SEC6 and PRIV6 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK6_B_0x1 = 1;

    /** @brief resource lock for peripheral 7 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC7 in RIFSC_RISC_SECCFGRx and PRIV7 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC7 and PRIV7 are ignored. (value: 1)
     */
        /** @brief SEC7 in RIFSC_RISC_SECCFGRx and PRIV7 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK7_B_0x0 = 0;
        /** @brief Writes to SEC7 and PRIV7 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK7_B_0x1 = 1;

    /** @brief resource lock for peripheral 8 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC8 in RIFSC_RISC_SECCFGRx and PRIV8 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC8 and PRIV8 are ignored. (value: 1)
     */
        /** @brief SEC8 in RIFSC_RISC_SECCFGRx and PRIV8 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK8_B_0x0 = 0;
        /** @brief Writes to SEC8 and PRIV8 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK8_B_0x1 = 1;

    /** @brief resource lock for peripheral 9 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC9 in RIFSC_RISC_SECCFGRx and PRIV9 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC9 and PRIV9 are ignored. (value: 1)
     */
        /** @brief SEC9 in RIFSC_RISC_SECCFGRx and PRIV9 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK9_B_0x0 = 0;
        /** @brief Writes to SEC9 and PRIV9 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK9_B_0x1 = 1;

    /** @brief resource lock for peripheral 10 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC10 in RIFSC_RISC_SECCFGRx and PRIV10 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC10 and PRIV10 are ignored. (value: 1)
     */
        /** @brief SEC10 in RIFSC_RISC_SECCFGRx and PRIV10 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK10_B_0x0 = 0;
        /** @brief Writes to SEC10 and PRIV10 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK10_B_0x1 = 1;

    /** @brief resource lock for peripheral 11 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC11 in RIFSC_RISC_SECCFGRx and PRIV11 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC11 and PRIV11 are ignored. (value: 1)
     */
        /** @brief SEC11 in RIFSC_RISC_SECCFGRx and PRIV11 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK11_B_0x0 = 0;
        /** @brief Writes to SEC11 and PRIV11 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK11_B_0x1 = 1;

    /** @brief resource lock for peripheral 12 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC12 in RIFSC_RISC_SECCFGRx and PRIV12 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC12 and PRIV12 are ignored. (value: 1)
     */
        /** @brief SEC12 in RIFSC_RISC_SECCFGRx and PRIV12 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK12_B_0x0 = 0;
        /** @brief Writes to SEC12 and PRIV12 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK12_B_0x1 = 1;

    /** @brief resource lock for peripheral 13 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC13 in RIFSC_RISC_SECCFGRx and PRIV13 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC13 and PRIV13 are ignored. (value: 1)
     */
        /** @brief SEC13 in RIFSC_RISC_SECCFGRx and PRIV13 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK13_B_0x0 = 0;
        /** @brief Writes to SEC13 and PRIV13 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK13_B_0x1 = 1;

    /** @brief resource lock for peripheral 14 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC14 in RIFSC_RISC_SECCFGRx and PRIV14 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC14 and PRIV14 are ignored. (value: 1)
     */
        /** @brief SEC14 in RIFSC_RISC_SECCFGRx and PRIV14 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK14_B_0x0 = 0;
        /** @brief Writes to SEC14 and PRIV14 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK14_B_0x1 = 1;

    /** @brief resource lock for peripheral 15 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC15 in RIFSC_RISC_SECCFGRx and PRIV15 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC15 and PRIV15 are ignored. (value: 1)
     */
        /** @brief SEC15 in RIFSC_RISC_SECCFGRx and PRIV15 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK15_B_0x0 = 0;
        /** @brief Writes to SEC15 and PRIV15 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK15_B_0x1 = 1;

    /** @brief resource lock for peripheral 16 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC16 in RIFSC_RISC_SECCFGRx and PRIV16 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC16 and PRIV16 are ignored. (value: 1)
     */
        /** @brief SEC16 in RIFSC_RISC_SECCFGRx and PRIV16 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK16_B_0x0 = 0;
        /** @brief Writes to SEC16 and PRIV16 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK16_B_0x1 = 1;

    /** @brief resource lock for peripheral 17 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC17 in RIFSC_RISC_SECCFGRx and PRIV17 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC17 and PRIV17 are ignored. (value: 1)
     */
        /** @brief SEC17 in RIFSC_RISC_SECCFGRx and PRIV17 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK17_B_0x0 = 0;
        /** @brief Writes to SEC17 and PRIV17 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK17_B_0x1 = 1;

    /** @brief resource lock for peripheral 18 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC18 in RIFSC_RISC_SECCFGRx and PRIV18 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC18 and PRIV18 are ignored. (value: 1)
     */
        /** @brief SEC18 in RIFSC_RISC_SECCFGRx and PRIV18 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK18_B_0x0 = 0;
        /** @brief Writes to SEC18 and PRIV18 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK18_B_0x1 = 1;

    /** @brief resource lock for peripheral 19 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC19 in RIFSC_RISC_SECCFGRx and PRIV19 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC19 and PRIV19 are ignored. (value: 1)
     */
        /** @brief SEC19 in RIFSC_RISC_SECCFGRx and PRIV19 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK19_B_0x0 = 0;
        /** @brief Writes to SEC19 and PRIV19 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK19_B_0x1 = 1;

    /** @brief resource lock for peripheral 20 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC20 in RIFSC_RISC_SECCFGRx and PRIV20 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC20 and PRIV20 are ignored. (value: 1)
     */
        /** @brief SEC20 in RIFSC_RISC_SECCFGRx and PRIV20 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK20_B_0x0 = 0;
        /** @brief Writes to SEC20 and PRIV20 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK20_B_0x1 = 1;

    /** @brief resource lock for peripheral 21 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC21 in RIFSC_RISC_SECCFGRx and PRIV21 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC21 and PRIV21 are ignored. (value: 1)
     */
        /** @brief SEC21 in RIFSC_RISC_SECCFGRx and PRIV21 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK21_B_0x0 = 0;
        /** @brief Writes to SEC21 and PRIV21 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK21_B_0x1 = 1;

    /** @brief resource lock for peripheral 22 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC22 in RIFSC_RISC_SECCFGRx and PRIV22 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC22 and PRIV22 are ignored. (value: 1)
     */
        /** @brief SEC22 in RIFSC_RISC_SECCFGRx and PRIV22 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK22_B_0x0 = 0;
        /** @brief Writes to SEC22 and PRIV22 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK22_B_0x1 = 1;

    /** @brief resource lock for peripheral 23 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC23 in RIFSC_RISC_SECCFGRx and PRIV23 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC23 and PRIV23 are ignored. (value: 1)
     */
        /** @brief SEC23 in RIFSC_RISC_SECCFGRx and PRIV23 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK23_B_0x0 = 0;
        /** @brief Writes to SEC23 and PRIV23 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK23_B_0x1 = 1;

    /** @brief resource lock for peripheral 24 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC24 in RIFSC_RISC_SECCFGRx and PRIV24 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC24 and PRIV24 are ignored. (value: 1)
     */
        /** @brief SEC24 in RIFSC_RISC_SECCFGRx and PRIV24 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK24_B_0x0 = 0;
        /** @brief Writes to SEC24 and PRIV24 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK24_B_0x1 = 1;

    /** @brief resource lock for peripheral 25 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC25 in RIFSC_RISC_SECCFGRx and PRIV25 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC25 and PRIV25 are ignored. (value: 1)
     */
        /** @brief SEC25 in RIFSC_RISC_SECCFGRx and PRIV25 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK25_B_0x0 = 0;
        /** @brief Writes to SEC25 and PRIV25 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK25_B_0x1 = 1;

    /** @brief resource lock for peripheral 26 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC26 in RIFSC_RISC_SECCFGRx and PRIV26 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC26 and PRIV26 are ignored. (value: 1)
     */
        /** @brief SEC26 in RIFSC_RISC_SECCFGRx and PRIV26 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK26_B_0x0 = 0;
        /** @brief Writes to SEC26 and PRIV26 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK26_B_0x1 = 1;

    /** @brief resource lock for peripheral 27 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC27 in RIFSC_RISC_SECCFGRx and PRIV27 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC27 and PRIV27 are ignored. (value: 1)
     */
        /** @brief SEC27 in RIFSC_RISC_SECCFGRx and PRIV27 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK27_B_0x0 = 0;
        /** @brief Writes to SEC27 and PRIV27 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK27_B_0x1 = 1;

    /** @brief resource lock for peripheral 28 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC28 in RIFSC_RISC_SECCFGRx and PRIV28 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC28 and PRIV28 are ignored. (value: 1)
     */
        /** @brief SEC28 in RIFSC_RISC_SECCFGRx and PRIV28 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK28_B_0x0 = 0;
        /** @brief Writes to SEC28 and PRIV28 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK28_B_0x1 = 1;

    /** @brief resource lock for peripheral 29 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC29 in RIFSC_RISC_SECCFGRx and PRIV29 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC29 and PRIV29 are ignored. (value: 1)
     */
        /** @brief SEC29 in RIFSC_RISC_SECCFGRx and PRIV29 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK29_B_0x0 = 0;
        /** @brief Writes to SEC29 and PRIV29 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK29_B_0x1 = 1;

    /** @brief resource lock for peripheral 30 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC30 in RIFSC_RISC_SECCFGRx and PRIV30 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC30 and PRIV30 are ignored. (value: 1)
     */
        /** @brief SEC30 in RIFSC_RISC_SECCFGRx and PRIV30 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK30_B_0x0 = 0;
        /** @brief Writes to SEC30 and PRIV30 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK30_B_0x1 = 1;

    /** @brief resource lock for peripheral 31 */
    using RIFSC_RISC_RCFGLOCKR0_RLOCK31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC31 in RIFSC_RISC_SECCFGRx and PRIV31 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC31 and PRIV31 are ignored. (value: 1)
     */
        /** @brief SEC31 in RIFSC_RISC_SECCFGRx and PRIV31 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK31_B_0x0 = 0;
        /** @brief Writes to SEC31 and PRIV31 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR0_RLOCK31_B_0x1 = 1;

    /** @brief RIFSC RISC slave resource configuration lock register 1 */
    using RIFSC_RISC_RCFGLOCKR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief resource lock for peripheral 32 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC32 in RIFSC_RISC_SECCFGRx and PRIV32 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC32 and PRIV32 are ignored. (value: 1)
     */
        /** @brief SEC32 in RIFSC_RISC_SECCFGRx and PRIV32 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK32_B_0x0 = 0;
        /** @brief Writes to SEC32 and PRIV32 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK32_B_0x1 = 1;

    /** @brief resource lock for peripheral 33 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC33 in RIFSC_RISC_SECCFGRx and PRIV33 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC33 and PRIV33 are ignored. (value: 1)
     */
        /** @brief SEC33 in RIFSC_RISC_SECCFGRx and PRIV33 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK33_B_0x0 = 0;
        /** @brief Writes to SEC33 and PRIV33 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK33_B_0x1 = 1;

    /** @brief resource lock for peripheral 34 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC34 in RIFSC_RISC_SECCFGRx and PRIV34 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC34 and PRIV34 are ignored. (value: 1)
     */
        /** @brief SEC34 in RIFSC_RISC_SECCFGRx and PRIV34 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK34_B_0x0 = 0;
        /** @brief Writes to SEC34 and PRIV34 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK34_B_0x1 = 1;

    /** @brief resource lock for peripheral 35 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC35 in RIFSC_RISC_SECCFGRx and PRIV35 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC35 and PRIV35 are ignored. (value: 1)
     */
        /** @brief SEC35 in RIFSC_RISC_SECCFGRx and PRIV35 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK35_B_0x0 = 0;
        /** @brief Writes to SEC35 and PRIV35 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK35_B_0x1 = 1;

    /** @brief resource lock for peripheral 36 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC36 in RIFSC_RISC_SECCFGRx and PRIV36 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC36 and PRIV36 are ignored. (value: 1)
     */
        /** @brief SEC36 in RIFSC_RISC_SECCFGRx and PRIV36 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK36_B_0x0 = 0;
        /** @brief Writes to SEC36 and PRIV36 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK36_B_0x1 = 1;

    /** @brief resource lock for peripheral 37 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC37 in RIFSC_RISC_SECCFGRx and PRIV37 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC37 and PRIV37 are ignored. (value: 1)
     */
        /** @brief SEC37 in RIFSC_RISC_SECCFGRx and PRIV37 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK37_B_0x0 = 0;
        /** @brief Writes to SEC37 and PRIV37 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK37_B_0x1 = 1;

    /** @brief resource lock for peripheral 38 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC38 in RIFSC_RISC_SECCFGRx and PRIV38 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC38 and PRIV38 are ignored. (value: 1)
     */
        /** @brief SEC38 in RIFSC_RISC_SECCFGRx and PRIV38 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK38_B_0x0 = 0;
        /** @brief Writes to SEC38 and PRIV38 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK38_B_0x1 = 1;

    /** @brief resource lock for peripheral 39 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC39 in RIFSC_RISC_SECCFGRx and PRIV39 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC39 and PRIV39 are ignored. (value: 1)
     */
        /** @brief SEC39 in RIFSC_RISC_SECCFGRx and PRIV39 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK39_B_0x0 = 0;
        /** @brief Writes to SEC39 and PRIV39 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK39_B_0x1 = 1;

    /** @brief resource lock for peripheral 40 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC40 in RIFSC_RISC_SECCFGRx and PRIV40 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC40 and PRIV40 are ignored. (value: 1)
     */
        /** @brief SEC40 in RIFSC_RISC_SECCFGRx and PRIV40 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK40_B_0x0 = 0;
        /** @brief Writes to SEC40 and PRIV40 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK40_B_0x1 = 1;

    /** @brief resource lock for peripheral 41 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC41 in RIFSC_RISC_SECCFGRx and PRIV41 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC41 and PRIV41 are ignored. (value: 1)
     */
        /** @brief SEC41 in RIFSC_RISC_SECCFGRx and PRIV41 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK41_B_0x0 = 0;
        /** @brief Writes to SEC41 and PRIV41 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK41_B_0x1 = 1;

    /** @brief resource lock for peripheral 42 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC42 in RIFSC_RISC_SECCFGRx and PRIV42 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC42 and PRIV42 are ignored. (value: 1)
     */
        /** @brief SEC42 in RIFSC_RISC_SECCFGRx and PRIV42 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK42_B_0x0 = 0;
        /** @brief Writes to SEC42 and PRIV42 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK42_B_0x1 = 1;

    /** @brief resource lock for peripheral 43 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC43 in RIFSC_RISC_SECCFGRx and PRIV43 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC43 and PRIV43 are ignored. (value: 1)
     */
        /** @brief SEC43 in RIFSC_RISC_SECCFGRx and PRIV43 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK43_B_0x0 = 0;
        /** @brief Writes to SEC43 and PRIV43 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK43_B_0x1 = 1;

    /** @brief resource lock for peripheral 44 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC44 in RIFSC_RISC_SECCFGRx and PRIV44 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC44 and PRIV44 are ignored. (value: 1)
     */
        /** @brief SEC44 in RIFSC_RISC_SECCFGRx and PRIV44 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK44_B_0x0 = 0;
        /** @brief Writes to SEC44 and PRIV44 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK44_B_0x1 = 1;

    /** @brief resource lock for peripheral 45 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC45 in RIFSC_RISC_SECCFGRx and PRIV45 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC45 and PRIV45 are ignored. (value: 1)
     */
        /** @brief SEC45 in RIFSC_RISC_SECCFGRx and PRIV45 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK45_B_0x0 = 0;
        /** @brief Writes to SEC45 and PRIV45 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK45_B_0x1 = 1;

    /** @brief resource lock for peripheral 46 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC46 in RIFSC_RISC_SECCFGRx and PRIV46 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC46 and PRIV46 are ignored. (value: 1)
     */
        /** @brief SEC46 in RIFSC_RISC_SECCFGRx and PRIV46 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK46_B_0x0 = 0;
        /** @brief Writes to SEC46 and PRIV46 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK46_B_0x1 = 1;

    /** @brief resource lock for peripheral 47 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC47 in RIFSC_RISC_SECCFGRx and PRIV47 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC47 and PRIV47 are ignored. (value: 1)
     */
        /** @brief SEC47 in RIFSC_RISC_SECCFGRx and PRIV47 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK47_B_0x0 = 0;
        /** @brief Writes to SEC47 and PRIV47 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK47_B_0x1 = 1;

    /** @brief resource lock for peripheral 48 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC48 in RIFSC_RISC_SECCFGRx and PRIV48 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC48 and PRIV48 are ignored. (value: 1)
     */
        /** @brief SEC48 in RIFSC_RISC_SECCFGRx and PRIV48 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK48_B_0x0 = 0;
        /** @brief Writes to SEC48 and PRIV48 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK48_B_0x1 = 1;

    /** @brief resource lock for peripheral 49 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC49 in RIFSC_RISC_SECCFGRx and PRIV49 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC49 and PRIV49 are ignored. (value: 1)
     */
        /** @brief SEC49 in RIFSC_RISC_SECCFGRx and PRIV49 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK49_B_0x0 = 0;
        /** @brief Writes to SEC49 and PRIV49 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK49_B_0x1 = 1;

    /** @brief resource lock for peripheral 50 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC50 in RIFSC_RISC_SECCFGRx and PRIV50 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC50 and PRIV50 are ignored. (value: 1)
     */
        /** @brief SEC50 in RIFSC_RISC_SECCFGRx and PRIV50 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK50_B_0x0 = 0;
        /** @brief Writes to SEC50 and PRIV50 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK50_B_0x1 = 1;

    /** @brief resource lock for peripheral 51 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC51 in RIFSC_RISC_SECCFGRx and PRIV51 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC51 and PRIV51 are ignored. (value: 1)
     */
        /** @brief SEC51 in RIFSC_RISC_SECCFGRx and PRIV51 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK51_B_0x0 = 0;
        /** @brief Writes to SEC51 and PRIV51 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK51_B_0x1 = 1;

    /** @brief resource lock for peripheral 52 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC52 in RIFSC_RISC_SECCFGRx and PRIV52 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC52 and PRIV52 are ignored. (value: 1)
     */
        /** @brief SEC52 in RIFSC_RISC_SECCFGRx and PRIV52 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK52_B_0x0 = 0;
        /** @brief Writes to SEC52 and PRIV52 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK52_B_0x1 = 1;

    /** @brief resource lock for peripheral 53 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC53 in RIFSC_RISC_SECCFGRx and PRIV53 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC53 and PRIV53 are ignored. (value: 1)
     */
        /** @brief SEC53 in RIFSC_RISC_SECCFGRx and PRIV53 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK53_B_0x0 = 0;
        /** @brief Writes to SEC53 and PRIV53 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK53_B_0x1 = 1;

    /** @brief resource lock for peripheral 54 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC54 in RIFSC_RISC_SECCFGRx and PRIV54 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC54 and PRIV54 are ignored. (value: 1)
     */
        /** @brief SEC54 in RIFSC_RISC_SECCFGRx and PRIV54 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK54_B_0x0 = 0;
        /** @brief Writes to SEC54 and PRIV54 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK54_B_0x1 = 1;

    /** @brief resource lock for peripheral 55 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC55 in RIFSC_RISC_SECCFGRx and PRIV55 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC55 and PRIV55 are ignored. (value: 1)
     */
        /** @brief SEC55 in RIFSC_RISC_SECCFGRx and PRIV55 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK55_B_0x0 = 0;
        /** @brief Writes to SEC55 and PRIV55 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK55_B_0x1 = 1;

    /** @brief resource lock for peripheral 56 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC56 in RIFSC_RISC_SECCFGRx and PRIV56 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC56 and PRIV56 are ignored. (value: 1)
     */
        /** @brief SEC56 in RIFSC_RISC_SECCFGRx and PRIV56 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK56_B_0x0 = 0;
        /** @brief Writes to SEC56 and PRIV56 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK56_B_0x1 = 1;

    /** @brief resource lock for peripheral 57 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC57 in RIFSC_RISC_SECCFGRx and PRIV57 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC57 and PRIV57 are ignored. (value: 1)
     */
        /** @brief SEC57 in RIFSC_RISC_SECCFGRx and PRIV57 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK57_B_0x0 = 0;
        /** @brief Writes to SEC57 and PRIV57 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK57_B_0x1 = 1;

    /** @brief resource lock for peripheral 58 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC58 in RIFSC_RISC_SECCFGRx and PRIV58 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC58 and PRIV58 are ignored. (value: 1)
     */
        /** @brief SEC58 in RIFSC_RISC_SECCFGRx and PRIV58 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK58_B_0x0 = 0;
        /** @brief Writes to SEC58 and PRIV58 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK58_B_0x1 = 1;

    /** @brief resource lock for peripheral 59 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC59 in RIFSC_RISC_SECCFGRx and PRIV59 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC59 and PRIV59 are ignored. (value: 1)
     */
        /** @brief SEC59 in RIFSC_RISC_SECCFGRx and PRIV59 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK59_B_0x0 = 0;
        /** @brief Writes to SEC59 and PRIV59 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK59_B_0x1 = 1;

    /** @brief resource lock for peripheral 60 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC60 in RIFSC_RISC_SECCFGRx and PRIV60 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC60 and PRIV60 are ignored. (value: 1)
     */
        /** @brief SEC60 in RIFSC_RISC_SECCFGRx and PRIV60 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK60_B_0x0 = 0;
        /** @brief Writes to SEC60 and PRIV60 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK60_B_0x1 = 1;

    /** @brief resource lock for peripheral 61 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC61 in RIFSC_RISC_SECCFGRx and PRIV61 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC61 and PRIV61 are ignored. (value: 1)
     */
        /** @brief SEC61 in RIFSC_RISC_SECCFGRx and PRIV61 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK61_B_0x0 = 0;
        /** @brief Writes to SEC61 and PRIV61 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK61_B_0x1 = 1;

    /** @brief resource lock for peripheral 62 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC62 in RIFSC_RISC_SECCFGRx and PRIV62 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC62 and PRIV62 are ignored. (value: 1)
     */
        /** @brief SEC62 in RIFSC_RISC_SECCFGRx and PRIV62 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK62_B_0x0 = 0;
        /** @brief Writes to SEC62 and PRIV62 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK62_B_0x1 = 1;

    /** @brief resource lock for peripheral 63 */
    using RIFSC_RISC_RCFGLOCKR1_RLOCK63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC63 in RIFSC_RISC_SECCFGRx and PRIV63 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC63 and PRIV63 are ignored. (value: 1)
     */
        /** @brief SEC63 in RIFSC_RISC_SECCFGRx and PRIV63 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK63_B_0x0 = 0;
        /** @brief Writes to SEC63 and PRIV63 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR1_RLOCK63_B_0x1 = 1;

    /** @brief RIFSC RISC slave resource configuration lock register 2 */
    using RIFSC_RISC_RCFGLOCKR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief resource lock for peripheral 64 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC64 in RIFSC_RISC_SECCFGRx and PRIV64 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC64 and PRIV64 are ignored. (value: 1)
     */
        /** @brief SEC64 in RIFSC_RISC_SECCFGRx and PRIV64 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK64_B_0x0 = 0;
        /** @brief Writes to SEC64 and PRIV64 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK64_B_0x1 = 1;

    /** @brief resource lock for peripheral 65 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC65 in RIFSC_RISC_SECCFGRx and PRIV65 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC65 and PRIV65 are ignored. (value: 1)
     */
        /** @brief SEC65 in RIFSC_RISC_SECCFGRx and PRIV65 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK65_B_0x0 = 0;
        /** @brief Writes to SEC65 and PRIV65 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK65_B_0x1 = 1;

    /** @brief resource lock for peripheral 66 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC66 in RIFSC_RISC_SECCFGRx and PRIV66 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC66 and PRIV66 are ignored. (value: 1)
     */
        /** @brief SEC66 in RIFSC_RISC_SECCFGRx and PRIV66 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK66_B_0x0 = 0;
        /** @brief Writes to SEC66 and PRIV66 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK66_B_0x1 = 1;

    /** @brief resource lock for peripheral 67 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC67 in RIFSC_RISC_SECCFGRx and PRIV67 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC67 and PRIV67 are ignored. (value: 1)
     */
        /** @brief SEC67 in RIFSC_RISC_SECCFGRx and PRIV67 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK67_B_0x0 = 0;
        /** @brief Writes to SEC67 and PRIV67 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK67_B_0x1 = 1;

    /** @brief resource lock for peripheral 68 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC68 in RIFSC_RISC_SECCFGRx and PRIV68 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC68 and PRIV68 are ignored. (value: 1)
     */
        /** @brief SEC68 in RIFSC_RISC_SECCFGRx and PRIV68 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK68_B_0x0 = 0;
        /** @brief Writes to SEC68 and PRIV68 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK68_B_0x1 = 1;

    /** @brief resource lock for peripheral 69 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC69 in RIFSC_RISC_SECCFGRx and PRIV69 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC69 and PRIV69 are ignored. (value: 1)
     */
        /** @brief SEC69 in RIFSC_RISC_SECCFGRx and PRIV69 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK69_B_0x0 = 0;
        /** @brief Writes to SEC69 and PRIV69 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK69_B_0x1 = 1;

    /** @brief resource lock for peripheral 70 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC70 in RIFSC_RISC_SECCFGRx and PRIV70 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC70 and PRIV70 are ignored. (value: 1)
     */
        /** @brief SEC70 in RIFSC_RISC_SECCFGRx and PRIV70 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK70_B_0x0 = 0;
        /** @brief Writes to SEC70 and PRIV70 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK70_B_0x1 = 1;

    /** @brief resource lock for peripheral 71 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC71 in RIFSC_RISC_SECCFGRx and PRIV71 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC71 and PRIV71 are ignored. (value: 1)
     */
        /** @brief SEC71 in RIFSC_RISC_SECCFGRx and PRIV71 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK71_B_0x0 = 0;
        /** @brief Writes to SEC71 and PRIV71 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK71_B_0x1 = 1;

    /** @brief resource lock for peripheral 72 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC72 in RIFSC_RISC_SECCFGRx and PRIV72 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC72 and PRIV72 are ignored. (value: 1)
     */
        /** @brief SEC72 in RIFSC_RISC_SECCFGRx and PRIV72 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK72_B_0x0 = 0;
        /** @brief Writes to SEC72 and PRIV72 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK72_B_0x1 = 1;

    /** @brief resource lock for peripheral 73 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC73 in RIFSC_RISC_SECCFGRx and PRIV73 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC73 and PRIV73 are ignored. (value: 1)
     */
        /** @brief SEC73 in RIFSC_RISC_SECCFGRx and PRIV73 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK73_B_0x0 = 0;
        /** @brief Writes to SEC73 and PRIV73 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK73_B_0x1 = 1;

    /** @brief resource lock for peripheral 74 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC74 in RIFSC_RISC_SECCFGRx and PRIV74 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC74 and PRIV74 are ignored. (value: 1)
     */
        /** @brief SEC74 in RIFSC_RISC_SECCFGRx and PRIV74 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK74_B_0x0 = 0;
        /** @brief Writes to SEC74 and PRIV74 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK74_B_0x1 = 1;

    /** @brief resource lock for peripheral 75 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC75 in RIFSC_RISC_SECCFGRx and PRIV75 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC75 and PRIV75 are ignored. (value: 1)
     */
        /** @brief SEC75 in RIFSC_RISC_SECCFGRx and PRIV75 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK75_B_0x0 = 0;
        /** @brief Writes to SEC75 and PRIV75 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK75_B_0x1 = 1;

    /** @brief resource lock for peripheral 76 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC76 in RIFSC_RISC_SECCFGRx and PRIV76 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC76 and PRIV76 are ignored. (value: 1)
     */
        /** @brief SEC76 in RIFSC_RISC_SECCFGRx and PRIV76 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK76_B_0x0 = 0;
        /** @brief Writes to SEC76 and PRIV76 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK76_B_0x1 = 1;

    /** @brief resource lock for peripheral 77 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC77 in RIFSC_RISC_SECCFGRx and PRIV77 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC77 and PRIV77 are ignored. (value: 1)
     */
        /** @brief SEC77 in RIFSC_RISC_SECCFGRx and PRIV77 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK77_B_0x0 = 0;
        /** @brief Writes to SEC77 and PRIV77 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK77_B_0x1 = 1;

    /** @brief resource lock for peripheral 78 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC78 in RIFSC_RISC_SECCFGRx and PRIV78 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC78 and PRIV78 are ignored. (value: 1)
     */
        /** @brief SEC78 in RIFSC_RISC_SECCFGRx and PRIV78 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK78_B_0x0 = 0;
        /** @brief Writes to SEC78 and PRIV78 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK78_B_0x1 = 1;

    /** @brief resource lock for peripheral 79 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC79 in RIFSC_RISC_SECCFGRx and PRIV79 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC79 and PRIV79 are ignored. (value: 1)
     */
        /** @brief SEC79 in RIFSC_RISC_SECCFGRx and PRIV79 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK79_B_0x0 = 0;
        /** @brief Writes to SEC79 and PRIV79 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK79_B_0x1 = 1;

    /** @brief resource lock for peripheral 80 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC80 in RIFSC_RISC_SECCFGRx and PRIV80 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC80 and PRIV80 are ignored. (value: 1)
     */
        /** @brief SEC80 in RIFSC_RISC_SECCFGRx and PRIV80 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK80_B_0x0 = 0;
        /** @brief Writes to SEC80 and PRIV80 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK80_B_0x1 = 1;

    /** @brief resource lock for peripheral 81 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC81 in RIFSC_RISC_SECCFGRx and PRIV81 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC81 and PRIV81 are ignored. (value: 1)
     */
        /** @brief SEC81 in RIFSC_RISC_SECCFGRx and PRIV81 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK81_B_0x0 = 0;
        /** @brief Writes to SEC81 and PRIV81 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK81_B_0x1 = 1;

    /** @brief resource lock for peripheral 82 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC82 in RIFSC_RISC_SECCFGRx and PRIV82 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC82 and PRIV82 are ignored. (value: 1)
     */
        /** @brief SEC82 in RIFSC_RISC_SECCFGRx and PRIV82 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK82_B_0x0 = 0;
        /** @brief Writes to SEC82 and PRIV82 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK82_B_0x1 = 1;

    /** @brief resource lock for peripheral 83 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC83 in RIFSC_RISC_SECCFGRx and PRIV83 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC83 and PRIV83 are ignored. (value: 1)
     */
        /** @brief SEC83 in RIFSC_RISC_SECCFGRx and PRIV83 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK83_B_0x0 = 0;
        /** @brief Writes to SEC83 and PRIV83 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK83_B_0x1 = 1;

    /** @brief resource lock for peripheral 84 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC84 in RIFSC_RISC_SECCFGRx and PRIV84 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC84 and PRIV84 are ignored. (value: 1)
     */
        /** @brief SEC84 in RIFSC_RISC_SECCFGRx and PRIV84 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK84_B_0x0 = 0;
        /** @brief Writes to SEC84 and PRIV84 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK84_B_0x1 = 1;

    /** @brief resource lock for peripheral 85 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC85 in RIFSC_RISC_SECCFGRx and PRIV85 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC85 and PRIV85 are ignored. (value: 1)
     */
        /** @brief SEC85 in RIFSC_RISC_SECCFGRx and PRIV85 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK85_B_0x0 = 0;
        /** @brief Writes to SEC85 and PRIV85 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK85_B_0x1 = 1;

    /** @brief resource lock for peripheral 86 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC86 in RIFSC_RISC_SECCFGRx and PRIV86 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC86 and PRIV86 are ignored. (value: 1)
     */
        /** @brief SEC86 in RIFSC_RISC_SECCFGRx and PRIV86 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK86_B_0x0 = 0;
        /** @brief Writes to SEC86 and PRIV86 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK86_B_0x1 = 1;

    /** @brief resource lock for peripheral 87 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC87 in RIFSC_RISC_SECCFGRx and PRIV87 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC87 and PRIV87 are ignored. (value: 1)
     */
        /** @brief SEC87 in RIFSC_RISC_SECCFGRx and PRIV87 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK87_B_0x0 = 0;
        /** @brief Writes to SEC87 and PRIV87 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK87_B_0x1 = 1;

    /** @brief resource lock for peripheral 88 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC88 in RIFSC_RISC_SECCFGRx and PRIV88 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC88 and PRIV88 are ignored. (value: 1)
     */
        /** @brief SEC88 in RIFSC_RISC_SECCFGRx and PRIV88 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK88_B_0x0 = 0;
        /** @brief Writes to SEC88 and PRIV88 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK88_B_0x1 = 1;

    /** @brief resource lock for peripheral 89 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC89 in RIFSC_RISC_SECCFGRx and PRIV89 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC89 and PRIV89 are ignored. (value: 1)
     */
        /** @brief SEC89 in RIFSC_RISC_SECCFGRx and PRIV89 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK89_B_0x0 = 0;
        /** @brief Writes to SEC89 and PRIV89 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK89_B_0x1 = 1;

    /** @brief resource lock for peripheral 90 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC90 in RIFSC_RISC_SECCFGRx and PRIV90 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC90 and PRIV90 are ignored. (value: 1)
     */
        /** @brief SEC90 in RIFSC_RISC_SECCFGRx and PRIV90 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK90_B_0x0 = 0;
        /** @brief Writes to SEC90 and PRIV90 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK90_B_0x1 = 1;

    /** @brief resource lock for peripheral 91 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC91 in RIFSC_RISC_SECCFGRx and PRIV91 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC91 and PRIV91 are ignored. (value: 1)
     */
        /** @brief SEC91 in RIFSC_RISC_SECCFGRx and PRIV91 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK91_B_0x0 = 0;
        /** @brief Writes to SEC91 and PRIV91 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK91_B_0x1 = 1;

    /** @brief resource lock for peripheral 92 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC92 in RIFSC_RISC_SECCFGRx and PRIV92 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC92 and PRIV92 are ignored. (value: 1)
     */
        /** @brief SEC92 in RIFSC_RISC_SECCFGRx and PRIV92 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK92_B_0x0 = 0;
        /** @brief Writes to SEC92 and PRIV92 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK92_B_0x1 = 1;

    /** @brief resource lock for peripheral 93 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC93 in RIFSC_RISC_SECCFGRx and PRIV93 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC93 and PRIV93 are ignored. (value: 1)
     */
        /** @brief SEC93 in RIFSC_RISC_SECCFGRx and PRIV93 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK93_B_0x0 = 0;
        /** @brief Writes to SEC93 and PRIV93 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK93_B_0x1 = 1;

    /** @brief resource lock for peripheral 94 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC94 in RIFSC_RISC_SECCFGRx and PRIV94 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC94 and PRIV94 are ignored. (value: 1)
     */
        /** @brief SEC94 in RIFSC_RISC_SECCFGRx and PRIV94 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK94_B_0x0 = 0;
        /** @brief Writes to SEC94 and PRIV94 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK94_B_0x1 = 1;

    /** @brief resource lock for peripheral 95 */
    using RIFSC_RISC_RCFGLOCKR2_RLOCK95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC95 in RIFSC_RISC_SECCFGRx and PRIV95 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC95 and PRIV95 are ignored. (value: 1)
     */
        /** @brief SEC95 in RIFSC_RISC_SECCFGRx and PRIV95 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK95_B_0x0 = 0;
        /** @brief Writes to SEC95 and PRIV95 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR2_RLOCK95_B_0x1 = 1;

    /** @brief RIFSC RISC slave resource configuration lock register 3 */
    using RIFSC_RISC_RCFGLOCKR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief resource lock for peripheral 96 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC96 in RIFSC_RISC_SECCFGRx and PRIV96 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC96 and PRIV96 are ignored. (value: 1)
     */
        /** @brief SEC96 in RIFSC_RISC_SECCFGRx and PRIV96 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK96_B_0x0 = 0;
        /** @brief Writes to SEC96 and PRIV96 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK96_B_0x1 = 1;

    /** @brief resource lock for peripheral 97 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC97 in RIFSC_RISC_SECCFGRx and PRIV97 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC97 and PRIV97 are ignored. (value: 1)
     */
        /** @brief SEC97 in RIFSC_RISC_SECCFGRx and PRIV97 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK97_B_0x0 = 0;
        /** @brief Writes to SEC97 and PRIV97 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK97_B_0x1 = 1;

    /** @brief resource lock for peripheral 98 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC98 in RIFSC_RISC_SECCFGRx and PRIV98 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC98 and PRIV98 are ignored. (value: 1)
     */
        /** @brief SEC98 in RIFSC_RISC_SECCFGRx and PRIV98 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK98_B_0x0 = 0;
        /** @brief Writes to SEC98 and PRIV98 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK98_B_0x1 = 1;

    /** @brief resource lock for peripheral 99 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC99 in RIFSC_RISC_SECCFGRx and PRIV99 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC99 and PRIV99 are ignored. (value: 1)
     */
        /** @brief SEC99 in RIFSC_RISC_SECCFGRx and PRIV99 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK99_B_0x0 = 0;
        /** @brief Writes to SEC99 and PRIV99 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK99_B_0x1 = 1;

    /** @brief resource lock for peripheral 100 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC100 in RIFSC_RISC_SECCFGRx and PRIV100 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC100 and PRIV100 are ignored. (value: 1)
     */
        /** @brief SEC100 in RIFSC_RISC_SECCFGRx and PRIV100 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK100_B_0x0 = 0;
        /** @brief Writes to SEC100 and PRIV100 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK100_B_0x1 = 1;

    /** @brief resource lock for peripheral 101 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC101 in RIFSC_RISC_SECCFGRx and PRIV101 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC101 and PRIV101 are ignored. (value: 1)
     */
        /** @brief SEC101 in RIFSC_RISC_SECCFGRx and PRIV101 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK101_B_0x0 = 0;
        /** @brief Writes to SEC101 and PRIV101 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK101_B_0x1 = 1;

    /** @brief resource lock for peripheral 102 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC102 in RIFSC_RISC_SECCFGRx and PRIV102 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC102 and PRIV102 are ignored. (value: 1)
     */
        /** @brief SEC102 in RIFSC_RISC_SECCFGRx and PRIV102 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK102_B_0x0 = 0;
        /** @brief Writes to SEC102 and PRIV102 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK102_B_0x1 = 1;

    /** @brief resource lock for peripheral 103 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC103 in RIFSC_RISC_SECCFGRx and PRIV103 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC103 and PRIV103 are ignored. (value: 1)
     */
        /** @brief SEC103 in RIFSC_RISC_SECCFGRx and PRIV103 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK103_B_0x0 = 0;
        /** @brief Writes to SEC103 and PRIV103 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK103_B_0x1 = 1;

    /** @brief resource lock for peripheral 104 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC104 in RIFSC_RISC_SECCFGRx and PRIV104 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC104 and PRIV104 are ignored. (value: 1)
     */
        /** @brief SEC104 in RIFSC_RISC_SECCFGRx and PRIV104 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK104_B_0x0 = 0;
        /** @brief Writes to SEC104 and PRIV104 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK104_B_0x1 = 1;

    /** @brief resource lock for peripheral 105 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC105 in RIFSC_RISC_SECCFGRx and PRIV105 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC105 and PRIV105 are ignored. (value: 1)
     */
        /** @brief SEC105 in RIFSC_RISC_SECCFGRx and PRIV105 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK105_B_0x0 = 0;
        /** @brief Writes to SEC105 and PRIV105 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK105_B_0x1 = 1;

    /** @brief resource lock for peripheral 106 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC106 in RIFSC_RISC_SECCFGRx and PRIV106 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC106 and PRIV106 are ignored. (value: 1)
     */
        /** @brief SEC106 in RIFSC_RISC_SECCFGRx and PRIV106 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK106_B_0x0 = 0;
        /** @brief Writes to SEC106 and PRIV106 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK106_B_0x1 = 1;

    /** @brief resource lock for peripheral 107 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC107 in RIFSC_RISC_SECCFGRx and PRIV107 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC107 and PRIV107 are ignored. (value: 1)
     */
        /** @brief SEC107 in RIFSC_RISC_SECCFGRx and PRIV107 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK107_B_0x0 = 0;
        /** @brief Writes to SEC107 and PRIV107 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK107_B_0x1 = 1;

    /** @brief resource lock for peripheral 108 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC108 in RIFSC_RISC_SECCFGRx and PRIV108 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC108 and PRIV108 are ignored. (value: 1)
     */
        /** @brief SEC108 in RIFSC_RISC_SECCFGRx and PRIV108 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK108_B_0x0 = 0;
        /** @brief Writes to SEC108 and PRIV108 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK108_B_0x1 = 1;

    /** @brief resource lock for peripheral 109 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC109 in RIFSC_RISC_SECCFGRx and PRIV109 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC109 and PRIV109 are ignored. (value: 1)
     */
        /** @brief SEC109 in RIFSC_RISC_SECCFGRx and PRIV109 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK109_B_0x0 = 0;
        /** @brief Writes to SEC109 and PRIV109 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK109_B_0x1 = 1;

    /** @brief resource lock for peripheral 110 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC110 in RIFSC_RISC_SECCFGRx and PRIV110 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC110 and PRIV110 are ignored. (value: 1)
     */
        /** @brief SEC110 in RIFSC_RISC_SECCFGRx and PRIV110 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK110_B_0x0 = 0;
        /** @brief Writes to SEC110 and PRIV110 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK110_B_0x1 = 1;

    /** @brief resource lock for peripheral 111 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC111 in RIFSC_RISC_SECCFGRx and PRIV111 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC111 and PRIV111 are ignored. (value: 1)
     */
        /** @brief SEC111 in RIFSC_RISC_SECCFGRx and PRIV111 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK111_B_0x0 = 0;
        /** @brief Writes to SEC111 and PRIV111 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK111_B_0x1 = 1;

    /** @brief resource lock for peripheral 112 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC112 in RIFSC_RISC_SECCFGRx and PRIV112 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC112 and PRIV112 are ignored. (value: 1)
     */
        /** @brief SEC112 in RIFSC_RISC_SECCFGRx and PRIV112 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK112_B_0x0 = 0;
        /** @brief Writes to SEC112 and PRIV112 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK112_B_0x1 = 1;

    /** @brief resource lock for peripheral 113 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC113 in RIFSC_RISC_SECCFGRx and PRIV113 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC113 and PRIV113 are ignored. (value: 1)
     */
        /** @brief SEC113 in RIFSC_RISC_SECCFGRx and PRIV113 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK113_B_0x0 = 0;
        /** @brief Writes to SEC113 and PRIV113 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK113_B_0x1 = 1;

    /** @brief resource lock for peripheral 114 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC114 in RIFSC_RISC_SECCFGRx and PRIV114 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC114 and PRIV114 are ignored. (value: 1)
     */
        /** @brief SEC114 in RIFSC_RISC_SECCFGRx and PRIV114 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK114_B_0x0 = 0;
        /** @brief Writes to SEC114 and PRIV114 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK114_B_0x1 = 1;

    /** @brief resource lock for peripheral 115 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC115 in RIFSC_RISC_SECCFGRx and PRIV115 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC115 and PRIV115 are ignored. (value: 1)
     */
        /** @brief SEC115 in RIFSC_RISC_SECCFGRx and PRIV115 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK115_B_0x0 = 0;
        /** @brief Writes to SEC115 and PRIV115 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK115_B_0x1 = 1;

    /** @brief resource lock for peripheral 116 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC116 in RIFSC_RISC_SECCFGRx and PRIV116 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC116 and PRIV116 are ignored. (value: 1)
     */
        /** @brief SEC116 in RIFSC_RISC_SECCFGRx and PRIV116 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK116_B_0x0 = 0;
        /** @brief Writes to SEC116 and PRIV116 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK116_B_0x1 = 1;

    /** @brief resource lock for peripheral 117 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC117 in RIFSC_RISC_SECCFGRx and PRIV117 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC117 and PRIV117 are ignored. (value: 1)
     */
        /** @brief SEC117 in RIFSC_RISC_SECCFGRx and PRIV117 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK117_B_0x0 = 0;
        /** @brief Writes to SEC117 and PRIV117 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK117_B_0x1 = 1;

    /** @brief resource lock for peripheral 118 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC118 in RIFSC_RISC_SECCFGRx and PRIV118 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC118 and PRIV118 are ignored. (value: 1)
     */
        /** @brief SEC118 in RIFSC_RISC_SECCFGRx and PRIV118 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK118_B_0x0 = 0;
        /** @brief Writes to SEC118 and PRIV118 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK118_B_0x1 = 1;

    /** @brief resource lock for peripheral 119 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC119 in RIFSC_RISC_SECCFGRx and PRIV119 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC119 and PRIV119 are ignored. (value: 1)
     */
        /** @brief SEC119 in RIFSC_RISC_SECCFGRx and PRIV119 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK119_B_0x0 = 0;
        /** @brief Writes to SEC119 and PRIV119 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK119_B_0x1 = 1;

    /** @brief resource lock for peripheral 120 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC120 in RIFSC_RISC_SECCFGRx and PRIV120 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC120 and PRIV120 are ignored. (value: 1)
     */
        /** @brief SEC120 in RIFSC_RISC_SECCFGRx and PRIV120 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK120_B_0x0 = 0;
        /** @brief Writes to SEC120 and PRIV120 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK120_B_0x1 = 1;

    /** @brief resource lock for peripheral 121 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC121 in RIFSC_RISC_SECCFGRx and PRIV121 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC121 and PRIV121 are ignored. (value: 1)
     */
        /** @brief SEC121 in RIFSC_RISC_SECCFGRx and PRIV121 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK121_B_0x0 = 0;
        /** @brief Writes to SEC121 and PRIV121 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK121_B_0x1 = 1;

    /** @brief resource lock for peripheral 122 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC122 in RIFSC_RISC_SECCFGRx and PRIV122 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC122 and PRIV122 are ignored. (value: 1)
     */
        /** @brief SEC122 in RIFSC_RISC_SECCFGRx and PRIV122 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK122_B_0x0 = 0;
        /** @brief Writes to SEC122 and PRIV122 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK122_B_0x1 = 1;

    /** @brief resource lock for peripheral 123 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC123 in RIFSC_RISC_SECCFGRx and PRIV123 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC123 and PRIV123 are ignored. (value: 1)
     */
        /** @brief SEC123 in RIFSC_RISC_SECCFGRx and PRIV123 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK123_B_0x0 = 0;
        /** @brief Writes to SEC123 and PRIV123 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK123_B_0x1 = 1;

    /** @brief resource lock for peripheral 124 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC124 in RIFSC_RISC_SECCFGRx and PRIV124 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC124 and PRIV124 are ignored. (value: 1)
     */
        /** @brief SEC124 in RIFSC_RISC_SECCFGRx and PRIV124 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK124_B_0x0 = 0;
        /** @brief Writes to SEC124 and PRIV124 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK124_B_0x1 = 1;

    /** @brief resource lock for peripheral 125 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC125 in RIFSC_RISC_SECCFGRx and PRIV125 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC125 and PRIV125 are ignored. (value: 1)
     */
        /** @brief SEC125 in RIFSC_RISC_SECCFGRx and PRIV125 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK125_B_0x0 = 0;
        /** @brief Writes to SEC125 and PRIV125 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK125_B_0x1 = 1;

    /** @brief resource lock for peripheral 126 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC126 in RIFSC_RISC_SECCFGRx and PRIV126 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC126 and PRIV126 are ignored. (value: 1)
     */
        /** @brief SEC126 in RIFSC_RISC_SECCFGRx and PRIV126 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK126_B_0x0 = 0;
        /** @brief Writes to SEC126 and PRIV126 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK126_B_0x1 = 1;

    /** @brief resource lock for peripheral 127 */
    using RIFSC_RISC_RCFGLOCKR3_RLOCK127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC127 in RIFSC_RISC_SECCFGRx and PRIV127 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC127 and PRIV127 are ignored. (value: 1)
     */
        /** @brief SEC127 in RIFSC_RISC_SECCFGRx and PRIV127 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK127_B_0x0 = 0;
        /** @brief Writes to SEC127 and PRIV127 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR3_RLOCK127_B_0x1 = 1;

    /** @brief RIFSC RISC slave resource configuration lock register 4 */
    using RIFSC_RISC_RCFGLOCKR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief resource lock for peripheral 128 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC128 in RIFSC_RISC_SECCFGRx and PRIV128 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC128 and PRIV128 are ignored. (value: 1)
     */
        /** @brief SEC128 in RIFSC_RISC_SECCFGRx and PRIV128 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK128_B_0x0 = 0;
        /** @brief Writes to SEC128 and PRIV128 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK128_B_0x1 = 1;

    /** @brief resource lock for peripheral 129 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC129 in RIFSC_RISC_SECCFGRx and PRIV129 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC129 and PRIV129 are ignored. (value: 1)
     */
        /** @brief SEC129 in RIFSC_RISC_SECCFGRx and PRIV129 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK129_B_0x0 = 0;
        /** @brief Writes to SEC129 and PRIV129 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK129_B_0x1 = 1;

    /** @brief resource lock for peripheral 130 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC130 in RIFSC_RISC_SECCFGRx and PRIV130 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC130 and PRIV130 are ignored. (value: 1)
     */
        /** @brief SEC130 in RIFSC_RISC_SECCFGRx and PRIV130 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK130_B_0x0 = 0;
        /** @brief Writes to SEC130 and PRIV130 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK130_B_0x1 = 1;

    /** @brief resource lock for peripheral 131 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC131 in RIFSC_RISC_SECCFGRx and PRIV131 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC131 and PRIV131 are ignored. (value: 1)
     */
        /** @brief SEC131 in RIFSC_RISC_SECCFGRx and PRIV131 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK131_B_0x0 = 0;
        /** @brief Writes to SEC131 and PRIV131 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK131_B_0x1 = 1;

    /** @brief resource lock for peripheral 132 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC132 in RIFSC_RISC_SECCFGRx and PRIV132 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC132 and PRIV132 are ignored. (value: 1)
     */
        /** @brief SEC132 in RIFSC_RISC_SECCFGRx and PRIV132 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK132_B_0x0 = 0;
        /** @brief Writes to SEC132 and PRIV132 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK132_B_0x1 = 1;

    /** @brief resource lock for peripheral 133 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC133 in RIFSC_RISC_SECCFGRx and PRIV133 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC133 and PRIV133 are ignored. (value: 1)
     */
        /** @brief SEC133 in RIFSC_RISC_SECCFGRx and PRIV133 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK133_B_0x0 = 0;
        /** @brief Writes to SEC133 and PRIV133 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK133_B_0x1 = 1;

    /** @brief resource lock for peripheral 134 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC134 in RIFSC_RISC_SECCFGRx and PRIV134 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC134 and PRIV134 are ignored. (value: 1)
     */
        /** @brief SEC134 in RIFSC_RISC_SECCFGRx and PRIV134 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK134_B_0x0 = 0;
        /** @brief Writes to SEC134 and PRIV134 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK134_B_0x1 = 1;

    /** @brief resource lock for peripheral 135 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC135 in RIFSC_RISC_SECCFGRx and PRIV135 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC135 and PRIV135 are ignored. (value: 1)
     */
        /** @brief SEC135 in RIFSC_RISC_SECCFGRx and PRIV135 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK135_B_0x0 = 0;
        /** @brief Writes to SEC135 and PRIV135 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK135_B_0x1 = 1;

    /** @brief resource lock for peripheral 136 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC136 in RIFSC_RISC_SECCFGRx and PRIV136 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC136 and PRIV136 are ignored. (value: 1)
     */
        /** @brief SEC136 in RIFSC_RISC_SECCFGRx and PRIV136 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK136_B_0x0 = 0;
        /** @brief Writes to SEC136 and PRIV136 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK136_B_0x1 = 1;

    /** @brief resource lock for peripheral 137 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC137 in RIFSC_RISC_SECCFGRx and PRIV137 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC137 and PRIV137 are ignored. (value: 1)
     */
        /** @brief SEC137 in RIFSC_RISC_SECCFGRx and PRIV137 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK137_B_0x0 = 0;
        /** @brief Writes to SEC137 and PRIV137 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK137_B_0x1 = 1;

    /** @brief resource lock for peripheral 138 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC138 in RIFSC_RISC_SECCFGRx and PRIV138 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC138 and PRIV138 are ignored. (value: 1)
     */
        /** @brief SEC138 in RIFSC_RISC_SECCFGRx and PRIV138 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK138_B_0x0 = 0;
        /** @brief Writes to SEC138 and PRIV138 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK138_B_0x1 = 1;

    /** @brief resource lock for peripheral 139 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC139 in RIFSC_RISC_SECCFGRx and PRIV139 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC139 and PRIV139 are ignored. (value: 1)
     */
        /** @brief SEC139 in RIFSC_RISC_SECCFGRx and PRIV139 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK139_B_0x0 = 0;
        /** @brief Writes to SEC139 and PRIV139 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK139_B_0x1 = 1;

    /** @brief resource lock for peripheral 140 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC140 in RIFSC_RISC_SECCFGRx and PRIV140 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC140 and PRIV140 are ignored. (value: 1)
     */
        /** @brief SEC140 in RIFSC_RISC_SECCFGRx and PRIV140 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK140_B_0x0 = 0;
        /** @brief Writes to SEC140 and PRIV140 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK140_B_0x1 = 1;

    /** @brief resource lock for peripheral 141 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC141 in RIFSC_RISC_SECCFGRx and PRIV141 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC141 and PRIV141 are ignored. (value: 1)
     */
        /** @brief SEC141 in RIFSC_RISC_SECCFGRx and PRIV141 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK141_B_0x0 = 0;
        /** @brief Writes to SEC141 and PRIV141 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK141_B_0x1 = 1;

    /** @brief resource lock for peripheral 142 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC142 in RIFSC_RISC_SECCFGRx and PRIV142 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC142 and PRIV142 are ignored. (value: 1)
     */
        /** @brief SEC142 in RIFSC_RISC_SECCFGRx and PRIV142 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK142_B_0x0 = 0;
        /** @brief Writes to SEC142 and PRIV142 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK142_B_0x1 = 1;

    /** @brief resource lock for peripheral 143 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC143 in RIFSC_RISC_SECCFGRx and PRIV143 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC143 and PRIV143 are ignored. (value: 1)
     */
        /** @brief SEC143 in RIFSC_RISC_SECCFGRx and PRIV143 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK143_B_0x0 = 0;
        /** @brief Writes to SEC143 and PRIV143 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK143_B_0x1 = 1;

    /** @brief resource lock for peripheral 144 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC144 in RIFSC_RISC_SECCFGRx and PRIV144 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC144 and PRIV144 are ignored. (value: 1)
     */
        /** @brief SEC144 in RIFSC_RISC_SECCFGRx and PRIV144 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK144_B_0x0 = 0;
        /** @brief Writes to SEC144 and PRIV144 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK144_B_0x1 = 1;

    /** @brief resource lock for peripheral 145 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC145 in RIFSC_RISC_SECCFGRx and PRIV145 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC145 and PRIV145 are ignored. (value: 1)
     */
        /** @brief SEC145 in RIFSC_RISC_SECCFGRx and PRIV145 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK145_B_0x0 = 0;
        /** @brief Writes to SEC145 and PRIV145 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK145_B_0x1 = 1;

    /** @brief resource lock for peripheral 146 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC146 in RIFSC_RISC_SECCFGRx and PRIV146 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC146 and PRIV146 are ignored. (value: 1)
     */
        /** @brief SEC146 in RIFSC_RISC_SECCFGRx and PRIV146 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK146_B_0x0 = 0;
        /** @brief Writes to SEC146 and PRIV146 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK146_B_0x1 = 1;

    /** @brief resource lock for peripheral 147 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC147 in RIFSC_RISC_SECCFGRx and PRIV147 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC147 and PRIV147 are ignored. (value: 1)
     */
        /** @brief SEC147 in RIFSC_RISC_SECCFGRx and PRIV147 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK147_B_0x0 = 0;
        /** @brief Writes to SEC147 and PRIV147 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK147_B_0x1 = 1;

    /** @brief resource lock for peripheral 148 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC148 in RIFSC_RISC_SECCFGRx and PRIV148 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC148 and PRIV148 are ignored. (value: 1)
     */
        /** @brief SEC148 in RIFSC_RISC_SECCFGRx and PRIV148 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK148_B_0x0 = 0;
        /** @brief Writes to SEC148 and PRIV148 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK148_B_0x1 = 1;

    /** @brief resource lock for peripheral 149 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC149 in RIFSC_RISC_SECCFGRx and PRIV149 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC149 and PRIV149 are ignored. (value: 1)
     */
        /** @brief SEC149 in RIFSC_RISC_SECCFGRx and PRIV149 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK149_B_0x0 = 0;
        /** @brief Writes to SEC149 and PRIV149 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK149_B_0x1 = 1;

    /** @brief resource lock for peripheral 150 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC150 in RIFSC_RISC_SECCFGRx and PRIV150 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC150 and PRIV150 are ignored. (value: 1)
     */
        /** @brief SEC150 in RIFSC_RISC_SECCFGRx and PRIV150 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK150_B_0x0 = 0;
        /** @brief Writes to SEC150 and PRIV150 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK150_B_0x1 = 1;

    /** @brief resource lock for peripheral 151 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC151 in RIFSC_RISC_SECCFGRx and PRIV151 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC151 and PRIV151 are ignored. (value: 1)
     */
        /** @brief SEC151 in RIFSC_RISC_SECCFGRx and PRIV151 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK151_B_0x0 = 0;
        /** @brief Writes to SEC151 and PRIV151 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK151_B_0x1 = 1;

    /** @brief resource lock for peripheral 152 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC152 in RIFSC_RISC_SECCFGRx and PRIV152 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC152 and PRIV152 are ignored. (value: 1)
     */
        /** @brief SEC152 in RIFSC_RISC_SECCFGRx and PRIV152 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK152_B_0x0 = 0;
        /** @brief Writes to SEC152 and PRIV152 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK152_B_0x1 = 1;

    /** @brief resource lock for peripheral 153 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC153 in RIFSC_RISC_SECCFGRx and PRIV153 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC153 and PRIV153 are ignored. (value: 1)
     */
        /** @brief SEC153 in RIFSC_RISC_SECCFGRx and PRIV153 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK153_B_0x0 = 0;
        /** @brief Writes to SEC153 and PRIV153 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK153_B_0x1 = 1;

    /** @brief resource lock for peripheral 154 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC154 in RIFSC_RISC_SECCFGRx and PRIV154 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC154 and PRIV154 are ignored. (value: 1)
     */
        /** @brief SEC154 in RIFSC_RISC_SECCFGRx and PRIV154 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK154_B_0x0 = 0;
        /** @brief Writes to SEC154 and PRIV154 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK154_B_0x1 = 1;

    /** @brief resource lock for peripheral 155 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC155 in RIFSC_RISC_SECCFGRx and PRIV155 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC155 and PRIV155 are ignored. (value: 1)
     */
        /** @brief SEC155 in RIFSC_RISC_SECCFGRx and PRIV155 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK155_B_0x0 = 0;
        /** @brief Writes to SEC155 and PRIV155 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK155_B_0x1 = 1;

    /** @brief resource lock for peripheral 156 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC156 in RIFSC_RISC_SECCFGRx and PRIV156 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC156 and PRIV156 are ignored. (value: 1)
     */
        /** @brief SEC156 in RIFSC_RISC_SECCFGRx and PRIV156 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK156_B_0x0 = 0;
        /** @brief Writes to SEC156 and PRIV156 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK156_B_0x1 = 1;

    /** @brief resource lock for peripheral 157 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC157 in RIFSC_RISC_SECCFGRx and PRIV157 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC157 and PRIV157 are ignored. (value: 1)
     */
        /** @brief SEC157 in RIFSC_RISC_SECCFGRx and PRIV157 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK157_B_0x0 = 0;
        /** @brief Writes to SEC157 and PRIV157 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK157_B_0x1 = 1;

    /** @brief resource lock for peripheral 158 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC158 in RIFSC_RISC_SECCFGRx and PRIV158 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC158 and PRIV158 are ignored. (value: 1)
     */
        /** @brief SEC158 in RIFSC_RISC_SECCFGRx and PRIV158 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK158_B_0x0 = 0;
        /** @brief Writes to SEC158 and PRIV158 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK158_B_0x1 = 1;

    /** @brief resource lock for peripheral 159 */
    using RIFSC_RISC_RCFGLOCKR4_RLOCK159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC159 in RIFSC_RISC_SECCFGRx and PRIV159 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC159 and PRIV159 are ignored. (value: 1)
     */
        /** @brief SEC159 in RIFSC_RISC_SECCFGRx and PRIV159 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK159_B_0x0 = 0;
        /** @brief Writes to SEC159 and PRIV159 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR4_RLOCK159_B_0x1 = 1;

    /** @brief RIFSC RISC slave resource configuration lock register 5 */
    using RIFSC_RISC_RCFGLOCKR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief resource lock for peripheral 160 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC160 in RIFSC_RISC_SECCFGRx and PRIV160 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC160 and PRIV160 are ignored. (value: 1)
     */
        /** @brief SEC160 in RIFSC_RISC_SECCFGRx and PRIV160 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK160_B_0x0 = 0;
        /** @brief Writes to SEC160 and PRIV160 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK160_B_0x1 = 1;

    /** @brief resource lock for peripheral 161 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC161 in RIFSC_RISC_SECCFGRx and PRIV161 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC161 and PRIV161 are ignored. (value: 1)
     */
        /** @brief SEC161 in RIFSC_RISC_SECCFGRx and PRIV161 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK161_B_0x0 = 0;
        /** @brief Writes to SEC161 and PRIV161 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK161_B_0x1 = 1;

    /** @brief resource lock for peripheral 162 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC162 in RIFSC_RISC_SECCFGRx and PRIV162 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC162 and PRIV162 are ignored. (value: 1)
     */
        /** @brief SEC162 in RIFSC_RISC_SECCFGRx and PRIV162 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK162_B_0x0 = 0;
        /** @brief Writes to SEC162 and PRIV162 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK162_B_0x1 = 1;

    /** @brief resource lock for peripheral 163 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC163 in RIFSC_RISC_SECCFGRx and PRIV163 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC163 and PRIV163 are ignored. (value: 1)
     */
        /** @brief SEC163 in RIFSC_RISC_SECCFGRx and PRIV163 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK163_B_0x0 = 0;
        /** @brief Writes to SEC163 and PRIV163 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK163_B_0x1 = 1;

    /** @brief resource lock for peripheral 164 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC164 in RIFSC_RISC_SECCFGRx and PRIV164 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC164 and PRIV164 are ignored. (value: 1)
     */
        /** @brief SEC164 in RIFSC_RISC_SECCFGRx and PRIV164 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK164_B_0x0 = 0;
        /** @brief Writes to SEC164 and PRIV164 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK164_B_0x1 = 1;

    /** @brief resource lock for peripheral 165 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC165 in RIFSC_RISC_SECCFGRx and PRIV165 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC165 and PRIV165 are ignored. (value: 1)
     */
        /** @brief SEC165 in RIFSC_RISC_SECCFGRx and PRIV165 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK165_B_0x0 = 0;
        /** @brief Writes to SEC165 and PRIV165 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK165_B_0x1 = 1;

    /** @brief resource lock for peripheral 166 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC166 in RIFSC_RISC_SECCFGRx and PRIV166 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC166 and PRIV166 are ignored. (value: 1)
     */
        /** @brief SEC166 in RIFSC_RISC_SECCFGRx and PRIV166 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK166_B_0x0 = 0;
        /** @brief Writes to SEC166 and PRIV166 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK166_B_0x1 = 1;

    /** @brief resource lock for peripheral 167 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC167 in RIFSC_RISC_SECCFGRx and PRIV167 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC167 and PRIV167 are ignored. (value: 1)
     */
        /** @brief SEC167 in RIFSC_RISC_SECCFGRx and PRIV167 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK167_B_0x0 = 0;
        /** @brief Writes to SEC167 and PRIV167 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK167_B_0x1 = 1;

    /** @brief resource lock for peripheral 168 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC168 in RIFSC_RISC_SECCFGRx and PRIV168 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC168 and PRIV168 are ignored. (value: 1)
     */
        /** @brief SEC168 in RIFSC_RISC_SECCFGRx and PRIV168 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK168_B_0x0 = 0;
        /** @brief Writes to SEC168 and PRIV168 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK168_B_0x1 = 1;

    /** @brief resource lock for peripheral 169 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC169 in RIFSC_RISC_SECCFGRx and PRIV169 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC169 and PRIV169 are ignored. (value: 1)
     */
        /** @brief SEC169 in RIFSC_RISC_SECCFGRx and PRIV169 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK169_B_0x0 = 0;
        /** @brief Writes to SEC169 and PRIV169 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK169_B_0x1 = 1;

    /** @brief resource lock for peripheral 170 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC170 in RIFSC_RISC_SECCFGRx and PRIV170 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC170 and PRIV170 are ignored. (value: 1)
     */
        /** @brief SEC170 in RIFSC_RISC_SECCFGRx and PRIV170 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK170_B_0x0 = 0;
        /** @brief Writes to SEC170 and PRIV170 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK170_B_0x1 = 1;

    /** @brief resource lock for peripheral 171 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC171 in RIFSC_RISC_SECCFGRx and PRIV171 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC171 and PRIV171 are ignored. (value: 1)
     */
        /** @brief SEC171 in RIFSC_RISC_SECCFGRx and PRIV171 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK171_B_0x0 = 0;
        /** @brief Writes to SEC171 and PRIV171 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK171_B_0x1 = 1;

    /** @brief resource lock for peripheral 172 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC172 in RIFSC_RISC_SECCFGRx and PRIV172 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC172 and PRIV172 are ignored. (value: 1)
     */
        /** @brief SEC172 in RIFSC_RISC_SECCFGRx and PRIV172 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK172_B_0x0 = 0;
        /** @brief Writes to SEC172 and PRIV172 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK172_B_0x1 = 1;

    /** @brief resource lock for peripheral 173 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC173 in RIFSC_RISC_SECCFGRx and PRIV173 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC173 and PRIV173 are ignored. (value: 1)
     */
        /** @brief SEC173 in RIFSC_RISC_SECCFGRx and PRIV173 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK173_B_0x0 = 0;
        /** @brief Writes to SEC173 and PRIV173 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK173_B_0x1 = 1;

    /** @brief resource lock for peripheral 174 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC174 in RIFSC_RISC_SECCFGRx and PRIV174 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC174 and PRIV174 are ignored. (value: 1)
     */
        /** @brief SEC174 in RIFSC_RISC_SECCFGRx and PRIV174 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK174_B_0x0 = 0;
        /** @brief Writes to SEC174 and PRIV174 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK174_B_0x1 = 1;

    /** @brief resource lock for peripheral 175 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC175 in RIFSC_RISC_SECCFGRx and PRIV175 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC175 and PRIV175 are ignored. (value: 1)
     */
        /** @brief SEC175 in RIFSC_RISC_SECCFGRx and PRIV175 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK175_B_0x0 = 0;
        /** @brief Writes to SEC175 and PRIV175 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK175_B_0x1 = 1;

    /** @brief resource lock for peripheral 176 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC176 in RIFSC_RISC_SECCFGRx and PRIV176 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC176 and PRIV176 are ignored. (value: 1)
     */
        /** @brief SEC176 in RIFSC_RISC_SECCFGRx and PRIV176 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK176_B_0x0 = 0;
        /** @brief Writes to SEC176 and PRIV176 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK176_B_0x1 = 1;

    /** @brief resource lock for peripheral 177 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC177 in RIFSC_RISC_SECCFGRx and PRIV177 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC177 and PRIV177 are ignored. (value: 1)
     */
        /** @brief SEC177 in RIFSC_RISC_SECCFGRx and PRIV177 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK177_B_0x0 = 0;
        /** @brief Writes to SEC177 and PRIV177 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK177_B_0x1 = 1;

    /** @brief resource lock for peripheral 178 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC178 in RIFSC_RISC_SECCFGRx and PRIV178 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC178 and PRIV178 are ignored. (value: 1)
     */
        /** @brief SEC178 in RIFSC_RISC_SECCFGRx and PRIV178 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK178_B_0x0 = 0;
        /** @brief Writes to SEC178 and PRIV178 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK178_B_0x1 = 1;

    /** @brief resource lock for peripheral 179 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC179 in RIFSC_RISC_SECCFGRx and PRIV179 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC179 and PRIV179 are ignored. (value: 1)
     */
        /** @brief SEC179 in RIFSC_RISC_SECCFGRx and PRIV179 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK179_B_0x0 = 0;
        /** @brief Writes to SEC179 and PRIV179 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK179_B_0x1 = 1;

    /** @brief resource lock for peripheral 180 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC180 in RIFSC_RISC_SECCFGRx and PRIV180 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC180 and PRIV180 are ignored. (value: 1)
     */
        /** @brief SEC180 in RIFSC_RISC_SECCFGRx and PRIV180 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK180_B_0x0 = 0;
        /** @brief Writes to SEC180 and PRIV180 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK180_B_0x1 = 1;

    /** @brief resource lock for peripheral 181 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC181 in RIFSC_RISC_SECCFGRx and PRIV181 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC181 and PRIV181 are ignored. (value: 1)
     */
        /** @brief SEC181 in RIFSC_RISC_SECCFGRx and PRIV181 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK181_B_0x0 = 0;
        /** @brief Writes to SEC181 and PRIV181 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK181_B_0x1 = 1;

    /** @brief resource lock for peripheral 182 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC182 in RIFSC_RISC_SECCFGRx and PRIV182 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC182 and PRIV182 are ignored. (value: 1)
     */
        /** @brief SEC182 in RIFSC_RISC_SECCFGRx and PRIV182 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK182_B_0x0 = 0;
        /** @brief Writes to SEC182 and PRIV182 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK182_B_0x1 = 1;

    /** @brief resource lock for peripheral 183 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC183 in RIFSC_RISC_SECCFGRx and PRIV183 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC183 and PRIV183 are ignored. (value: 1)
     */
        /** @brief SEC183 in RIFSC_RISC_SECCFGRx and PRIV183 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK183_B_0x0 = 0;
        /** @brief Writes to SEC183 and PRIV183 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK183_B_0x1 = 1;

    /** @brief resource lock for peripheral 184 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC184 in RIFSC_RISC_SECCFGRx and PRIV184 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC184 and PRIV184 are ignored. (value: 1)
     */
        /** @brief SEC184 in RIFSC_RISC_SECCFGRx and PRIV184 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK184_B_0x0 = 0;
        /** @brief Writes to SEC184 and PRIV184 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK184_B_0x1 = 1;

    /** @brief resource lock for peripheral 185 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC185 in RIFSC_RISC_SECCFGRx and PRIV185 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC185 and PRIV185 are ignored. (value: 1)
     */
        /** @brief SEC185 in RIFSC_RISC_SECCFGRx and PRIV185 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK185_B_0x0 = 0;
        /** @brief Writes to SEC185 and PRIV185 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK185_B_0x1 = 1;

    /** @brief resource lock for peripheral 186 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC186 in RIFSC_RISC_SECCFGRx and PRIV186 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC186 and PRIV186 are ignored. (value: 1)
     */
        /** @brief SEC186 in RIFSC_RISC_SECCFGRx and PRIV186 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK186_B_0x0 = 0;
        /** @brief Writes to SEC186 and PRIV186 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK186_B_0x1 = 1;

    /** @brief resource lock for peripheral 187 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC187 in RIFSC_RISC_SECCFGRx and PRIV187 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC187 and PRIV187 are ignored. (value: 1)
     */
        /** @brief SEC187 in RIFSC_RISC_SECCFGRx and PRIV187 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK187_B_0x0 = 0;
        /** @brief Writes to SEC187 and PRIV187 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK187_B_0x1 = 1;

    /** @brief resource lock for peripheral 188 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC188 in RIFSC_RISC_SECCFGRx and PRIV188 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC188 and PRIV188 are ignored. (value: 1)
     */
        /** @brief SEC188 in RIFSC_RISC_SECCFGRx and PRIV188 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK188_B_0x0 = 0;
        /** @brief Writes to SEC188 and PRIV188 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK188_B_0x1 = 1;

    /** @brief resource lock for peripheral 189 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC189 in RIFSC_RISC_SECCFGRx and PRIV189 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC189 and PRIV189 are ignored. (value: 1)
     */
        /** @brief SEC189 in RIFSC_RISC_SECCFGRx and PRIV189 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK189_B_0x0 = 0;
        /** @brief Writes to SEC189 and PRIV189 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK189_B_0x1 = 1;

    /** @brief resource lock for peripheral 190 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC190 in RIFSC_RISC_SECCFGRx and PRIV190 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC190 and PRIV190 are ignored. (value: 1)
     */
        /** @brief SEC190 in RIFSC_RISC_SECCFGRx and PRIV190 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK190_B_0x0 = 0;
        /** @brief Writes to SEC190 and PRIV190 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK190_B_0x1 = 1;

    /** @brief resource lock for peripheral 191 */
    using RIFSC_RISC_RCFGLOCKR5_RLOCK191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC191 in RIFSC_RISC_SECCFGRx and PRIV191 in RIFSC_RISC_PRIVCFGRx are writable. (value: 0)
     *          - B_0x1: Writes to SEC191 and PRIV191 are ignored. (value: 1)
     */
        /** @brief SEC191 in RIFSC_RISC_SECCFGRx and PRIV191 in RIFSC_RISC_PRIVCFGRx are writable. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK191_B_0x0 = 0;
        /** @brief Writes to SEC191 and PRIV191 are ignored. */
    constexpr std::uint32_t RIFSC_RISC_RCFGLOCKR5_RLOCK191_B_0x1 = 1;

    /** @brief RIFSC RIMC master configuration register */
    using RIFSC_RIMC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global lock */
    using RIFSC_RIMC_CR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIFSC RIMC registers are writable. (value: 0)
     *          - B_0x1: All writes to RIFSC RIMC registers are ignored. (value: 1)
     */
        /** @brief RIFSC RIMC registers are writable. */
    constexpr std::uint32_t RIFSC_RIMC_CR_GLOCK_B_0x0 = 0;
        /** @brief All writes to RIFSC RIMC registers are ignored. */
    constexpr std::uint32_t RIFSC_RIMC_CR_GLOCK_B_0x1 = 1;

    /** @brief debug access port compartment ID */
    using RIFSC_RIMC_CR_DAPCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RIFSC RIMC master attribute register 0 */
    using RIFSC_RIMC_ATTR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR0_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR0_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR0_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR0_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR0_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR0_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR0_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 1 */
    using RIFSC_RIMC_ATTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR1_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR1_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR1_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR1_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR1_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR1_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR1_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 2 */
    using RIFSC_RIMC_ATTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR2_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR2_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR2_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR2_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR2_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR2_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR2_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 3 */
    using RIFSC_RIMC_ATTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR3_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR3_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR3_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR3_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR3_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR3_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR3_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 4 */
    using RIFSC_RIMC_ATTR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR4_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR4_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR4_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR4_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR4_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR4_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR4_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 5 */
    using RIFSC_RIMC_ATTR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR5_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR5_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR5_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR5_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR5_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR5_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR5_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 6 */
    using RIFSC_RIMC_ATTR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR6_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR6_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR6_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR6_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR6_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR6_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR6_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 7 */
    using RIFSC_RIMC_ATTR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR7_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR7_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR7_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR7_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR7_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR7_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR7_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 8 */
    using RIFSC_RIMC_ATTR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR8_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR8_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR8_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR8_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR8_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR8_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR8_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 9 */
    using RIFSC_RIMC_ATTR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR9_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR9_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR9_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR9_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR9_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR9_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR9_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 10 */
    using RIFSC_RIMC_ATTR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR10_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR10_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR10_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR10_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR10_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR10_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR10_MPRIV_B_0x1 = 1;

    /** @brief RIFSC RIMC master attribute register 11 */
    using RIFSC_RIMC_ATTR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master CID */
    using RIFSC_RIMC_ATTR11_MCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief master secure */
    using RIFSC_RIMC_ATTR11_MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is non-secure. (value: 0)
     *          - B_0x1: This master is secure. (value: 1)
     */
        /** @brief This master is non-secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR11_MSEC_B_0x0 = 0;
        /** @brief This master is secure. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR11_MSEC_B_0x1 = 1;

    /** @brief master privileged */
    using RIFSC_RIMC_ATTR11_MPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: This master is unprivileged. (value: 0)
     *          - B_0x1: This master is privileged. (value: 1)
     */
        /** @brief This master is unprivileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR11_MPRIV_B_0x0 = 0;
        /** @brief This master is privileged. */
    constexpr std::uint32_t RIFSC_RIMC_ATTR11_MPRIV_B_0x1 = 1;

    /** @brief RIFSC peripheral protection status register 0 */
    using RIFSC_PPSR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral protection enable 0 */
    using RIFSC_PPSR0_PPEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC0, PRIV0, and RLOCK0 register bit not present. (value: 0)
     *          - B_0x1: SEC0, PRIV0, and RLOCK0 register bit present. (value: 1)
     */
        /** @brief SEC0, PRIV0, and RLOCK0 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN0_B_0x0 = 0;
        /** @brief SEC0, PRIV0, and RLOCK0 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN0_B_0x1 = 1;

    /** @brief peripheral protection enable 1 */
    using RIFSC_PPSR0_PPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC1, PRIV1, and RLOCK1 register bit not present. (value: 0)
     *          - B_0x1: SEC1, PRIV1, and RLOCK1 register bit present. (value: 1)
     */
        /** @brief SEC1, PRIV1, and RLOCK1 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN1_B_0x0 = 0;
        /** @brief SEC1, PRIV1, and RLOCK1 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN1_B_0x1 = 1;

    /** @brief peripheral protection enable 2 */
    using RIFSC_PPSR0_PPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC2, PRIV2, and RLOCK2 register bit not present. (value: 0)
     *          - B_0x1: SEC2, PRIV2, and RLOCK2 register bit present. (value: 1)
     */
        /** @brief SEC2, PRIV2, and RLOCK2 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN2_B_0x0 = 0;
        /** @brief SEC2, PRIV2, and RLOCK2 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN2_B_0x1 = 1;

    /** @brief peripheral protection enable 3 */
    using RIFSC_PPSR0_PPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC3, PRIV3, and RLOCK3 register bit not present. (value: 0)
     *          - B_0x1: SEC3, PRIV3, and RLOCK3 register bit present. (value: 1)
     */
        /** @brief SEC3, PRIV3, and RLOCK3 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN3_B_0x0 = 0;
        /** @brief SEC3, PRIV3, and RLOCK3 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN3_B_0x1 = 1;

    /** @brief peripheral protection enable 4 */
    using RIFSC_PPSR0_PPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC4, PRIV4, and RLOCK4 register bit not present. (value: 0)
     *          - B_0x1: SEC4, PRIV4, and RLOCK4 register bit present. (value: 1)
     */
        /** @brief SEC4, PRIV4, and RLOCK4 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN4_B_0x0 = 0;
        /** @brief SEC4, PRIV4, and RLOCK4 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN4_B_0x1 = 1;

    /** @brief peripheral protection enable 5 */
    using RIFSC_PPSR0_PPEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC5, PRIV5, and RLOCK5 register bit not present. (value: 0)
     *          - B_0x1: SEC5, PRIV5, and RLOCK5 register bit present. (value: 1)
     */
        /** @brief SEC5, PRIV5, and RLOCK5 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN5_B_0x0 = 0;
        /** @brief SEC5, PRIV5, and RLOCK5 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN5_B_0x1 = 1;

    /** @brief peripheral protection enable 6 */
    using RIFSC_PPSR0_PPEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC6, PRIV6, and RLOCK6 register bit not present. (value: 0)
     *          - B_0x1: SEC6, PRIV6, and RLOCK6 register bit present. (value: 1)
     */
        /** @brief SEC6, PRIV6, and RLOCK6 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN6_B_0x0 = 0;
        /** @brief SEC6, PRIV6, and RLOCK6 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN6_B_0x1 = 1;

    /** @brief peripheral protection enable 7 */
    using RIFSC_PPSR0_PPEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC7, PRIV7, and RLOCK7 register bit not present. (value: 0)
     *          - B_0x1: SEC7, PRIV7, and RLOCK7 register bit present. (value: 1)
     */
        /** @brief SEC7, PRIV7, and RLOCK7 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN7_B_0x0 = 0;
        /** @brief SEC7, PRIV7, and RLOCK7 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN7_B_0x1 = 1;

    /** @brief peripheral protection enable 8 */
    using RIFSC_PPSR0_PPEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC8, PRIV8, and RLOCK8 register bit not present. (value: 0)
     *          - B_0x1: SEC8, PRIV8, and RLOCK8 register bit present. (value: 1)
     */
        /** @brief SEC8, PRIV8, and RLOCK8 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN8_B_0x0 = 0;
        /** @brief SEC8, PRIV8, and RLOCK8 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN8_B_0x1 = 1;

    /** @brief peripheral protection enable 9 */
    using RIFSC_PPSR0_PPEN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC9, PRIV9, and RLOCK9 register bit not present. (value: 0)
     *          - B_0x1: SEC9, PRIV9, and RLOCK9 register bit present. (value: 1)
     */
        /** @brief SEC9, PRIV9, and RLOCK9 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN9_B_0x0 = 0;
        /** @brief SEC9, PRIV9, and RLOCK9 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN9_B_0x1 = 1;

    /** @brief peripheral protection enable 10 */
    using RIFSC_PPSR0_PPEN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC10, PRIV10, and RLOCK10 register bit not present. (value: 0)
     *          - B_0x1: SEC10, PRIV10, and RLOCK10 register bit present. (value: 1)
     */
        /** @brief SEC10, PRIV10, and RLOCK10 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN10_B_0x0 = 0;
        /** @brief SEC10, PRIV10, and RLOCK10 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN10_B_0x1 = 1;

    /** @brief peripheral protection enable 11 */
    using RIFSC_PPSR0_PPEN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC11, PRIV11, and RLOCK11 register bit not present. (value: 0)
     *          - B_0x1: SEC11, PRIV11, and RLOCK11 register bit present. (value: 1)
     */
        /** @brief SEC11, PRIV11, and RLOCK11 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN11_B_0x0 = 0;
        /** @brief SEC11, PRIV11, and RLOCK11 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN11_B_0x1 = 1;

    /** @brief peripheral protection enable 12 */
    using RIFSC_PPSR0_PPEN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC12, PRIV12, and RLOCK12 register bit not present. (value: 0)
     *          - B_0x1: SEC12, PRIV12, and RLOCK12 register bit present. (value: 1)
     */
        /** @brief SEC12, PRIV12, and RLOCK12 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN12_B_0x0 = 0;
        /** @brief SEC12, PRIV12, and RLOCK12 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN12_B_0x1 = 1;

    /** @brief peripheral protection enable 13 */
    using RIFSC_PPSR0_PPEN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC13, PRIV13, and RLOCK13 register bit not present. (value: 0)
     *          - B_0x1: SEC13, PRIV13, and RLOCK13 register bit present. (value: 1)
     */
        /** @brief SEC13, PRIV13, and RLOCK13 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN13_B_0x0 = 0;
        /** @brief SEC13, PRIV13, and RLOCK13 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN13_B_0x1 = 1;

    /** @brief peripheral protection enable 14 */
    using RIFSC_PPSR0_PPEN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC14, PRIV14, and RLOCK14 register bit not present. (value: 0)
     *          - B_0x1: SEC14, PRIV14, and RLOCK14 register bit present. (value: 1)
     */
        /** @brief SEC14, PRIV14, and RLOCK14 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN14_B_0x0 = 0;
        /** @brief SEC14, PRIV14, and RLOCK14 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN14_B_0x1 = 1;

    /** @brief peripheral protection enable 15 */
    using RIFSC_PPSR0_PPEN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC15, PRIV15, and RLOCK15 register bit not present. (value: 0)
     *          - B_0x1: SEC15, PRIV15, and RLOCK15 register bit present. (value: 1)
     */
        /** @brief SEC15, PRIV15, and RLOCK15 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN15_B_0x0 = 0;
        /** @brief SEC15, PRIV15, and RLOCK15 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN15_B_0x1 = 1;

    /** @brief peripheral protection enable 16 */
    using RIFSC_PPSR0_PPEN16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC16, PRIV16, and RLOCK16 register bit not present. (value: 0)
     *          - B_0x1: SEC16, PRIV16, and RLOCK16 register bit present. (value: 1)
     */
        /** @brief SEC16, PRIV16, and RLOCK16 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN16_B_0x0 = 0;
        /** @brief SEC16, PRIV16, and RLOCK16 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN16_B_0x1 = 1;

    /** @brief peripheral protection enable 17 */
    using RIFSC_PPSR0_PPEN17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC17, PRIV17, and RLOCK17 register bit not present. (value: 0)
     *          - B_0x1: SEC17, PRIV17, and RLOCK17 register bit present. (value: 1)
     */
        /** @brief SEC17, PRIV17, and RLOCK17 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN17_B_0x0 = 0;
        /** @brief SEC17, PRIV17, and RLOCK17 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN17_B_0x1 = 1;

    /** @brief peripheral protection enable 18 */
    using RIFSC_PPSR0_PPEN18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC18, PRIV18, and RLOCK18 register bit not present. (value: 0)
     *          - B_0x1: SEC18, PRIV18, and RLOCK18 register bit present. (value: 1)
     */
        /** @brief SEC18, PRIV18, and RLOCK18 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN18_B_0x0 = 0;
        /** @brief SEC18, PRIV18, and RLOCK18 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN18_B_0x1 = 1;

    /** @brief peripheral protection enable 19 */
    using RIFSC_PPSR0_PPEN19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC19, PRIV19, and RLOCK19 register bit not present. (value: 0)
     *          - B_0x1: SEC19, PRIV19, and RLOCK19 register bit present. (value: 1)
     */
        /** @brief SEC19, PRIV19, and RLOCK19 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN19_B_0x0 = 0;
        /** @brief SEC19, PRIV19, and RLOCK19 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN19_B_0x1 = 1;

    /** @brief peripheral protection enable 20 */
    using RIFSC_PPSR0_PPEN20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC20, PRIV20, and RLOCK20 register bit not present. (value: 0)
     *          - B_0x1: SEC20, PRIV20, and RLOCK20 register bit present. (value: 1)
     */
        /** @brief SEC20, PRIV20, and RLOCK20 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN20_B_0x0 = 0;
        /** @brief SEC20, PRIV20, and RLOCK20 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN20_B_0x1 = 1;

    /** @brief peripheral protection enable 21 */
    using RIFSC_PPSR0_PPEN21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC21, PRIV21, and RLOCK21 register bit not present. (value: 0)
     *          - B_0x1: SEC21, PRIV21, and RLOCK21 register bit present. (value: 1)
     */
        /** @brief SEC21, PRIV21, and RLOCK21 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN21_B_0x0 = 0;
        /** @brief SEC21, PRIV21, and RLOCK21 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN21_B_0x1 = 1;

    /** @brief peripheral protection enable 22 */
    using RIFSC_PPSR0_PPEN22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC22, PRIV22, and RLOCK22 register bit not present. (value: 0)
     *          - B_0x1: SEC22, PRIV22, and RLOCK22 register bit present. (value: 1)
     */
        /** @brief SEC22, PRIV22, and RLOCK22 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN22_B_0x0 = 0;
        /** @brief SEC22, PRIV22, and RLOCK22 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN22_B_0x1 = 1;

    /** @brief peripheral protection enable 23 */
    using RIFSC_PPSR0_PPEN23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC23, PRIV23, and RLOCK23 register bit not present. (value: 0)
     *          - B_0x1: SEC23, PRIV23, and RLOCK23 register bit present. (value: 1)
     */
        /** @brief SEC23, PRIV23, and RLOCK23 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN23_B_0x0 = 0;
        /** @brief SEC23, PRIV23, and RLOCK23 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN23_B_0x1 = 1;

    /** @brief peripheral protection enable 24 */
    using RIFSC_PPSR0_PPEN24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC24, PRIV24, and RLOCK24 register bit not present. (value: 0)
     *          - B_0x1: SEC24, PRIV24, and RLOCK24 register bit present. (value: 1)
     */
        /** @brief SEC24, PRIV24, and RLOCK24 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN24_B_0x0 = 0;
        /** @brief SEC24, PRIV24, and RLOCK24 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN24_B_0x1 = 1;

    /** @brief peripheral protection enable 25 */
    using RIFSC_PPSR0_PPEN25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC25, PRIV25, and RLOCK25 register bit not present. (value: 0)
     *          - B_0x1: SEC25, PRIV25, and RLOCK25 register bit present. (value: 1)
     */
        /** @brief SEC25, PRIV25, and RLOCK25 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN25_B_0x0 = 0;
        /** @brief SEC25, PRIV25, and RLOCK25 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN25_B_0x1 = 1;

    /** @brief peripheral protection enable 26 */
    using RIFSC_PPSR0_PPEN26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC26, PRIV26, and RLOCK26 register bit not present. (value: 0)
     *          - B_0x1: SEC26, PRIV26, and RLOCK26 register bit present. (value: 1)
     */
        /** @brief SEC26, PRIV26, and RLOCK26 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN26_B_0x0 = 0;
        /** @brief SEC26, PRIV26, and RLOCK26 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN26_B_0x1 = 1;

    /** @brief peripheral protection enable 27 */
    using RIFSC_PPSR0_PPEN27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC27, PRIV27, and RLOCK27 register bit not present. (value: 0)
     *          - B_0x1: SEC27, PRIV27, and RLOCK27 register bit present. (value: 1)
     */
        /** @brief SEC27, PRIV27, and RLOCK27 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN27_B_0x0 = 0;
        /** @brief SEC27, PRIV27, and RLOCK27 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN27_B_0x1 = 1;

    /** @brief peripheral protection enable 28 */
    using RIFSC_PPSR0_PPEN28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC28, PRIV28, and RLOCK28 register bit not present. (value: 0)
     *          - B_0x1: SEC28, PRIV28, and RLOCK28 register bit present. (value: 1)
     */
        /** @brief SEC28, PRIV28, and RLOCK28 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN28_B_0x0 = 0;
        /** @brief SEC28, PRIV28, and RLOCK28 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN28_B_0x1 = 1;

    /** @brief peripheral protection enable 29 */
    using RIFSC_PPSR0_PPEN29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC29, PRIV29, and RLOCK29 register bit not present. (value: 0)
     *          - B_0x1: SEC29, PRIV29, and RLOCK29 register bit present. (value: 1)
     */
        /** @brief SEC29, PRIV29, and RLOCK29 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN29_B_0x0 = 0;
        /** @brief SEC29, PRIV29, and RLOCK29 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN29_B_0x1 = 1;

    /** @brief peripheral protection enable 30 */
    using RIFSC_PPSR0_PPEN30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC30, PRIV30, and RLOCK30 register bit not present. (value: 0)
     *          - B_0x1: SEC30, PRIV30, and RLOCK30 register bit present. (value: 1)
     */
        /** @brief SEC30, PRIV30, and RLOCK30 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN30_B_0x0 = 0;
        /** @brief SEC30, PRIV30, and RLOCK30 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN30_B_0x1 = 1;

    /** @brief peripheral protection enable 31 */
    using RIFSC_PPSR0_PPEN31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC31, PRIV31, and RLOCK31 register bit not present. (value: 0)
     *          - B_0x1: SEC31, PRIV31, and RLOCK31 register bit present. (value: 1)
     */
        /** @brief SEC31, PRIV31, and RLOCK31 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN31_B_0x0 = 0;
        /** @brief SEC31, PRIV31, and RLOCK31 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR0_PPEN31_B_0x1 = 1;

    /** @brief RIFSC peripheral protection status register 1 */
    using RIFSC_PPSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral protection enable 32 */
    using RIFSC_PPSR1_PPEN32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC32, PRIV32, and RLOCK32 register bit not present. (value: 0)
     *          - B_0x1: SEC32, PRIV32, and RLOCK32 register bit present. (value: 1)
     */
        /** @brief SEC32, PRIV32, and RLOCK32 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN32_B_0x0 = 0;
        /** @brief SEC32, PRIV32, and RLOCK32 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN32_B_0x1 = 1;

    /** @brief peripheral protection enable 33 */
    using RIFSC_PPSR1_PPEN33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC33, PRIV33, and RLOCK33 register bit not present. (value: 0)
     *          - B_0x1: SEC33, PRIV33, and RLOCK33 register bit present. (value: 1)
     */
        /** @brief SEC33, PRIV33, and RLOCK33 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN33_B_0x0 = 0;
        /** @brief SEC33, PRIV33, and RLOCK33 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN33_B_0x1 = 1;

    /** @brief peripheral protection enable 34 */
    using RIFSC_PPSR1_PPEN34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC34, PRIV34, and RLOCK34 register bit not present. (value: 0)
     *          - B_0x1: SEC34, PRIV34, and RLOCK34 register bit present. (value: 1)
     */
        /** @brief SEC34, PRIV34, and RLOCK34 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN34_B_0x0 = 0;
        /** @brief SEC34, PRIV34, and RLOCK34 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN34_B_0x1 = 1;

    /** @brief peripheral protection enable 35 */
    using RIFSC_PPSR1_PPEN35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC35, PRIV35, and RLOCK35 register bit not present. (value: 0)
     *          - B_0x1: SEC35, PRIV35, and RLOCK35 register bit present. (value: 1)
     */
        /** @brief SEC35, PRIV35, and RLOCK35 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN35_B_0x0 = 0;
        /** @brief SEC35, PRIV35, and RLOCK35 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN35_B_0x1 = 1;

    /** @brief peripheral protection enable 36 */
    using RIFSC_PPSR1_PPEN36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC36, PRIV36, and RLOCK36 register bit not present. (value: 0)
     *          - B_0x1: SEC36, PRIV36, and RLOCK36 register bit present. (value: 1)
     */
        /** @brief SEC36, PRIV36, and RLOCK36 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN36_B_0x0 = 0;
        /** @brief SEC36, PRIV36, and RLOCK36 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN36_B_0x1 = 1;

    /** @brief peripheral protection enable 37 */
    using RIFSC_PPSR1_PPEN37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC37, PRIV37, and RLOCK37 register bit not present. (value: 0)
     *          - B_0x1: SEC37, PRIV37, and RLOCK37 register bit present. (value: 1)
     */
        /** @brief SEC37, PRIV37, and RLOCK37 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN37_B_0x0 = 0;
        /** @brief SEC37, PRIV37, and RLOCK37 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN37_B_0x1 = 1;

    /** @brief peripheral protection enable 38 */
    using RIFSC_PPSR1_PPEN38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC38, PRIV38, and RLOCK38 register bit not present. (value: 0)
     *          - B_0x1: SEC38, PRIV38, and RLOCK38 register bit present. (value: 1)
     */
        /** @brief SEC38, PRIV38, and RLOCK38 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN38_B_0x0 = 0;
        /** @brief SEC38, PRIV38, and RLOCK38 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN38_B_0x1 = 1;

    /** @brief peripheral protection enable 39 */
    using RIFSC_PPSR1_PPEN39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC39, PRIV39, and RLOCK39 register bit not present. (value: 0)
     *          - B_0x1: SEC39, PRIV39, and RLOCK39 register bit present. (value: 1)
     */
        /** @brief SEC39, PRIV39, and RLOCK39 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN39_B_0x0 = 0;
        /** @brief SEC39, PRIV39, and RLOCK39 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN39_B_0x1 = 1;

    /** @brief peripheral protection enable 40 */
    using RIFSC_PPSR1_PPEN40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC40, PRIV40, and RLOCK40 register bit not present. (value: 0)
     *          - B_0x1: SEC40, PRIV40, and RLOCK40 register bit present. (value: 1)
     */
        /** @brief SEC40, PRIV40, and RLOCK40 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN40_B_0x0 = 0;
        /** @brief SEC40, PRIV40, and RLOCK40 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN40_B_0x1 = 1;

    /** @brief peripheral protection enable 41 */
    using RIFSC_PPSR1_PPEN41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC41, PRIV41, and RLOCK41 register bit not present. (value: 0)
     *          - B_0x1: SEC41, PRIV41, and RLOCK41 register bit present. (value: 1)
     */
        /** @brief SEC41, PRIV41, and RLOCK41 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN41_B_0x0 = 0;
        /** @brief SEC41, PRIV41, and RLOCK41 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN41_B_0x1 = 1;

    /** @brief peripheral protection enable 42 */
    using RIFSC_PPSR1_PPEN42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC42, PRIV42, and RLOCK42 register bit not present. (value: 0)
     *          - B_0x1: SEC42, PRIV42, and RLOCK42 register bit present. (value: 1)
     */
        /** @brief SEC42, PRIV42, and RLOCK42 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN42_B_0x0 = 0;
        /** @brief SEC42, PRIV42, and RLOCK42 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN42_B_0x1 = 1;

    /** @brief peripheral protection enable 43 */
    using RIFSC_PPSR1_PPEN43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC43, PRIV43, and RLOCK43 register bit not present. (value: 0)
     *          - B_0x1: SEC43, PRIV43, and RLOCK43 register bit present. (value: 1)
     */
        /** @brief SEC43, PRIV43, and RLOCK43 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN43_B_0x0 = 0;
        /** @brief SEC43, PRIV43, and RLOCK43 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN43_B_0x1 = 1;

    /** @brief peripheral protection enable 44 */
    using RIFSC_PPSR1_PPEN44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC44, PRIV44, and RLOCK44 register bit not present. (value: 0)
     *          - B_0x1: SEC44, PRIV44, and RLOCK44 register bit present. (value: 1)
     */
        /** @brief SEC44, PRIV44, and RLOCK44 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN44_B_0x0 = 0;
        /** @brief SEC44, PRIV44, and RLOCK44 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN44_B_0x1 = 1;

    /** @brief peripheral protection enable 45 */
    using RIFSC_PPSR1_PPEN45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC45, PRIV45, and RLOCK45 register bit not present. (value: 0)
     *          - B_0x1: SEC45, PRIV45, and RLOCK45 register bit present. (value: 1)
     */
        /** @brief SEC45, PRIV45, and RLOCK45 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN45_B_0x0 = 0;
        /** @brief SEC45, PRIV45, and RLOCK45 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN45_B_0x1 = 1;

    /** @brief peripheral protection enable 46 */
    using RIFSC_PPSR1_PPEN46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC46, PRIV46, and RLOCK46 register bit not present. (value: 0)
     *          - B_0x1: SEC46, PRIV46, and RLOCK46 register bit present. (value: 1)
     */
        /** @brief SEC46, PRIV46, and RLOCK46 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN46_B_0x0 = 0;
        /** @brief SEC46, PRIV46, and RLOCK46 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN46_B_0x1 = 1;

    /** @brief peripheral protection enable 47 */
    using RIFSC_PPSR1_PPEN47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC47, PRIV47, and RLOCK47 register bit not present. (value: 0)
     *          - B_0x1: SEC47, PRIV47, and RLOCK47 register bit present. (value: 1)
     */
        /** @brief SEC47, PRIV47, and RLOCK47 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN47_B_0x0 = 0;
        /** @brief SEC47, PRIV47, and RLOCK47 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN47_B_0x1 = 1;

    /** @brief peripheral protection enable 48 */
    using RIFSC_PPSR1_PPEN48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC48, PRIV48, and RLOCK48 register bit not present. (value: 0)
     *          - B_0x1: SEC48, PRIV48, and RLOCK48 register bit present. (value: 1)
     */
        /** @brief SEC48, PRIV48, and RLOCK48 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN48_B_0x0 = 0;
        /** @brief SEC48, PRIV48, and RLOCK48 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN48_B_0x1 = 1;

    /** @brief peripheral protection enable 49 */
    using RIFSC_PPSR1_PPEN49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC49, PRIV49, and RLOCK49 register bit not present. (value: 0)
     *          - B_0x1: SEC49, PRIV49, and RLOCK49 register bit present. (value: 1)
     */
        /** @brief SEC49, PRIV49, and RLOCK49 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN49_B_0x0 = 0;
        /** @brief SEC49, PRIV49, and RLOCK49 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN49_B_0x1 = 1;

    /** @brief peripheral protection enable 50 */
    using RIFSC_PPSR1_PPEN50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC50, PRIV50, and RLOCK50 register bit not present. (value: 0)
     *          - B_0x1: SEC50, PRIV50, and RLOCK50 register bit present. (value: 1)
     */
        /** @brief SEC50, PRIV50, and RLOCK50 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN50_B_0x0 = 0;
        /** @brief SEC50, PRIV50, and RLOCK50 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN50_B_0x1 = 1;

    /** @brief peripheral protection enable 51 */
    using RIFSC_PPSR1_PPEN51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC51, PRIV51, and RLOCK51 register bit not present. (value: 0)
     *          - B_0x1: SEC51, PRIV51, and RLOCK51 register bit present. (value: 1)
     */
        /** @brief SEC51, PRIV51, and RLOCK51 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN51_B_0x0 = 0;
        /** @brief SEC51, PRIV51, and RLOCK51 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN51_B_0x1 = 1;

    /** @brief peripheral protection enable 52 */
    using RIFSC_PPSR1_PPEN52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC52, PRIV52, and RLOCK52 register bit not present. (value: 0)
     *          - B_0x1: SEC52, PRIV52, and RLOCK52 register bit present. (value: 1)
     */
        /** @brief SEC52, PRIV52, and RLOCK52 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN52_B_0x0 = 0;
        /** @brief SEC52, PRIV52, and RLOCK52 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN52_B_0x1 = 1;

    /** @brief peripheral protection enable 53 */
    using RIFSC_PPSR1_PPEN53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC53, PRIV53, and RLOCK53 register bit not present. (value: 0)
     *          - B_0x1: SEC53, PRIV53, and RLOCK53 register bit present. (value: 1)
     */
        /** @brief SEC53, PRIV53, and RLOCK53 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN53_B_0x0 = 0;
        /** @brief SEC53, PRIV53, and RLOCK53 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN53_B_0x1 = 1;

    /** @brief peripheral protection enable 54 */
    using RIFSC_PPSR1_PPEN54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC54, PRIV54, and RLOCK54 register bit not present. (value: 0)
     *          - B_0x1: SEC54, PRIV54, and RLOCK54 register bit present. (value: 1)
     */
        /** @brief SEC54, PRIV54, and RLOCK54 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN54_B_0x0 = 0;
        /** @brief SEC54, PRIV54, and RLOCK54 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN54_B_0x1 = 1;

    /** @brief peripheral protection enable 55 */
    using RIFSC_PPSR1_PPEN55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC55, PRIV55, and RLOCK55 register bit not present. (value: 0)
     *          - B_0x1: SEC55, PRIV55, and RLOCK55 register bit present. (value: 1)
     */
        /** @brief SEC55, PRIV55, and RLOCK55 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN55_B_0x0 = 0;
        /** @brief SEC55, PRIV55, and RLOCK55 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN55_B_0x1 = 1;

    /** @brief peripheral protection enable 56 */
    using RIFSC_PPSR1_PPEN56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC56, PRIV56, and RLOCK56 register bit not present. (value: 0)
     *          - B_0x1: SEC56, PRIV56, and RLOCK56 register bit present. (value: 1)
     */
        /** @brief SEC56, PRIV56, and RLOCK56 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN56_B_0x0 = 0;
        /** @brief SEC56, PRIV56, and RLOCK56 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN56_B_0x1 = 1;

    /** @brief peripheral protection enable 57 */
    using RIFSC_PPSR1_PPEN57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC57, PRIV57, and RLOCK57 register bit not present. (value: 0)
     *          - B_0x1: SEC57, PRIV57, and RLOCK57 register bit present. (value: 1)
     */
        /** @brief SEC57, PRIV57, and RLOCK57 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN57_B_0x0 = 0;
        /** @brief SEC57, PRIV57, and RLOCK57 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN57_B_0x1 = 1;

    /** @brief peripheral protection enable 58 */
    using RIFSC_PPSR1_PPEN58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC58, PRIV58, and RLOCK58 register bit not present. (value: 0)
     *          - B_0x1: SEC58, PRIV58, and RLOCK58 register bit present. (value: 1)
     */
        /** @brief SEC58, PRIV58, and RLOCK58 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN58_B_0x0 = 0;
        /** @brief SEC58, PRIV58, and RLOCK58 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN58_B_0x1 = 1;

    /** @brief peripheral protection enable 59 */
    using RIFSC_PPSR1_PPEN59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC59, PRIV59, and RLOCK59 register bit not present. (value: 0)
     *          - B_0x1: SEC59, PRIV59, and RLOCK59 register bit present. (value: 1)
     */
        /** @brief SEC59, PRIV59, and RLOCK59 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN59_B_0x0 = 0;
        /** @brief SEC59, PRIV59, and RLOCK59 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN59_B_0x1 = 1;

    /** @brief peripheral protection enable 60 */
    using RIFSC_PPSR1_PPEN60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC60, PRIV60, and RLOCK60 register bit not present. (value: 0)
     *          - B_0x1: SEC60, PRIV60, and RLOCK60 register bit present. (value: 1)
     */
        /** @brief SEC60, PRIV60, and RLOCK60 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN60_B_0x0 = 0;
        /** @brief SEC60, PRIV60, and RLOCK60 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN60_B_0x1 = 1;

    /** @brief peripheral protection enable 61 */
    using RIFSC_PPSR1_PPEN61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC61, PRIV61, and RLOCK61 register bit not present. (value: 0)
     *          - B_0x1: SEC61, PRIV61, and RLOCK61 register bit present. (value: 1)
     */
        /** @brief SEC61, PRIV61, and RLOCK61 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN61_B_0x0 = 0;
        /** @brief SEC61, PRIV61, and RLOCK61 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN61_B_0x1 = 1;

    /** @brief peripheral protection enable 62 */
    using RIFSC_PPSR1_PPEN62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC62, PRIV62, and RLOCK62 register bit not present. (value: 0)
     *          - B_0x1: SEC62, PRIV62, and RLOCK62 register bit present. (value: 1)
     */
        /** @brief SEC62, PRIV62, and RLOCK62 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN62_B_0x0 = 0;
        /** @brief SEC62, PRIV62, and RLOCK62 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN62_B_0x1 = 1;

    /** @brief peripheral protection enable 63 */
    using RIFSC_PPSR1_PPEN63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC63, PRIV63, and RLOCK63 register bit not present. (value: 0)
     *          - B_0x1: SEC63, PRIV63, and RLOCK63 register bit present. (value: 1)
     */
        /** @brief SEC63, PRIV63, and RLOCK63 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN63_B_0x0 = 0;
        /** @brief SEC63, PRIV63, and RLOCK63 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR1_PPEN63_B_0x1 = 1;

    /** @brief RIFSC peripheral protection status register 2 */
    using RIFSC_PPSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral protection enable 64 */
    using RIFSC_PPSR2_PPEN64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC64, PRIV64, and RLOCK64 register bit not present. (value: 0)
     *          - B_0x1: SEC64, PRIV64, and RLOCK64 register bit present. (value: 1)
     */
        /** @brief SEC64, PRIV64, and RLOCK64 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN64_B_0x0 = 0;
        /** @brief SEC64, PRIV64, and RLOCK64 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN64_B_0x1 = 1;

    /** @brief peripheral protection enable 65 */
    using RIFSC_PPSR2_PPEN65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC65, PRIV65, and RLOCK65 register bit not present. (value: 0)
     *          - B_0x1: SEC65, PRIV65, and RLOCK65 register bit present. (value: 1)
     */
        /** @brief SEC65, PRIV65, and RLOCK65 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN65_B_0x0 = 0;
        /** @brief SEC65, PRIV65, and RLOCK65 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN65_B_0x1 = 1;

    /** @brief peripheral protection enable 66 */
    using RIFSC_PPSR2_PPEN66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC66, PRIV66, and RLOCK66 register bit not present. (value: 0)
     *          - B_0x1: SEC66, PRIV66, and RLOCK66 register bit present. (value: 1)
     */
        /** @brief SEC66, PRIV66, and RLOCK66 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN66_B_0x0 = 0;
        /** @brief SEC66, PRIV66, and RLOCK66 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN66_B_0x1 = 1;

    /** @brief peripheral protection enable 67 */
    using RIFSC_PPSR2_PPEN67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC67, PRIV67, and RLOCK67 register bit not present. (value: 0)
     *          - B_0x1: SEC67, PRIV67, and RLOCK67 register bit present. (value: 1)
     */
        /** @brief SEC67, PRIV67, and RLOCK67 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN67_B_0x0 = 0;
        /** @brief SEC67, PRIV67, and RLOCK67 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN67_B_0x1 = 1;

    /** @brief peripheral protection enable 68 */
    using RIFSC_PPSR2_PPEN68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC68, PRIV68, and RLOCK68 register bit not present. (value: 0)
     *          - B_0x1: SEC68, PRIV68, and RLOCK68 register bit present. (value: 1)
     */
        /** @brief SEC68, PRIV68, and RLOCK68 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN68_B_0x0 = 0;
        /** @brief SEC68, PRIV68, and RLOCK68 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN68_B_0x1 = 1;

    /** @brief peripheral protection enable 69 */
    using RIFSC_PPSR2_PPEN69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC69, PRIV69, and RLOCK69 register bit not present. (value: 0)
     *          - B_0x1: SEC69, PRIV69, and RLOCK69 register bit present. (value: 1)
     */
        /** @brief SEC69, PRIV69, and RLOCK69 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN69_B_0x0 = 0;
        /** @brief SEC69, PRIV69, and RLOCK69 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN69_B_0x1 = 1;

    /** @brief peripheral protection enable 70 */
    using RIFSC_PPSR2_PPEN70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC70, PRIV70, and RLOCK70 register bit not present. (value: 0)
     *          - B_0x1: SEC70, PRIV70, and RLOCK70 register bit present. (value: 1)
     */
        /** @brief SEC70, PRIV70, and RLOCK70 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN70_B_0x0 = 0;
        /** @brief SEC70, PRIV70, and RLOCK70 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN70_B_0x1 = 1;

    /** @brief peripheral protection enable 71 */
    using RIFSC_PPSR2_PPEN71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC71, PRIV71, and RLOCK71 register bit not present. (value: 0)
     *          - B_0x1: SEC71, PRIV71, and RLOCK71 register bit present. (value: 1)
     */
        /** @brief SEC71, PRIV71, and RLOCK71 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN71_B_0x0 = 0;
        /** @brief SEC71, PRIV71, and RLOCK71 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN71_B_0x1 = 1;

    /** @brief peripheral protection enable 72 */
    using RIFSC_PPSR2_PPEN72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC72, PRIV72, and RLOCK72 register bit not present. (value: 0)
     *          - B_0x1: SEC72, PRIV72, and RLOCK72 register bit present. (value: 1)
     */
        /** @brief SEC72, PRIV72, and RLOCK72 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN72_B_0x0 = 0;
        /** @brief SEC72, PRIV72, and RLOCK72 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN72_B_0x1 = 1;

    /** @brief peripheral protection enable 73 */
    using RIFSC_PPSR2_PPEN73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC73, PRIV73, and RLOCK73 register bit not present. (value: 0)
     *          - B_0x1: SEC73, PRIV73, and RLOCK73 register bit present. (value: 1)
     */
        /** @brief SEC73, PRIV73, and RLOCK73 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN73_B_0x0 = 0;
        /** @brief SEC73, PRIV73, and RLOCK73 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN73_B_0x1 = 1;

    /** @brief peripheral protection enable 74 */
    using RIFSC_PPSR2_PPEN74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC74, PRIV74, and RLOCK74 register bit not present. (value: 0)
     *          - B_0x1: SEC74, PRIV74, and RLOCK74 register bit present. (value: 1)
     */
        /** @brief SEC74, PRIV74, and RLOCK74 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN74_B_0x0 = 0;
        /** @brief SEC74, PRIV74, and RLOCK74 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN74_B_0x1 = 1;

    /** @brief peripheral protection enable 75 */
    using RIFSC_PPSR2_PPEN75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC75, PRIV75, and RLOCK75 register bit not present. (value: 0)
     *          - B_0x1: SEC75, PRIV75, and RLOCK75 register bit present. (value: 1)
     */
        /** @brief SEC75, PRIV75, and RLOCK75 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN75_B_0x0 = 0;
        /** @brief SEC75, PRIV75, and RLOCK75 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN75_B_0x1 = 1;

    /** @brief peripheral protection enable 76 */
    using RIFSC_PPSR2_PPEN76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC76, PRIV76, and RLOCK76 register bit not present. (value: 0)
     *          - B_0x1: SEC76, PRIV76, and RLOCK76 register bit present. (value: 1)
     */
        /** @brief SEC76, PRIV76, and RLOCK76 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN76_B_0x0 = 0;
        /** @brief SEC76, PRIV76, and RLOCK76 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN76_B_0x1 = 1;

    /** @brief peripheral protection enable 77 */
    using RIFSC_PPSR2_PPEN77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC77, PRIV77, and RLOCK77 register bit not present. (value: 0)
     *          - B_0x1: SEC77, PRIV77, and RLOCK77 register bit present. (value: 1)
     */
        /** @brief SEC77, PRIV77, and RLOCK77 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN77_B_0x0 = 0;
        /** @brief SEC77, PRIV77, and RLOCK77 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN77_B_0x1 = 1;

    /** @brief peripheral protection enable 78 */
    using RIFSC_PPSR2_PPEN78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC78, PRIV78, and RLOCK78 register bit not present. (value: 0)
     *          - B_0x1: SEC78, PRIV78, and RLOCK78 register bit present. (value: 1)
     */
        /** @brief SEC78, PRIV78, and RLOCK78 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN78_B_0x0 = 0;
        /** @brief SEC78, PRIV78, and RLOCK78 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN78_B_0x1 = 1;

    /** @brief peripheral protection enable 79 */
    using RIFSC_PPSR2_PPEN79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC79, PRIV79, and RLOCK79 register bit not present. (value: 0)
     *          - B_0x1: SEC79, PRIV79, and RLOCK79 register bit present. (value: 1)
     */
        /** @brief SEC79, PRIV79, and RLOCK79 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN79_B_0x0 = 0;
        /** @brief SEC79, PRIV79, and RLOCK79 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN79_B_0x1 = 1;

    /** @brief peripheral protection enable 80 */
    using RIFSC_PPSR2_PPEN80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC80, PRIV80, and RLOCK80 register bit not present. (value: 0)
     *          - B_0x1: SEC80, PRIV80, and RLOCK80 register bit present. (value: 1)
     */
        /** @brief SEC80, PRIV80, and RLOCK80 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN80_B_0x0 = 0;
        /** @brief SEC80, PRIV80, and RLOCK80 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN80_B_0x1 = 1;

    /** @brief peripheral protection enable 81 */
    using RIFSC_PPSR2_PPEN81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC81, PRIV81, and RLOCK81 register bit not present. (value: 0)
     *          - B_0x1: SEC81, PRIV81, and RLOCK81 register bit present. (value: 1)
     */
        /** @brief SEC81, PRIV81, and RLOCK81 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN81_B_0x0 = 0;
        /** @brief SEC81, PRIV81, and RLOCK81 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN81_B_0x1 = 1;

    /** @brief peripheral protection enable 82 */
    using RIFSC_PPSR2_PPEN82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC82, PRIV82, and RLOCK82 register bit not present. (value: 0)
     *          - B_0x1: SEC82, PRIV82, and RLOCK82 register bit present. (value: 1)
     */
        /** @brief SEC82, PRIV82, and RLOCK82 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN82_B_0x0 = 0;
        /** @brief SEC82, PRIV82, and RLOCK82 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN82_B_0x1 = 1;

    /** @brief peripheral protection enable 83 */
    using RIFSC_PPSR2_PPEN83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC83, PRIV83, and RLOCK83 register bit not present. (value: 0)
     *          - B_0x1: SEC83, PRIV83, and RLOCK83 register bit present. (value: 1)
     */
        /** @brief SEC83, PRIV83, and RLOCK83 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN83_B_0x0 = 0;
        /** @brief SEC83, PRIV83, and RLOCK83 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN83_B_0x1 = 1;

    /** @brief peripheral protection enable 84 */
    using RIFSC_PPSR2_PPEN84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC84, PRIV84, and RLOCK84 register bit not present. (value: 0)
     *          - B_0x1: SEC84, PRIV84, and RLOCK84 register bit present. (value: 1)
     */
        /** @brief SEC84, PRIV84, and RLOCK84 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN84_B_0x0 = 0;
        /** @brief SEC84, PRIV84, and RLOCK84 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN84_B_0x1 = 1;

    /** @brief peripheral protection enable 85 */
    using RIFSC_PPSR2_PPEN85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC85, PRIV85, and RLOCK85 register bit not present. (value: 0)
     *          - B_0x1: SEC85, PRIV85, and RLOCK85 register bit present. (value: 1)
     */
        /** @brief SEC85, PRIV85, and RLOCK85 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN85_B_0x0 = 0;
        /** @brief SEC85, PRIV85, and RLOCK85 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN85_B_0x1 = 1;

    /** @brief peripheral protection enable 86 */
    using RIFSC_PPSR2_PPEN86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC86, PRIV86, and RLOCK86 register bit not present. (value: 0)
     *          - B_0x1: SEC86, PRIV86, and RLOCK86 register bit present. (value: 1)
     */
        /** @brief SEC86, PRIV86, and RLOCK86 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN86_B_0x0 = 0;
        /** @brief SEC86, PRIV86, and RLOCK86 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN86_B_0x1 = 1;

    /** @brief peripheral protection enable 87 */
    using RIFSC_PPSR2_PPEN87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC87, PRIV87, and RLOCK87 register bit not present. (value: 0)
     *          - B_0x1: SEC87, PRIV87, and RLOCK87 register bit present. (value: 1)
     */
        /** @brief SEC87, PRIV87, and RLOCK87 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN87_B_0x0 = 0;
        /** @brief SEC87, PRIV87, and RLOCK87 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN87_B_0x1 = 1;

    /** @brief peripheral protection enable 88 */
    using RIFSC_PPSR2_PPEN88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC88, PRIV88, and RLOCK88 register bit not present. (value: 0)
     *          - B_0x1: SEC88, PRIV88, and RLOCK88 register bit present. (value: 1)
     */
        /** @brief SEC88, PRIV88, and RLOCK88 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN88_B_0x0 = 0;
        /** @brief SEC88, PRIV88, and RLOCK88 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN88_B_0x1 = 1;

    /** @brief peripheral protection enable 89 */
    using RIFSC_PPSR2_PPEN89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC89, PRIV89, and RLOCK89 register bit not present. (value: 0)
     *          - B_0x1: SEC89, PRIV89, and RLOCK89 register bit present. (value: 1)
     */
        /** @brief SEC89, PRIV89, and RLOCK89 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN89_B_0x0 = 0;
        /** @brief SEC89, PRIV89, and RLOCK89 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN89_B_0x1 = 1;

    /** @brief peripheral protection enable 90 */
    using RIFSC_PPSR2_PPEN90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC90, PRIV90, and RLOCK90 register bit not present. (value: 0)
     *          - B_0x1: SEC90, PRIV90, and RLOCK90 register bit present. (value: 1)
     */
        /** @brief SEC90, PRIV90, and RLOCK90 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN90_B_0x0 = 0;
        /** @brief SEC90, PRIV90, and RLOCK90 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN90_B_0x1 = 1;

    /** @brief peripheral protection enable 91 */
    using RIFSC_PPSR2_PPEN91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC91, PRIV91, and RLOCK91 register bit not present. (value: 0)
     *          - B_0x1: SEC91, PRIV91, and RLOCK91 register bit present. (value: 1)
     */
        /** @brief SEC91, PRIV91, and RLOCK91 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN91_B_0x0 = 0;
        /** @brief SEC91, PRIV91, and RLOCK91 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN91_B_0x1 = 1;

    /** @brief peripheral protection enable 92 */
    using RIFSC_PPSR2_PPEN92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC92, PRIV92, and RLOCK92 register bit not present. (value: 0)
     *          - B_0x1: SEC92, PRIV92, and RLOCK92 register bit present. (value: 1)
     */
        /** @brief SEC92, PRIV92, and RLOCK92 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN92_B_0x0 = 0;
        /** @brief SEC92, PRIV92, and RLOCK92 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN92_B_0x1 = 1;

    /** @brief peripheral protection enable 93 */
    using RIFSC_PPSR2_PPEN93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC93, PRIV93, and RLOCK93 register bit not present. (value: 0)
     *          - B_0x1: SEC93, PRIV93, and RLOCK93 register bit present. (value: 1)
     */
        /** @brief SEC93, PRIV93, and RLOCK93 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN93_B_0x0 = 0;
        /** @brief SEC93, PRIV93, and RLOCK93 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN93_B_0x1 = 1;

    /** @brief peripheral protection enable 94 */
    using RIFSC_PPSR2_PPEN94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC94, PRIV94, and RLOCK94 register bit not present. (value: 0)
     *          - B_0x1: SEC94, PRIV94, and RLOCK94 register bit present. (value: 1)
     */
        /** @brief SEC94, PRIV94, and RLOCK94 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN94_B_0x0 = 0;
        /** @brief SEC94, PRIV94, and RLOCK94 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN94_B_0x1 = 1;

    /** @brief peripheral protection enable 95 */
    using RIFSC_PPSR2_PPEN95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC95, PRIV95, and RLOCK95 register bit not present. (value: 0)
     *          - B_0x1: SEC95, PRIV95, and RLOCK95 register bit present. (value: 1)
     */
        /** @brief SEC95, PRIV95, and RLOCK95 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN95_B_0x0 = 0;
        /** @brief SEC95, PRIV95, and RLOCK95 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR2_PPEN95_B_0x1 = 1;

    /** @brief RIFSC peripheral protection status register 3 */
    using RIFSC_PPSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral protection enable 96 */
    using RIFSC_PPSR3_PPEN96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC96, PRIV96, and RLOCK96 register bit not present. (value: 0)
     *          - B_0x1: SEC96, PRIV96, and RLOCK96 register bit present. (value: 1)
     */
        /** @brief SEC96, PRIV96, and RLOCK96 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN96_B_0x0 = 0;
        /** @brief SEC96, PRIV96, and RLOCK96 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN96_B_0x1 = 1;

    /** @brief peripheral protection enable 97 */
    using RIFSC_PPSR3_PPEN97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC97, PRIV97, and RLOCK97 register bit not present. (value: 0)
     *          - B_0x1: SEC97, PRIV97, and RLOCK97 register bit present. (value: 1)
     */
        /** @brief SEC97, PRIV97, and RLOCK97 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN97_B_0x0 = 0;
        /** @brief SEC97, PRIV97, and RLOCK97 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN97_B_0x1 = 1;

    /** @brief peripheral protection enable 98 */
    using RIFSC_PPSR3_PPEN98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC98, PRIV98, and RLOCK98 register bit not present. (value: 0)
     *          - B_0x1: SEC98, PRIV98, and RLOCK98 register bit present. (value: 1)
     */
        /** @brief SEC98, PRIV98, and RLOCK98 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN98_B_0x0 = 0;
        /** @brief SEC98, PRIV98, and RLOCK98 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN98_B_0x1 = 1;

    /** @brief peripheral protection enable 99 */
    using RIFSC_PPSR3_PPEN99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC99, PRIV99, and RLOCK99 register bit not present. (value: 0)
     *          - B_0x1: SEC99, PRIV99, and RLOCK99 register bit present. (value: 1)
     */
        /** @brief SEC99, PRIV99, and RLOCK99 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN99_B_0x0 = 0;
        /** @brief SEC99, PRIV99, and RLOCK99 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN99_B_0x1 = 1;

    /** @brief peripheral protection enable 100 */
    using RIFSC_PPSR3_PPEN100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC100, PRIV100, and RLOCK100 register bit not present. (value: 0)
     *          - B_0x1: SEC100, PRIV100, and RLOCK100 register bit present. (value: 1)
     */
        /** @brief SEC100, PRIV100, and RLOCK100 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN100_B_0x0 = 0;
        /** @brief SEC100, PRIV100, and RLOCK100 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN100_B_0x1 = 1;

    /** @brief peripheral protection enable 101 */
    using RIFSC_PPSR3_PPEN101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC101, PRIV101, and RLOCK101 register bit not present. (value: 0)
     *          - B_0x1: SEC101, PRIV101, and RLOCK101 register bit present. (value: 1)
     */
        /** @brief SEC101, PRIV101, and RLOCK101 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN101_B_0x0 = 0;
        /** @brief SEC101, PRIV101, and RLOCK101 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN101_B_0x1 = 1;

    /** @brief peripheral protection enable 102 */
    using RIFSC_PPSR3_PPEN102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC102, PRIV102, and RLOCK102 register bit not present. (value: 0)
     *          - B_0x1: SEC102, PRIV102, and RLOCK102 register bit present. (value: 1)
     */
        /** @brief SEC102, PRIV102, and RLOCK102 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN102_B_0x0 = 0;
        /** @brief SEC102, PRIV102, and RLOCK102 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN102_B_0x1 = 1;

    /** @brief peripheral protection enable 103 */
    using RIFSC_PPSR3_PPEN103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC103, PRIV103, and RLOCK103 register bit not present. (value: 0)
     *          - B_0x1: SEC103, PRIV103, and RLOCK103 register bit present. (value: 1)
     */
        /** @brief SEC103, PRIV103, and RLOCK103 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN103_B_0x0 = 0;
        /** @brief SEC103, PRIV103, and RLOCK103 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN103_B_0x1 = 1;

    /** @brief peripheral protection enable 104 */
    using RIFSC_PPSR3_PPEN104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC104, PRIV104, and RLOCK104 register bit not present. (value: 0)
     *          - B_0x1: SEC104, PRIV104, and RLOCK104 register bit present. (value: 1)
     */
        /** @brief SEC104, PRIV104, and RLOCK104 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN104_B_0x0 = 0;
        /** @brief SEC104, PRIV104, and RLOCK104 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN104_B_0x1 = 1;

    /** @brief peripheral protection enable 105 */
    using RIFSC_PPSR3_PPEN105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC105, PRIV105, and RLOCK105 register bit not present. (value: 0)
     *          - B_0x1: SEC105, PRIV105, and RLOCK105 register bit present. (value: 1)
     */
        /** @brief SEC105, PRIV105, and RLOCK105 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN105_B_0x0 = 0;
        /** @brief SEC105, PRIV105, and RLOCK105 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN105_B_0x1 = 1;

    /** @brief peripheral protection enable 106 */
    using RIFSC_PPSR3_PPEN106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC106, PRIV106, and RLOCK106 register bit not present. (value: 0)
     *          - B_0x1: SEC106, PRIV106, and RLOCK106 register bit present. (value: 1)
     */
        /** @brief SEC106, PRIV106, and RLOCK106 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN106_B_0x0 = 0;
        /** @brief SEC106, PRIV106, and RLOCK106 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN106_B_0x1 = 1;

    /** @brief peripheral protection enable 107 */
    using RIFSC_PPSR3_PPEN107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC107, PRIV107, and RLOCK107 register bit not present. (value: 0)
     *          - B_0x1: SEC107, PRIV107, and RLOCK107 register bit present. (value: 1)
     */
        /** @brief SEC107, PRIV107, and RLOCK107 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN107_B_0x0 = 0;
        /** @brief SEC107, PRIV107, and RLOCK107 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN107_B_0x1 = 1;

    /** @brief peripheral protection enable 108 */
    using RIFSC_PPSR3_PPEN108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC108, PRIV108, and RLOCK108 register bit not present. (value: 0)
     *          - B_0x1: SEC108, PRIV108, and RLOCK108 register bit present. (value: 1)
     */
        /** @brief SEC108, PRIV108, and RLOCK108 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN108_B_0x0 = 0;
        /** @brief SEC108, PRIV108, and RLOCK108 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN108_B_0x1 = 1;

    /** @brief peripheral protection enable 109 */
    using RIFSC_PPSR3_PPEN109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC109, PRIV109, and RLOCK109 register bit not present. (value: 0)
     *          - B_0x1: SEC109, PRIV109, and RLOCK109 register bit present. (value: 1)
     */
        /** @brief SEC109, PRIV109, and RLOCK109 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN109_B_0x0 = 0;
        /** @brief SEC109, PRIV109, and RLOCK109 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN109_B_0x1 = 1;

    /** @brief peripheral protection enable 110 */
    using RIFSC_PPSR3_PPEN110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC110, PRIV110, and RLOCK110 register bit not present. (value: 0)
     *          - B_0x1: SEC110, PRIV110, and RLOCK110 register bit present. (value: 1)
     */
        /** @brief SEC110, PRIV110, and RLOCK110 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN110_B_0x0 = 0;
        /** @brief SEC110, PRIV110, and RLOCK110 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN110_B_0x1 = 1;

    /** @brief peripheral protection enable 111 */
    using RIFSC_PPSR3_PPEN111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC111, PRIV111, and RLOCK111 register bit not present. (value: 0)
     *          - B_0x1: SEC111, PRIV111, and RLOCK111 register bit present. (value: 1)
     */
        /** @brief SEC111, PRIV111, and RLOCK111 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN111_B_0x0 = 0;
        /** @brief SEC111, PRIV111, and RLOCK111 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN111_B_0x1 = 1;

    /** @brief peripheral protection enable 112 */
    using RIFSC_PPSR3_PPEN112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC112, PRIV112, and RLOCK112 register bit not present. (value: 0)
     *          - B_0x1: SEC112, PRIV112, and RLOCK112 register bit present. (value: 1)
     */
        /** @brief SEC112, PRIV112, and RLOCK112 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN112_B_0x0 = 0;
        /** @brief SEC112, PRIV112, and RLOCK112 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN112_B_0x1 = 1;

    /** @brief peripheral protection enable 113 */
    using RIFSC_PPSR3_PPEN113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC113, PRIV113, and RLOCK113 register bit not present. (value: 0)
     *          - B_0x1: SEC113, PRIV113, and RLOCK113 register bit present. (value: 1)
     */
        /** @brief SEC113, PRIV113, and RLOCK113 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN113_B_0x0 = 0;
        /** @brief SEC113, PRIV113, and RLOCK113 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN113_B_0x1 = 1;

    /** @brief peripheral protection enable 114 */
    using RIFSC_PPSR3_PPEN114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC114, PRIV114, and RLOCK114 register bit not present. (value: 0)
     *          - B_0x1: SEC114, PRIV114, and RLOCK114 register bit present. (value: 1)
     */
        /** @brief SEC114, PRIV114, and RLOCK114 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN114_B_0x0 = 0;
        /** @brief SEC114, PRIV114, and RLOCK114 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN114_B_0x1 = 1;

    /** @brief peripheral protection enable 115 */
    using RIFSC_PPSR3_PPEN115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC115, PRIV115, and RLOCK115 register bit not present. (value: 0)
     *          - B_0x1: SEC115, PRIV115, and RLOCK115 register bit present. (value: 1)
     */
        /** @brief SEC115, PRIV115, and RLOCK115 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN115_B_0x0 = 0;
        /** @brief SEC115, PRIV115, and RLOCK115 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN115_B_0x1 = 1;

    /** @brief peripheral protection enable 116 */
    using RIFSC_PPSR3_PPEN116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC116, PRIV116, and RLOCK116 register bit not present. (value: 0)
     *          - B_0x1: SEC116, PRIV116, and RLOCK116 register bit present. (value: 1)
     */
        /** @brief SEC116, PRIV116, and RLOCK116 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN116_B_0x0 = 0;
        /** @brief SEC116, PRIV116, and RLOCK116 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN116_B_0x1 = 1;

    /** @brief peripheral protection enable 117 */
    using RIFSC_PPSR3_PPEN117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC117, PRIV117, and RLOCK117 register bit not present. (value: 0)
     *          - B_0x1: SEC117, PRIV117, and RLOCK117 register bit present. (value: 1)
     */
        /** @brief SEC117, PRIV117, and RLOCK117 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN117_B_0x0 = 0;
        /** @brief SEC117, PRIV117, and RLOCK117 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN117_B_0x1 = 1;

    /** @brief peripheral protection enable 118 */
    using RIFSC_PPSR3_PPEN118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC118, PRIV118, and RLOCK118 register bit not present. (value: 0)
     *          - B_0x1: SEC118, PRIV118, and RLOCK118 register bit present. (value: 1)
     */
        /** @brief SEC118, PRIV118, and RLOCK118 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN118_B_0x0 = 0;
        /** @brief SEC118, PRIV118, and RLOCK118 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN118_B_0x1 = 1;

    /** @brief peripheral protection enable 119 */
    using RIFSC_PPSR3_PPEN119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC119, PRIV119, and RLOCK119 register bit not present. (value: 0)
     *          - B_0x1: SEC119, PRIV119, and RLOCK119 register bit present. (value: 1)
     */
        /** @brief SEC119, PRIV119, and RLOCK119 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN119_B_0x0 = 0;
        /** @brief SEC119, PRIV119, and RLOCK119 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN119_B_0x1 = 1;

    /** @brief peripheral protection enable 120 */
    using RIFSC_PPSR3_PPEN120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC120, PRIV120, and RLOCK120 register bit not present. (value: 0)
     *          - B_0x1: SEC120, PRIV120, and RLOCK120 register bit present. (value: 1)
     */
        /** @brief SEC120, PRIV120, and RLOCK120 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN120_B_0x0 = 0;
        /** @brief SEC120, PRIV120, and RLOCK120 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN120_B_0x1 = 1;

    /** @brief peripheral protection enable 121 */
    using RIFSC_PPSR3_PPEN121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC121, PRIV121, and RLOCK121 register bit not present. (value: 0)
     *          - B_0x1: SEC121, PRIV121, and RLOCK121 register bit present. (value: 1)
     */
        /** @brief SEC121, PRIV121, and RLOCK121 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN121_B_0x0 = 0;
        /** @brief SEC121, PRIV121, and RLOCK121 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN121_B_0x1 = 1;

    /** @brief peripheral protection enable 122 */
    using RIFSC_PPSR3_PPEN122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC122, PRIV122, and RLOCK122 register bit not present. (value: 0)
     *          - B_0x1: SEC122, PRIV122, and RLOCK122 register bit present. (value: 1)
     */
        /** @brief SEC122, PRIV122, and RLOCK122 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN122_B_0x0 = 0;
        /** @brief SEC122, PRIV122, and RLOCK122 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN122_B_0x1 = 1;

    /** @brief peripheral protection enable 123 */
    using RIFSC_PPSR3_PPEN123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC123, PRIV123, and RLOCK123 register bit not present. (value: 0)
     *          - B_0x1: SEC123, PRIV123, and RLOCK123 register bit present. (value: 1)
     */
        /** @brief SEC123, PRIV123, and RLOCK123 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN123_B_0x0 = 0;
        /** @brief SEC123, PRIV123, and RLOCK123 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN123_B_0x1 = 1;

    /** @brief peripheral protection enable 124 */
    using RIFSC_PPSR3_PPEN124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC124, PRIV124, and RLOCK124 register bit not present. (value: 0)
     *          - B_0x1: SEC124, PRIV124, and RLOCK124 register bit present. (value: 1)
     */
        /** @brief SEC124, PRIV124, and RLOCK124 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN124_B_0x0 = 0;
        /** @brief SEC124, PRIV124, and RLOCK124 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN124_B_0x1 = 1;

    /** @brief peripheral protection enable 125 */
    using RIFSC_PPSR3_PPEN125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC125, PRIV125, and RLOCK125 register bit not present. (value: 0)
     *          - B_0x1: SEC125, PRIV125, and RLOCK125 register bit present. (value: 1)
     */
        /** @brief SEC125, PRIV125, and RLOCK125 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN125_B_0x0 = 0;
        /** @brief SEC125, PRIV125, and RLOCK125 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN125_B_0x1 = 1;

    /** @brief peripheral protection enable 126 */
    using RIFSC_PPSR3_PPEN126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC126, PRIV126, and RLOCK126 register bit not present. (value: 0)
     *          - B_0x1: SEC126, PRIV126, and RLOCK126 register bit present. (value: 1)
     */
        /** @brief SEC126, PRIV126, and RLOCK126 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN126_B_0x0 = 0;
        /** @brief SEC126, PRIV126, and RLOCK126 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN126_B_0x1 = 1;

    /** @brief peripheral protection enable 127 */
    using RIFSC_PPSR3_PPEN127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC127, PRIV127, and RLOCK127 register bit not present. (value: 0)
     *          - B_0x1: SEC127, PRIV127, and RLOCK127 register bit present. (value: 1)
     */
        /** @brief SEC127, PRIV127, and RLOCK127 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN127_B_0x0 = 0;
        /** @brief SEC127, PRIV127, and RLOCK127 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR3_PPEN127_B_0x1 = 1;

    /** @brief RIFSC peripheral protection status register 4 */
    using RIFSC_PPSR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral protection enable 128 */
    using RIFSC_PPSR4_PPEN128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC128, PRIV128, and RLOCK128 register bit not present. (value: 0)
     *          - B_0x1: SEC128, PRIV128, and RLOCK128 register bit present. (value: 1)
     */
        /** @brief SEC128, PRIV128, and RLOCK128 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN128_B_0x0 = 0;
        /** @brief SEC128, PRIV128, and RLOCK128 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN128_B_0x1 = 1;

    /** @brief peripheral protection enable 129 */
    using RIFSC_PPSR4_PPEN129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC129, PRIV129, and RLOCK129 register bit not present. (value: 0)
     *          - B_0x1: SEC129, PRIV129, and RLOCK129 register bit present. (value: 1)
     */
        /** @brief SEC129, PRIV129, and RLOCK129 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN129_B_0x0 = 0;
        /** @brief SEC129, PRIV129, and RLOCK129 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN129_B_0x1 = 1;

    /** @brief peripheral protection enable 130 */
    using RIFSC_PPSR4_PPEN130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC130, PRIV130, and RLOCK130 register bit not present. (value: 0)
     *          - B_0x1: SEC130, PRIV130, and RLOCK130 register bit present. (value: 1)
     */
        /** @brief SEC130, PRIV130, and RLOCK130 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN130_B_0x0 = 0;
        /** @brief SEC130, PRIV130, and RLOCK130 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN130_B_0x1 = 1;

    /** @brief peripheral protection enable 131 */
    using RIFSC_PPSR4_PPEN131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC131, PRIV131, and RLOCK131 register bit not present. (value: 0)
     *          - B_0x1: SEC131, PRIV131, and RLOCK131 register bit present. (value: 1)
     */
        /** @brief SEC131, PRIV131, and RLOCK131 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN131_B_0x0 = 0;
        /** @brief SEC131, PRIV131, and RLOCK131 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN131_B_0x1 = 1;

    /** @brief peripheral protection enable 132 */
    using RIFSC_PPSR4_PPEN132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC132, PRIV132, and RLOCK132 register bit not present. (value: 0)
     *          - B_0x1: SEC132, PRIV132, and RLOCK132 register bit present. (value: 1)
     */
        /** @brief SEC132, PRIV132, and RLOCK132 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN132_B_0x0 = 0;
        /** @brief SEC132, PRIV132, and RLOCK132 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN132_B_0x1 = 1;

    /** @brief peripheral protection enable 133 */
    using RIFSC_PPSR4_PPEN133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC133, PRIV133, and RLOCK133 register bit not present. (value: 0)
     *          - B_0x1: SEC133, PRIV133, and RLOCK133 register bit present. (value: 1)
     */
        /** @brief SEC133, PRIV133, and RLOCK133 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN133_B_0x0 = 0;
        /** @brief SEC133, PRIV133, and RLOCK133 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN133_B_0x1 = 1;

    /** @brief peripheral protection enable 134 */
    using RIFSC_PPSR4_PPEN134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC134, PRIV134, and RLOCK134 register bit not present. (value: 0)
     *          - B_0x1: SEC134, PRIV134, and RLOCK134 register bit present. (value: 1)
     */
        /** @brief SEC134, PRIV134, and RLOCK134 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN134_B_0x0 = 0;
        /** @brief SEC134, PRIV134, and RLOCK134 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN134_B_0x1 = 1;

    /** @brief peripheral protection enable 135 */
    using RIFSC_PPSR4_PPEN135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC135, PRIV135, and RLOCK135 register bit not present. (value: 0)
     *          - B_0x1: SEC135, PRIV135, and RLOCK135 register bit present. (value: 1)
     */
        /** @brief SEC135, PRIV135, and RLOCK135 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN135_B_0x0 = 0;
        /** @brief SEC135, PRIV135, and RLOCK135 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN135_B_0x1 = 1;

    /** @brief peripheral protection enable 136 */
    using RIFSC_PPSR4_PPEN136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC136, PRIV136, and RLOCK136 register bit not present. (value: 0)
     *          - B_0x1: SEC136, PRIV136, and RLOCK136 register bit present. (value: 1)
     */
        /** @brief SEC136, PRIV136, and RLOCK136 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN136_B_0x0 = 0;
        /** @brief SEC136, PRIV136, and RLOCK136 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN136_B_0x1 = 1;

    /** @brief peripheral protection enable 137 */
    using RIFSC_PPSR4_PPEN137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC137, PRIV137, and RLOCK137 register bit not present. (value: 0)
     *          - B_0x1: SEC137, PRIV137, and RLOCK137 register bit present. (value: 1)
     */
        /** @brief SEC137, PRIV137, and RLOCK137 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN137_B_0x0 = 0;
        /** @brief SEC137, PRIV137, and RLOCK137 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN137_B_0x1 = 1;

    /** @brief peripheral protection enable 138 */
    using RIFSC_PPSR4_PPEN138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC138, PRIV138, and RLOCK138 register bit not present. (value: 0)
     *          - B_0x1: SEC138, PRIV138, and RLOCK138 register bit present. (value: 1)
     */
        /** @brief SEC138, PRIV138, and RLOCK138 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN138_B_0x0 = 0;
        /** @brief SEC138, PRIV138, and RLOCK138 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN138_B_0x1 = 1;

    /** @brief peripheral protection enable 139 */
    using RIFSC_PPSR4_PPEN139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC139, PRIV139, and RLOCK139 register bit not present. (value: 0)
     *          - B_0x1: SEC139, PRIV139, and RLOCK139 register bit present. (value: 1)
     */
        /** @brief SEC139, PRIV139, and RLOCK139 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN139_B_0x0 = 0;
        /** @brief SEC139, PRIV139, and RLOCK139 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN139_B_0x1 = 1;

    /** @brief peripheral protection enable 140 */
    using RIFSC_PPSR4_PPEN140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC140, PRIV140, and RLOCK140 register bit not present. (value: 0)
     *          - B_0x1: SEC140, PRIV140, and RLOCK140 register bit present. (value: 1)
     */
        /** @brief SEC140, PRIV140, and RLOCK140 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN140_B_0x0 = 0;
        /** @brief SEC140, PRIV140, and RLOCK140 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN140_B_0x1 = 1;

    /** @brief peripheral protection enable 141 */
    using RIFSC_PPSR4_PPEN141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC141, PRIV141, and RLOCK141 register bit not present. (value: 0)
     *          - B_0x1: SEC141, PRIV141, and RLOCK141 register bit present. (value: 1)
     */
        /** @brief SEC141, PRIV141, and RLOCK141 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN141_B_0x0 = 0;
        /** @brief SEC141, PRIV141, and RLOCK141 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN141_B_0x1 = 1;

    /** @brief peripheral protection enable 142 */
    using RIFSC_PPSR4_PPEN142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC142, PRIV142, and RLOCK142 register bit not present. (value: 0)
     *          - B_0x1: SEC142, PRIV142, and RLOCK142 register bit present. (value: 1)
     */
        /** @brief SEC142, PRIV142, and RLOCK142 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN142_B_0x0 = 0;
        /** @brief SEC142, PRIV142, and RLOCK142 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN142_B_0x1 = 1;

    /** @brief peripheral protection enable 143 */
    using RIFSC_PPSR4_PPEN143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC143, PRIV143, and RLOCK143 register bit not present. (value: 0)
     *          - B_0x1: SEC143, PRIV143, and RLOCK143 register bit present. (value: 1)
     */
        /** @brief SEC143, PRIV143, and RLOCK143 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN143_B_0x0 = 0;
        /** @brief SEC143, PRIV143, and RLOCK143 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN143_B_0x1 = 1;

    /** @brief peripheral protection enable 144 */
    using RIFSC_PPSR4_PPEN144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC144, PRIV144, and RLOCK144 register bit not present. (value: 0)
     *          - B_0x1: SEC144, PRIV144, and RLOCK144 register bit present. (value: 1)
     */
        /** @brief SEC144, PRIV144, and RLOCK144 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN144_B_0x0 = 0;
        /** @brief SEC144, PRIV144, and RLOCK144 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN144_B_0x1 = 1;

    /** @brief peripheral protection enable 145 */
    using RIFSC_PPSR4_PPEN145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC145, PRIV145, and RLOCK145 register bit not present. (value: 0)
     *          - B_0x1: SEC145, PRIV145, and RLOCK145 register bit present. (value: 1)
     */
        /** @brief SEC145, PRIV145, and RLOCK145 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN145_B_0x0 = 0;
        /** @brief SEC145, PRIV145, and RLOCK145 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN145_B_0x1 = 1;

    /** @brief peripheral protection enable 146 */
    using RIFSC_PPSR4_PPEN146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC146, PRIV146, and RLOCK146 register bit not present. (value: 0)
     *          - B_0x1: SEC146, PRIV146, and RLOCK146 register bit present. (value: 1)
     */
        /** @brief SEC146, PRIV146, and RLOCK146 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN146_B_0x0 = 0;
        /** @brief SEC146, PRIV146, and RLOCK146 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN146_B_0x1 = 1;

    /** @brief peripheral protection enable 147 */
    using RIFSC_PPSR4_PPEN147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC147, PRIV147, and RLOCK147 register bit not present. (value: 0)
     *          - B_0x1: SEC147, PRIV147, and RLOCK147 register bit present. (value: 1)
     */
        /** @brief SEC147, PRIV147, and RLOCK147 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN147_B_0x0 = 0;
        /** @brief SEC147, PRIV147, and RLOCK147 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN147_B_0x1 = 1;

    /** @brief peripheral protection enable 148 */
    using RIFSC_PPSR4_PPEN148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC148, PRIV148, and RLOCK148 register bit not present. (value: 0)
     *          - B_0x1: SEC148, PRIV148, and RLOCK148 register bit present. (value: 1)
     */
        /** @brief SEC148, PRIV148, and RLOCK148 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN148_B_0x0 = 0;
        /** @brief SEC148, PRIV148, and RLOCK148 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN148_B_0x1 = 1;

    /** @brief peripheral protection enable 149 */
    using RIFSC_PPSR4_PPEN149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC149, PRIV149, and RLOCK149 register bit not present. (value: 0)
     *          - B_0x1: SEC149, PRIV149, and RLOCK149 register bit present. (value: 1)
     */
        /** @brief SEC149, PRIV149, and RLOCK149 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN149_B_0x0 = 0;
        /** @brief SEC149, PRIV149, and RLOCK149 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN149_B_0x1 = 1;

    /** @brief peripheral protection enable 150 */
    using RIFSC_PPSR4_PPEN150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC150, PRIV150, and RLOCK150 register bit not present. (value: 0)
     *          - B_0x1: SEC150, PRIV150, and RLOCK150 register bit present. (value: 1)
     */
        /** @brief SEC150, PRIV150, and RLOCK150 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN150_B_0x0 = 0;
        /** @brief SEC150, PRIV150, and RLOCK150 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN150_B_0x1 = 1;

    /** @brief peripheral protection enable 151 */
    using RIFSC_PPSR4_PPEN151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC151, PRIV151, and RLOCK151 register bit not present. (value: 0)
     *          - B_0x1: SEC151, PRIV151, and RLOCK151 register bit present. (value: 1)
     */
        /** @brief SEC151, PRIV151, and RLOCK151 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN151_B_0x0 = 0;
        /** @brief SEC151, PRIV151, and RLOCK151 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN151_B_0x1 = 1;

    /** @brief peripheral protection enable 152 */
    using RIFSC_PPSR4_PPEN152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC152, PRIV152, and RLOCK152 register bit not present. (value: 0)
     *          - B_0x1: SEC152, PRIV152, and RLOCK152 register bit present. (value: 1)
     */
        /** @brief SEC152, PRIV152, and RLOCK152 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN152_B_0x0 = 0;
        /** @brief SEC152, PRIV152, and RLOCK152 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN152_B_0x1 = 1;

    /** @brief peripheral protection enable 153 */
    using RIFSC_PPSR4_PPEN153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC153, PRIV153, and RLOCK153 register bit not present. (value: 0)
     *          - B_0x1: SEC153, PRIV153, and RLOCK153 register bit present. (value: 1)
     */
        /** @brief SEC153, PRIV153, and RLOCK153 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN153_B_0x0 = 0;
        /** @brief SEC153, PRIV153, and RLOCK153 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN153_B_0x1 = 1;

    /** @brief peripheral protection enable 154 */
    using RIFSC_PPSR4_PPEN154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC154, PRIV154, and RLOCK154 register bit not present. (value: 0)
     *          - B_0x1: SEC154, PRIV154, and RLOCK154 register bit present. (value: 1)
     */
        /** @brief SEC154, PRIV154, and RLOCK154 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN154_B_0x0 = 0;
        /** @brief SEC154, PRIV154, and RLOCK154 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN154_B_0x1 = 1;

    /** @brief peripheral protection enable 155 */
    using RIFSC_PPSR4_PPEN155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC155, PRIV155, and RLOCK155 register bit not present. (value: 0)
     *          - B_0x1: SEC155, PRIV155, and RLOCK155 register bit present. (value: 1)
     */
        /** @brief SEC155, PRIV155, and RLOCK155 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN155_B_0x0 = 0;
        /** @brief SEC155, PRIV155, and RLOCK155 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN155_B_0x1 = 1;

    /** @brief peripheral protection enable 156 */
    using RIFSC_PPSR4_PPEN156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC156, PRIV156, and RLOCK156 register bit not present. (value: 0)
     *          - B_0x1: SEC156, PRIV156, and RLOCK156 register bit present. (value: 1)
     */
        /** @brief SEC156, PRIV156, and RLOCK156 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN156_B_0x0 = 0;
        /** @brief SEC156, PRIV156, and RLOCK156 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN156_B_0x1 = 1;

    /** @brief peripheral protection enable 157 */
    using RIFSC_PPSR4_PPEN157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC157, PRIV157, and RLOCK157 register bit not present. (value: 0)
     *          - B_0x1: SEC157, PRIV157, and RLOCK157 register bit present. (value: 1)
     */
        /** @brief SEC157, PRIV157, and RLOCK157 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN157_B_0x0 = 0;
        /** @brief SEC157, PRIV157, and RLOCK157 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN157_B_0x1 = 1;

    /** @brief peripheral protection enable 158 */
    using RIFSC_PPSR4_PPEN158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC158, PRIV158, and RLOCK158 register bit not present. (value: 0)
     *          - B_0x1: SEC158, PRIV158, and RLOCK158 register bit present. (value: 1)
     */
        /** @brief SEC158, PRIV158, and RLOCK158 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN158_B_0x0 = 0;
        /** @brief SEC158, PRIV158, and RLOCK158 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN158_B_0x1 = 1;

    /** @brief peripheral protection enable 159 */
    using RIFSC_PPSR4_PPEN159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC159, PRIV159, and RLOCK159 register bit not present. (value: 0)
     *          - B_0x1: SEC159, PRIV159, and RLOCK159 register bit present. (value: 1)
     */
        /** @brief SEC159, PRIV159, and RLOCK159 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN159_B_0x0 = 0;
        /** @brief SEC159, PRIV159, and RLOCK159 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR4_PPEN159_B_0x1 = 1;

    /** @brief RIFSC peripheral protection status register 5 */
    using RIFSC_PPSR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral protection enable 160 */
    using RIFSC_PPSR5_PPEN160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC160, PRIV160, and RLOCK160 register bit not present. (value: 0)
     *          - B_0x1: SEC160, PRIV160, and RLOCK160 register bit present. (value: 1)
     */
        /** @brief SEC160, PRIV160, and RLOCK160 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN160_B_0x0 = 0;
        /** @brief SEC160, PRIV160, and RLOCK160 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN160_B_0x1 = 1;

    /** @brief peripheral protection enable 161 */
    using RIFSC_PPSR5_PPEN161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC161, PRIV161, and RLOCK161 register bit not present. (value: 0)
     *          - B_0x1: SEC161, PRIV161, and RLOCK161 register bit present. (value: 1)
     */
        /** @brief SEC161, PRIV161, and RLOCK161 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN161_B_0x0 = 0;
        /** @brief SEC161, PRIV161, and RLOCK161 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN161_B_0x1 = 1;

    /** @brief peripheral protection enable 162 */
    using RIFSC_PPSR5_PPEN162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC162, PRIV162, and RLOCK162 register bit not present. (value: 0)
     *          - B_0x1: SEC162, PRIV162, and RLOCK162 register bit present. (value: 1)
     */
        /** @brief SEC162, PRIV162, and RLOCK162 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN162_B_0x0 = 0;
        /** @brief SEC162, PRIV162, and RLOCK162 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN162_B_0x1 = 1;

    /** @brief peripheral protection enable 163 */
    using RIFSC_PPSR5_PPEN163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC163, PRIV163, and RLOCK163 register bit not present. (value: 0)
     *          - B_0x1: SEC163, PRIV163, and RLOCK163 register bit present. (value: 1)
     */
        /** @brief SEC163, PRIV163, and RLOCK163 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN163_B_0x0 = 0;
        /** @brief SEC163, PRIV163, and RLOCK163 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN163_B_0x1 = 1;

    /** @brief peripheral protection enable 164 */
    using RIFSC_PPSR5_PPEN164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC164, PRIV164, and RLOCK164 register bit not present. (value: 0)
     *          - B_0x1: SEC164, PRIV164, and RLOCK164 register bit present. (value: 1)
     */
        /** @brief SEC164, PRIV164, and RLOCK164 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN164_B_0x0 = 0;
        /** @brief SEC164, PRIV164, and RLOCK164 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN164_B_0x1 = 1;

    /** @brief peripheral protection enable 165 */
    using RIFSC_PPSR5_PPEN165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC165, PRIV165, and RLOCK165 register bit not present. (value: 0)
     *          - B_0x1: SEC165, PRIV165, and RLOCK165 register bit present. (value: 1)
     */
        /** @brief SEC165, PRIV165, and RLOCK165 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN165_B_0x0 = 0;
        /** @brief SEC165, PRIV165, and RLOCK165 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN165_B_0x1 = 1;

    /** @brief peripheral protection enable 166 */
    using RIFSC_PPSR5_PPEN166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC166, PRIV166, and RLOCK166 register bit not present. (value: 0)
     *          - B_0x1: SEC166, PRIV166, and RLOCK166 register bit present. (value: 1)
     */
        /** @brief SEC166, PRIV166, and RLOCK166 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN166_B_0x0 = 0;
        /** @brief SEC166, PRIV166, and RLOCK166 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN166_B_0x1 = 1;

    /** @brief peripheral protection enable 167 */
    using RIFSC_PPSR5_PPEN167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC167, PRIV167, and RLOCK167 register bit not present. (value: 0)
     *          - B_0x1: SEC167, PRIV167, and RLOCK167 register bit present. (value: 1)
     */
        /** @brief SEC167, PRIV167, and RLOCK167 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN167_B_0x0 = 0;
        /** @brief SEC167, PRIV167, and RLOCK167 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN167_B_0x1 = 1;

    /** @brief peripheral protection enable 168 */
    using RIFSC_PPSR5_PPEN168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC168, PRIV168, and RLOCK168 register bit not present. (value: 0)
     *          - B_0x1: SEC168, PRIV168, and RLOCK168 register bit present. (value: 1)
     */
        /** @brief SEC168, PRIV168, and RLOCK168 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN168_B_0x0 = 0;
        /** @brief SEC168, PRIV168, and RLOCK168 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN168_B_0x1 = 1;

    /** @brief peripheral protection enable 169 */
    using RIFSC_PPSR5_PPEN169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC169, PRIV169, and RLOCK169 register bit not present. (value: 0)
     *          - B_0x1: SEC169, PRIV169, and RLOCK169 register bit present. (value: 1)
     */
        /** @brief SEC169, PRIV169, and RLOCK169 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN169_B_0x0 = 0;
        /** @brief SEC169, PRIV169, and RLOCK169 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN169_B_0x1 = 1;

    /** @brief peripheral protection enable 170 */
    using RIFSC_PPSR5_PPEN170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC170, PRIV170, and RLOCK170 register bit not present. (value: 0)
     *          - B_0x1: SEC170, PRIV170, and RLOCK170 register bit present. (value: 1)
     */
        /** @brief SEC170, PRIV170, and RLOCK170 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN170_B_0x0 = 0;
        /** @brief SEC170, PRIV170, and RLOCK170 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN170_B_0x1 = 1;

    /** @brief peripheral protection enable 171 */
    using RIFSC_PPSR5_PPEN171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC171, PRIV171, and RLOCK171 register bit not present. (value: 0)
     *          - B_0x1: SEC171, PRIV171, and RLOCK171 register bit present. (value: 1)
     */
        /** @brief SEC171, PRIV171, and RLOCK171 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN171_B_0x0 = 0;
        /** @brief SEC171, PRIV171, and RLOCK171 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN171_B_0x1 = 1;

    /** @brief peripheral protection enable 172 */
    using RIFSC_PPSR5_PPEN172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC172, PRIV172, and RLOCK172 register bit not present. (value: 0)
     *          - B_0x1: SEC172, PRIV172, and RLOCK172 register bit present. (value: 1)
     */
        /** @brief SEC172, PRIV172, and RLOCK172 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN172_B_0x0 = 0;
        /** @brief SEC172, PRIV172, and RLOCK172 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN172_B_0x1 = 1;

    /** @brief peripheral protection enable 173 */
    using RIFSC_PPSR5_PPEN173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC173, PRIV173, and RLOCK173 register bit not present. (value: 0)
     *          - B_0x1: SEC173, PRIV173, and RLOCK173 register bit present. (value: 1)
     */
        /** @brief SEC173, PRIV173, and RLOCK173 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN173_B_0x0 = 0;
        /** @brief SEC173, PRIV173, and RLOCK173 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN173_B_0x1 = 1;

    /** @brief peripheral protection enable 174 */
    using RIFSC_PPSR5_PPEN174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC174, PRIV174, and RLOCK174 register bit not present. (value: 0)
     *          - B_0x1: SEC174, PRIV174, and RLOCK174 register bit present. (value: 1)
     */
        /** @brief SEC174, PRIV174, and RLOCK174 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN174_B_0x0 = 0;
        /** @brief SEC174, PRIV174, and RLOCK174 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN174_B_0x1 = 1;

    /** @brief peripheral protection enable 175 */
    using RIFSC_PPSR5_PPEN175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC175, PRIV175, and RLOCK175 register bit not present. (value: 0)
     *          - B_0x1: SEC175, PRIV175, and RLOCK175 register bit present. (value: 1)
     */
        /** @brief SEC175, PRIV175, and RLOCK175 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN175_B_0x0 = 0;
        /** @brief SEC175, PRIV175, and RLOCK175 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN175_B_0x1 = 1;

    /** @brief peripheral protection enable 176 */
    using RIFSC_PPSR5_PPEN176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC176, PRIV176, and RLOCK176 register bit not present. (value: 0)
     *          - B_0x1: SEC176, PRIV176, and RLOCK176 register bit present. (value: 1)
     */
        /** @brief SEC176, PRIV176, and RLOCK176 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN176_B_0x0 = 0;
        /** @brief SEC176, PRIV176, and RLOCK176 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN176_B_0x1 = 1;

    /** @brief peripheral protection enable 177 */
    using RIFSC_PPSR5_PPEN177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC177, PRIV177, and RLOCK177 register bit not present. (value: 0)
     *          - B_0x1: SEC177, PRIV177, and RLOCK177 register bit present. (value: 1)
     */
        /** @brief SEC177, PRIV177, and RLOCK177 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN177_B_0x0 = 0;
        /** @brief SEC177, PRIV177, and RLOCK177 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN177_B_0x1 = 1;

    /** @brief peripheral protection enable 178 */
    using RIFSC_PPSR5_PPEN178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC178, PRIV178, and RLOCK178 register bit not present. (value: 0)
     *          - B_0x1: SEC178, PRIV178, and RLOCK178 register bit present. (value: 1)
     */
        /** @brief SEC178, PRIV178, and RLOCK178 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN178_B_0x0 = 0;
        /** @brief SEC178, PRIV178, and RLOCK178 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN178_B_0x1 = 1;

    /** @brief peripheral protection enable 179 */
    using RIFSC_PPSR5_PPEN179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC179, PRIV179, and RLOCK179 register bit not present. (value: 0)
     *          - B_0x1: SEC179, PRIV179, and RLOCK179 register bit present. (value: 1)
     */
        /** @brief SEC179, PRIV179, and RLOCK179 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN179_B_0x0 = 0;
        /** @brief SEC179, PRIV179, and RLOCK179 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN179_B_0x1 = 1;

    /** @brief peripheral protection enable 180 */
    using RIFSC_PPSR5_PPEN180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC180, PRIV180, and RLOCK180 register bit not present. (value: 0)
     *          - B_0x1: SEC180, PRIV180, and RLOCK180 register bit present. (value: 1)
     */
        /** @brief SEC180, PRIV180, and RLOCK180 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN180_B_0x0 = 0;
        /** @brief SEC180, PRIV180, and RLOCK180 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN180_B_0x1 = 1;

    /** @brief peripheral protection enable 181 */
    using RIFSC_PPSR5_PPEN181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC181, PRIV181, and RLOCK181 register bit not present. (value: 0)
     *          - B_0x1: SEC181, PRIV181, and RLOCK181 register bit present. (value: 1)
     */
        /** @brief SEC181, PRIV181, and RLOCK181 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN181_B_0x0 = 0;
        /** @brief SEC181, PRIV181, and RLOCK181 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN181_B_0x1 = 1;

    /** @brief peripheral protection enable 182 */
    using RIFSC_PPSR5_PPEN182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC182, PRIV182, and RLOCK182 register bit not present. (value: 0)
     *          - B_0x1: SEC182, PRIV182, and RLOCK182 register bit present. (value: 1)
     */
        /** @brief SEC182, PRIV182, and RLOCK182 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN182_B_0x0 = 0;
        /** @brief SEC182, PRIV182, and RLOCK182 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN182_B_0x1 = 1;

    /** @brief peripheral protection enable 183 */
    using RIFSC_PPSR5_PPEN183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC183, PRIV183, and RLOCK183 register bit not present. (value: 0)
     *          - B_0x1: SEC183, PRIV183, and RLOCK183 register bit present. (value: 1)
     */
        /** @brief SEC183, PRIV183, and RLOCK183 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN183_B_0x0 = 0;
        /** @brief SEC183, PRIV183, and RLOCK183 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN183_B_0x1 = 1;

    /** @brief peripheral protection enable 184 */
    using RIFSC_PPSR5_PPEN184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC184, PRIV184, and RLOCK184 register bit not present. (value: 0)
     *          - B_0x1: SEC184, PRIV184, and RLOCK184 register bit present. (value: 1)
     */
        /** @brief SEC184, PRIV184, and RLOCK184 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN184_B_0x0 = 0;
        /** @brief SEC184, PRIV184, and RLOCK184 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN184_B_0x1 = 1;

    /** @brief peripheral protection enable 185 */
    using RIFSC_PPSR5_PPEN185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC185, PRIV185, and RLOCK185 register bit not present. (value: 0)
     *          - B_0x1: SEC185, PRIV185, and RLOCK185 register bit present. (value: 1)
     */
        /** @brief SEC185, PRIV185, and RLOCK185 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN185_B_0x0 = 0;
        /** @brief SEC185, PRIV185, and RLOCK185 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN185_B_0x1 = 1;

    /** @brief peripheral protection enable 186 */
    using RIFSC_PPSR5_PPEN186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC186, PRIV186, and RLOCK186 register bit not present. (value: 0)
     *          - B_0x1: SEC186, PRIV186, and RLOCK186 register bit present. (value: 1)
     */
        /** @brief SEC186, PRIV186, and RLOCK186 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN186_B_0x0 = 0;
        /** @brief SEC186, PRIV186, and RLOCK186 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN186_B_0x1 = 1;

    /** @brief peripheral protection enable 187 */
    using RIFSC_PPSR5_PPEN187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC187, PRIV187, and RLOCK187 register bit not present. (value: 0)
     *          - B_0x1: SEC187, PRIV187, and RLOCK187 register bit present. (value: 1)
     */
        /** @brief SEC187, PRIV187, and RLOCK187 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN187_B_0x0 = 0;
        /** @brief SEC187, PRIV187, and RLOCK187 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN187_B_0x1 = 1;

    /** @brief peripheral protection enable 188 */
    using RIFSC_PPSR5_PPEN188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC188, PRIV188, and RLOCK188 register bit not present. (value: 0)
     *          - B_0x1: SEC188, PRIV188, and RLOCK188 register bit present. (value: 1)
     */
        /** @brief SEC188, PRIV188, and RLOCK188 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN188_B_0x0 = 0;
        /** @brief SEC188, PRIV188, and RLOCK188 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN188_B_0x1 = 1;

    /** @brief peripheral protection enable 189 */
    using RIFSC_PPSR5_PPEN189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC189, PRIV189, and RLOCK189 register bit not present. (value: 0)
     *          - B_0x1: SEC189, PRIV189, and RLOCK189 register bit present. (value: 1)
     */
        /** @brief SEC189, PRIV189, and RLOCK189 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN189_B_0x0 = 0;
        /** @brief SEC189, PRIV189, and RLOCK189 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN189_B_0x1 = 1;

    /** @brief peripheral protection enable 190 */
    using RIFSC_PPSR5_PPEN190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC190, PRIV190, and RLOCK190 register bit not present. (value: 0)
     *          - B_0x1: SEC190, PRIV190, and RLOCK190 register bit present. (value: 1)
     */
        /** @brief SEC190, PRIV190, and RLOCK190 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN190_B_0x0 = 0;
        /** @brief SEC190, PRIV190, and RLOCK190 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN190_B_0x1 = 1;

    /** @brief peripheral protection enable 191 */
    using RIFSC_PPSR5_PPEN191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC191, PRIV191, and RLOCK191 register bit not present. (value: 0)
     *          - B_0x1: SEC191, PRIV191, and RLOCK191 register bit present. (value: 1)
     */
        /** @brief SEC191, PRIV191, and RLOCK191 register bit not present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN191_B_0x0 = 0;
        /** @brief SEC191, PRIV191, and RLOCK191 register bit present. */
    constexpr std::uint32_t RIFSC_PPSR5_PPEN191_B_0x1 = 1;

}

#endif
