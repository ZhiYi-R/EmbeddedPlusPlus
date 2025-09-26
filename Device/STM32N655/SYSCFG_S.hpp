/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_SYSCFG_S_HPP
#define EMBEDDED_PP_STM32N655_SYSCFG_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System configuration controller */
namespace STM32N655::SYSCFG_S {

    /** @brief SYSCFG boot pin control register */
    using SYSCFG_BOOTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOT0 pin pull-down disable */
    using SYSCFG_BOOTCR_BOOT0_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pull-down enabled. The BOOT0 pin can be left open and takes a value of 0 if open. (value: 0)
     *          - B_0x1: Pull-down disabled. The BOOT0 pin must not be left open. (value: 1)
     */
        /** @brief Pull-down enabled. The BOOT0 pin can be left open and takes a value of 0 if open. */
    constexpr std::uint32_t SYSCFG_BOOTCR_BOOT0_PD_B_0x0 = 0;
        /** @brief Pull-down disabled. The BOOT0 pin must not be left open. */
    constexpr std::uint32_t SYSCFG_BOOTCR_BOOT0_PD_B_0x1 = 1;

    /** @brief BOOT1 pin pull-down disable */
    using SYSCFG_BOOTCR_BOOT1_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pull-down enabled. The BOOT1 pin can be left open and takes a value of 0 if open. (value: 0)
     *          - B_0x1: Pull-down disabled. The BOOT1 pin must not be left open. (value: 1)
     */
        /** @brief Pull-down enabled. The BOOT1 pin can be left open and takes a value of 0 if open. */
    constexpr std::uint32_t SYSCFG_BOOTCR_BOOT1_PD_B_0x0 = 0;
        /** @brief Pull-down disabled. The BOOT1 pin must not be left open. */
    constexpr std::uint32_t SYSCFG_BOOTCR_BOOT1_PD_B_0x1 = 1;

    /** @brief SYSCFG Cortex-M55 control register */
    using SYSCFG_CM55CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable FPU exception */
    using SYSCFG_CM55CR_FPU_IT_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prevent changes to: */
    using SYSCFG_CM55CR_LOCKSVTAIRCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prevent changes to the non-secure vector table base address. */
    using SYSCFG_CM55CR_LOCKNSVTOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prevent changes to programmed secure MPU memory regions. */
    using SYSCFG_CM55CR_LOCKSMPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prevent changes to non-secure MPU memory regions already programmed. */
    using SYSCFG_CM55CR_LOCKNSMPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prevent changes to secure SAU memory regions already programmed. */
    using SYSCFG_CM55CR_LOCKSAU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable access to the instruction cache direct cache access registers DCAICLR and DCAICRR. */
    using SYSCFG_CM55CR_LOCKDCAIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG Cortex-M55 TCM control register */
    using SYSCFG_CM55TCMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select ITCM memory size */
    using SYSCFG_CM55TCMCR_CFGITCMSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x7: 64 KB (default value) (value: 7)
     *          - B_0x8: 128 Kbytes (value: 8)
     *          - B_0x9: 256 Kbytes (value: 9)
     */
        /** @brief 64 KB (default value) */
    constexpr std::uint32_t SYSCFG_CM55TCMCR_CFGITCMSZ_B_0x7 = 7;
        /** @brief 128 Kbytes */
    constexpr std::uint32_t SYSCFG_CM55TCMCR_CFGITCMSZ_B_0x8 = 8;
        /** @brief 256 Kbytes */
    constexpr std::uint32_t SYSCFG_CM55TCMCR_CFGITCMSZ_B_0x9 = 9;

    /** @brief Select DTCM memory size */
    using SYSCFG_CM55TCMCR_CFGDTCMSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x8: 128 Kbytes (default value) (value: 8)
     *          - B_0x9: 256 Kbytes (value: 9)
     */
        /** @brief 128 Kbytes (default value) */
    constexpr std::uint32_t SYSCFG_CM55TCMCR_CFGDTCMSZ_B_0x8 = 8;
        /** @brief 256 Kbytes */
    constexpr std::uint32_t SYSCFG_CM55TCMCR_CFGDTCMSZ_B_0x9 = 9;

    /** @brief Disable writes to registers associated with the TCM region */
    using SYSCFG_CM55TCMCR_LOCKTCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable writes to registers associated with the ITCM interface security gating. */
    using SYSCFG_CM55TCMCR_LOCKITGU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable writes to registers associated with the DTCM interface security gating. */
    using SYSCFG_CM55TCMCR_LOCKDTGU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable wait-state applied by default on extended ITCM memory. */
    using SYSCFG_CM55TCMCR_ITCMWSDISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable wait-state applied by default on extended DTCM memory. */
    using SYSCFG_CM55TCMCR_DTCMWSDISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG Cortex-CM55 memory RW margin register */
    using SYSCFG_CM55RWMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RW margin enable input for TCM memories */
    using SYSCFG_CM55RWMCR_RME_TCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default RW margin settings (value: 0)
     *          - B_0x1: Use external pin RW margin setting (value: 1)
     */
        /** @brief Default RW margin settings */
    constexpr std::uint32_t SYSCFG_CM55RWMCR_RME_TCM_B_0x0 = 0;
        /** @brief Use external pin RW margin setting */
    constexpr std::uint32_t SYSCFG_CM55RWMCR_RME_TCM_B_0x1 = 1;

