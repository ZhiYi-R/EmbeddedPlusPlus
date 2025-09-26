/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U599_SEC_DSI_HPP
#define EMBEDDED_PP_STM32U599_SEC_DSI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DSI */
namespace STM32U599::SEC_DSI {

    /** @brief DSI Host version register */
    using DSI_VR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version of the DSI Host */
    using DSI_VR_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host control register */
    using DSI_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable */
    using DSI_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI Host disabled (under reset) (value: 0)
     *          - B_0x1: DSI Host enabled (value: 1)
     */
        /** @brief DSI Host disabled (under reset) */
    constexpr std::uint32_t DSI_CR_EN_B_0x0 = 0;
        /** @brief DSI Host enabled */
    constexpr std::uint32_t DSI_CR_EN_B_0x1 = 1;

    /** @brief DSI Host clock control register */
    using DSI_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX escape clock division */
    using DSI_CCR_TXECKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout clock division */
    using DSI_CCR_TOCKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host LTDC VCID register */
    using DSI_LVCIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel ID */
    using DSI_LVCIDR_VCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host LTDC color coding register */
    using DSI_LCOLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color coding */
    using DSI_LCOLCR_COLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 16-bit configuration 1 (value: 0)
     *          - B_0x1: 16-bit configuration 2 (value: 1)
     *          - B_0x2: 16-bit configuration 3 (value: 2)
     *          - B_0x3: 18-bit configuration 1 (value: 3)
     *          - B_0x4: 18-bit configuration 2 (value: 4)
     *          - B_0x5: 24-bit (value: 5)
     */
        /** @brief 16-bit configuration 1 */
    constexpr std::uint32_t DSI_LCOLCR_COLC_B_0x0 = 0;
        /** @brief 16-bit configuration 2 */
    constexpr std::uint32_t DSI_LCOLCR_COLC_B_0x1 = 1;
        /** @brief 16-bit configuration 3 */
    constexpr std::uint32_t DSI_LCOLCR_COLC_B_0x2 = 2;
        /** @brief 18-bit configuration 1 */
    constexpr std::uint32_t DSI_LCOLCR_COLC_B_0x3 = 3;
        /** @brief 18-bit configuration 2 */
    constexpr std::uint32_t DSI_LCOLCR_COLC_B_0x4 = 4;
        /** @brief 24-bit */
    constexpr std::uint32_t DSI_LCOLCR_COLC_B_0x5 = 5;

    /** @brief Loosely packet enable */
    using DSI_LCOLCR_LPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Loosely packet variant disabled (value: 0)
     *          - B_0x1: Loosely packet variant enabled (value: 1)
     */
        /** @brief Loosely packet variant disabled */
    constexpr std::uint32_t DSI_LCOLCR_LPE_B_0x0 = 0;
        /** @brief Loosely packet variant enabled */
    constexpr std::uint32_t DSI_LCOLCR_LPE_B_0x1 = 1;

    /** @brief DSI Host LTDC polarity configuration register */
    using DSI_LPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data enable polarity */
    using DSI_LPCR_DEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data enable pin active high (default) (value: 0)
     *          - B_0x1: Data enable pin active low (value: 1)
     */
        /** @brief Data enable pin active high (default) */
    constexpr std::uint32_t DSI_LPCR_DEP_B_0x0 = 0;
        /** @brief Data enable pin active low */
    constexpr std::uint32_t DSI_LPCR_DEP_B_0x1 = 1;

    /** @brief VSYNC polarity */
    using DSI_LPCR_VSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Shutdown pin active high (default) (value: 0)
     *          - B_0x1: Shutdown pin active low (value: 1)
     */
        /** @brief Shutdown pin active high (default) */
    constexpr std::uint32_t DSI_LPCR_VSP_B_0x0 = 0;
        /** @brief Shutdown pin active low */
    constexpr std::uint32_t DSI_LPCR_VSP_B_0x1 = 1;

    /** @brief HSYNC polarity */
    using DSI_LPCR_HSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSYNC pin active high (default) (value: 0)
     *          - B_0x1: VSYNC pin active low (value: 1)
     */
        /** @brief HSYNC pin active high (default) */
    constexpr std::uint32_t DSI_LPCR_HSP_B_0x0 = 0;
        /** @brief VSYNC pin active low */
    constexpr std::uint32_t DSI_LPCR_HSP_B_0x1 = 1;

    /** @brief DSI Host low-power mode configuration register */
    using DSI_LPMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VACT largest packet size */
    using DSI_LPMCR_VLPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Largest packet size */
    using DSI_LPMCR_LPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host protocol configuration register */
    using DSI_PCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EoTp transmission enable */
    using DSI_PCR_ETTXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EoTp transmission is disabled. (value: 0)
     *          - B_0x1: EoTp transmission is enabled. (value: 1)
     */
        /** @brief EoTp transmission is disabled. */
    constexpr std::uint32_t DSI_PCR_ETTXE_B_0x0 = 0;
        /** @brief EoTp transmission is enabled. */
    constexpr std::uint32_t DSI_PCR_ETTXE_B_0x1 = 1;

    /** @brief EoTp reception enable */
    using DSI_PCR_ETRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EoTp reception is disabled. (value: 0)
     *          - B_0x1: EoTp reception is enabled. (value: 1)
     */
        /** @brief EoTp reception is disabled. */
    constexpr std::uint32_t DSI_PCR_ETRXE_B_0x0 = 0;
        /** @brief EoTp reception is enabled. */
    constexpr std::uint32_t DSI_PCR_ETRXE_B_0x1 = 1;

    /** @brief Bus-turn-around enable */
    using DSI_PCR_BTAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bus-turn-around request is disabled. (value: 0)
     *          - B_0x1: Bus-turn-around request is enabled. (value: 1)
     */
        /** @brief Bus-turn-around request is disabled. */
    constexpr std::uint32_t DSI_PCR_BTAE_B_0x0 = 0;
        /** @brief Bus-turn-around request is enabled. */
    constexpr std::uint32_t DSI_PCR_BTAE_B_0x1 = 1;

    /** @brief ECC reception enable */
    using DSI_PCR_ECCRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC reception is disabled. (value: 0)
     *          - B_0x1: ECC reception is enabled. (value: 1)
     */
        /** @brief ECC reception is disabled. */
    constexpr std::uint32_t DSI_PCR_ECCRXE_B_0x0 = 0;
        /** @brief ECC reception is enabled. */
    constexpr std::uint32_t DSI_PCR_ECCRXE_B_0x1 = 1;

    /** @brief CRC reception enable */
    using DSI_PCR_CRCRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC reception is disabled. (value: 0)
     *          - B_0x1: CRC reception is enabled. (value: 1)
     */
        /** @brief CRC reception is disabled. */
    constexpr std::uint32_t DSI_PCR_CRCRXE_B_0x0 = 0;
        /** @brief CRC reception is enabled. */
    constexpr std::uint32_t DSI_PCR_CRCRXE_B_0x1 = 1;

    /** @brief EoTp transmission in low-power enable */
    using DSI_PCR_ETTXLPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EoTp transmission in low-power is disabled. (value: 0)
     *          - B_0x1: EoTp transmission in low-power is enabled. (value: 1)
     */
        /** @brief EoTp transmission in low-power is disabled. */
    constexpr std::uint32_t DSI_PCR_ETTXLPE_B_0x0 = 0;
        /** @brief EoTp transmission in low-power is enabled. */
    constexpr std::uint32_t DSI_PCR_ETTXLPE_B_0x1 = 1;

    /** @brief DSI Host generic VCID register */
    using DSI_GVCIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel ID for reception */
    using DSI_GVCIDR_VCIDRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel ID for transmission */
    using DSI_GVCIDR_VCIDTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host mode configuration register */
    using DSI_MCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command mode */
    using DSI_MCR_CMDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI Host is configured in video mode. (value: 0)
     *          - B_0x1: DSI Host is configured in command mode. (value: 1)
     */
        /** @brief DSI Host is configured in video mode. */
    constexpr std::uint32_t DSI_MCR_CMDM_B_0x0 = 0;
        /** @brief DSI Host is configured in command mode. */
    constexpr std::uint32_t DSI_MCR_CMDM_B_0x1 = 1;

    /** @brief DSI Host video mode configuration register */
    using DSI_VMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Video mode type */
    using DSI_VMCR_VMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-burst with sync pulses. (value: 0)
     *          - B_0x1: Non-burst with sync events. (value: 1)
     */
        /** @brief Non-burst with sync pulses. */
    constexpr std::uint32_t DSI_VMCR_VMT_B_0x0 = 0;
        /** @brief Non-burst with sync events. */
    constexpr std::uint32_t DSI_VMCR_VMT_B_0x1 = 1;

    /** @brief Low-power vertical sync active enable */
    using DSI_VMCR_LPVSAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VSA is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VSA is enabled (value: 1)
     */
        /** @brief Return to low-power inside the VSA is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPVSAE_B_0x0 = 0;
        /** @brief Return to low-power inside the VSA is enabled */
    constexpr std::uint32_t DSI_VMCR_LPVSAE_B_0x1 = 1;

    /** @brief Low-power vertical back-porch enable */
    using DSI_VMCR_LPVBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VBP is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VBP is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VBP is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPVBPE_B_0x0 = 0;
        /** @brief Return to low-power inside the VBP is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPVBPE_B_0x1 = 1;

    /** @brief Low-power vertical front-porch enable */
    using DSI_VMCR_LPVFPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VFP is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VFP is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VFP is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPVFPE_B_0x0 = 0;
        /** @brief Return to low-power inside the VFP is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPVFPE_B_0x1 = 1;

    /** @brief Low-power vertical active enable */
    using DSI_VMCR_LPVAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VACT is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VACT is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VACT is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPVAE_B_0x0 = 0;
        /** @brief Return to low-power inside the VACT is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPVAE_B_0x1 = 1;

    /** @brief Low-power horizontal back-porch enable */
    using DSI_VMCR_LPHBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the HBP period is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the HBP period is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the HBP period is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPHBPE_B_0x0 = 0;
        /** @brief Return to low-power inside the HBP period is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPHBPE_B_0x1 = 1;

    /** @brief Low-power horizontal front-porch enable */
    using DSI_VMCR_LPHFPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the HFP period is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the HFP period is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the HFP period is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPHFPE_B_0x0 = 0;
        /** @brief Return to low-power inside the HFP period is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPHFPE_B_0x1 = 1;

    /** @brief Frame bus-turn-around acknowledge enable */
    using DSI_VMCR_FBTAAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acknowledge response at the end of a frame is disabled. (value: 0)
     *          - B_0x1: Acknowledge response at the end of a frame is enabled. (value: 1)
     */
        /** @brief Acknowledge response at the end of a frame is disabled. */
    constexpr std::uint32_t DSI_VMCR_FBTAAE_B_0x0 = 0;
        /** @brief Acknowledge response at the end of a frame is enabled. */
    constexpr std::uint32_t DSI_VMCR_FBTAAE_B_0x1 = 1;

