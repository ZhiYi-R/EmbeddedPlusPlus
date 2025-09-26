/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H523_PWR_S_HPP
#define EMBEDDED_PP_STM32H523_PWR_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PWR address block description */
namespace STM32H523::PWR_S {

    /** @brief PWR power mode control register */
    using PWR_PMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief low-power mode selection */
    using PWR_PMCR_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: keeps Stop mode when entering DeepSleep. (value: 0)
     *          - B_0x1: allows Standby mode when entering DeepSleep. (value: 1)
     */
        /** @brief keeps Stop mode when entering DeepSleep. */
    constexpr std::uint32_t PWR_PMCR_LPMS_B_0x0 = 0;
        /** @brief allows Standby mode when entering DeepSleep. */
    constexpr std::uint32_t PWR_PMCR_LPMS_B_0x1 = 1;

    /** @brief system Stop mode voltage scaling selection */
    using PWR_PMCR_SVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: SVOS5 scale 5 (value: 1)
     *          - B_0x2: SVOS4 scale 4 (value: 2)
     *          - B_0x3: SVOS3 scale 3 (default) (value: 3)
     */
        /** @brief SVOS5 scale 5 */
    constexpr std::uint32_t PWR_PMCR_SVOS_B_0x1 = 1;
        /** @brief SVOS4 scale 4 */
    constexpr std::uint32_t PWR_PMCR_SVOS_B_0x2 = 2;
        /** @brief SVOS3 scale 3 (default) */
    constexpr std::uint32_t PWR_PMCR_SVOS_B_0x3 = 3;

    /** @brief clear Standby and Stop flags (always read as 0) */
    using PWR_PMCR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: STOPF and SBF flags cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_PMCR_CSSF_B_0x0 = 0;
        /** @brief STOPF and SBF flags cleared */
    constexpr std::uint32_t PWR_PMCR_CSSF_B_0x1 = 1;

    /** @brief flash memory low-power mode in Stop mode */
    using PWR_PMCR_FLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: flash memory remains in normal mode when the system enters Stop mode (quick restart time). (value: 0)
     *          - B_0x1: flash memory enters low-power mode when the system enters Stop mode(low-power consumption). (value: 1)
     */
        /** @brief flash memory remains in normal mode when the system enters Stop mode (quick restart time). */
    constexpr std::uint32_t PWR_PMCR_FLPS_B_0x0 = 0;
        /** @brief flash memory enters low-power mode when the system enters Stop mode(low-power consumption). */
    constexpr std::uint32_t PWR_PMCR_FLPS_B_0x1 = 1;

    /** @brief analog switch Vless thansub>BOOSTless than/sub> control */
    using PWR_PMCR_BOOSTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: booster disabled (default) (value: 0)
     *          - B_0x1: booster enabled if analog voltage ready (AVD_READY = 1) (value: 1)
     */
        /** @brief booster disabled (default) */
    constexpr std::uint32_t PWR_PMCR_BOOSTE_B_0x0 = 0;
        /** @brief booster enabled if analog voltage ready (AVD_READY = 1) */
    constexpr std::uint32_t PWR_PMCR_BOOSTE_B_0x1 = 1;

    /** @brief analog voltage ready */
    using PWR_PMCR_AVD_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: peripheral analog voltage Vless thansub>DDAless than/sub> not ready (default) (value: 0)
     *          - B_0x1: peripheral analog voltage Vless thansub>DDAless than/sub> ready. (value: 1)
     */
        /** @brief peripheral analog voltage Vless thansub>DDAless than/sub> not ready (default) */
    constexpr std::uint32_t PWR_PMCR_AVD_READY_B_0x0 = 0;
        /** @brief peripheral analog voltage Vless thansub>DDAless than/sub> ready. */
    constexpr std::uint32_t PWR_PMCR_AVD_READY_B_0x1 = 1;

