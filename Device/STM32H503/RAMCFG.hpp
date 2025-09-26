/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H503_RAMCFG_HPP
#define EMBEDDED_PP_STM32H503_RAMCFG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RAMs configuration controller */
namespace STM32H503::RAMCFG {

    /** @brief RAMCFG memory 1 control register */
    using RAMCFG_M1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC enable. This bit reset value is defined by the user option bit configuration. When set, it can be cleared by software only after writing the unlock sequence in the RAMCFG_MxECCKEYR register. Note: This bit is reserved and must be kept at reset value in SRAM1 control register. */
    using RAMCFG_M1CR_ECCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC disabled (value: 0)
     *          - B_0x1: ECC enabled (value: 1)
     */
        /** @brief ECC disabled */
    constexpr std::uint32_t RAMCFG_M1CR_ECCE_B_0x0 = 0;
        /** @brief ECC enabled */
    constexpr std::uint32_t RAMCFG_M1CR_ECCE_B_0x1 = 1;

    /** @brief Address latch enable Note: This bit is reserved and must be kept at reset value in SRAM1 control register. */
    using RAMCFG_M1CR_ALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Failing address not stored in the SRAMx ECC single/double error address registers (value: 0)
     *          - B_0x1: Failing address stored in the SRAMx ECC single/double error address registers (value: 1)
     */
        /** @brief Failing address not stored in the SRAMx ECC single/double error address registers */
    constexpr std::uint32_t RAMCFG_M1CR_ALE_B_0x0 = 0;
        /** @brief Failing address stored in the SRAMx ECC single/double error address registers */
    constexpr std::uint32_t RAMCFG_M1CR_ALE_B_0x1 = 1;

    /** @brief SRAM erase This bit can be set by software only after writing the unlock sequence in the ERASEKEY field of the RAMCFG_MxERKEYR register. Setting this bit starts the SRAM erase. This bit is automatically cleared by hardware at the end of the erase operation. */
    using RAMCFG_M1CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation on going (value: 0)
     *          - B_0x1: Erase operation on going (value: 1)
     */
        /** @brief No erase operation on going */
    constexpr std::uint32_t RAMCFG_M1CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation on going */
    constexpr std::uint32_t RAMCFG_M1CR_SRAMER_B_0x1 = 1;

    /** @brief RAMCFG memory interrupt status register */
    using RAMCFG_M1ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected Note: This bit is reserved and must be kept at reset value in SRAM1 interrupt status register. */
    using RAMCFG_M1ISR_SEDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No single error (value: 0)
     *          - B_0x1: Single error detected and corrected (value: 1)
     */
        /** @brief No single error */
    constexpr std::uint32_t RAMCFG_M1ISR_SEDC_B_0x0 = 0;
        /** @brief Single error detected and corrected */
    constexpr std::uint32_t RAMCFG_M1ISR_SEDC_B_0x1 = 1;

    /** @brief ECC double error detected Note: This bit is reserved and must be kept at reset value in SRAM1 interrupt status register. */
    using RAMCFG_M1ISR_DED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double error (value: 0)
     *          - B_0x1: Double error detected (value: 1)
     */
        /** @brief No double error */
    constexpr std::uint32_t RAMCFG_M1ISR_DED_B_0x0 = 0;
        /** @brief Double error detected */
    constexpr std::uint32_t RAMCFG_M1ISR_DED_B_0x1 = 1;