    /** @brief Low-power command enable */
    using DSI_VMCR_LPCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command transmission in low-power mode is disabled. (value: 0)
     *          - B_0x1: Command transmission in low-power mode is enabled. (value: 1)
     */
        /** @brief Command transmission in low-power mode is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPCE_B_0x0 = 0;
        /** @brief Command transmission in low-power mode is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPCE_B_0x1 = 1;

    /** @brief Pattern generator enable */
    using DSI_VMCR_PGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pattern generator is disabled. (value: 0)
     *          - B_0x1: Pattern generator is enabled. (value: 1)
     */
        /** @brief Pattern generator is disabled. */
    constexpr std::uint32_t DSI_VMCR_PGE_B_0x0 = 0;
        /** @brief Pattern generator is enabled. */
    constexpr std::uint32_t DSI_VMCR_PGE_B_0x1 = 1;

    /** @brief Pattern generator mode */
    using DSI_VMCR_PGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Color bars (horizontal or vertical). (value: 0)
     *          - B_0x1: BER pattern (vertical only). (value: 1)
     */
        /** @brief Color bars (horizontal or vertical). */
    constexpr std::uint32_t DSI_VMCR_PGM_B_0x0 = 0;
        /** @brief BER pattern (vertical only). */
    constexpr std::uint32_t DSI_VMCR_PGM_B_0x1 = 1;

    /** @brief Pattern generator orientation */
    using DSI_VMCR_PGO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vertical color bars. (value: 0)
     *          - B_0x1: Horizontal color bars. (value: 1)
     */
        /** @brief Vertical color bars. */
    constexpr std::uint32_t DSI_VMCR_PGO_B_0x0 = 0;
        /** @brief Horizontal color bars. */
    constexpr std::uint32_t DSI_VMCR_PGO_B_0x1 = 1;

    /** @brief DSI Host video packet configuration register */
    using DSI_VPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Video packet size */
    using DSI_VPCR_VPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video chunks configuration register */
    using DSI_VCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of chunks */
    using DSI_VCCR_NUMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video null packet configuration register */
    using DSI_VNPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Null packet size */
    using DSI_VNPCR_NPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video HSA configuration register */
    using DSI_VHSACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal synchronism active duration */
    using DSI_VHSACR_HSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video HBP configuration register */
    using DSI_VHBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal back-porch duration */
    using DSI_VHBPCR_HBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video line configuration register */
    using DSI_VLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal line duration */
    using DSI_VLCR_HLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VSA configuration register */
    using DSI_VVSACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronism active duration */
    using DSI_VVSACR_VSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VBP configuration register */
    using DSI_VVBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical back-porch duration */
    using DSI_VVBPCR_VBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VFP configuration register */
    using DSI_VVFPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical front-porch duration */
    using DSI_VVFPCR_VFP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VA configuration register */
    using DSI_VVACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical active duration */
    using DSI_VVACR_VA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host LTDC command configuration register */
    using DSI_LCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command size */
    using DSI_LCCR_CMDSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host command mode configuration register */
    using DSI_CMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tearing effect acknowledge request enable */
    using DSI_CMCR_TEARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tearing effect acknowledge request is disabled. (value: 0)
     *          - B_0x1: Tearing effect acknowledge request is enabled. (value: 1)
     */
        /** @brief Tearing effect acknowledge request is disabled. */
    constexpr std::uint32_t DSI_CMCR_TEARE_B_0x0 = 0;
        /** @brief Tearing effect acknowledge request is enabled. */
    constexpr std::uint32_t DSI_CMCR_TEARE_B_0x1 = 1;

    /** @brief Acknowledge request enable */
    using DSI_CMCR_ARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acknowledge request is disabled. (value: 0)
     *          - B_0x1: Acknowledge request is enabled. (value: 1)
     */
        /** @brief Acknowledge request is disabled. */
    constexpr std::uint32_t DSI_CMCR_ARE_B_0x0 = 0;
        /** @brief Acknowledge request is enabled. */
    constexpr std::uint32_t DSI_CMCR_ARE_B_0x1 = 1;

    /** @brief Generic short write zero parameters transmission */
    using DSI_CMCR_GSW0TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSW0TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSW0TX_B_0x1 = 1;

    /** @brief Generic short write one parameters transmission */
    using DSI_CMCR_GSW1TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSW1TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSW1TX_B_0x1 = 1;

    /** @brief Generic short write two parameters transmission */
    using DSI_CMCR_GSW2TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSW2TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSW2TX_B_0x1 = 1;

    /** @brief Generic short read zero parameters transmission */
    using DSI_CMCR_GSR0TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSR0TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSR0TX_B_0x1 = 1;

    /** @brief Generic short read one parameters transmission */
    using DSI_CMCR_GSR1TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSR1TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSR1TX_B_0x1 = 1;

    /** @brief Generic short read two parameters transmission */
    using DSI_CMCR_GSR2TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSR2TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSR2TX_B_0x1 = 1;

    /** @brief Generic long write transmission */
    using DSI_CMCR_GLWTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GLWTX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GLWTX_B_0x1 = 1;

    /** @brief DCS short write zero parameter transmission */
    using DSI_CMCR_DSW0TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_DSW0TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_DSW0TX_B_0x1 = 1;

    /** @brief DCS short read one parameter transmission */
    using DSI_CMCR_DSW1TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_DSW1TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_DSW1TX_B_0x1 = 1;

    /** @brief DCS short read zero parameter transmission */
    using DSI_CMCR_DSR0TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_DSR0TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_DSR0TX_B_0x1 = 1;

    /** @brief DCS long write transmission */
    using DSI_CMCR_DLWTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_DLWTX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_DLWTX_B_0x1 = 1;

    /** @brief Maximum read packet size */
    using DSI_CMCR_MRDPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_MRDPS_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_MRDPS_B_0x1 = 1;

    /** @brief DSI Host generic header configuration register */
    using DSI_GHCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type */
    using DSI_GHCR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel */
    using DSI_GHCR_VCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WordCount LSB */
    using DSI_GHCR_WCLSB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WordCount MSB */
    using DSI_GHCR_WCMSB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host generic payload data register */
    using DSI_GPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload byte 1 */
    using DSI_GPDR_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload byte 2 */
    using DSI_GPDR_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload byte 3 */
    using DSI_GPDR_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload byte 4 */
    using DSI_GPDR_DATA4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host generic packet status register */
    using DSI_GPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command FIFO empty */
    using DSI_GPSR_CMDFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not empty (value: 0)
     *          - B_0x1: Write payload FIFO empty (value: 1)
     */
        /** @brief Write payload FIFO not empty */
    constexpr std::uint32_t DSI_GPSR_CMDFE_B_0x0 = 0;
        /** @brief Write payload FIFO empty */
    constexpr std::uint32_t DSI_GPSR_CMDFE_B_0x1 = 1;

    /** @brief Command FIFO full */
    using DSI_GPSR_CMDFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not full (value: 0)
     *          - B_0x1: Write payload FIFO full (value: 1)
     */
        /** @brief Write payload FIFO not full */
    constexpr std::uint32_t DSI_GPSR_CMDFF_B_0x0 = 0;
        /** @brief Write payload FIFO full */
    constexpr std::uint32_t DSI_GPSR_CMDFF_B_0x1 = 1;

    /** @brief Payload write FIFO empty */
    using DSI_GPSR_PWRFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not empty (value: 0)
     *          - B_0x1: Write payload FIFO empty (value: 1)
     */
        /** @brief Write payload FIFO not empty */
    constexpr std::uint32_t DSI_GPSR_PWRFE_B_0x0 = 0;
        /** @brief Write payload FIFO empty */
    constexpr std::uint32_t DSI_GPSR_PWRFE_B_0x1 = 1;

    /** @brief Payload write FIFO full */
    using DSI_GPSR_PWRFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not full (value: 0)
     *          - B_0x1: Write payload FIFO full (value: 1)
     */
        /** @brief Write payload FIFO not full */
    constexpr std::uint32_t DSI_GPSR_PWRFF_B_0x0 = 0;
        /** @brief Write payload FIFO full */
    constexpr std::uint32_t DSI_GPSR_PWRFF_B_0x1 = 1;

    /** @brief Payload read FIFO empty */
    using DSI_GPSR_PRDFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read payload FIFO not empty (value: 0)
     *          - B_0x1: Read payload FIFO empty (value: 1)
     */
        /** @brief Read payload FIFO not empty */
    constexpr std::uint32_t DSI_GPSR_PRDFE_B_0x0 = 0;
        /** @brief Read payload FIFO empty */
    constexpr std::uint32_t DSI_GPSR_PRDFE_B_0x1 = 1;

    /** @brief Payload read FIFO full */
    using DSI_GPSR_PRDFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read payload FIFO not full (value: 0)
     *          - B_0x1: Read payload FIFO ful. (value: 1)
     */
        /** @brief Read payload FIFO not full */
    constexpr std::uint32_t DSI_GPSR_PRDFF_B_0x0 = 0;
        /** @brief Read payload FIFO ful. */
    constexpr std::uint32_t DSI_GPSR_PRDFF_B_0x1 = 1;