    /** @brief External RW margin inputs for TCM memories */
    using SYSCFG_CM55RWMCR_RM_TCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Biasing level adjust input recommended for Vnom */
    using SYSCFG_CM55RWMCR_BC1_TCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Biasing level adjust input recommended for Vnom + 10% */
    using SYSCFG_CM55RWMCR_BC2_TCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RW margin enable input for caches memories */
    using SYSCFG_CM55RWMCR_RME_CACHE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default RW margin settings (value: 0)
     *          - B_0x1: Use external pin RW margin setting (value: 1)
     */
        /** @brief Default RW margin settings */
    constexpr std::uint32_t SYSCFG_CM55RWMCR_RME_CACHE_B_0x0 = 0;
        /** @brief Use external pin RW margin setting */
    constexpr std::uint32_t SYSCFG_CM55RWMCR_RME_CACHE_B_0x1 = 1;

    /** @brief External read/write (RW) margin inputs for caches memories */
    using SYSCFG_CM55RWMCR_RM_CACHE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Biasing level adjust input recommended for Vnom. */
    using SYSCFG_CM55RWMCR_BC1_CACHE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Biasing level adjust input recommended for Vnom + 10% */
    using SYSCFG_CM55RWMCR_BC2_CACHE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG Cortex-M55 SVTOR control register */
    using SYSCFG_INITSVTORCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure vector table base address */
    using SYSCFG_INITSVTORCR_SVTOR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG Cortex-M55 NSVTOR control register */
    using SYSCFG_INITNSVTORCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure vector table base address */
    using SYSCFG_INITNSVTORCR_NSVTOR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG Cortex-M55 reset type control register */
    using SYSCFG_CM55RSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select reset to apply on core upon SYSRESETREQ */
    using SYSCFG_CM55RSTCR_CORE_RESET_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Warm reset (default value) (value: 0)
     *          - B_0x1: Power-on reset (value: 1)
     */
        /** @brief Warm reset (default value) */
    constexpr std::uint32_t SYSCFG_CM55RSTCR_CORE_RESET_TYPE_B_0x0 = 0;
        /** @brief Power-on reset */
    constexpr std::uint32_t SYSCFG_CM55RSTCR_CORE_RESET_TYPE_B_0x1 = 1;

    /** @brief Select action to perform on a lockup state on the core */
    using SYSCFG_CM55RSTCR_LOCKUP_RST_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lockup state shall be recovered from interrupt (default value) (value: 0)
     *          - B_0x1: Lockup requests a warm reset to the RCC. (value: 1)
     */
        /** @brief Lockup state shall be recovered from interrupt (default value) */
    constexpr std::uint32_t SYSCFG_CM55RSTCR_LOCKUP_RST_EN_B_0x0 = 0;
        /** @brief Lockup requests a warm reset to the RCC. */
    constexpr std::uint32_t SYSCFG_CM55RSTCR_LOCKUP_RST_EN_B_0x1 = 1;

    /** @brief Select action to perform on a lockup state on the core */
    using SYSCFG_CM55RSTCR_LOCKUP_NMI_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lockup state must be recovered from NVIC interrupt (default value) (value: 0)
     *          - B_0x1: Lockup generates a NMI on the core. (value: 1)
     */
        /** @brief Lockup state must be recovered from NVIC interrupt (default value) */
    constexpr std::uint32_t SYSCFG_CM55RSTCR_LOCKUP_NMI_EN_B_0x0 = 0;
        /** @brief Lockup generates a NMI on the core. */
    constexpr std::uint32_t SYSCFG_CM55RSTCR_LOCKUP_NMI_EN_B_0x1 = 1;

    /** @brief SYSCFG Cortex-M55 P-AHB write posting control register */
    using SYSCFG_CM55PAHBWPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error capture in write posting buffer */
    using SYSCFG_CM55PAHBWPR_PAHB_ERROR_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Error capture (value: 0)
     *          - B_0x1: Clean error (value: 1)
     */
        /** @brief Error capture */
    constexpr std::uint32_t SYSCFG_CM55PAHBWPR_PAHB_ERROR_ACK_B_0x0 = 0;
        /** @brief Clean error */
    constexpr std::uint32_t SYSCFG_CM55PAHBWPR_PAHB_ERROR_ACK_B_0x1 = 1;