    /** @brief SRAM busy with erase operation Note: Depending on the SRAM, the erase operation can be performed due to software request, system reset if the option bit is enabled, tamper detection or product state regression. Refer to Table 9: Internal SRAMs features. */
    using RAMCFG_M1ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation on going (value: 0)
     *          - B_0x1: Erase operation on going (value: 1)
     */
        /** @brief No erase operation on going */
    constexpr std::uint32_t RAMCFG_M1ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation on going */
    constexpr std::uint32_t RAMCFG_M1ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG memory 1 erase key register */
    using RAMCFG_M1ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key The following steps are required to unlock the write protection of the SRAMER bit in the RAMCFG_MxCR register. 1) Write 0xCA into ERASEKEY[7:0]. 2) Write 0x53 into ERASEKEY[7:0]. Note: Writing a wrong key reactivates the write protection. */
    using RAMCFG_M1ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 control register */
    using RAMCFG_M2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC enable. This bit reset value is defined by the user option bit configuration. When set, it can be cleared by software only after writing the unlock sequence in the RAMCFG_MxECCKEYR register. Note: This bit is reserved and must be kept at reset value in SRAM1 control register. */
    using RAMCFG_M2CR_ECCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC disabled (value: 0)
     *          - B_0x1: ECC enabled (value: 1)
     */
        /** @brief ECC disabled */
    constexpr std::uint32_t RAMCFG_M2CR_ECCE_B_0x0 = 0;
        /** @brief ECC enabled */
    constexpr std::uint32_t RAMCFG_M2CR_ECCE_B_0x1 = 1;

    /** @brief Address latch enable Note: This bit is reserved and must be kept at reset value in SRAM1 control register. */
    using RAMCFG_M2CR_ALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Failing address not stored in the SRAMx ECC single/double error address registers (value: 0)
     *          - B_0x1: Failing address stored in the SRAMx ECC single/double error address registers (value: 1)
     */
        /** @brief Failing address not stored in the SRAMx ECC single/double error address registers */
    constexpr std::uint32_t RAMCFG_M2CR_ALE_B_0x0 = 0;
        /** @brief Failing address stored in the SRAMx ECC single/double error address registers */
    constexpr std::uint32_t RAMCFG_M2CR_ALE_B_0x1 = 1;

    /** @brief SRAM erase This bit can be set by software only after writing the unlock sequence in the ERASEKEY field of the RAMCFG_MxERKEYR register. Setting this bit starts the SRAM erase. This bit is automatically cleared by hardware at the end of the erase operation. */
    using RAMCFG_M2CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation on going (value: 0)
     *          - B_0x1: Erase operation on going (value: 1)
     */
        /** @brief No erase operation on going */
    constexpr std::uint32_t RAMCFG_M2CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation on going */
    constexpr std::uint32_t RAMCFG_M2CR_SRAMER_B_0x1 = 1;

    /** @brief RAMCFG memory 2 interrupt enable register */
    using RAMCFG_M2IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable */
    using RAMCFG_M2IER_SEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single error interrupt disabled (value: 0)
     *          - B_0x1: Single error interrupt enabled (value: 1)
     */
        /** @brief Single error interrupt disabled */
    constexpr std::uint32_t RAMCFG_M2IER_SEIE_B_0x0 = 0;
        /** @brief Single error interrupt enabled */
    constexpr std::uint32_t RAMCFG_M2IER_SEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable */
    using RAMCFG_M2IER_DEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Double error interrupt disabled (value: 0)
     *          - B_0x1: Double error interrupt enabled (value: 1)
     */
        /** @brief Double error interrupt disabled */
    constexpr std::uint32_t RAMCFG_M2IER_DEIE_B_0x0 = 0;
        /** @brief Double error interrupt enabled */
    constexpr std::uint32_t RAMCFG_M2IER_DEIE_B_0x1 = 1;

    /** @brief Double error NMI This bit is set by software and cleared only by a global RAMCFG reset. Note: if ECCNMI is set, the RAMCFG maskable interrupt is not generated whatever DEIE bit value. */
    using RAMCFG_M2IER_ECCNMI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMI not generated in case of ECC double error (value: 0)
     *          - B_0x1: NMI generated in case of ECC double error (value: 1)
     */
        /** @brief NMI not generated in case of ECC double error */
    constexpr std::uint32_t RAMCFG_M2IER_ECCNMI_B_0x0 = 0;
        /** @brief NMI generated in case of ECC double error */
    constexpr std::uint32_t RAMCFG_M2IER_ECCNMI_B_0x1 = 1;

    /** @brief RAMCFG memory interrupt status register */
    using RAMCFG_M2ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected Note: This bit is reserved and must be kept at reset value in SRAM1 interrupt status register. */
    using RAMCFG_M2ISR_SEDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No single error (value: 0)
     *          - B_0x1: Single error detected and corrected (value: 1)
     */
        /** @brief No single error */
    constexpr std::uint32_t RAMCFG_M2ISR_SEDC_B_0x0 = 0;
        /** @brief Single error detected and corrected */
    constexpr std::uint32_t RAMCFG_M2ISR_SEDC_B_0x1 = 1;

    /** @brief ECC double error detected Note: This bit is reserved and must be kept at reset value in SRAM1 interrupt status register. */
    using RAMCFG_M2ISR_DED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double error (value: 0)
     *          - B_0x1: Double error detected (value: 1)
     */
        /** @brief No double error */
    constexpr std::uint32_t RAMCFG_M2ISR_DED_B_0x0 = 0;
        /** @brief Double error detected */
    constexpr std::uint32_t RAMCFG_M2ISR_DED_B_0x1 = 1;

    /** @brief SRAM busy with erase operation Note: Depending on the SRAM, the erase operation can be performed due to software request, system reset if the option bit is enabled, tamper detection or product state regression. Refer to Table 9: Internal SRAMs features. */
    using RAMCFG_M2ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation on going (value: 0)
     *          - B_0x1: Erase operation on going (value: 1)
     */
        /** @brief No erase operation on going */
    constexpr std::uint32_t RAMCFG_M2ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation on going */
    constexpr std::uint32_t RAMCFG_M2ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG memory 2 ECC single error address register */
    using RAMCFG_M2SEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error address When the ALE bit is set in the RAMCFG_MxCR register, this field is updated with the address corresponding to the ECC single error. */
    using RAMCFG_M2SEAR_ESEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 ECC double error address register */
    using RAMCFG_M2DEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC double error address When the ALE bit is set in the RAMCFG_MxCR register, this field is updated with the address corresponding to the ECC double error. */
    using RAMCFG_M2DEAR_EDEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 interrupt clear register 2 */
    using RAMCFG_M2ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC single error detected and corrected Writing 1 to this flag clears the SEDC bit in the RAMCFG_MxISR register. Reading this flag returns the SEDC value. */
    using RAMCFG_M2ICR_CSEDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC double error detected Writing 1 to this flag clears the DED bit in the RAMCFG_MxISR register. Reading this flag returns the DED value. */
    using RAMCFG_M2ICR_CDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 write protection register 1 */
    using RAMCFG_M2WPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P0WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P0WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P0WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P1WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P1WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P1WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P2WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P2WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P2WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P3WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P3WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P3WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P4WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P4WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P4WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P5WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P5WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P5WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P6WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P6WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P6WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P7WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P7WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P7WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P8WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P8WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P8WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P9WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P9WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P9WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P10WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P10WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P10WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P11WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P11WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P11WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P12WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P12WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P12WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P13WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P13WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P13WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P14WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P14WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P14WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection These bits are set by software and cleared only by a global RAMCFG reset. */
    using RAMCFG_M2WPR1_P15WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P15WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P15WP_B_0x1 = 1;

    /** @brief RAMCFG memory 2 ECC key register */
    using RAMCFG_M2ECCKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC write protection key The following steps are required to unlock the write protection of the ECCE bit in the RAMCFG_MxCR register. 1) Write 0xAE into ECCKEY[7:0]. 2) Write 0x75 into ECCKEY[7:0]. Note: Writing a wrong key reactivates the write protection. */
    using RAMCFG_M2ECCKEYR_ECCKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 erase key register */
    using RAMCFG_M2ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key The following steps are required to unlock the write protection of the SRAMER bit in the RAMCFG_MxCR register. 1) Write 0xCA into ERASEKEY[7:0]. 2) Write 0x53 into ERASEKEY[7:0]. Note: Writing a wrong key reactivates the write protection. */
    using RAMCFG_M2ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 interrupt enable register */
    using RAMCFG_M3IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable */
    using RAMCFG_M3IER_SEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single error interrupt disabled (value: 0)
     *          - B_0x1: Single error interrupt enabled (value: 1)
     */
        /** @brief Single error interrupt disabled */
    constexpr std::uint32_t RAMCFG_M3IER_SEIE_B_0x0 = 0;
        /** @brief Single error interrupt enabled */
    constexpr std::uint32_t RAMCFG_M3IER_SEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable */
    using RAMCFG_M3IER_DEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Double error interrupt disabled (value: 0)
     *          - B_0x1: Double error interrupt enabled (value: 1)
     */
        /** @brief Double error interrupt disabled */
    constexpr std::uint32_t RAMCFG_M3IER_DEIE_B_0x0 = 0;
        /** @brief Double error interrupt enabled */
    constexpr std::uint32_t RAMCFG_M3IER_DEIE_B_0x1 = 1;

    /** @brief Double error NMI This bit is set by software and cleared only by a global RAMCFG reset. Note: if ECCNMI is set, the RAMCFG maskable interrupt is not generated whatever DEIE bit value. */
    using RAMCFG_M3IER_ECCNMI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMI not generated in case of ECC double error (value: 0)
     *          - B_0x1: NMI generated in case of ECC double error (value: 1)
     */
        /** @brief NMI not generated in case of ECC double error */
    constexpr std::uint32_t RAMCFG_M3IER_ECCNMI_B_0x0 = 0;
        /** @brief NMI generated in case of ECC double error */
    constexpr std::uint32_t RAMCFG_M3IER_ECCNMI_B_0x1 = 1;

    /** @brief RAMCFG memory interrupt status register */
    using RAMCFG_M3ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected Note: This bit is reserved and must be kept at reset value in SRAM1 interrupt status register. */
    using RAMCFG_M3ISR_SEDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No single error (value: 0)
     *          - B_0x1: Single error detected and corrected (value: 1)
     */
        /** @brief No single error */
    constexpr std::uint32_t RAMCFG_M3ISR_SEDC_B_0x0 = 0;
        /** @brief Single error detected and corrected */
    constexpr std::uint32_t RAMCFG_M3ISR_SEDC_B_0x1 = 1;

    /** @brief ECC double error detected Note: This bit is reserved and must be kept at reset value in SRAM1 interrupt status register. */
    using RAMCFG_M3ISR_DED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double error (value: 0)
     *          - B_0x1: Double error detected (value: 1)
     */
        /** @brief No double error */
    constexpr std::uint32_t RAMCFG_M3ISR_DED_B_0x0 = 0;
        /** @brief Double error detected */
    constexpr std::uint32_t RAMCFG_M3ISR_DED_B_0x1 = 1;

    /** @brief SRAM busy with erase operation Note: Depending on the SRAM, the erase operation can be performed due to software request, system reset if the option bit is enabled, tamper detection or product state regression. Refer to Table 9: Internal SRAMs features. */
    using RAMCFG_M3ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation on going (value: 0)
     *          - B_0x1: Erase operation on going (value: 1)
     */
        /** @brief No erase operation on going */
    constexpr std::uint32_t RAMCFG_M3ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation on going */
    constexpr std::uint32_t RAMCFG_M3ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG memory 3 ECC single error address register */
    using RAMCFG_M3SEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error address When the ALE bit is set in the RAMCFG_MxCR register, this field is updated with the address corresponding to the ECC single error. */
    using RAMCFG_M3SEAR_ESEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 ECC double error address register */
    using RAMCFG_M3DEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC double error address When the ALE bit is set in the RAMCFG_MxCR register, this field is updated with the address corresponding to the ECC double error. */
    using RAMCFG_M3DEAR_EDEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 interrupt clear register 3 */
    using RAMCFG_M3ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC single error detected and corrected Writing 1 to this flag clears the SEDC bit in the RAMCFG_MxISR register. Reading this flag returns the SEDC value. */
    using RAMCFG_M3ICR_CSEDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC double error detected Writing 1 to this flag clears the DED bit in the RAMCFG_MxISR register. Reading this flag returns the DED value. */
    using RAMCFG_M3ICR_CDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 ECC key register */
    using RAMCFG_M3ECCKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC write protection key The following steps are required to unlock the write protection of the ECCE bit in the RAMCFG_MxCR register. 1) Write 0xAE into ECCKEY[7:0]. 2) Write 0x75 into ECCKEY[7:0]. Note: Writing a wrong key reactivates the write protection. */
    using RAMCFG_M3ECCKEYR_ECCKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 erase key register */
    using RAMCFG_M3ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key The following steps are required to unlock the write protection of the SRAMER bit in the RAMCFG_MxCR register. 1) Write 0xCA into ERASEKEY[7:0]. 2) Write 0x53 into ERASEKEY[7:0]. Note: Writing a wrong key reactivates the write protection. */
    using RAMCFG_M3ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 4 erase key register */
    using RAMCFG_M4ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key The following steps are required to unlock the write protection of the SRAMER bit in the RAMCFG_MxCR register. 1) Write 0xCA into ERASEKEY[7:0]. 2) Write 0x53 into ERASEKEY[7:0]. Note: Writing a wrong key reactivates the write protection. */
    using RAMCFG_M4ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 5 control register */
    using RAMCFG_M5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC enable. This bit reset value is defined by the user option bit configuration. When set, it can be cleared by software only after writing the unlock sequence in the RAMCFG_MxECCKEYR register. Note: This bit is reserved and must be kept at reset value in SRAM1 control register. */
    using RAMCFG_M5CR_ECCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC disabled (value: 0)
     *          - B_0x1: ECC enabled (value: 1)
     */
        /** @brief ECC disabled */
    constexpr std::uint32_t RAMCFG_M5CR_ECCE_B_0x0 = 0;
        /** @brief ECC enabled */
    constexpr std::uint32_t RAMCFG_M5CR_ECCE_B_0x1 = 1;

    /** @brief Address latch enable Note: This bit is reserved and must be kept at reset value in SRAM1 control register. */
    using RAMCFG_M5CR_ALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Failing address not stored in the SRAMx ECC single/double error address registers (value: 0)
     *          - B_0x1: Failing address stored in the SRAMx ECC single/double error address registers (value: 1)
     */
        /** @brief Failing address not stored in the SRAMx ECC single/double error address registers */
    constexpr std::uint32_t RAMCFG_M5CR_ALE_B_0x0 = 0;
        /** @brief Failing address stored in the SRAMx ECC single/double error address registers */
    constexpr std::uint32_t RAMCFG_M5CR_ALE_B_0x1 = 1;

    /** @brief SRAM erase This bit can be set by software only after writing the unlock sequence in the ERASEKEY field of the RAMCFG_MxERKEYR register. Setting this bit starts the SRAM erase. This bit is automatically cleared by hardware at the end of the erase operation. */
    using RAMCFG_M5CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation on going (value: 0)
     *          - B_0x1: Erase operation on going (value: 1)
     */
        /** @brief No erase operation on going */
    constexpr std::uint32_t RAMCFG_M5CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation on going */
    constexpr std::uint32_t RAMCFG_M5CR_SRAMER_B_0x1 = 1;

    /** @brief RAMCFG memory 5 interrupt enable register */
    using RAMCFG_M5IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable */
    using RAMCFG_M5IER_SEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single error interrupt disabled (value: 0)
     *          - B_0x1: Single error interrupt enabled (value: 1)
     */
        /** @brief Single error interrupt disabled */
    constexpr std::uint32_t RAMCFG_M5IER_SEIE_B_0x0 = 0;
        /** @brief Single error interrupt enabled */
    constexpr std::uint32_t RAMCFG_M5IER_SEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable */
    using RAMCFG_M5IER_DEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Double error interrupt disabled (value: 0)
     *          - B_0x1: Double error interrupt enabled (value: 1)
     */
        /** @brief Double error interrupt disabled */
    constexpr std::uint32_t RAMCFG_M5IER_DEIE_B_0x0 = 0;
        /** @brief Double error interrupt enabled */
    constexpr std::uint32_t RAMCFG_M5IER_DEIE_B_0x1 = 1;

    /** @brief Double error NMI This bit is set by software and cleared only by a global RAMCFG reset. Note: if ECCNMI is set, the RAMCFG maskable interrupt is not generated whatever DEIE bit value. */
    using RAMCFG_M5IER_ECCNMI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMI not generated in case of ECC double error (value: 0)
     *          - B_0x1: NMI generated in case of ECC double error (value: 1)
     */
        /** @brief NMI not generated in case of ECC double error */
    constexpr std::uint32_t RAMCFG_M5IER_ECCNMI_B_0x0 = 0;
        /** @brief NMI generated in case of ECC double error */
    constexpr std::uint32_t RAMCFG_M5IER_ECCNMI_B_0x1 = 1;

    /** @brief RAMCFG memory interrupt status register */
    using RAMCFG_M5ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected Note: This bit is reserved and must be kept at reset value in SRAM1 interrupt status register. */
    using RAMCFG_M5ISR_SEDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No single error (value: 0)
     *          - B_0x1: Single error detected and corrected (value: 1)
     */
        /** @brief No single error */
    constexpr std::uint32_t RAMCFG_M5ISR_SEDC_B_0x0 = 0;
        /** @brief Single error detected and corrected */
    constexpr std::uint32_t RAMCFG_M5ISR_SEDC_B_0x1 = 1;

    /** @brief ECC double error detected Note: This bit is reserved and must be kept at reset value in SRAM1 interrupt status register. */
    using RAMCFG_M5ISR_DED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double error (value: 0)
     *          - B_0x1: Double error detected (value: 1)
     */
        /** @brief No double error */
    constexpr std::uint32_t RAMCFG_M5ISR_DED_B_0x0 = 0;
        /** @brief Double error detected */
    constexpr std::uint32_t RAMCFG_M5ISR_DED_B_0x1 = 1;

    /** @brief SRAM busy with erase operation Note: Depending on the SRAM, the erase operation can be performed due to software request, system reset if the option bit is enabled, tamper detection or product state regression. Refer to Table 9: Internal SRAMs features. */
    using RAMCFG_M5ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation on going (value: 0)
     *          - B_0x1: Erase operation on going (value: 1)
     */
        /** @brief No erase operation on going */
    constexpr std::uint32_t RAMCFG_M5ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation on going */
    constexpr std::uint32_t RAMCFG_M5ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG memory 5 ECC single error address register */
    using RAMCFG_M5SEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error address When the ALE bit is set in the RAMCFG_MxCR register, this field is updated with the address corresponding to the ECC single error. */
    using RAMCFG_M5SEAR_ESEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 5 ECC double error address register */
    using RAMCFG_M5DEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC double error address When the ALE bit is set in the RAMCFG_MxCR register, this field is updated with the address corresponding to the ECC double error. */
    using RAMCFG_M5DEAR_EDEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 5 interrupt clear register 5 */
    using RAMCFG_M5ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC single error detected and corrected Writing 1 to this flag clears the SEDC bit in the RAMCFG_MxISR register. Reading this flag returns the SEDC value. */
    using RAMCFG_M5ICR_CSEDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC double error detected Writing 1 to this flag clears the DED bit in the RAMCFG_MxISR register. Reading this flag returns the DED value. */
    using RAMCFG_M5ICR_CDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 5 ECC key register */
    using RAMCFG_M5ECCKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC write protection key The following steps are required to unlock the write protection of the ECCE bit in the RAMCFG_MxCR register. 1) Write 0xAE into ECCKEY[7:0]. 2) Write 0x75 into ECCKEY[7:0]. Note: Writing a wrong key reactivates the write protection. */
    using RAMCFG_M5ECCKEYR_ECCKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 5 erase key register */
    using RAMCFG_M5ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key The following steps are required to unlock the write protection of the SRAMER bit in the RAMCFG_MxCR register. 1) Write 0xCA into ERASEKEY[7:0]. 2) Write 0x53 into ERASEKEY[7:0]. Note: Writing a wrong key reactivates the write protection. */
    using RAMCFG_M5ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