    /** @brief Read command busy */
    using DSI_GPSR_RCB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No read command on going (value: 0)
     *          - B_0x1: Read command on going (value: 1)
     */
        /** @brief No read command on going */
    constexpr std::uint32_t DSI_GPSR_RCB_B_0x0 = 0;
        /** @brief Read command on going */
    constexpr std::uint32_t DSI_GPSR_RCB_B_0x1 = 1;

    /** @brief Command buffer empty */
    using DSI_GPSR_CMDBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Payload internal buffer not full (value: 0)
     *          - B_0x1: Payload internal buffer full (value: 1)
     */
        /** @brief Payload internal buffer not full */
    constexpr std::uint32_t DSI_GPSR_CMDBE_B_0x0 = 0;
        /** @brief Payload internal buffer full */
    constexpr std::uint32_t DSI_GPSR_CMDBE_B_0x1 = 1;

    /** @brief Command buffer full */
    using DSI_GPSR_CMDBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command internal buffer not full (value: 0)
     *          - B_0x1: Command internal buffer full (value: 1)
     */
        /** @brief Command internal buffer not full */
    constexpr std::uint32_t DSI_GPSR_CMDBF_B_0x0 = 0;
        /** @brief Command internal buffer full */
    constexpr std::uint32_t DSI_GPSR_CMDBF_B_0x1 = 1;

    /** @brief Payload buffer empty */
    using DSI_GPSR_PBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Payload internal buffer not empty (value: 0)
     *          - B_0x1: Payload internal buffer empty (value: 1)
     */
        /** @brief Payload internal buffer not empty */
    constexpr std::uint32_t DSI_GPSR_PBE_B_0x0 = 0;
        /** @brief Payload internal buffer empty */
    constexpr std::uint32_t DSI_GPSR_PBE_B_0x1 = 1;

    /** @brief Payload buffer full */
    using DSI_GPSR_PBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Payload internal buffer not full (value: 0)
     *          - B_0x1: Payload internal buffer full (value: 1)
     */
        /** @brief Payload internal buffer not full */
    constexpr std::uint32_t DSI_GPSR_PBF_B_0x0 = 0;
        /** @brief Payload internal buffer full */
    constexpr std::uint32_t DSI_GPSR_PBF_B_0x1 = 1;

    /** @brief DSI Host timeout counter configuration register 0 */
    using DSI_TCCR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power reception timeout counter */
    using DSI_TCCR0_LPRX_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed transmission timeout counter */
    using DSI_TCCR0_HSTX_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 1 */
    using DSI_TCCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed read timeout counter */
    using DSI_TCCR1_HSRD_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 2 */
    using DSI_TCCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power read timeout counter */
    using DSI_TCCR2_LPRD_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 3 */
    using DSI_TCCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed write timeout counter */
    using DSI_TCCR3_HSWR_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Presp mode */
    using DSI_TCCR3_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 4 */
    using DSI_TCCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power write timeout counter */
    using DSI_TCCR4_LPWR_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 5 */
    using DSI_TCCR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus-turn-around timeout counter */
    using DSI_TCCR5_BTA_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host clock lane configuration register */
    using DSI_CLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY clock control */
    using DSI_CLCR_DPCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock lane is in low-power mode. (value: 0)
     *          - B_0x1: Clock lane runs in high-speed mode. (value: 1)
     */
        /** @brief Clock lane is in low-power mode. */
    constexpr std::uint32_t DSI_CLCR_DPCC_B_0x0 = 0;
        /** @brief Clock lane runs in high-speed mode. */
    constexpr std::uint32_t DSI_CLCR_DPCC_B_0x1 = 1;

    /** @brief Automatic clock lane control */
    using DSI_CLCR_ACR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic clock lane control disabled (value: 0)
     *          - B_0x1: Automatic clock lane control enabled (value: 1)
     */
        /** @brief Automatic clock lane control disabled */
    constexpr std::uint32_t DSI_CLCR_ACR_B_0x0 = 0;
        /** @brief Automatic clock lane control enabled */
    constexpr std::uint32_t DSI_CLCR_ACR_B_0x1 = 1;

    /** @brief DSI Host clock lane timer configuration register */
    using DSI_CLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power to high-speed time */
    using DSI_CLTCR_LP2HS_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed to low-power time */
    using DSI_CLTCR_HS2LP_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host data lane timer configuration register */
    using DSI_DLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power to high-speed time */
    using DSI_DLTCR_LP2HS_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed to low-power time */
    using DSI_DLTCR_HS2LP_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host PHY control register */
    using DSI_PCTLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital enable */
    using DSI_PCTLR_DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The digital section of the D-PHY is in the reset state. (value: 0)
     *          - B_0x1: The digital section of the D-PHY is enabled. (value: 1)
     */
        /** @brief The digital section of the D-PHY is in the reset state. */
    constexpr std::uint32_t DSI_PCTLR_DEN_B_0x0 = 0;
        /** @brief The digital section of the D-PHY is enabled. */
    constexpr std::uint32_t DSI_PCTLR_DEN_B_0x1 = 1;

    /** @brief Clock enable */
    using DSI_PCTLR_CKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: D-PHY clock lane module is disabled. (value: 0)
     *          - B_0x1: D-PHY clock lane module is enabled. (value: 1)
     */
        /** @brief D-PHY clock lane module is disabled. */
    constexpr std::uint32_t DSI_PCTLR_CKE_B_0x0 = 0;
        /** @brief D-PHY clock lane module is enabled. */
    constexpr std::uint32_t DSI_PCTLR_CKE_B_0x1 = 1;

    /** @brief DSI Host PHY configuration register */
    using DSI_PCONFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of lanes */
    using DSI_PCONFR_NL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One data lane (lane 0) (value: 0)
     *          - B_0x1: Two data lanes (lanes 0 and 1) - Reset value (value: 1)
     */
        /** @brief One data lane (lane 0) */
    constexpr std::uint32_t DSI_PCONFR_NL_B_0x0 = 0;
        /** @brief Two data lanes (lanes 0 and 1) - Reset value */
    constexpr std::uint32_t DSI_PCONFR_NL_B_0x1 = 1;

    /** @brief Stop wait time */
    using DSI_PCONFR_SW_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host PHY ULPS control register */
    using DSI_PUCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPS request on clock lane */
    using DSI_PUCR_URCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ULPS request (value: 0)
     *          - B_0x1: Request ULPS mode on clock lane (value: 1)
     */
        /** @brief No ULPS request */
    constexpr std::uint32_t DSI_PUCR_URCL_B_0x0 = 0;
        /** @brief Request ULPS mode on clock lane */
    constexpr std::uint32_t DSI_PUCR_URCL_B_0x1 = 1;

    /** @brief ULPS exit on clock lane */
    using DSI_PUCR_UECL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No exit request (value: 0)
     *          - B_0x1: Exit ULPS mode on clock lane (value: 1)
     */
        /** @brief No exit request */
    constexpr std::uint32_t DSI_PUCR_UECL_B_0x0 = 0;
        /** @brief Exit ULPS mode on clock lane */
    constexpr std::uint32_t DSI_PUCR_UECL_B_0x1 = 1;

    /** @brief ULPS request on data lane */
    using DSI_PUCR_URDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ULPS request (value: 0)
     *          - B_0x1: Request ULPS mode on all active data lane UECL (value: 1)
     */
        /** @brief No ULPS request */
    constexpr std::uint32_t DSI_PUCR_URDL_B_0x0 = 0;
        /** @brief Request ULPS mode on all active data lane UECL */
    constexpr std::uint32_t DSI_PUCR_URDL_B_0x1 = 1;

    /** @brief ULPS exit on data lane */
    using DSI_PUCR_UEDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No exit request (value: 0)
     *          - B_0x1: Exit ULPS mode on all active data lane URDL (value: 1)
     */
        /** @brief No exit request */
    constexpr std::uint32_t DSI_PUCR_UEDL_B_0x0 = 0;
        /** @brief Exit ULPS mode on all active data lane URDL */
    constexpr std::uint32_t DSI_PUCR_UEDL_B_0x1 = 1;

    /** @brief DSI Host PHY TX triggers configuration register */
    using DSI_PTTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission trigger */
    using DSI_PTTCR_TX_TRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host PHY status register */
    using DSI_PSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY direction */
    using DSI_PSR_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY stop state clock lane */
    using DSI_PSR_PSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPS active not clock lane */
    using DSI_PSR_UANC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY stop state lane 0 */
    using DSI_PSR_PSS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPS active not lane 1 */
    using DSI_PSR_UAN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX ULPS escape lane 0 */
    using DSI_PSR_RUE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY stop state lane 1 */
    using DSI_PSR_PSS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPS active not lane 1 */
    using DSI_PSR_UAN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host interrupt and status register 0 */
    using DSI_ISR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 0 */
    using DSI_ISR0_AE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 1 */
    using DSI_ISR0_AE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 2 */
    using DSI_ISR0_AE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 3 */
    using DSI_ISR0_AE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 4 */
    using DSI_ISR0_AE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 5 */
    using DSI_ISR0_AE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 6 */
    using DSI_ISR0_AE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 7 */
    using DSI_ISR0_AE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 8 */
    using DSI_ISR0_AE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 9 */
    using DSI_ISR0_AE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 10 */
    using DSI_ISR0_AE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 11 */
    using DSI_ISR0_AE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 12 */
    using DSI_ISR0_AE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 13 */
    using DSI_ISR0_AE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 14 */
    using DSI_ISR0_AE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 15 */
    using DSI_ISR0_AE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 0 */
    using DSI_ISR0_PE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 1 */
    using DSI_ISR0_PE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 2 */
    using DSI_ISR0_PE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 3 */
    using DSI_ISR0_PE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 4 */
    using DSI_ISR0_PE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host interrupt and status register 1 */
    using DSI_ISR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout high-speed transmission */
    using DSI_ISR1_TOHSTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout low-power reception */
    using DSI_ISR1_TOLPRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single-bit error */
    using DSI_ISR1_ECCSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC multi-bit error */
    using DSI_ISR1_ECCME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC error */
    using DSI_ISR1_CRCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet size error */
    using DSI_ISR1_PSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EoTp error */
    using DSI_ISR1_EOTPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC payload write error */
    using DSI_ISR1_LPWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic command write error */
    using DSI_ISR1_GCWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic payload write error */
    using DSI_ISR1_GPWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic payload transmit error */
    using DSI_ISR1_GPTXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic payload read error */
    using DSI_ISR1_GPRDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic payload receive error */
    using DSI_ISR1_GPRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload buffer underflow error */
    using DSI_ISR1_PBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host interrupt enable register 0 */
    using DSI_IER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 0 interrupt enable */
    using DSI_IER0_AE0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 0 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 0 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 0 disabled */
    constexpr std::uint32_t DSI_IER0_AE0IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 0 enabled */
    constexpr std::uint32_t DSI_IER0_AE0IE_B_0x1 = 1;