    /** @brief SYSCFG VENCRAM control register */
    using SYSCFG_VENCRAMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENCRAM allocation VENC if active, or to system (if VENC inactive) */
    using SYSCFG_VENCRAMCR_VENCRAM_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VENCRAM reserved for the VENC (value: 0)
     *          - B_0x1: VENCRAM available for the system (VENC inactive) (value: 1)
     */
        /** @brief VENCRAM reserved for the VENC */
    constexpr std::uint32_t SYSCFG_VENCRAMCR_VENCRAM_EN_B_0x0 = 0;
        /** @brief VENCRAM available for the system (VENC inactive) */
    constexpr std::uint32_t SYSCFG_VENCRAMCR_VENCRAM_EN_B_0x1 = 1;

    /** @brief SYSCFG potential tamper reset register */
    using SYSCFG_POTTAMPRSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit can be set by software to mask PKA, SAES, CRYP1/2, and HASH reset, in case of potential tamper. */
    using SYSCFG_POTTAMPRSTCR_POTTAMPERSETMASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA, SAES, CRYP1/2, and HASH reset in case of potential tamper (value: 0)
     *          - B_0x1: PKA, SAES, CRYP1/2, and HASH not reset in case of potential tamper (value: 1)
     */
        /** @brief PKA, SAES, CRYP1/2, and HASH reset in case of potential tamper */
    constexpr std::uint32_t SYSCFG_POTTAMPRSTCR_POTTAMPERSETMASK_B_0x0 = 0;
        /** @brief PKA, SAES, CRYP1/2, and HASH not reset in case of potential tamper */
    constexpr std::uint32_t SYSCFG_POTTAMPRSTCR_POTTAMPERSETMASK_B_0x1 = 1;

    /** @brief SYSCFG AHB-AXI bridge early write response control	register */
    using SYSCFG_ICNEWRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using SYSCFG_ICNEWRCR_SDMMC1_EARLY_WR_RSP_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Early-write response disabled. The last AHB write data beat receives the AXI buffered response for the complete AHB transaction. (value: 0)
     *          - B_0x1: Early-write response enabled. AHB-Lite write data beats receive an automatic OK response from the AHB-to-AXI bridge, whatever the B-channel AXI response. (value: 1)
     */
        /** @brief Early-write response disabled. The last AHB write data beat receives the AXI buffered response for the complete AHB transaction. */
    constexpr std::uint32_t SYSCFG_ICNEWRCR_SDMMC1_EARLY_WR_RSP_ENABLE_B_0x0 = 0;
        /** @brief Early-write response enabled. AHB-Lite write data beats receive an automatic OK response from the AHB-to-AXI bridge, whatever the B-channel AXI response. */
    constexpr std::uint32_t SYSCFG_ICNEWRCR_SDMMC1_EARLY_WR_RSP_ENABLE_B_0x1 = 1;

    /** @brief None */
    using SYSCFG_ICNEWRCR_SDMMC2_EARLY_WR_RSP_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Early-write response disabled. The last AHB write data beat receives the AXI buffered response for the complete AHB transaction. (value: 0)
     *          - B_0x1: Early-write response enabled. AHB-Lite write data beats receive an automatic OK response from the AHB-to-AXI bridge, whatever the B-channel AXI response. (value: 1)
     */
        /** @brief Early-write response disabled. The last AHB write data beat receives the AXI buffered response for the complete AHB transaction. */
    constexpr std::uint32_t SYSCFG_ICNEWRCR_SDMMC2_EARLY_WR_RSP_ENABLE_B_0x0 = 0;
        /** @brief Early-write response enabled. AHB-Lite write data beats receive an automatic OK response from the AHB-to-AXI bridge, whatever the B-channel AXI response. */
    constexpr std::uint32_t SYSCFG_ICNEWRCR_SDMMC2_EARLY_WR_RSP_ENABLE_B_0x1 = 1;

    /** @brief None */
    using SYSCFG_ICNEWRCR_USB1_EARLY_WR_RSP_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Early-write response disabled. The last AHB write data beat receives the AXI buffered response for the complete AHB transaction. (value: 0)
     *          - B_0x1: Early-write response enabled. AHB-Lite write data beats receive an automatic OK response from the AHB-to-AXI bridge, whatever the B-channel AXI response. (value: 1)
     */
        /** @brief Early-write response disabled. The last AHB write data beat receives the AXI buffered response for the complete AHB transaction. */
    constexpr std::uint32_t SYSCFG_ICNEWRCR_USB1_EARLY_WR_RSP_ENABLE_B_0x0 = 0;
        /** @brief Early-write response enabled. AHB-Lite write data beats receive an automatic OK response from the AHB-to-AXI bridge, whatever the B-channel AXI response. */
    constexpr std::uint32_t SYSCFG_ICNEWRCR_USB1_EARLY_WR_RSP_ENABLE_B_0x1 = 1;