    /** @brief ETHERNET RAM shut-off in Stop mode. */
    using PWR_PMCR_ETHERNETSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETHERNET RAM content is kept in Stop mode. (value: 0)
     *          - B_0x1: ETHERNET RAM content is lost in Stop mode. (value: 1)
     */
        /** @brief ETHERNET RAM content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ETHERNETSO_B_0x0 = 0;
        /** @brief ETHERNET RAM content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ETHERNETSO_B_0x1 = 1;

    /** @brief AHB SRAM3 shut-off in Stop mode. */
    using PWR_PMCR_SRAM3SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM3 content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM3 content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM3 content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM3SO_B_0x0 = 0;
        /** @brief AHB RAM3 content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM3SO_B_0x1 = 1;

    /** @brief AHB SRAM2 16-Kbyte shut-off in Stop mode. */
    using PWR_PMCR_SRAM2_16SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM2 16-Kbyte content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM2 16-Kbyte content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM2 16-Kbyte content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM2_16SO_B_0x0 = 0;
        /** @brief AHB RAM2 16-Kbyte content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM2_16SO_B_0x1 = 1;

    /** @brief AHB SRAM2 48-Kbyte shut-off in Stop mode. */
    using PWR_PMCR_SRAM2_48SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM2 48-Kbyte content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM2 48-Kbyte content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM2 48-Kbyte content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM2_48SO_B_0x0 = 0;
        /** @brief AHB RAM2 48-Kbyte content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM2_48SO_B_0x1 = 1;

    /** @brief AHB SRAM1 shut-off in Stop mode */
    using PWR_PMCR_SRAM1SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RA. (value: 0)
     *          - B_0x1: AHB RAM1 content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RA. */
    constexpr std::uint32_t PWR_PMCR_SRAM1SO_B_0x0 = 0;
        /** @brief AHB RAM1 content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM1SO_B_0x1 = 1;

    /** @brief PWR power mode control register */
    using PWR_PMCR_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief low-power mode selection */
    using PWR_PMCR_ALTERNATE1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: keeps Stop mode when entering DeepSleep. (value: 0)
     *          - B_0x1: allows Standby mode when entering DeepSleep. (value: 1)
     */
        /** @brief keeps Stop mode when entering DeepSleep. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_LPMS_B_0x0 = 0;
        /** @brief allows Standby mode when entering DeepSleep. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_LPMS_B_0x1 = 1;

    /** @brief system Stop mode voltage scaling selection */
    using PWR_PMCR_ALTERNATE1_SVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: SVOS5 scale 5 (value: 1)
     *          - B_0x2: SVOS4 scale 4 (value: 2)
     *          - B_0x3: SVOS3 scale 3 (default) (value: 3)
     */
        /** @brief SVOS5 scale 5 */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SVOS_B_0x1 = 1;
        /** @brief SVOS4 scale 4 */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SVOS_B_0x2 = 2;
        /** @brief SVOS3 scale 3 (default) */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SVOS_B_0x3 = 3;

    /** @brief clear Standby and Stop flags (always read as 0) */
    using PWR_PMCR_ALTERNATE1_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: STOPF and SBF flags cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_CSSF_B_0x0 = 0;
        /** @brief STOPF and SBF flags cleared */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_CSSF_B_0x1 = 1;

    /** @brief flash memory low-power mode in Stop mode */
    using PWR_PMCR_ALTERNATE1_FLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: flash memory remains in normal mode when the system enters Stop mode (quick restart time). (value: 0)
     *          - B_0x1: flash memory enters low-power mode when the system enters Stop mode(low-power consumption). (value: 1)
     */
        /** @brief flash memory remains in normal mode when the system enters Stop mode (quick restart time). */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_FLPS_B_0x0 = 0;
        /** @brief flash memory enters low-power mode when the system enters Stop mode(low-power consumption). */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_FLPS_B_0x1 = 1;

    /** @brief analog switch Vless thansub>BOOSTless than/sub> control */
    using PWR_PMCR_ALTERNATE1_BOOSTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: booster disabled (default) (value: 0)
     *          - B_0x1: booster enabled if analog voltage ready (AVD_READY = 1) (value: 1)
     */
        /** @brief booster disabled (default) */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_BOOSTE_B_0x0 = 0;
        /** @brief booster enabled if analog voltage ready (AVD_READY = 1) */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_BOOSTE_B_0x1 = 1;