    /** @brief Acknowledge error 1 interrupt enable */
    using DSI_IER0_AE1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 1 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 1 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 1 disabled */
    constexpr std::uint32_t DSI_IER0_AE1IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 1 enabled */
    constexpr std::uint32_t DSI_IER0_AE1IE_B_0x1 = 1;

    /** @brief Acknowledge error 2 interrupt enable */
    using DSI_IER0_AE2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 2 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 2 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 2 disabled */
    constexpr std::uint32_t DSI_IER0_AE2IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 2 enabled */
    constexpr std::uint32_t DSI_IER0_AE2IE_B_0x1 = 1;

    /** @brief Acknowledge error 3 interrupt enable */
    using DSI_IER0_AE3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 3 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 3 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 3 disabled */
    constexpr std::uint32_t DSI_IER0_AE3IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 3 enabled */
    constexpr std::uint32_t DSI_IER0_AE3IE_B_0x1 = 1;

    /** @brief Acknowledge error 4 interrupt enable */
    using DSI_IER0_AE4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 4 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 4 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 4 disabled */
    constexpr std::uint32_t DSI_IER0_AE4IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 4 enabled */
    constexpr std::uint32_t DSI_IER0_AE4IE_B_0x1 = 1;

    /** @brief Acknowledge error 5 interrupt enable */
    using DSI_IER0_AE5IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 5 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 5 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 5 disabled */
    constexpr std::uint32_t DSI_IER0_AE5IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 5 enabled */
    constexpr std::uint32_t DSI_IER0_AE5IE_B_0x1 = 1;

    /** @brief Acknowledge error 6 interrupt enable */
    using DSI_IER0_AE6IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 6 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 6 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 6 disabled */
    constexpr std::uint32_t DSI_IER0_AE6IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 6 enabled */
    constexpr std::uint32_t DSI_IER0_AE6IE_B_0x1 = 1;

    /** @brief Acknowledge error 7 interrupt enable */
    using DSI_IER0_AE7IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 7 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 7 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 7 disabled */
    constexpr std::uint32_t DSI_IER0_AE7IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 7 enabled */
    constexpr std::uint32_t DSI_IER0_AE7IE_B_0x1 = 1;

    /** @brief Acknowledge error 8 interrupt enable */
    using DSI_IER0_AE8IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 8 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 8 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 8 disabled */
    constexpr std::uint32_t DSI_IER0_AE8IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 8 enabled */
    constexpr std::uint32_t DSI_IER0_AE8IE_B_0x1 = 1;

    /** @brief Acknowledge error 9 interrupt enable */
    using DSI_IER0_AE9IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 9 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 9 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 9 disabled */
    constexpr std::uint32_t DSI_IER0_AE9IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 9 enabled */
    constexpr std::uint32_t DSI_IER0_AE9IE_B_0x1 = 1;

    /** @brief Acknowledge error 10 interrupt enable */
    using DSI_IER0_AE10IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 10 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 10 enable. (value: 1)
     */
        /** @brief Interrupt on acknowledge error 10 disabled */
    constexpr std::uint32_t DSI_IER0_AE10IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 10 enable. */
    constexpr std::uint32_t DSI_IER0_AE10IE_B_0x1 = 1;

    /** @brief Acknowledge error 11 interrupt enable */
    using DSI_IER0_AE11IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 11 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 11 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 11 disabled */
    constexpr std::uint32_t DSI_IER0_AE11IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 11 enabled */
    constexpr std::uint32_t DSI_IER0_AE11IE_B_0x1 = 1;

    /** @brief Acknowledge error 12 interrupt enable */
    using DSI_IER0_AE12IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 12 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 12 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 12 disabled */
    constexpr std::uint32_t DSI_IER0_AE12IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 12 enabled */
    constexpr std::uint32_t DSI_IER0_AE12IE_B_0x1 = 1;

    /** @brief Acknowledge error 13 interrupt enable */
    using DSI_IER0_AE13IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 13 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 13 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 13 disabled */
    constexpr std::uint32_t DSI_IER0_AE13IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 13 enabled */
    constexpr std::uint32_t DSI_IER0_AE13IE_B_0x1 = 1;

    /** @brief Acknowledge error 14 interrupt enable */
    using DSI_IER0_AE14IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 14 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 14 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 14 disabled */
    constexpr std::uint32_t DSI_IER0_AE14IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 14 enabled */
    constexpr std::uint32_t DSI_IER0_AE14IE_B_0x1 = 1;

    /** @brief Acknowledge error 15 interrupt enable */
    using DSI_IER0_AE15IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 15 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 15 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 15 disabled */
    constexpr std::uint32_t DSI_IER0_AE15IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 15 enabled */
    constexpr std::uint32_t DSI_IER0_AE15IE_B_0x1 = 1;

    /** @brief PHY error 0 interrupt enable */
    using DSI_IER0_PE0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 0 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 0 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 0 disabled */
    constexpr std::uint32_t DSI_IER0_PE0IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 0 enabled */
    constexpr std::uint32_t DSI_IER0_PE0IE_B_0x1 = 1;

    /** @brief PHY error 1 interrupt enable */
    using DSI_IER0_PE1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 1 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 1 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 1 disabled */
    constexpr std::uint32_t DSI_IER0_PE1IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 1 enabled */
    constexpr std::uint32_t DSI_IER0_PE1IE_B_0x1 = 1;

    /** @brief PHY error 2 interrupt enable */
    using DSI_IER0_PE2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 2 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 2 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 2 disabled */
    constexpr std::uint32_t DSI_IER0_PE2IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 2 enabled */
    constexpr std::uint32_t DSI_IER0_PE2IE_B_0x1 = 1;

    /** @brief PHY error 3 interrupt enable */
    using DSI_IER0_PE3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 3 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 3 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 3 disabled */
    constexpr std::uint32_t DSI_IER0_PE3IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 3 enabled */
    constexpr std::uint32_t DSI_IER0_PE3IE_B_0x1 = 1;

    /** @brief PHY error 4 interrupt enable */
    using DSI_IER0_PE4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 4 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 4 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 4 disabled */
    constexpr std::uint32_t DSI_IER0_PE4IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 4 enabled */
    constexpr std::uint32_t DSI_IER0_PE4IE_B_0x1 = 1;

    /** @brief DSI Host interrupt enable register 1 */
    using DSI_IER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout high-speed transmission interrupt enable */
    using DSI_IER1_TOHSTXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on timeout high-speed transmission disabled (value: 0)
     *          - B_0x1: Interrupt on timeout high-speed transmission enabled (value: 1)
     */
        /** @brief Interrupt on timeout high-speed transmission disabled */
    constexpr std::uint32_t DSI_IER1_TOHSTXIE_B_0x0 = 0;
        /** @brief Interrupt on timeout high-speed transmission enabled */
    constexpr std::uint32_t DSI_IER1_TOHSTXIE_B_0x1 = 1;

    /** @brief Timeout low-power reception interrupt enable */
    using DSI_IER1_TOLPRXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on timeout low-power reception disabled (value: 0)
     *          - B_0x1: Interrupt on timeout low-power reception enabled (value: 1)
     */
        /** @brief Interrupt on timeout low-power reception disabled */
    constexpr std::uint32_t DSI_IER1_TOLPRXIE_B_0x0 = 0;
        /** @brief Interrupt on timeout low-power reception enabled */
    constexpr std::uint32_t DSI_IER1_TOLPRXIE_B_0x1 = 1;

    /** @brief ECC single-bit error interrupt enable */
    using DSI_IER1_ECCSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on ECC single-bit error disabled (value: 0)
     *          - B_0x1: Interrupt on ECC single-bit error enabled (value: 1)
     */
        /** @brief Interrupt on ECC single-bit error disabled */
    constexpr std::uint32_t DSI_IER1_ECCSEIE_B_0x0 = 0;
        /** @brief Interrupt on ECC single-bit error enabled */
    constexpr std::uint32_t DSI_IER1_ECCSEIE_B_0x1 = 1;

    /** @brief ECC multi-bit error interrupt enable */
    using DSI_IER1_ECCMEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on ECC multi-bit error disabled (value: 0)
     *          - B_0x1: Interrupt on ECC multi-bit error enabled (value: 1)
     */
        /** @brief Interrupt on ECC multi-bit error disabled */
    constexpr std::uint32_t DSI_IER1_ECCMEIE_B_0x0 = 0;
        /** @brief Interrupt on ECC multi-bit error enabled */
    constexpr std::uint32_t DSI_IER1_ECCMEIE_B_0x1 = 1;

    /** @brief CRC error interrupt enable */
    using DSI_IER1_CRCEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on CRC error disabled (value: 0)
     *          - B_0x1: Interrupt on CRC error enabled (value: 1)
     */
        /** @brief Interrupt on CRC error disabled */
    constexpr std::uint32_t DSI_IER1_CRCEIE_B_0x0 = 0;
        /** @brief Interrupt on CRC error enabled */
    constexpr std::uint32_t DSI_IER1_CRCEIE_B_0x1 = 1;

    /** @brief Packet size error interrupt enable */
    using DSI_IER1_PSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on packet size error disabled (value: 0)
     *          - B_0x1: Interrupt on packet size error enabled (value: 1)
     */
        /** @brief Interrupt on packet size error disabled */
    constexpr std::uint32_t DSI_IER1_PSEIE_B_0x0 = 0;
        /** @brief Interrupt on packet size error enabled */
    constexpr std::uint32_t DSI_IER1_PSEIE_B_0x1 = 1;