    /** @brief None */
    using SYSCFG_ICNEWRCR_USB2_EARLY_WR_RSP_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Early-write response disabled. The last AHB write data beat receives the AXI buffered response for the complete AHB transaction. (value: 0)
     *          - B_0x1: Early-write response enabled. AHB-Lite write data beats receive an automatic OK response from the AHB-to-AXI bridge, whatever the B-channel AXI response. (value: 1)
     */
        /** @brief Early-write response disabled. The last AHB write data beat receives the AXI buffered response for the complete AHB transaction. */
    constexpr std::uint32_t SYSCFG_ICNEWRCR_USB2_EARLY_WR_RSP_ENABLE_B_0x0 = 0;
        /** @brief Early-write response enabled. AHB-Lite write data beats receive an automatic OK response from the AHB-to-AXI bridge, whatever the B-channel AXI response. */
    constexpr std::uint32_t SYSCFG_ICNEWRCR_USB2_EARLY_WR_RSP_ENABLE_B_0x1 = 1;

    /** @brief SYSCFG ICN clock gating control register */
    using SYSCFG_ICNCGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief When bit[i] is set to 1, ICN clock gating[i] is OFF. */
    using SYSCFG_ICNCGCR_ICNCGCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG ICN bandwidth regulator control register */
    using SYSCFG_ICNBWRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bandwidth regulator control bits */
    using SYSCFG_ICNBWRCR_ICNBWRCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG /O control register */
    using SYSCFG_IOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital or analog pins */
    using SYSCFG_IOCR_IOCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed mode disabled, or use ADC ANA pin (value: 0)
     *          - B_0x1: High-speed mode enabled, or connect internal ADC ANA signal to GPIO (value: 1)
     */
        /** @brief High-speed mode disabled, or use ADC ANA pin */
    constexpr std::uint32_t SYSCFG_IOCR_IOCR_B_0x0 = 0;
        /** @brief High-speed mode enabled, or connect internal ADC ANA signal to GPIO */
    constexpr std::uint32_t SYSCFG_IOCR_IOCR_B_0x1 = 1;

    /** @brief SYSCFG VDDIO1 compensation cell control register */
    using SYSCFG_VDDIO1CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for NMOS transistors. This code is applied to the I/O compensation cell when the CS = 1. */
    using SYSCFG_VDDIO1CCCR_RANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for PMOS transistors. This code is applied to the I/O compensation cell when CS = 1. */
    using SYSCFG_VDDIO1CCCR_RAPSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the compensation cell of I/Os supplied by VDDIOx. */
    using SYSCFG_VDDIO1CCCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O compensation cell disabled (value: 0)
     *          - B_0x1: VDDIOx I/O compensation cell enabled (value: 1)
     */
        /** @brief VDDIOx I/O compensation cell disabled */
    constexpr std::uint32_t SYSCFG_VDDIO1CCCR_EN_B_0x0 = 0;
        /** @brief VDDIOx I/O compensation cell enabled */
    constexpr std::uint32_t SYSCFG_VDDIO1CCCR_EN_B_0x1 = 1;

    /** @brief Selects the code to be applied for the compensation cell of I/Os supplied by VDDIOx. */
    using SYSCFG_VDDIO1CCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O code from the cell (available in the SYSCFG_VDDIOxCCSR) (value: 0)
     *          - B_0x1: VDDIOx I/O code from RANSRC[3:0] and RAPSRC[3:0] in this register (value: 1)
     */
        /** @brief VDDIOx I/O code from the cell (available in the SYSCFG_VDDIOxCCSR) */
    constexpr std::uint32_t SYSCFG_VDDIO1CCCR_CS_B_0x0 = 0;
        /** @brief VDDIOx I/O code from RANSRC[3:0] and RAPSRC[3:0] in this register */
    constexpr std::uint32_t SYSCFG_VDDIO1CCCR_CS_B_0x1 = 1;

    /** @brief SYSCFG VDDIO1 compensation cell status register */
    using SYSCFG_VDDIO1CCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for NMOS transistors. */
    using SYSCFG_VDDIO1CCSR_ANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for PMOS transistors. */
    using SYSCFG_VDDIO1CCSR_APSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Provides the compensation cell status of I/Os supplied by VDDIOx */
    using SYSCFG_VDDIO1CCSR_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O compensation cell not ready (value: 0)
     *          - B_0x1: VDDIOx I/O compensation cell ready (value: 1)
     */
        /** @brief VDDIOx I/O compensation cell not ready */
    constexpr std::uint32_t SYSCFG_VDDIO1CCSR_READY_B_0x0 = 0;
        /** @brief VDDIOx I/O compensation cell ready */
    constexpr std::uint32_t SYSCFG_VDDIO1CCSR_READY_B_0x1 = 1;