    /** @brief analog voltage ready */
    using PWR_PMCR_ALTERNATE1_AVD_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: peripheral analog voltage Vless thansub>DDAless than/sub> not ready (default) (value: 0)
     *          - B_0x1: peripheral analog voltage Vless thansub>DDAless than/sub> ready. (value: 1)
     */
        /** @brief peripheral analog voltage Vless thansub>DDAless than/sub> not ready (default) */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_AVD_READY_B_0x0 = 0;
        /** @brief peripheral analog voltage Vless thansub>DDAless than/sub> ready. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_AVD_READY_B_0x1 = 1;

    /** @brief AHB SRAM3 shut-off in Stop mode. */
    using PWR_PMCR_ALTERNATE1_SRAM3SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM3 content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM3 content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM3 content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM3SO_B_0x0 = 0;
        /** @brief AHB RAM3 content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM3SO_B_0x1 = 1;

    /** @brief AHB SRAM2 low 16-Kbyte shut-off in Stop mode. */
    using PWR_PMCR_ALTERNATE1_SRAM2_16LSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM2 low 16-Kbyte content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM2 low 16-Kbyte content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM2 low 16-Kbyte content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM2_16LSO_B_0x0 = 0;
        /** @brief AHB RAM2 low 16-Kbyte content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM2_16LSO_B_0x1 = 1;

    /** @brief AHB SRAM2 high 16-Kbyte shut-off in Stop mode. */
    using PWR_PMCR_ALTERNATE1_SRAM2_16HSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM2 high 16-Kbyte content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM2 ]high16-Kbyte content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM2 high 16-Kbyte content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM2_16HSO_B_0x0 = 0;
        /** @brief AHB RAM2 ]high16-Kbyte content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM2_16HSO_B_0x1 = 1;

    /** @brief AHB SRAM2 48-Kbyte shut-off in Stop mode. */
    using PWR_PMCR_ALTERNATE1_SRAM2_48SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM2 48-Kbyte content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM2 48-Kbyte content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM2 48-Kbyte content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM2_48SO_B_0x0 = 0;
        /** @brief AHB RAM2 48-Kbyte content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM2_48SO_B_0x1 = 1;

    /** @brief AHB SRAM1 shut-off in Stop mode */
    using PWR_PMCR_ALTERNATE1_SRAM1SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RA. (value: 0)
     *          - B_0x1: AHB RAM1 content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RA. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM1SO_B_0x0 = 0;
        /** @brief AHB RAM1 content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ALTERNATE1_SRAM1SO_B_0x1 = 1;

    /** @brief PWR status register */
    using PWR_PMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop flag */
    using PWR_PMSR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: system has not been in Stop mode. (value: 0)
     *          - B_0x1: system has been in Stop mode. (value: 1)
     */
        /** @brief system has not been in Stop mode. */
    constexpr std::uint32_t PWR_PMSR_STOPF_B_0x0 = 0;
        /** @brief system has been in Stop mode. */
    constexpr std::uint32_t PWR_PMSR_STOPF_B_0x1 = 1;

    /** @brief System standby flag */
    using PWR_PMSR_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: system has not been in Standby mode. (value: 0)
     *          - B_0x1: system has been in Standby mode. (value: 1)
     */
        /** @brief system has not been in Standby mode. */
    constexpr std::uint32_t PWR_PMSR_SBF_B_0x0 = 0;
        /** @brief system has been in Standby mode. */
    constexpr std::uint32_t PWR_PMSR_SBF_B_0x1 = 1;

    /** @brief PWR voltage scaling control register */
    using PWR_VOSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief voltage scaling selection according to performance */
    using PWR_VOSCR_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: scale 3 (default) (value: 0)
     *          - B_0x1: scale 2 (value: 1)
     *          - B_0x2: scale 1 (value: 2)
     *          - B_0x3: scale 0 (value: 3)
     */
        /** @brief scale 3 (default) */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x0 = 0;
        /** @brief scale 2 */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x1 = 1;
        /** @brief scale 1 */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x2 = 2;
        /** @brief scale 0 */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x3 = 3;

    /** @brief PWR voltage scaling status register */
    using PWR_VOSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ready bit for Vless thansub>COREless than/sub> voltage scaling output selection. */
    using PWR_VOSSR_VOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, voltage level below VOS selected level (value: 0)
     *          - B_0x1: Ready, voltage level at or above VOS selected level (value: 1)
     */
        /** @brief Not ready, voltage level below VOS selected level */
    constexpr std::uint32_t PWR_VOSSR_VOSRDY_B_0x0 = 0;
        /** @brief Ready, voltage level at or above VOS selected level */
    constexpr std::uint32_t PWR_VOSSR_VOSRDY_B_0x1 = 1;

    /** @brief Voltage level ready for currently used VOS */
    using PWR_VOSSR_ACTVOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>COREless than/sub> is above or below the current voltage scaling provided by ACTVOS[1:0] (value: 0)
     *          - B_0x1: Vless thansub>COREless than/sub> is equal to the current voltage scaling provided by ACTVOS[1:0] (value: 1)
     */
        /** @brief Vless thansub>COREless than/sub> is above or below the current voltage scaling provided by ACTVOS[1:0] */
    constexpr std::uint32_t PWR_VOSSR_ACTVOSRDY_B_0x0 = 0;
        /** @brief Vless thansub>COREless than/sub> is equal to the current voltage scaling provided by ACTVOS[1:0] */
    constexpr std::uint32_t PWR_VOSSR_ACTVOSRDY_B_0x1 = 1;

    /** @brief voltage output scaling currently applied to Vless thansub>COREless than/sub> */
    using PWR_VOSSR_ACTVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VOS3 (lowest power) (value: 0)
     *          - B_0x1: VOS2 (value: 1)
     *          - B_0x2: VOS1 (value: 2)
     *          - B_0x3: VOS0 (highest frequency) (value: 3)
     */
        /** @brief VOS3 (lowest power) */
    constexpr std::uint32_t PWR_VOSSR_ACTVOS_B_0x0 = 0;
        /** @brief VOS2 */
    constexpr std::uint32_t PWR_VOSSR_ACTVOS_B_0x1 = 1;
        /** @brief VOS1 */
    constexpr std::uint32_t PWR_VOSSR_ACTVOS_B_0x2 = 2;
        /** @brief VOS0 (highest frequency) */
    constexpr std::uint32_t PWR_VOSSR_ACTVOS_B_0x3 = 3;

    /** @brief PWR Backup domain control register */
    using PWR_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup RAM retention in Standby and Vless thansub>BATless than/sub> modes */
    using PWR_BDCR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM content lost in Standby and Vless thansub>BATless than/sub> modes. (value: 0)
     *          - B_0x1: Backup RAM content preserved in Standby and Vless thansub>BATless than/sub> modes (value: 1)
     */
        /** @brief Backup RAM content lost in Standby and Vless thansub>BATless than/sub> modes. */
    constexpr std::uint32_t PWR_BDCR_BREN_B_0x0 = 0;
        /** @brief Backup RAM content preserved in Standby and Vless thansub>BATless than/sub> modes */
    constexpr std::uint32_t PWR_BDCR_BREN_B_0x1 = 1;

    /** @brief Backup domain voltage and temperature monitoring enable */
    using PWR_BDCR_MONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup domain voltage and temperature monitoring disabled (value: 0)
     *          - B_0x1: Backup domain voltage and temperature monitoring enabled (value: 1)
     */
        /** @brief Backup domain voltage and temperature monitoring disabled */
    constexpr std::uint32_t PWR_BDCR_MONEN_B_0x0 = 0;
        /** @brief Backup domain voltage and temperature monitoring enabled */
    constexpr std::uint32_t PWR_BDCR_MONEN_B_0x1 = 1;

    /** @brief Vless thansub>BATless than/sub> charging enable */
    using PWR_BDCR_VBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> battery charging disabled. (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> battery charging enabled. (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> battery charging disabled. */
    constexpr std::uint32_t PWR_BDCR_VBE_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> battery charging enabled. */
    constexpr std::uint32_t PWR_BDCR_VBE_B_0x1 = 1;

    /** @brief Vless thansub>BATless than/sub> charging resistor selection */
    using PWR_BDCR_VBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Charge Vless thansub>BATless than/sub> through a 5 kohm resistor. (value: 0)
     *          - B_0x1: Charge Vless thansub>BATless than/sub> through a 1. (value: 1)
     */
        /** @brief Charge Vless thansub>BATless than/sub> through a 5 kohm resistor. */
    constexpr std::uint32_t PWR_BDCR_VBRS_B_0x0 = 0;
        /** @brief Charge Vless thansub>BATless than/sub> through a 1. */
    constexpr std::uint32_t PWR_BDCR_VBRS_B_0x1 = 1;

    /** @brief PWR Backup domain control register */
    using PWR_DBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Backup domain write protection */
    using PWR_DBPCR_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write access to Backup domain disabled (value: 0)
     *          - B_0x1: Write access to Backup domain enabled (value: 1)
     */
        /** @brief Write access to Backup domain disabled */
    constexpr std::uint32_t PWR_DBPCR_DBP_B_0x0 = 0;
        /** @brief Write access to Backup domain enabled */
    constexpr std::uint32_t PWR_DBPCR_DBP_B_0x1 = 1;

    /** @brief PWR Backup domain status register */
    using PWR_BDSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief backup regulator ready */
    using PWR_BDSR_BRRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: backup regulator not ready (value: 0)
     *          - B_0x1: backup regulator ready (value: 1)
     */
        /** @brief backup regulator not ready */
    constexpr std::uint32_t PWR_BDSR_BRRDY_B_0x0 = 0;
        /** @brief backup regulator ready */
    constexpr std::uint32_t PWR_BDSR_BRRDY_B_0x1 = 1;

    /** @brief Vless thansub>BATless than/sub> level monitoring versus low threshold */
    using PWR_BDSR_VBATL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> level above low threshold level (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> level equal or below low threshold level (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> level above low threshold level */
    constexpr std::uint32_t PWR_BDSR_VBATL_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> level equal or below low threshold level */
    constexpr std::uint32_t PWR_BDSR_VBATL_B_0x1 = 1;

    /** @brief Vless thansub>BATless than/sub> level monitoring versus high threshold */
    using PWR_BDSR_VBATH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> level below high threshold level (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> level equal or above high threshold level (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> level below high threshold level */
    constexpr std::uint32_t PWR_BDSR_VBATH_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> level equal or above high threshold level */
    constexpr std::uint32_t PWR_BDSR_VBATH_B_0x1 = 1;

    /** @brief temperature level monitoring versus low threshold */
    using PWR_BDSR_TEMPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: temperature above low threshold level (value: 0)
     *          - B_0x1: temperature equal or below low threshold level (value: 1)
     */
        /** @brief temperature above low threshold level */
    constexpr std::uint32_t PWR_BDSR_TEMPL_B_0x0 = 0;
        /** @brief temperature equal or below low threshold level */
    constexpr std::uint32_t PWR_BDSR_TEMPL_B_0x1 = 1;

    /** @brief temperature level monitoring versus high threshold */
    using PWR_BDSR_TEMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: temperature below high threshold level (value: 0)
     *          - B_0x1: temperature equal or above high threshold level (value: 1)
     */
        /** @brief temperature below high threshold level */
    constexpr std::uint32_t PWR_BDSR_TEMPH_B_0x0 = 0;
        /** @brief temperature equal or above high threshold level */
    constexpr std::uint32_t PWR_BDSR_TEMPH_B_0x1 = 1;

    /** @brief PWR USB Type-C power delivery register */
    using PWR_UCPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB Type-C and power delivery dead battery disable */
    using PWR_UCPDR_UCPD_DBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable USB Type-C dead battery pull-down behavior on UCPDx_CC1 and UCPDx_CC2 pins. (value: 0)
     *          - B_0x1: Disable USB Type-C dead battery pull-down behavior on UCPDx_CC1 and UCPDx_CC2 pins. (value: 1)
     */
        /** @brief Enable USB Type-C dead battery pull-down behavior on UCPDx_CC1 and UCPDx_CC2 pins. */
    constexpr std::uint32_t PWR_UCPDR_UCPD_DBDIS_B_0x0 = 0;
        /** @brief Disable USB Type-C dead battery pull-down behavior on UCPDx_CC1 and UCPDx_CC2 pins. */
    constexpr std::uint32_t PWR_UCPDR_UCPD_DBDIS_B_0x1 = 1;

    /** @brief USB Type-c and Power delivery Standby mode */
    using PWR_UCPDR_UCPD_STBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR supply configuration control register */
    using PWR_SCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief power management unit bypass */
    using PWR_SCCR_BYPASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power management unit normal operation. (value: 0)
     *          - B_0x1: Power management unit bypassed. (value: 1)
     */
        /** @brief Power management unit normal operation. */
    constexpr std::uint32_t PWR_SCCR_BYPASS_B_0x0 = 0;
        /** @brief Power management unit bypassed. */
    constexpr std::uint32_t PWR_SCCR_BYPASS_B_0x1 = 1;

    /** @brief LDO enable */
    using PWR_SCCR_LDOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS enable */
    using PWR_SCCR_SMPSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR voltage monitor control register */
    using PWR_VMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVD enable */
    using PWR_VMCR_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD disabled (value: 0)
     *          - B_0x1: PVD enabled (value: 1)
     */
        /** @brief PVD disabled */
    constexpr std::uint32_t PWR_VMCR_PVDE_B_0x0 = 0;
        /** @brief PVD enabled */
    constexpr std::uint32_t PWR_VMCR_PVDE_B_0x1 = 1;

    /** @brief programmable voltage detector (PVD) level selection */
    using PWR_VMCR_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD level0 (VPVD0 ~ 1. (value: 0)
     *          - B_0x1: PVD level1 (VPVD1 ~ 2. (value: 1)
     *          - B_0x2: PVD level2 (VPVD2 ~ 2. (value: 2)
     *          - B_0x3: PVD level3 (VPVD3 ~ 2. (value: 3)
     *          - B_0x4: PVD level4 (VPVD4 ~ 2. (value: 4)
     *          - B_0x5: PVD level5 (VPVD5 ~ 2. (value: 5)
     *          - B_0x6: PVD level6 (VPVD6 ~ 2. (value: 6)
     *          - B_0x7: PVD_IN pin (value: 7)
     */
        /** @brief PVD level0 (VPVD0 ~ 1. */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x0 = 0;
        /** @brief PVD level1 (VPVD1 ~ 2. */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x1 = 1;
        /** @brief PVD level2 (VPVD2 ~ 2. */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x2 = 2;
        /** @brief PVD level3 (VPVD3 ~ 2. */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x3 = 3;
        /** @brief PVD level4 (VPVD4 ~ 2. */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x4 = 4;
        /** @brief PVD level5 (VPVD5 ~ 2. */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x5 = 5;
        /** @brief PVD level6 (VPVD6 ~ 2. */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x6 = 6;
        /** @brief PVD_IN pin */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x7 = 7;

    /** @brief peripheral voltage monitor on Vless thansub>DDAless than/sub> enable */
    using PWR_VMCR_AVDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: peripheral voltage monitor on Vless thansub>DDAless than/sub> disabled (value: 0)
     *          - B_0x1: peripheral voltage monitor on Vless thansub>DDAless than/sub> enabled (value: 1)
     */
        /** @brief peripheral voltage monitor on Vless thansub>DDAless than/sub> disabled */
    constexpr std::uint32_t PWR_VMCR_AVDEN_B_0x0 = 0;
        /** @brief peripheral voltage monitor on Vless thansub>DDAless than/sub> enabled */
    constexpr std::uint32_t PWR_VMCR_AVDEN_B_0x1 = 1;

    /** @brief analog voltage detector (AVD) level selection */
    using PWR_VMCR_ALS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AVD level0 (Vless thansub>AVD0less than/sub> ~ 1. (value: 0)
     *          - B_0x1: AVD level1 (Vless thansub>AVD1less than/sub> ~ 2. (value: 1)
     *          - B_0x2: AVD level2 (Vless thansub>AVD2less than/sub> ~ 2. (value: 2)
     *          - B_0x3: AVD level3 (Vless thansub>AVD3less than/sub> ~ 2. (value: 3)
     */
        /** @brief AVD level0 (Vless thansub>AVD0less than/sub> ~ 1. */
    constexpr std::uint32_t PWR_VMCR_ALS_B_0x0 = 0;
        /** @brief AVD level1 (Vless thansub>AVD1less than/sub> ~ 2. */
    constexpr std::uint32_t PWR_VMCR_ALS_B_0x1 = 1;
        /** @brief AVD level2 (Vless thansub>AVD2less than/sub> ~ 2. */
    constexpr std::uint32_t PWR_VMCR_ALS_B_0x2 = 2;
        /** @brief AVD level3 (Vless thansub>AVD3less than/sub> ~ 2. */
    constexpr std::uint32_t PWR_VMCR_ALS_B_0x3 = 3;

    /** @brief PWR USB supply control register */
    using PWR_USBSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>DDUSBless than/sub> voltage level detector enable */
    using PWR_USBSCR_USB33DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDUSBless than/sub> voltage level detector disabled (value: 0)
     *          - B_0x1: Vless thansub>DDUSBless than/sub> voltage level detector enabled (value: 1)
     */
        /** @brief Vless thansub>DDUSBless than/sub> voltage level detector disabled */
    constexpr std::uint32_t PWR_USBSCR_USB33DEN_B_0x0 = 0;
        /** @brief Vless thansub>DDUSBless than/sub> voltage level detector enabled */
    constexpr std::uint32_t PWR_USBSCR_USB33DEN_B_0x1 = 1;

    /** @brief independent USB supply valid */
    using PWR_USBSCR_USB33SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDUSBless than/sub> is not present. (value: 0)
     *          - B_0x1: Vless thansub>DDUSBless than/sub> is valid. (value: 1)
     */
        /** @brief Vless thansub>DDUSBless than/sub> is not present. */
    constexpr std::uint32_t PWR_USBSCR_USB33SV_B_0x0 = 0;
        /** @brief Vless thansub>DDUSBless than/sub> is valid. */
    constexpr std::uint32_t PWR_USBSCR_USB33SV_B_0x1 = 1;

    /** @brief PWR voltage monitor status register */
    using PWR_VMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog voltage detector output on Vless thansub>DDAless than/sub> */
    using PWR_VMSR_AVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDAless than/sub> is equal or higher than the AVD threshold selected with the ALS[2:0] bits. (value: 0)
     *          - B_0x1: Vless thansub>DDAless than/sub> is lower than the AVD threshold selected with the ALS[2:0] bits. (value: 1)
     */
        /** @brief Vless thansub>DDAless than/sub> is equal or higher than the AVD threshold selected with the ALS[2:0] bits. */
    constexpr std::uint32_t PWR_VMSR_AVDO_B_0x0 = 0;
        /** @brief Vless thansub>DDAless than/sub> is lower than the AVD threshold selected with the ALS[2:0] bits. */
    constexpr std::uint32_t PWR_VMSR_AVDO_B_0x1 = 1;

    /** @brief voltage detector output on Vless thansub>DDIO2less than/sub> */
    using PWR_VMSR_VDDIO2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO2less than/sub> is below 1. (value: 0)
     *          - B_0x1: Vless thansub>DDIO2less than/sub> is above or equal to 1. (value: 1)
     */
        /** @brief Vless thansub>DDIO2less than/sub> is below 1. */
    constexpr std::uint32_t PWR_VMSR_VDDIO2RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDIO2less than/sub> is above or equal to 1. */
    constexpr std::uint32_t PWR_VMSR_VDDIO2RDY_B_0x1 = 1;

    /** @brief programmable voltage detect output */
    using PWR_VMSR_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDless than/sub> is equal or higher than the PVD threshold selected through the PLS[2:0] bits. (value: 0)
     *          - B_0x1: Vless thansub>DDless than/sub> is lower than the PVD threshold selected through the PLS[2:0] bits. (value: 1)
     */
        /** @brief Vless thansub>DDless than/sub> is equal or higher than the PVD threshold selected through the PLS[2:0] bits. */
    constexpr std::uint32_t PWR_VMSR_PVDO_B_0x0 = 0;
        /** @brief Vless thansub>DDless than/sub> is lower than the PVD threshold selected through the PLS[2:0] bits. */
    constexpr std::uint32_t PWR_VMSR_PVDO_B_0x1 = 1;

    /** @brief Vless thansub>DDUSBless than/sub> ready */
    using PWR_VMSR_USB33RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDUSBless than/sub> is below the threshold of the Vless thansub>DDUSBless than/sub> voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DDUSBless than/sub> is equal or above the threshold of the Vless thansub>DDUSBless than/sub> voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DDUSBless than/sub> is below the threshold of the Vless thansub>DDUSBless than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_VMSR_USB33RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDUSBless than/sub> is equal or above the threshold of the Vless thansub>DDUSBless than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_VMSR_USB33RDY_B_0x1 = 1;

    /** @brief PWR wake-up status clear register */
    using PWR_WUSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear wake-up pin flag for WUFx (x = 8 to 1) */
    using PWR_WUSCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF1_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF1_B_0x1 = 1;

    /** @brief clear wake-up pin flag for WUFx (x = 8 to 1) */
    using PWR_WUSCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF2_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF2_B_0x1 = 1;

    /** @brief clear wake-up pin flag for WUFx (x = 8 to 1) */
    using PWR_WUSCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF3_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF3_B_0x1 = 1;

    /** @brief clear wake-up pin flag for WUFx (x = 8 to 1) */
    using PWR_WUSCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF4_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF4_B_0x1 = 1;

    /** @brief clear wake-up pin flag for WUFx (x = 8 to 1) */
    using PWR_WUSCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF5_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF5_B_0x1 = 1;

    /** @brief clear wake-up pin flag for WUFx (x = 8 to 1) */
    using PWR_WUSCR_CWUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF6_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF6_B_0x1 = 1;

    /** @brief clear wake-up pin flag for WUFx (x = 8 to 1) */
    using PWR_WUSCR_CWUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF7_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF7_B_0x1 = 1;

    /** @brief clear wake-up pin flag for WUFx (x = 8 to 1) */
    using PWR_WUSCR_CWUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF8_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wake-up pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF8_B_0x1 = 1;

    /** @brief PWR wake-up status register */
    using PWR_WUSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief wake-up pin WUFx flag */
    using PWR_WUSR_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wake-up event occurred. (value: 0)
     *          - B_0x1: wake-up event received from WUFx pin. (value: 1)
     */
        /** @brief no wake-up event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF1_B_0x0 = 0;
        /** @brief wake-up event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF1_B_0x1 = 1;

    /** @brief wake-up pin WUFx flag */
    using PWR_WUSR_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wake-up event occurred. (value: 0)
     *          - B_0x1: wake-up event received from WUFx pin. (value: 1)
     */
        /** @brief no wake-up event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF2_B_0x0 = 0;
        /** @brief wake-up event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF2_B_0x1 = 1;

    /** @brief wake-up pin WUFx flag */
    using PWR_WUSR_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wake-up event occurred. (value: 0)
     *          - B_0x1: wake-up event received from WUFx pin. (value: 1)
     */
        /** @brief no wake-up event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF3_B_0x0 = 0;
        /** @brief wake-up event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF3_B_0x1 = 1;

    /** @brief wake-up pin WUFx flag */
    using PWR_WUSR_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wake-up event occurred. (value: 0)
     *          - B_0x1: wake-up event received from WUFx pin. (value: 1)
     */
        /** @brief no wake-up event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF4_B_0x0 = 0;
        /** @brief wake-up event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF4_B_0x1 = 1;

    /** @brief wake-up pin WUFx flag */
    using PWR_WUSR_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wake-up event occurred. (value: 0)
     *          - B_0x1: wake-up event received from WUFx pin. (value: 1)
     */
        /** @brief no wake-up event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF5_B_0x0 = 0;
        /** @brief wake-up event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF5_B_0x1 = 1;

    /** @brief wake-up pin WUFx flag */
    using PWR_WUSR_WUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wake-up event occurred. (value: 0)
     *          - B_0x1: wake-up event received from WUFx pin. (value: 1)
     */
        /** @brief no wake-up event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF6_B_0x0 = 0;
        /** @brief wake-up event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF6_B_0x1 = 1;

    /** @brief wake-up pin WUFx flag */
    using PWR_WUSR_WUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wake-up event occurred. (value: 0)
     *          - B_0x1: wake-up event received from WUFx pin. (value: 1)
     */
        /** @brief no wake-up event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF7_B_0x0 = 0;
        /** @brief wake-up event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF7_B_0x1 = 1;

    /** @brief wake-up pin WUFx flag */
    using PWR_WUSR_WUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wake-up event occurred. (value: 0)
     *          - B_0x1: wake-up event received from WUFx pin. (value: 1)
     */
        /** @brief no wake-up event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF8_B_0x0 = 0;
        /** @brief wake-up event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF8_B_0x1 = 1;

    /** @brief PWR wake-up configuration register */
    using PWR_WUCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable wake-up pin WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wake-up the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wake-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN1_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN1_B_0x1 = 1;

    /** @brief enable wake-up pin WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wake-up the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wake-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN2_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN2_B_0x1 = 1;

    /** @brief enable wake-up pin WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wake-up the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wake-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN3_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN3_B_0x1 = 1;

    /** @brief enable wake-up pin WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wake-up the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wake-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN4_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN4_B_0x1 = 1;

    /** @brief enable wake-up pin WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wake-up the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wake-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN5_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN5_B_0x1 = 1;

    /** @brief enable wake-up pin WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wake-up the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wake-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN6_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN6_B_0x1 = 1;

    /** @brief enable wake-up pin WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wake-up the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wake-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN7_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN7_B_0x1 = 1;

    /** @brief enable wake-up pin WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wake-up the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wake-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN8_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN8_B_0x1 = 1;

    /** @brief wake-up pin polarity bit for WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP1_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP1_B_0x1 = 1;

    /** @brief wake-up pin polarity bit for WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP2_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP2_B_0x1 = 1;

    /** @brief wake-up pin polarity bit for WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP3_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP3_B_0x1 = 1;

    /** @brief wake-up pin polarity bit for WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP4_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP4_B_0x1 = 1;

    /** @brief wake-up pin polarity bit for WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP5_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP5_B_0x1 = 1;

    /** @brief wake-up pin polarity bit for WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP6_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP6_B_0x1 = 1;

    /** @brief wake-up pin polarity bit for WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP7_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP7_B_0x1 = 1;

    /** @brief wake-up pin polarity bit for WUPx (x = 8 to 1) */
    using PWR_WUCR_WUPP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP8_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP8_B_0x1 = 1;

    /** @brief wake-up pin pull configuration for WKUPx (x = 8 to 1) */
    using PWR_WUCR_WUPPUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD1_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD1_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD1_B_0x2 = 2;

    /** @brief wake-up pin pull configuration for WKUPx (x = 8 to 1) */
    using PWR_WUCR_WUPPUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD2_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD2_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD2_B_0x2 = 2;

    /** @brief wake-up pin pull configuration for WKUPx (x = 8 to 1) */
    using PWR_WUCR_WUPPUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD3_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD3_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD3_B_0x2 = 2;

    /** @brief wake-up pin pull configuration for WKUPx (x = 8 to 1) */
    using PWR_WUCR_WUPPUPD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD4_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD4_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD4_B_0x2 = 2;

    /** @brief wake-up pin pull configuration for WKUPx (x = 8 to 1) */
    using PWR_WUCR_WUPPUPD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD5_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD5_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD5_B_0x2 = 2;

    /** @brief wake-up pin pull configuration for WKUPx (x = 8 to 1) */
    using PWR_WUCR_WUPPUPD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD6_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD6_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD6_B_0x2 = 2;

    /** @brief wake-up pin pull configuration for WKUPx (x = 8 to 1) */
    using PWR_WUCR_WUPPUPD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD7_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD7_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD7_B_0x2 = 2;

    /** @brief wake-up pin pull configuration for WKUPx (x = 8 to 1) */
    using PWR_WUCR_WUPPUPD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD8_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD8_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD8_B_0x2 = 2;

    /** @brief PWR I/O retention register */
    using PWR_IORETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO retention enable */
    using PWR_IORETR_IORETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO Retention mode is disabled. (value: 0)
     *          - B_0x1: IO Retention mode is enabling for all IO except the IO support the standby functionality and PA13, PA14, PA15, and PB4. (value: 1)
     */
        /** @brief IO Retention mode is disabled. */
    constexpr std::uint32_t PWR_IORETR_IORETEN_B_0x0 = 0;
        /** @brief IO Retention mode is enabling for all IO except the IO support the standby functionality and PA13, PA14, PA15, and PB4. */
    constexpr std::uint32_t PWR_IORETR_IORETEN_B_0x1 = 1;

    /** @brief IO retention enable for JTAG IOs */
    using PWR_IORETR_JTAGIORETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO Retention mode is disabled. (value: 0)
     *          - B_0x1: IO Retention mode is enabling for PA13, PA14, PA15, and PB4. (value: 1)
     */
        /** @brief IO Retention mode is disabled. */
    constexpr std::uint32_t PWR_IORETR_JTAGIORETEN_B_0x0 = 0;
        /** @brief IO Retention mode is enabling for PA13, PA14, PA15, and PB4. */
    constexpr std::uint32_t PWR_IORETR_JTAGIORETEN_B_0x1 = 1;

    /** @brief PWR security configuration register */
    using PWR_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUPx secure protection (x = 8 to 1) */
    using PWR_SECCFGR_WUP1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x1 = 1;

    /** @brief WUPx secure protection (x = 8 to 1) */
    using PWR_SECCFGR_WUP2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x1 = 1;

    /** @brief WUPx secure protection (x = 8 to 1) */
    using PWR_SECCFGR_WUP3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x1 = 1;

    /** @brief WUPx secure protection (x = 8 to 1) */
    using PWR_SECCFGR_WUP4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x1 = 1;

    /** @brief WUPx secure protection (x = 8 to 1) */
    using PWR_SECCFGR_WUP5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x1 = 1;

    /** @brief WUPx secure protection (x = 8 to 1) */
    using PWR_SECCFGR_WUP6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x1 = 1;

    /** @brief WUPx secure protection (x = 8 to 1) */
    using PWR_SECCFGR_WUP7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x1 = 1;

    /** @brief WUPx secure protection (x = 8 to 1) */
    using PWR_SECCFGR_WUP8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wake-up pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x1 = 1;

    /** @brief retention secure protection */
    using PWR_SECCFGR_RETSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_IORETR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_IORETR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_IORETR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_RETSEC_B_0x0 = 0;
        /** @brief PWR_IORETR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_RETSEC_B_0x1 = 1;

    /** @brief low-power modes secure protection */
    using PWR_SECCFGR_LPMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_PMCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_PMCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_PMCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x0 = 0;
        /** @brief PWR_PMCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x1 = 1;

    /** @brief supply configuration and monitoring secure protection. */
    using PWR_SECCFGR_SCMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_SCCR and PWR_VMCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_SCCR and PWR_VMCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_SCCR and PWR_VMCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SCMSEC_B_0x0 = 0;
        /** @brief PWR_SCCR and PWR_VMCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SCMSEC_B_0x1 = 1;

    /** @brief Backup domain secure protection */
    using PWR_SECCFGR_VBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_BDCR, PWR_DBPCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_BDCR, PWR_DBPCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_BDCR, PWR_DBPCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x0 = 0;
        /** @brief PWR_BDCR, PWR_DBPCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x1 = 1;

    /** @brief voltage USB secure protection */
    using PWR_SECCFGR_VUSBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_USBSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_USBSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_USBSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VUSBSEC_B_0x0 = 0;
        /** @brief PWR_USBSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VUSBSEC_B_0x1 = 1;

    /** @brief PWR privilege configuration register */
    using PWR_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR secure functions privilege configuration */
    using PWR_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief PWR non-secure functions privilege configuration */
    using PWR_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR non-secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR non-secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR non-secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR non-secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x1 = 1;

}

#endif