    /** @brief EoTp error interrupt enable */
    using DSI_IER1_EOTPEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on EoTp error disabled (value: 0)
     *          - B_0x1: Interrupt on EoTp error enabled (value: 1)
     */
        /** @brief Interrupt on EoTp error disabled */
    constexpr std::uint32_t DSI_IER1_EOTPEIE_B_0x0 = 0;
        /** @brief Interrupt on EoTp error enabled */
    constexpr std::uint32_t DSI_IER1_EOTPEIE_B_0x1 = 1;

    /** @brief LTDC payload write error interrupt enable */
    using DSI_IER1_LPWREIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on LTDC payload write error disabled (value: 0)
     *          - B_0x1: Interrupt on LTDC payload write error enabled (value: 1)
     */
        /** @brief Interrupt on LTDC payload write error disabled */
    constexpr std::uint32_t DSI_IER1_LPWREIE_B_0x0 = 0;
        /** @brief Interrupt on LTDC payload write error enabled */
    constexpr std::uint32_t DSI_IER1_LPWREIE_B_0x1 = 1;

    /** @brief Generic command write error interrupt enable */
    using DSI_IER1_GCWREIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic command write error disabled (value: 0)
     *          - B_0x1: Interrupt on generic command write error enabled (value: 1)
     */
        /** @brief Interrupt on generic command write error disabled */
    constexpr std::uint32_t DSI_IER1_GCWREIE_B_0x0 = 0;
        /** @brief Interrupt on generic command write error enabled */
    constexpr std::uint32_t DSI_IER1_GCWREIE_B_0x1 = 1;

    /** @brief Generic payload write error interrupt enable */
    using DSI_IER1_GPWREIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic payload write error disabled (value: 0)
     *          - B_0x1: Interrupt on generic payload write error enabled (value: 1)
     */
        /** @brief Interrupt on generic payload write error disabled */
    constexpr std::uint32_t DSI_IER1_GPWREIE_B_0x0 = 0;
        /** @brief Interrupt on generic payload write error enabled */
    constexpr std::uint32_t DSI_IER1_GPWREIE_B_0x1 = 1;

    /** @brief Generic payload transmit error interrupt enable */
    using DSI_IER1_GPTXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic payload transmit error disabled (value: 0)
     *          - B_0x1: Interrupt on generic payload transmit error enabled (value: 1)
     */
        /** @brief Interrupt on generic payload transmit error disabled */
    constexpr std::uint32_t DSI_IER1_GPTXEIE_B_0x0 = 0;
        /** @brief Interrupt on generic payload transmit error enabled */
    constexpr std::uint32_t DSI_IER1_GPTXEIE_B_0x1 = 1;

    /** @brief Generic payload read error interrupt enable */
    using DSI_IER1_GPRDEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic payload read error disabled (value: 0)
     *          - B_0x1: Interrupt on generic payload read error enabled (value: 1)
     */
        /** @brief Interrupt on generic payload read error disabled */
    constexpr std::uint32_t DSI_IER1_GPRDEIE_B_0x0 = 0;
        /** @brief Interrupt on generic payload read error enabled */
    constexpr std::uint32_t DSI_IER1_GPRDEIE_B_0x1 = 1;

    /** @brief Generic payload receive error interrupt enable */
    using DSI_IER1_GPRXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic payload receive error disabled (value: 0)
     *          - B_0x1: Interrupt on generic payload receive error enabled (value: 1)
     */
        /** @brief Interrupt on generic payload receive error disabled */
    constexpr std::uint32_t DSI_IER1_GPRXEIE_B_0x0 = 0;
        /** @brief Interrupt on generic payload receive error enabled */
    constexpr std::uint32_t DSI_IER1_GPRXEIE_B_0x1 = 1;

    /** @brief Payload buffer underflow error interrupt enable */
    using DSI_IER1_PBUEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on payload buffer underflow error disabled (value: 0)
     *          - B_0x1: Interrupt on payload buffer underflow error enabled (value: 1)
     */
        /** @brief Interrupt on payload buffer underflow error disabled */
    constexpr std::uint32_t DSI_IER1_PBUEIE_B_0x0 = 0;
        /** @brief Interrupt on payload buffer underflow error enabled */
    constexpr std::uint32_t DSI_IER1_PBUEIE_B_0x1 = 1;

    /** @brief DSI Host force interrupt register 0 */
    using DSI_FIR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 0 */
    using DSI_FIR0_FAE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 1 */
    using DSI_FIR0_FAE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 2 */
    using DSI_FIR0_FAE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 3 */
    using DSI_FIR0_FAE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 4 */
    using DSI_FIR0_FAE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 5 */
    using DSI_FIR0_FAE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 6 */
    using DSI_FIR0_FAE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 7 */
    using DSI_FIR0_FAE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 8 */
    using DSI_FIR0_FAE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 9 */
    using DSI_FIR0_FAE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 10 */
    using DSI_FIR0_FAE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 11 */
    using DSI_FIR0_FAE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 12 */
    using DSI_FIR0_FAE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 13 */
    using DSI_FIR0_FAE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 14 */
    using DSI_FIR0_FAE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 15 */
    using DSI_FIR0_FAE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 0 */
    using DSI_FIR0_FPE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 1 */
    using DSI_FIR0_FPE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 2 */
    using DSI_FIR0_FPE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 3 */
    using DSI_FIR0_FPE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 4 */
    using DSI_FIR0_FPE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host force interrupt register 1 */
    using DSI_FIR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force timeout high-speed transmission */
    using DSI_FIR1_FTOHSTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force timeout low-power reception */
    using DSI_FIR1_FTOLPRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force ECC single-bit error */
    using DSI_FIR1_FECCSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force ECC multi-bit error */
    using DSI_FIR1_FECCME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force CRC error */
    using DSI_FIR1_FCRCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force packet size error */
    using DSI_FIR1_FPSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force EoTp error */
    using DSI_FIR1_FEOTPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force LTDC payload write error */
    using DSI_FIR1_FLPWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic command write error */
    using DSI_FIR1_FGCWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic payload write error */
    using DSI_FIR1_FGPWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic payload transmit error */
    using DSI_FIR1_FGPTXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic payload read error */
    using DSI_FIR1_FGPRDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic payload receive error */
    using DSI_FIR1_FGPRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force payload buffer underflow error */
    using DSI_FIR1_FPBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host data lane timer read configuration register */
    using DSI_DLTRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum read time */
    using DSI_DLTRCR_MRD_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video shadow control register */
    using DSI_VSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable */
    using DSI_VSCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Register update is disabled. (value: 0)
     *          - B_0x1: Register update is enabled. (value: 1)
     */
        /** @brief Register update is disabled. */
    constexpr std::uint32_t DSI_VSCR_EN_B_0x0 = 0;
        /** @brief Register update is enabled. */
    constexpr std::uint32_t DSI_VSCR_EN_B_0x1 = 1;

    /** @brief Update register */
    using DSI_VSCR_UR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No update requested (value: 0)
     *          - B_0x1: Register update requested (value: 1)
     */
        /** @brief No update requested */
    constexpr std::uint32_t DSI_VSCR_UR_B_0x0 = 0;
        /** @brief Register update requested */
    constexpr std::uint32_t DSI_VSCR_UR_B_0x1 = 1;

    /** @brief DSI Host LTDC current VCID register */
    using DSI_LCVCIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel ID */
    using DSI_LCVCIDR_VCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host LTDC current color coding register */
    using DSI_LCCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color coding */
    using DSI_LCCCR_COLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 16-bit configuration 1 (value: 0)
     *          - B_0x1: 16-bit configuration 2 (value: 1)
     *          - B_0x2: 16-bit configuration 3 (value: 2)
     *          - B_0x3: 18-bit configuration 1 (value: 3)
     *          - B_0x4: 18-bit configuration 2 (value: 4)
     *          - B_0x5: 24-bit (value: 5)
     */
        /** @brief 16-bit configuration 1 */
    constexpr std::uint32_t DSI_LCCCR_COLC_B_0x0 = 0;
        /** @brief 16-bit configuration 2 */
    constexpr std::uint32_t DSI_LCCCR_COLC_B_0x1 = 1;
        /** @brief 16-bit configuration 3 */
    constexpr std::uint32_t DSI_LCCCR_COLC_B_0x2 = 2;
        /** @brief 18-bit configuration 1 */
    constexpr std::uint32_t DSI_LCCCR_COLC_B_0x3 = 3;
        /** @brief 18-bit configuration 2 */
    constexpr std::uint32_t DSI_LCCCR_COLC_B_0x4 = 4;
        /** @brief 24-bit */
    constexpr std::uint32_t DSI_LCCCR_COLC_B_0x5 = 5;

    /** @brief Loosely packed enable */
    using DSI_LCCCR_LPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Loosely packed variant disabled (value: 0)
     *          - B_0x1: Loosely packed variant enabled (value: 1)
     */
        /** @brief Loosely packed variant disabled */
    constexpr std::uint32_t DSI_LCCCR_LPE_B_0x0 = 0;
        /** @brief Loosely packed variant enabled */
    constexpr std::uint32_t DSI_LCCCR_LPE_B_0x1 = 1;

    /** @brief DSI Host low-power mode current configuration register */
    using DSI_LPMCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VACT largest packet size */
    using DSI_LPMCCR_VLPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Largest packet size */
    using DSI_LPMCCR_LPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video mode current configuration register */
    using DSI_VMCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Video mode type */
    using DSI_VMCCR_VMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-burst with sync pulses (value: 0)
     *          - B_0x1: Non-burst with sync events (value: 1)
     */
        /** @brief Non-burst with sync pulses */
    constexpr std::uint32_t DSI_VMCCR_VMT_B_0x0 = 0;
        /** @brief Non-burst with sync events */
    constexpr std::uint32_t DSI_VMCCR_VMT_B_0x1 = 1;