    /** @brief SYSCFG VDDIO2 compensation cell control register */
    using SYSCFG_VDDIO2CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for NMOS transistors. This code is applied to the I/O compensation cell when the CS = 1. */
    using SYSCFG_VDDIO2CCCR_RANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for PMOS transistors. This code is applied to the I/O compensation cell when CS = 1. */
    using SYSCFG_VDDIO2CCCR_RAPSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the compensation cell of I/Os supplied by VDDIOx. */
    using SYSCFG_VDDIO2CCCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O compensation cell disabled (value: 0)
     *          - B_0x1: VDDIOx I/O compensation cell enabled (value: 1)
     */
        /** @brief VDDIOx I/O compensation cell disabled */
    constexpr std::uint32_t SYSCFG_VDDIO2CCCR_EN_B_0x0 = 0;
        /** @brief VDDIOx I/O compensation cell enabled */
    constexpr std::uint32_t SYSCFG_VDDIO2CCCR_EN_B_0x1 = 1;

    /** @brief Selects the code to be applied for the compensation cell of I/Os supplied by VDDIOx. */
    using SYSCFG_VDDIO2CCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O code from the cell (available in the SYSCFG_VDDIOxCCSR) (value: 0)
     *          - B_0x1: VDDIOx I/O code from RANSRC[3:0] and RAPSRC[3:0] in this register (value: 1)
     */
        /** @brief VDDIOx I/O code from the cell (available in the SYSCFG_VDDIOxCCSR) */
    constexpr std::uint32_t SYSCFG_VDDIO2CCCR_CS_B_0x0 = 0;
        /** @brief VDDIOx I/O code from RANSRC[3:0] and RAPSRC[3:0] in this register */
    constexpr std::uint32_t SYSCFG_VDDIO2CCCR_CS_B_0x1 = 1;

    /** @brief SYSCFG VDDIO2 compensation cell status register */
    using SYSCFG_VDDIO2CCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for NMOS transistors. */
    using SYSCFG_VDDIO2CCSR_ANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for PMOS transistors. */
    using SYSCFG_VDDIO2CCSR_APSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Provides the compensation cell status of I/Os supplied by VDDIOx */
    using SYSCFG_VDDIO2CCSR_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O compensation cell not ready (value: 0)
     *          - B_0x1: VDDIOx I/O compensation cell ready (value: 1)
     */
        /** @brief VDDIOx I/O compensation cell not ready */
    constexpr std::uint32_t SYSCFG_VDDIO2CCSR_READY_B_0x0 = 0;
        /** @brief VDDIOx I/O compensation cell ready */
    constexpr std::uint32_t SYSCFG_VDDIO2CCSR_READY_B_0x1 = 1;

    /** @brief SYSCFG VDDIO3 compensation cell control register */
    using SYSCFG_VDDIO3CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for NMOS transistors. This code is applied to the I/O compensation cell when the CS = 1. */
    using SYSCFG_VDDIO3CCCR_RANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for PMOS transistors. This code is applied to the I/O compensation cell when CS = 1. */
    using SYSCFG_VDDIO3CCCR_RAPSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the compensation cell of I/Os supplied by VDDIOx. */
    using SYSCFG_VDDIO3CCCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O compensation cell disabled (value: 0)
     *          - B_0x1: VDDIOx I/O compensation cell enabled (value: 1)
     */
        /** @brief VDDIOx I/O compensation cell disabled */
    constexpr std::uint32_t SYSCFG_VDDIO3CCCR_EN_B_0x0 = 0;
        /** @brief VDDIOx I/O compensation cell enabled */
    constexpr std::uint32_t SYSCFG_VDDIO3CCCR_EN_B_0x1 = 1;

    /** @brief Selects the code to be applied for the compensation cell of I/Os supplied by VDDIOx. */
    using SYSCFG_VDDIO3CCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O code from the cell (available in the SYSCFG_VDDIOxCCSR) (value: 0)
     *          - B_0x1: VDDIOx I/O code from RANSRC[3:0] and RAPSRC[3:0] in this register (value: 1)
     */
        /** @brief VDDIOx I/O code from the cell (available in the SYSCFG_VDDIOxCCSR) */
    constexpr std::uint32_t SYSCFG_VDDIO3CCCR_CS_B_0x0 = 0;
        /** @brief VDDIOx I/O code from RANSRC[3:0] and RAPSRC[3:0] in this register */
    constexpr std::uint32_t SYSCFG_VDDIO3CCCR_CS_B_0x1 = 1;

    /** @brief SYSCFG VDDIO3 compensation cell status register */
    using SYSCFG_VDDIO3CCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for NMOS transistors. */
    using SYSCFG_VDDIO3CCSR_ANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for PMOS transistors. */
    using SYSCFG_VDDIO3CCSR_APSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Provides the compensation cell status of I/Os supplied by VDDIOx */
    using SYSCFG_VDDIO3CCSR_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O compensation cell not ready (value: 0)
     *          - B_0x1: VDDIOx I/O compensation cell ready (value: 1)
     */
        /** @brief VDDIOx I/O compensation cell not ready */
    constexpr std::uint32_t SYSCFG_VDDIO3CCSR_READY_B_0x0 = 0;
        /** @brief VDDIOx I/O compensation cell ready */
    constexpr std::uint32_t SYSCFG_VDDIO3CCSR_READY_B_0x1 = 1;

    /** @brief SYSCFG VDDIO4 compensation cell control register */
    using SYSCFG_VDDIO4CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for NMOS transistors. This code is applied to the I/O compensation cell when the CS = 1. */
    using SYSCFG_VDDIO4CCCR_RANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for PMOS transistors. This code is applied to the I/O compensation cell when CS = 1. */
    using SYSCFG_VDDIO4CCCR_RAPSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the compensation cell of I/Os supplied by VDDIOx. */
    using SYSCFG_VDDIO4CCCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O compensation cell disabled (value: 0)
     *          - B_0x1: VDDIOx I/O compensation cell enabled (value: 1)
     */
        /** @brief VDDIOx I/O compensation cell disabled */
    constexpr std::uint32_t SYSCFG_VDDIO4CCCR_EN_B_0x0 = 0;
        /** @brief VDDIOx I/O compensation cell enabled */
    constexpr std::uint32_t SYSCFG_VDDIO4CCCR_EN_B_0x1 = 1;

    /** @brief Selects the code to be applied for the compensation cell of I/Os supplied by VDDIOx. */
    using SYSCFG_VDDIO4CCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O code from the cell (available in the SYSCFG_VDDIOxCCSR) (value: 0)
     *          - B_0x1: VDDIOx I/O code from RANSRC[3:0] and RAPSRC[3:0] in this register (value: 1)
     */
        /** @brief VDDIOx I/O code from the cell (available in the SYSCFG_VDDIOxCCSR) */
    constexpr std::uint32_t SYSCFG_VDDIO4CCCR_CS_B_0x0 = 0;
        /** @brief VDDIOx I/O code from RANSRC[3:0] and RAPSRC[3:0] in this register */
    constexpr std::uint32_t SYSCFG_VDDIO4CCCR_CS_B_0x1 = 1;

    /** @brief SYSCFG VDDIO4 compensation cell status register */
    using SYSCFG_VDDIO4CCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for NMOS transistors. */
    using SYSCFG_VDDIO4CCSR_ANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for PMOS transistors. */
    using SYSCFG_VDDIO4CCSR_APSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Provides the compensation cell status of I/Os supplied by VDDIOx */
    using SYSCFG_VDDIO4CCSR_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIOx I/O compensation cell not ready (value: 0)
     *          - B_0x1: VDDIOx I/O compensation cell ready (value: 1)
     */
        /** @brief VDDIOx I/O compensation cell not ready */
    constexpr std::uint32_t SYSCFG_VDDIO4CCSR_READY_B_0x0 = 0;
        /** @brief VDDIOx I/O compensation cell ready */
    constexpr std::uint32_t SYSCFG_VDDIO4CCSR_READY_B_0x1 = 1;

    /** @brief SYSCFG VDDIO compensation cell control register */
    using SYSCFG_VDDIOCCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for NMOS transistors. This code is applied to the I/O compensation cell when CS = 1. */
    using SYSCFG_VDDIOCCCR_RANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software to define an I/O compensation code for PMOS transistors. This code is applied to the I/O compensation cell when CS = 1. */
    using SYSCFG_VDDIOCCCR_RAPSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the compensation cell of I/Os supplied by VDDIO. */
    using SYSCFG_VDDIOCCCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO I/O compensation cell disabled (value: 0)
     *          - B_0x1: VDDIO I/O compensation cell enabled (value: 1)
     */
        /** @brief VDDIO I/O compensation cell disabled */
    constexpr std::uint32_t SYSCFG_VDDIOCCCR_EN_B_0x0 = 0;
        /** @brief VDDIO I/O compensation cell enabled */
    constexpr std::uint32_t SYSCFG_VDDIOCCCR_EN_B_0x1 = 1;

    /** @brief Selects the code to be applied for the compensation cell of I/Os supplied by VDDIO. */
    using SYSCFG_VDDIOCCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO I/O code from the cell (available in the SYSCFG_VDDIOCCSR) (value: 0)
     *          - B_0x1: VDDIO I/O code from RANSRC[3:0] and RAPSRC[3:0] (value: 1)
     */
        /** @brief VDDIO I/O code from the cell (available in the SYSCFG_VDDIOCCSR) */
    constexpr std::uint32_t SYSCFG_VDDIOCCCR_CS_B_0x0 = 0;
        /** @brief VDDIO I/O code from RANSRC[3:0] and RAPSRC[3:0] */
    constexpr std::uint32_t SYSCFG_VDDIOCCCR_CS_B_0x1 = 1;