    /** @brief Low-power vertical sync time enable */
    using DSI_VMCCR_LPVSAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VSA is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VSA is enabled (value: 1)
     */
        /** @brief Return to low-power inside the VSA is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVSAE_B_0x0 = 0;
        /** @brief Return to low-power inside the VSA is enabled */
    constexpr std::uint32_t DSI_VMCCR_LPVSAE_B_0x1 = 1;

    /** @brief Low-power vertical back-porch enable */
    using DSI_VMCCR_LPVBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VBP is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VBP is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VBP is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVBPE_B_0x0 = 0;
        /** @brief Return to low-power inside the VBP is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVBPE_B_0x1 = 1;

    /** @brief Low-power vertical front-porch enable */
    using DSI_VMCCR_LPVFPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VFP is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VFP is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VFP is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVFPE_B_0x0 = 0;
        /** @brief Return to low-power inside the VFP is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVFPE_B_0x1 = 1;

    /** @brief Low-power vertical active enable */
    using DSI_VMCCR_LPVAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VACT is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VACT is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VACT is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVAE_B_0x0 = 0;
        /** @brief Return to low-power inside the VACT is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVAE_B_0x1 = 1;

    /** @brief Low-power horizontal back-porch enable */
    using DSI_VMCCR_LPHBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the HBP period is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the HBP period is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the HBP period is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPHBPE_B_0x0 = 0;
        /** @brief Return to low-power inside the HBP period is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPHBPE_B_0x1 = 1;

    /** @brief Low-power horizontal front-porch enable */
    using DSI_VMCCR_LPHFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the HFP period is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the HFP period is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the HFP period is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPHFE_B_0x0 = 0;
        /** @brief Return to low-power inside the HFP period is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPHFE_B_0x1 = 1;

    /** @brief Frame BTA acknowledge enable */
    using DSI_VMCCR_FBTAAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acknowledge response at the end of a frame is disabled. (value: 0)
     *          - B_0x1: Acknowledge response at the end of a frame is enabled. (value: 1)
     */
        /** @brief Acknowledge response at the end of a frame is disabled. */
    constexpr std::uint32_t DSI_VMCCR_FBTAAE_B_0x0 = 0;
        /** @brief Acknowledge response at the end of a frame is enabled. */
    constexpr std::uint32_t DSI_VMCCR_FBTAAE_B_0x1 = 1;

    /** @brief Low-power command enable */
    using DSI_VMCCR_LPCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command transmission in low-power mode is disabled. (value: 0)
     *          - B_0x1: Command transmission in low-power mode is enabled. (value: 1)
     */
        /** @brief Command transmission in low-power mode is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPCE_B_0x0 = 0;
        /** @brief Command transmission in low-power mode is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPCE_B_0x1 = 1;

    /** @brief DSI Host video packet current configuration register */
    using DSI_VPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Video packet size */
    using DSI_VPCCR_VPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video chunks current configuration register */
    using DSI_VCCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of chunks */
    using DSI_VCCCR_NUMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video null packet current configuration register */
    using DSI_VNPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Null packet size */
    using DSI_VNPCCR_NPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video HSA current configuration register */
    using DSI_VHSACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal synchronism active duration */
    using DSI_VHSACCR_HSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video HBP current configuration register */
    using DSI_VHBPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal back-porch duration */
    using DSI_VHBPCCR_HBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video line current configuration register */
    using DSI_VLCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal line duration */
    using DSI_VLCCR_HLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VSA current configuration register */
    using DSI_VVSACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronism active duration */
    using DSI_VVSACCR_VSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VBP current configuration register */
    using DSI_VVBPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical back-porch duration */
    using DSI_VVBPCCR_VBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VFP current configuration register */
    using DSI_VVFPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical front-porch duration */
    using DSI_VVFPCCR_VFP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VA current configuration register */
    using DSI_VVACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical active duration */
    using DSI_VVACCR_VA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host FIFO and buffer status register */
    using DSI_FBSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Video mode command write FIFO empty */
    using DSI_FBSR_VCWFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write command FIFO not empty (value: 0)
     *          - B_0x1: Write command FIFO empty (value: 1)
     */
        /** @brief Write command FIFO not empty */
    constexpr std::uint32_t DSI_FBSR_VCWFE_B_0x0 = 0;
        /** @brief Write command FIFO empty */
    constexpr std::uint32_t DSI_FBSR_VCWFE_B_0x1 = 1;

    /** @brief Video mode command write FIFO full */
    using DSI_FBSR_VCWFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write command FIFO not full (value: 0)
     *          - B_0x1: Write command FIFO full (value: 1)
     */
        /** @brief Write command FIFO not full */
    constexpr std::uint32_t DSI_FBSR_VCWFF_B_0x0 = 0;
        /** @brief Write command FIFO full */
    constexpr std::uint32_t DSI_FBSR_VCWFF_B_0x1 = 1;

    /** @brief Video mode payload write FIFO empty */
    using DSI_FBSR_VPWFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not empty (value: 0)
     *          - B_0x1: Write payload FIFO empty (value: 1)
     */
        /** @brief Write payload FIFO not empty */
    constexpr std::uint32_t DSI_FBSR_VPWFE_B_0x0 = 0;
        /** @brief Write payload FIFO empty */
    constexpr std::uint32_t DSI_FBSR_VPWFE_B_0x1 = 1;

    /** @brief Video mode payload write FIFO full */
    using DSI_FBSR_VPWFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not full (value: 0)
     *          - B_0x1: Write payload FIFO full (value: 1)
     */
        /** @brief Write payload FIFO not full */
    constexpr std::uint32_t DSI_FBSR_VPWFF_B_0x0 = 0;
        /** @brief Write payload FIFO full */
    constexpr std::uint32_t DSI_FBSR_VPWFF_B_0x1 = 1;

    /** @brief Adapted command mode command write FIFO empty */
    using DSI_FBSR_ACWFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write command FIFO not empty (value: 0)
     *          - B_0x1: Write command FIFO empty (value: 1)
     */
        /** @brief Write command FIFO not empty */
    constexpr std::uint32_t DSI_FBSR_ACWFE_B_0x0 = 0;
        /** @brief Write command FIFO empty */
    constexpr std::uint32_t DSI_FBSR_ACWFE_B_0x1 = 1;

    /** @brief Adapted command mode command write FIFO full */
    using DSI_FBSR_ACWFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write command FIFO not full (value: 0)
     *          - B_0x1: Write command FIFO full (value: 1)
     */
        /** @brief Write command FIFO not full */
    constexpr std::uint32_t DSI_FBSR_ACWFF_B_0x0 = 0;
        /** @brief Write command FIFO full */
    constexpr std::uint32_t DSI_FBSR_ACWFF_B_0x1 = 1;

    /** @brief Adapted command mode payload write FIFO empty */
    using DSI_FBSR_APWFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not empty (value: 0)
     *          - B_0x1: Write payload FIFO empty (value: 1)
     */
        /** @brief Write payload FIFO not empty */
    constexpr std::uint32_t DSI_FBSR_APWFE_B_0x0 = 0;
        /** @brief Write payload FIFO empty */
    constexpr std::uint32_t DSI_FBSR_APWFE_B_0x1 = 1;

    /** @brief Adapted command mode payload write FIFO full */
    using DSI_FBSR_APWFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not full (value: 0)
     *          - B_0x1: Write payload FIFO full (value: 1)
     */
        /** @brief Write payload FIFO not full */
    constexpr std::uint32_t DSI_FBSR_APWFF_B_0x0 = 0;
        /** @brief Write payload FIFO full */
    constexpr std::uint32_t DSI_FBSR_APWFF_B_0x1 = 1;

    /** @brief Video mode payload buffer empty */
    using DSI_FBSR_VPBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Payload internal buffer not empty (value: 0)
     *          - B_0x1: Payload internal buffer empty (value: 1)
     */
        /** @brief Payload internal buffer not empty */
    constexpr std::uint32_t DSI_FBSR_VPBE_B_0x0 = 0;
        /** @brief Payload internal buffer empty */
    constexpr std::uint32_t DSI_FBSR_VPBE_B_0x1 = 1;

    /** @brief Video mode payload buffer full */
    using DSI_FBSR_VPBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Payload internal buffer not full (value: 0)
     *          - B_0x1: Payload internal buffer full (value: 1)
     */
        /** @brief Payload internal buffer not full */
    constexpr std::uint32_t DSI_FBSR_VPBF_B_0x0 = 0;
        /** @brief Payload internal buffer full */
    constexpr std::uint32_t DSI_FBSR_VPBF_B_0x1 = 1;

    /** @brief Adapted command mode command buffer empty */
    using DSI_FBSR_ACBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command internal buffer not empty (value: 0)
     *          - B_0x1: Command internal buffer empty (value: 1)
     */
        /** @brief Command internal buffer not empty */
    constexpr std::uint32_t DSI_FBSR_ACBE_B_0x0 = 0;
        /** @brief Command internal buffer empty */
    constexpr std::uint32_t DSI_FBSR_ACBE_B_0x1 = 1;

    /** @brief Adapted command mode command buffer full */
    using DSI_FBSR_ACBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command internal buffer not full (value: 0)
     *          - B_0x1: Command internal buffer full (value: 1)
     */
        /** @brief Command internal buffer not full */
    constexpr std::uint32_t DSI_FBSR_ACBF_B_0x0 = 0;
        /** @brief Command internal buffer full */
    constexpr std::uint32_t DSI_FBSR_ACBF_B_0x1 = 1;

    /** @brief Adapted command mode payload buffer empty */
    using DSI_FBSR_APBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Payload internal buffer not empty (value: 0)
     *          - B_0x1: Payload internal buffer empty (value: 1)
     */
        /** @brief Payload internal buffer not empty */
    constexpr std::uint32_t DSI_FBSR_APBE_B_0x0 = 0;
        /** @brief Payload internal buffer empty */
    constexpr std::uint32_t DSI_FBSR_APBE_B_0x1 = 1;

    /** @brief Adapted command mode payload buffer full */
    using DSI_FBSR_APBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Payload internal buffer not full (value: 0)
     *          - B_0x1: Payload internal buffer full (value: 1)
     */
        /** @brief Payload internal buffer not full */
    constexpr std::uint32_t DSI_FBSR_APBF_B_0x0 = 0;
        /** @brief Payload internal buffer full */
    constexpr std::uint32_t DSI_FBSR_APBF_B_0x1 = 1;

    /** @brief DSI Wrapper configuration register */
    using DSI_WCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI mode */
    using DSI_WCFGR_DSIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Video mode (value: 0)
     *          - B_0x1: Adapted command mode (value: 1)
     */
        /** @brief Video mode */
    constexpr std::uint32_t DSI_WCFGR_DSIM_B_0x0 = 0;
        /** @brief Adapted command mode */
    constexpr std::uint32_t DSI_WCFGR_DSIM_B_0x1 = 1;

    /** @brief Color multiplexing */
    using DSI_WCFGR_COLMUX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 16-bit configuration 1 (value: 0)
     *          - B_0x1: 16-bit configuration 2 (value: 1)
     *          - B_0x2: 16-bit configuration 3 (value: 2)
     *          - B_0x3: 18-bit configuration 1 (value: 3)
     *          - B_0x4: 18-bit configuration 2 (value: 4)
     *          - B_0x5: 24-bit (value: 5)
     */
        /** @brief 16-bit configuration 1 */
    constexpr std::uint32_t DSI_WCFGR_COLMUX_B_0x0 = 0;
        /** @brief 16-bit configuration 2 */
    constexpr std::uint32_t DSI_WCFGR_COLMUX_B_0x1 = 1;
        /** @brief 16-bit configuration 3 */
    constexpr std::uint32_t DSI_WCFGR_COLMUX_B_0x2 = 2;
        /** @brief 18-bit configuration 1 */
    constexpr std::uint32_t DSI_WCFGR_COLMUX_B_0x3 = 3;
        /** @brief 18-bit configuration 2 */
    constexpr std::uint32_t DSI_WCFGR_COLMUX_B_0x4 = 4;
        /** @brief 24-bit */
    constexpr std::uint32_t DSI_WCFGR_COLMUX_B_0x5 = 5;

    /** @brief TE source */
    using DSI_WCFGR_TESRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI Link (value: 0)
     *          - B_0x1: External pin (value: 1)
     */
        /** @brief DSI Link */
    constexpr std::uint32_t DSI_WCFGR_TESRC_B_0x0 = 0;
        /** @brief External pin */
    constexpr std::uint32_t DSI_WCFGR_TESRC_B_0x1 = 1;

    /** @brief TE polarity */
    using DSI_WCFGR_TEPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rising edge. (value: 0)
     *          - B_0x1: falling edge. (value: 1)
     */
        /** @brief rising edge. */
    constexpr std::uint32_t DSI_WCFGR_TEPOL_B_0x0 = 0;
        /** @brief falling edge. */
    constexpr std::uint32_t DSI_WCFGR_TEPOL_B_0x1 = 1;

    /** @brief Automatic refresh */
    using DSI_WCFGR_AR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: automatic refresh mode disabled (value: 0)
     *          - B_0x1: automatic refresh mode enabled (value: 1)
     */
        /** @brief automatic refresh mode disabled */
    constexpr std::uint32_t DSI_WCFGR_AR_B_0x0 = 0;
        /** @brief automatic refresh mode enabled */
    constexpr std::uint32_t DSI_WCFGR_AR_B_0x1 = 1;

    /** @brief VSync polarity */
    using DSI_WCFGR_VSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC halted on a falling edge (value: 0)
     *          - B_0x1: LTDC halted on a rising edge (value: 1)
     */
        /** @brief LTDC halted on a falling edge */
    constexpr std::uint32_t DSI_WCFGR_VSPOL_B_0x0 = 0;
        /** @brief LTDC halted on a rising edge */
    constexpr std::uint32_t DSI_WCFGR_VSPOL_B_0x1 = 1;

    /** @brief DSI Wrapper control register */
    using DSI_WCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color mode */
    using DSI_WCR_COLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full color mode (value: 0)
     *          - B_0x1: Eight color mode (value: 1)
     */
        /** @brief Full color mode */
    constexpr std::uint32_t DSI_WCR_COLM_B_0x0 = 0;
        /** @brief Eight color mode */
    constexpr std::uint32_t DSI_WCR_COLM_B_0x1 = 1;

    /** @brief Shutdown */
    using DSI_WCR_SHTDN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: display ON (value: 0)
     *          - B_0x1: display OFF (value: 1)
     */
        /** @brief display ON */
    constexpr std::uint32_t DSI_WCR_SHTDN_B_0x0 = 0;
        /** @brief display OFF */
    constexpr std::uint32_t DSI_WCR_SHTDN_B_0x1 = 1;

    /** @brief LTDC enable */
    using DSI_WCR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC disabled (value: 0)
     *          - B_0x1: LTDC enabled (value: 1)
     */
        /** @brief LTDC disabled */
    constexpr std::uint32_t DSI_WCR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC enabled */
    constexpr std::uint32_t DSI_WCR_LTDCEN_B_0x1 = 1;

    /** @brief DSI enable */
    using DSI_WCR_DSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI disabled (value: 0)
     *          - B_0x1: DSI enabled (value: 1)
     */
        /** @brief DSI disabled */
    constexpr std::uint32_t DSI_WCR_DSIEN_B_0x0 = 0;
        /** @brief DSI enabled */
    constexpr std::uint32_t DSI_WCR_DSIEN_B_0x1 = 1;

    /** @brief DSI Wrapper interrupt enable register */
    using DSI_WIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tearing effect interrupt enable */
    using DSI_WIER_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tearing effect interrupt disabled (value: 0)
     *          - B_0x1: Tearing effect interrupt enabled (value: 1)
     */
        /** @brief Tearing effect interrupt disabled */
    constexpr std::uint32_t DSI_WIER_TEIE_B_0x0 = 0;
        /** @brief Tearing effect interrupt enabled */
    constexpr std::uint32_t DSI_WIER_TEIE_B_0x1 = 1;

    /** @brief End of refresh interrupt enable */
    using DSI_WIER_ERIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of refresh interrupt disabled (value: 0)
     *          - B_0x1: End of refresh interrupt enabled (value: 1)
     */
        /** @brief End of refresh interrupt disabled */
    constexpr std::uint32_t DSI_WIER_ERIE_B_0x0 = 0;
        /** @brief End of refresh interrupt enabled */
    constexpr std::uint32_t DSI_WIER_ERIE_B_0x1 = 1;

    /** @brief PLL lock interrupt enable */
    using DSI_WIER_PLLLIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL lock interrupt disabled (value: 0)
     *          - B_0x1: PLL lock interrupt enabled (value: 1)
     */
        /** @brief PLL lock interrupt disabled */
    constexpr std::uint32_t DSI_WIER_PLLLIE_B_0x0 = 0;
        /** @brief PLL lock interrupt enabled */
    constexpr std::uint32_t DSI_WIER_PLLLIE_B_0x1 = 1;

    /** @brief PLL unlock interrupt enable */
    using DSI_WIER_PLLUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL unlock interrupt disabled (value: 0)
     *          - B_0x1: PLL unlock interrupt enabled (value: 1)
     */
        /** @brief PLL unlock interrupt disabled */
    constexpr std::uint32_t DSI_WIER_PLLUIE_B_0x0 = 0;
        /** @brief PLL unlock interrupt enabled */
    constexpr std::uint32_t DSI_WIER_PLLUIE_B_0x1 = 1;

    /** @brief DSI Wrapper interrupt and status register */
    using DSI_WISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tearing effect interrupt flag */
    using DSI_WISR_TEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No tearing effect event occurred (value: 0)
     *          - B_0x1: Tearing effect event occurred (value: 1)
     */
        /** @brief No tearing effect event occurred */
    constexpr std::uint32_t DSI_WISR_TEIF_B_0x0 = 0;
        /** @brief Tearing effect event occurred */
    constexpr std::uint32_t DSI_WISR_TEIF_B_0x1 = 1;

    /** @brief End of refresh interrupt flag */
    using DSI_WISR_ERIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of refresh event occurred (value: 0)
     *          - B_0x1: End of refresh event occurred (value: 1)
     */
        /** @brief No end of refresh event occurred */
    constexpr std::uint32_t DSI_WISR_ERIF_B_0x0 = 0;
        /** @brief End of refresh event occurred */
    constexpr std::uint32_t DSI_WISR_ERIF_B_0x1 = 1;

    /** @brief Busy flag */
    using DSI_WISR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transfer on going (value: 0)
     *          - B_0x1: Transfer on going (value: 1)
     */
        /** @brief No transfer on going */
    constexpr std::uint32_t DSI_WISR_BUSY_B_0x0 = 0;
        /** @brief Transfer on going */
    constexpr std::uint32_t DSI_WISR_BUSY_B_0x1 = 1;

    /** @brief PLL lock status */
    using DSI_WISR_PLLLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL is unlocked. (value: 0)
     *          - B_0x1: PLL is locked. (value: 1)
     */
        /** @brief PLL is unlocked. */
    constexpr std::uint32_t DSI_WISR_PLLLS_B_0x0 = 0;
        /** @brief PLL is locked. */
    constexpr std::uint32_t DSI_WISR_PLLLS_B_0x1 = 1;

    /** @brief PLL lock interrupt flag */
    using DSI_WISR_PLLLIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No PLL lock event occurred (value: 0)
     *          - B_0x1: PLL lock event occurred (value: 1)
     */
        /** @brief No PLL lock event occurred */
    constexpr std::uint32_t DSI_WISR_PLLLIF_B_0x0 = 0;
        /** @brief PLL lock event occurred */
    constexpr std::uint32_t DSI_WISR_PLLLIF_B_0x1 = 1;

    /** @brief PLL unlock interrupt flag */
    using DSI_WISR_PLLUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No PLL unlock event occurred (value: 0)
     *          - B_0x1: PLL unlock event occurred (value: 1)
     */
        /** @brief No PLL unlock event occurred */
    constexpr std::uint32_t DSI_WISR_PLLUIF_B_0x0 = 0;
        /** @brief PLL unlock event occurred */
    constexpr std::uint32_t DSI_WISR_PLLUIF_B_0x1 = 1;