    /** @brief SYSCFG VDDIO compensation cell status register */
    using SYSCFG_VDDIOCCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for NMOS transistors. */
    using SYSCFG_VDDIOCCSR_ANSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This value is provided by the cell, and can be used by the CPU to compute an I/O compensation cell code for PMOS transistors. */
    using SYSCFG_VDDIOCCSR_APSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Provides the compensation cell status of I/Os supplied by VDDIO */
    using SYSCFG_VDDIOCCSR_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO I/O compensation cell not ready (value: 0)
     *          - B_0x1: VDDIO I/O compensation cell ready (value: 1)
     */
        /** @brief VDDIO I/O compensation cell not ready */
    constexpr std::uint32_t SYSCFG_VDDIOCCSR_READY_B_0x0 = 0;
        /** @brief VDDIO I/O compensation cell ready */
    constexpr std::uint32_t SYSCFG_VDDIOCCSR_READY_B_0x1 = 1;

    /** @brief SYSCFG control timer break register */
    using SYSCFG_CBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CM55 lockup lock enable */
    using SYSCFG_CBR_CM55L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cortex-M55 lockup output disconnected from TIM1/8/15/16/17 break inputs (value: 0)
     *          - B_0x1: Cortex-M55 lockup output disconnected from TIM1/8/15/16/17 break inputs (value: 1)
     */
        /** @brief Cortex-M55 lockup output disconnected from TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CBR_CM55L_B_0x0 = 0;
        /** @brief Cortex-M55 lockup output disconnected from TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CBR_CM55L_B_0x1 = 1;

    /** @brief PVD lock enable */
    using SYSCFG_CBR_PVDL_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD interrupt disconnected from TIM1/8/15/16/17 break input. PVDE bits can be programmed by the application. (value: 0)
     *          - B_0x1: PVD interrupt connected to TIM1/8/15/16/17 break input. PVDE and bits are read only. (value: 1)
     */
        /** @brief PVD interrupt disconnected from TIM1/8/15/16/17 break input. PVDE bits can be programmed by the application. */
    constexpr std::uint32_t SYSCFG_CBR_PVDL_LOCK_B_0x0 = 0;
        /** @brief PVD interrupt connected to TIM1/8/15/16/17 break input. PVDE and bits are read only. */
    constexpr std::uint32_t SYSCFG_CBR_PVDL_LOCK_B_0x1 = 1;

    /** @brief Backup SRAM double ECC error lock */
    using SYSCFG_CBR_BKPRAML = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup SRAM double ECC error signal disconnected from TIM1/8/15/16/17 break inputs (value: 0)
     *          - B_0x1: Backup SRAM double ECC error signal connected to TIM1/8/15/16/17 break inputs (value: 1)
     */
        /** @brief Backup SRAM double ECC error signal disconnected from TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CBR_BKPRAML_B_0x0 = 0;
        /** @brief Backup SRAM double ECC error signal connected to TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CBR_BKPRAML_B_0x1 = 1;

    /** @brief CM55 cache double ECC error lock */
    using SYSCFG_CBR_CM55CACHEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cortex-M55 cache double ECC error signal disconnected from TIM1/8/15/16/17 break inputs (value: 0)
     *          - B_0x1: Cortex-M55 cache double ECC error signal connected to TIM1/8/15/16/17 break inputs (value: 1)
     */
        /** @brief Cortex-M55 cache double ECC error signal disconnected from TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CBR_CM55CACHEL_B_0x0 = 0;
        /** @brief Cortex-M55 cache double ECC error signal connected to TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CBR_CM55CACHEL_B_0x1 = 1;

    /** @brief CM55 TCM double ECC error lock */
    using SYSCFG_CBR_CM55TCML = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cortex-M55 TCM double ECC error signal disconnected from TIM1/8/15/16/17 break inputs (value: 0)
     *          - B_0x1: Cortex-M55 TCM double ECC error signal connected to TIM1/8/15/16/17 break inputs (value: 1)
     */
        /** @brief Cortex-M55 TCM double ECC error signal disconnected from TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CBR_CM55TCML_B_0x0 = 0;
        /** @brief Cortex-M55 TCM double ECC error signal connected to TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CBR_CM55TCML_B_0x1 = 1;

    /** @brief SYSCFG DMA CID secure control register */
    using SYSCFG_SEC_AIDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure OS allocates specific CID to DMA channel through these bits. */
    using SYSCFG_SEC_AIDCR_DMACID_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG FMC retiming logic control register */
    using SYSCFG_FMC_RETIMECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Retiming on Rx path */
    using SYSCFG_FMC_RETIMECR_CFG_RETIME_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No retiming on Rx path (value: 0)
     *          - B_0x1: Retiming on Rx path (value: 1)
     */
        /** @brief No retiming on Rx path */
    constexpr std::uint32_t SYSCFG_FMC_RETIMECR_CFG_RETIME_RX_B_0x0 = 0;
        /** @brief Retiming on Rx path */
    constexpr std::uint32_t SYSCFG_FMC_RETIMECR_CFG_RETIME_RX_B_0x1 = 1;

    /** @brief Retiming on Tx path */
    using SYSCFG_FMC_RETIMECR_CFG_RETIME_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No retiming on Tx path (value: 0)
     *          - B_0x1: Retiming on Tx path (value: 1)
     */
        /** @brief No retiming on Tx path */
    constexpr std::uint32_t SYSCFG_FMC_RETIMECR_CFG_RETIME_TX_B_0x0 = 0;
        /** @brief Retiming on Tx path */
    constexpr std::uint32_t SYSCFG_FMC_RETIMECR_CFG_RETIME_TX_B_0x1 = 1;

    /** @brief Delay on feedback clock */
    using SYSCFG_FMC_RETIMECR_SDFBCLK_180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay on the feedback clock (value: 0)
     *          - B_0x1: Half a cycle delay on the feedback clock (value: 1)
     */
        /** @brief No delay on the feedback clock */
    constexpr std::uint32_t SYSCFG_FMC_RETIMECR_SDFBCLK_180_B_0x0 = 0;
        /** @brief Half a cycle delay on the feedback clock */
    constexpr std::uint32_t SYSCFG_FMC_RETIMECR_SDFBCLK_180_B_0x1 = 1;

    /** @brief SYSCFG NPU RAM interleaving control register */
    using SYSCFG_NPU_ICNCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control interleaving on NPU RAMs */
    using SYSCFG_NPU_ICNCR_INTERLEAVING_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interleaving disabled (value: 0)
     *          - B_0x1: Interleaving enabled (value: 1)
     */
        /** @brief Interleaving disabled */
    constexpr std::uint32_t SYSCFG_NPU_ICNCR_INTERLEAVING_ACTIVE_B_0x0 = 0;
        /** @brief Interleaving enabled */
    constexpr std::uint32_t SYSCFG_NPU_ICNCR_INTERLEAVING_ACTIVE_B_0x1 = 1;

    /** @brief SYSCFG boot pin status register */
    using SYSCFG_BOOTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOT0 pin value */
    using SYSCFG_BOOTSR_BOOT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOOT0 pin connected to VSS (or left open if BOOT0_PD = 0) (value: 0)
     *          - B_0x1: BOOT0 pin connected to VDD (value: 1)
     */
        /** @brief BOOT0 pin connected to VSS (or left open if BOOT0_PD = 0) */
    constexpr std::uint32_t SYSCFG_BOOTSR_BOOT0_B_0x0 = 0;
        /** @brief BOOT0 pin connected to VDD */
    constexpr std::uint32_t SYSCFG_BOOTSR_BOOT0_B_0x1 = 1;

    /** @brief BOOT1 pin value */
    using SYSCFG_BOOTSR_BOOT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOOT1 pin connected to VSS (or left open if BOOT1_PD = 0 in SYSCFG_BOOTCR) (value: 0)
     *          - B_0x1: BOOT1 pin connected to VDD (value: 1)
     */
        /** @brief BOOT1 pin connected to VSS (or left open if BOOT1_PD = 0 in SYSCFG_BOOTCR) */
    constexpr std::uint32_t SYSCFG_BOOTSR_BOOT1_B_0x0 = 0;
        /** @brief BOOT1 pin connected to VDD */
    constexpr std::uint32_t SYSCFG_BOOTSR_BOOT1_B_0x1 = 1;

    /** @brief SYSCFG AHB write posting address error register */
    using SYSCFG_AHBWP_ERROR_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reports address of the first error in P-AHB write-posting buffer */
    using SYSCFG_AHBWP_ERROR_SR_PAHB_ERROR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG SMPS observable signals through HDP selection	configuration register */
    using SYSCFG_SMPSHDPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Others: Reserved */
    using SYSCFG_SMPSHDPCR_SMPSHDPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard run mode (no HDP) (value: 0)
     *          - B_0xC: Analyze fsm mode analysis (value: 12)
     *          - B_0xD: Analyze fsm mos analysis (value: 13)
     *          - B_0xE: Analyze fsm rampe analysis (value: 14)
     *          - B_0xF: Analyze fsm mode analysis (value: 15)
     */
        /** @brief Standard run mode (no HDP) */
    constexpr std::uint32_t SYSCFG_SMPSHDPCR_SMPSHDPSEL_B_0x0 = 0;
        /** @brief Analyze fsm mode analysis */
    constexpr std::uint32_t SYSCFG_SMPSHDPCR_SMPSHDPSEL_B_0xC = 12;
        /** @brief Analyze fsm mos analysis */
    constexpr std::uint32_t SYSCFG_SMPSHDPCR_SMPSHDPSEL_B_0xD = 13;
        /** @brief Analyze fsm rampe analysis */
    constexpr std::uint32_t SYSCFG_SMPSHDPCR_SMPSHDPSEL_B_0xE = 14;
        /** @brief Analyze fsm mode analysis */
    constexpr std::uint32_t SYSCFG_SMPSHDPCR_SMPSHDPSEL_B_0xF = 15;

    /** @brief SYSCFG DMA CID non-secure control register */
    using SYSCFG_NONSEC_AIDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x800, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-secure OS allocates specific CID to DMA channel through these bits */
    using SYSCFG_NONSEC_AIDCR_DMACID_NONSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