    /** @brief DSI Wrapper interrupt flag clear register */
    using DSI_WIFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear tearing effect interrupt flag */
    using DSI_WIFCR_CTEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear end of refresh interrupt flag */
    using DSI_WIFCR_CERIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear PLL lock interrupt flag */
    using DSI_WIFCR_CPLLLIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear PLL unlock interrupt flag */
    using DSI_WIFCR_CPLLUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Wrapper PHY configuration register 0 */
    using DSI_WPCR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Swap clock lane pins */
    using DSI_WPCR0_SWCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular clock lane pin configuration (value: 0)
     *          - B_0x1: Swapped clock lane pin (value: 1)
     */
        /** @brief Regular clock lane pin configuration */
    constexpr std::uint32_t DSI_WPCR0_SWCL_B_0x0 = 0;
        /** @brief Swapped clock lane pin */
    constexpr std::uint32_t DSI_WPCR0_SWCL_B_0x1 = 1;

    /** @brief Swap data lane 0 pins */
    using DSI_WPCR0_SWDL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular clock lane pin configuration (value: 0)
     *          - B_0x1: Swapped clock lane pin (value: 1)
     */
        /** @brief Regular clock lane pin configuration */
    constexpr std::uint32_t DSI_WPCR0_SWDL0_B_0x0 = 0;
        /** @brief Swapped clock lane pin */
    constexpr std::uint32_t DSI_WPCR0_SWDL0_B_0x1 = 1;

    /** @brief Swap data lane 1 pins */
    using DSI_WPCR0_SWDL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular clock lane pin configuration (value: 0)
     *          - B_0x1: Swapped clock lane pin (value: 1)
     */
        /** @brief Regular clock lane pin configuration */
    constexpr std::uint32_t DSI_WPCR0_SWDL1_B_0x0 = 0;
        /** @brief Swapped clock lane pin */
    constexpr std::uint32_t DSI_WPCR0_SWDL1_B_0x1 = 1;

    /** @brief Force in TX Stop mode the clock lane */
    using DSI_WPCR0_FTXSMCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Force the clock lane in TX Stop mode (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t DSI_WPCR0_FTXSMCL_B_0x0 = 0;
        /** @brief Force the clock lane in TX Stop mode */
    constexpr std::uint32_t DSI_WPCR0_FTXSMCL_B_0x1 = 1;

    /** @brief Force in TX Stop mode the data lanes */
    using DSI_WPCR0_FTXSMDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Force the data lanes in TX Stop mode (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t DSI_WPCR0_FTXSMDL_B_0x0 = 0;
        /** @brief Force the data lanes in TX Stop mode */
    constexpr std::uint32_t DSI_WPCR0_FTXSMDL_B_0x1 = 1;

    /** @brief DSI Wrapper regulator and PLL control register */
    using DSI_WRPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL enable */
    using DSI_WRPCR_PLLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL disabled (value: 0)
     *          - B_0x1: PLL enabled (value: 1)
     */
        /** @brief PLL disabled */
    constexpr std::uint32_t DSI_WRPCR_PLLEN_B_0x0 = 0;
        /** @brief PLL enabled */
    constexpr std::uint32_t DSI_WRPCR_PLLEN_B_0x1 = 1;

    /** @brief PLL loop division factor */
    using DSI_WRPCR_NDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL loop divided by 1x2 (value: 0)
     *          - B_0x1: PLL loop divided by 1x2 (value: 1)
     */
        /** @brief PLL loop divided by 1x2 */
    constexpr std::uint32_t DSI_WRPCR_NDIV_B_0x0 = 0;
        /** @brief PLL loop divided by 1x2 */
    constexpr std::uint32_t DSI_WRPCR_NDIV_B_0x1 = 1;

    /** @brief PLL input division factor */
    using DSI_WRPCR_IDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL input divided by 1 (value: 0)
     *          - B_0x1: PLL input divided by 1 (value: 1)
     */
        /** @brief PLL input divided by 1 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x0 = 0;
        /** @brief PLL input divided by 1 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x1 = 1;

    /** @brief PLL output division factor */
    using DSI_WRPCR_ODF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL output divided by 1 (value: 0)
     *          - B_0x1: PLL output divided by 1 (value: 1)
     */
        /** @brief PLL output divided by 1 */
    constexpr std::uint32_t DSI_WRPCR_ODF_B_0x0 = 0;
        /** @brief PLL output divided by 1 */
    constexpr std::uint32_t DSI_WRPCR_ODF_B_0x1 = 1;

    /** @brief DSI bias configuration register */
    using DSI_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x808, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power-up */
    using DSI_BCFGR_PWRUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reference bias is powered down. (value: 0)
     *          - B_0x1: Reference bias is powered up. (value: 1)
     */
        /** @brief Reference bias is powered down. */
    constexpr std::uint32_t DSI_BCFGR_PWRUP_B_0x0 = 0;
        /** @brief Reference bias is powered up. */
    constexpr std::uint32_t DSI_BCFGR_PWRUP_B_0x1 = 1;

    /** @brief DSI D-PHY clock band control register */
    using DSI_DPCBCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Band control */
    using DSI_DPCBCR_BC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 80 to 100 MHz (value: 0)
     *          - B_0x1: 100 to 120 MHz (value: 1)
     *          - B_0x2: 120 to 160 MHz (value: 2)
     *          - B_0x3: 160 to 200 MHz (value: 3)
     *          - B_0x4: 200 to 240 MHz (value: 4)
     *          - B_0x5: 240 to 320 MHz (value: 5)
     *          - B_0x6: 320 to 390 MHz (value: 6)
     *          - B_0x7: 390 to 450 MHz (value: 7)
     *          - B_0x8: 450 to 510 MHz (value: 8)
     */
        /** @brief 80 to 100 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x0 = 0;
        /** @brief 100 to 120 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x1 = 1;
        /** @brief 120 to 160 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x2 = 2;
        /** @brief 160 to 200 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x3 = 3;
        /** @brief 200 to 240 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x4 = 4;
        /** @brief 240 to 320 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x5 = 5;
        /** @brief 320 to 390 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x6 = 6;
        /** @brief 390 to 450 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x7 = 7;
        /** @brief 450 to 510 MHz */
    constexpr std::uint32_t DSI_DPCBCR_BC_B_0x8 = 8;

    /** @brief DSI D-PHY clock skew rate control register */
    using DSI_DPCSRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slew rate control */
    using DSI_DPCSRCR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xE: 80 to 750 Mbit/s (value: 14)
     */
        /** @brief 80 to 750 Mbit/s */
    constexpr std::uint32_t DSI_DPCSRCR_SRC_B_0xE = 14;

    /** @brief DSI D-PHY data lane 0 band control register */
    using DSI_DPDL0BCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Band control */
    using DSI_DPDL0BCR_BC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 80 to 100 MHz (value: 0)
     *          - B_0x1: 100 to 120 MHz (value: 1)
     *          - B_0x2: 120 to 160 MHz (value: 2)
     *          - B_0x3: 160 to 200 MHz (value: 3)
     *          - B_0x4: 200 to 240 MHz (value: 4)
     *          - B_0x5: 240 to 320 MHz (value: 5)
     *          - B_0x6: 320 to 390 MHz (value: 6)
     *          - B_0x7: 390 to 450 MHz (value: 7)
     *          - B_0x8: 450 to 510 MHz (value: 8)
     */
        /** @brief 80 to 100 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x0 = 0;
        /** @brief 100 to 120 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x1 = 1;
        /** @brief 120 to 160 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x2 = 2;
        /** @brief 160 to 200 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x3 = 3;
        /** @brief 200 to 240 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x4 = 4;
        /** @brief 240 to 320 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x5 = 5;
        /** @brief 320 to 390 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x6 = 6;
        /** @brief 390 to 450 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x7 = 7;
        /** @brief 450 to 510 MHz */
    constexpr std::uint32_t DSI_DPDL0BCR_BC_B_0x8 = 8;

    /** @brief DSI D-PHY data lane 0 skew rate control register */
    using DSI_DPDL0SRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slew rate control */
    using DSI_DPDL0SRCR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xE: 80 to 750 Mbit/s (value: 14)
     */
        /** @brief 80 to 750 Mbit/s */
    constexpr std::uint32_t DSI_DPDL0SRCR_SRC_B_0xE = 14;

    /** @brief DSI D-PHY data lane 1 band control register */
    using DSI_DPDL1BCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Band control */
    using DSI_DPDL1BCR_BC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 80 to 100 MHz (value: 0)
     *          - B_0x1: 100 to 120 MHz (value: 1)
     *          - B_0x2: 120 to 160 MHz (value: 2)
     *          - B_0x3: 160 to 200 MHz (value: 3)
     *          - B_0x4: 200 to 240 MHz (value: 4)
     *          - B_0x5: 240 to 320 MHz (value: 5)
     *          - B_0x6: 320 to 390 MHz (value: 6)
     *          - B_0x7: 390 to 450 MHz (value: 7)
     *          - B_0x8: 450 to 510 MHz (value: 8)
     */
        /** @brief 80 to 100 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x0 = 0;
        /** @brief 100 to 120 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x1 = 1;
        /** @brief 120 to 160 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x2 = 2;
        /** @brief 160 to 200 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x3 = 3;
        /** @brief 200 to 240 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x4 = 4;
        /** @brief 240 to 320 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x5 = 5;
        /** @brief 320 to 390 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x6 = 6;
        /** @brief 390 to 450 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x7 = 7;
        /** @brief 450 to 510 MHz */
    constexpr std::uint32_t DSI_DPDL1BCR_BC_B_0x8 = 8;

    /** @brief DSI D-PHY data lane 1 skew rate control register */
    using DSI_DPDL1SRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slew rate control */
    using DSI_DPDL1SRCR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xE: 80 to 750 Mbit/s (value: 14)
     */
        /** @brief 80 to 750 Mbit/s */
    constexpr std::uint32_t DSI_DPDL1SRCR_SRC_B_0xE = 14;

}

#endif
