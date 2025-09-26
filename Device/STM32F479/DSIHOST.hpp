/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F479_DSIHOST_HPP
#define EMBEDDED_PP_STM32F479_DSIHOST_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DSI Host */
namespace STM32F479::DSIHOST {

    /** @brief DSI Host version register */
    using DSI_VR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version of the DSI Host This read-only register contains the version of the DSI Host */
    using DSI_VR_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host control register */
    using DSI_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable This bit configures the DSI Host in either power-up mode or to reset. */
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
    /** @brief TX escape clock division This field indicates the division factor for the TX escape clock source (lanebyteclk). The values 0 and 1 stop the TX_ESC clock generation. */
    using DSI_CCR_TXECKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout clock division This field indicates the division factor for the timeout clock used as the timing unit in the configuration of HS to LP and LP to HS transition error. */
    using DSI_CCR_TOCKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host LTDC VCID register */
    using DSI_LVCIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel ID These bits configure the virtual channel ID for the LTDC interface traffic. */
    using DSI_LVCIDR_VCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host LTDC color coding register */
    using DSI_LCOLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color coding This field configures the DPI color coding. Others: Reserved */
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

    /** @brief Loosely packet enable This bit enables the loosely packed variant to 18-bit configuration */
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
    /** @brief Data enable polarity This bit configures the polarity of data enable pin. */
    using DSI_LPCR_DEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data enable pin active high (default) (value: 0)
     *          - B_0x1: Data enable pin active low (value: 1)
     */
        /** @brief Data enable pin active high (default) */
    constexpr std::uint32_t DSI_LPCR_DEP_B_0x0 = 0;
        /** @brief Data enable pin active low */
    constexpr std::uint32_t DSI_LPCR_DEP_B_0x1 = 1;

    /** @brief VSYNC polarity This bit configures the polarity of VSYNC pin. */
    using DSI_LPCR_VSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Shutdown pin active high (default) (value: 0)
     *          - B_0x1: Shutdown pin active low (value: 1)
     */
        /** @brief Shutdown pin active high (default) */
    constexpr std::uint32_t DSI_LPCR_VSP_B_0x0 = 0;
        /** @brief Shutdown pin active low */
    constexpr std::uint32_t DSI_LPCR_VSP_B_0x1 = 1;

    /** @brief HSYNC polarity This bit configures the polarity of HSYNC pin. */
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
    /** @brief VACT largest packet size This field is used for the transmission of commands in low-power mode. It defines the size, in bytes, of the largest packet that can fit in a line during VACT regions. */
    using DSI_LPMCR_VLPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Largest packet size This field is used for the transmission of commands in low-power mode. It defines the size, in bytes, of the largest packet that can fit in a line during VSA, VBP and VFP regions. */
    using DSI_LPMCR_LPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host protocol configuration register */
    using DSI_PCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EoTp transmission enable This bit enables the EoTP transmission. */
    using DSI_PCR_ETTXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EoTp transmission is disabled. (value: 0)
     *          - B_0x1: EoTp transmission is enabled. (value: 1)
     */
        /** @brief EoTp transmission is disabled. */
    constexpr std::uint32_t DSI_PCR_ETTXE_B_0x0 = 0;
        /** @brief EoTp transmission is enabled. */
    constexpr std::uint32_t DSI_PCR_ETTXE_B_0x1 = 1;

    /** @brief EoTp reception enable This bit enables the EoTp reception. */
    using DSI_PCR_ETRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EoTp reception is disabled. (value: 0)
     *          - B_0x1: EoTp reception is enabled. (value: 1)
     */
        /** @brief EoTp reception is disabled. */
    constexpr std::uint32_t DSI_PCR_ETRXE_B_0x0 = 0;
        /** @brief EoTp reception is enabled. */
    constexpr std::uint32_t DSI_PCR_ETRXE_B_0x1 = 1;

    /** @brief Bus-turn-around enable This bit enables the bus-turn-around (BTA) request. */
    using DSI_PCR_BTAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bus-turn-around request is disabled. (value: 0)
     *          - B_0x1: Bus-turn-around request is enabled. (value: 1)
     */
        /** @brief Bus-turn-around request is disabled. */
    constexpr std::uint32_t DSI_PCR_BTAE_B_0x0 = 0;
        /** @brief Bus-turn-around request is enabled. */
    constexpr std::uint32_t DSI_PCR_BTAE_B_0x1 = 1;

    /** @brief ECC reception enable This bit enables the ECC reception, error correction and reporting. */
    using DSI_PCR_ECCRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC reception is disabled. (value: 0)
     *          - B_0x1: ECC reception is enabled. (value: 1)
     */
        /** @brief ECC reception is disabled. */
    constexpr std::uint32_t DSI_PCR_ECCRXE_B_0x0 = 0;
        /** @brief ECC reception is enabled. */
    constexpr std::uint32_t DSI_PCR_ECCRXE_B_0x1 = 1;

    /** @brief CRC reception enable This bit enables the CRC reception and error reporting. */
    using DSI_PCR_CRCRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC reception is disabled. (value: 0)
     *          - B_0x1: CRC reception is enabled. (value: 1)
     */
        /** @brief CRC reception is disabled. */
    constexpr std::uint32_t DSI_PCR_CRCRXE_B_0x0 = 0;
        /** @brief CRC reception is enabled. */
    constexpr std::uint32_t DSI_PCR_CRCRXE_B_0x1 = 1;

    /** @brief DSI Host generic VCID register */
    using DSI_GVCIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Virtual channel ID This field indicates the generic interface read-back virtual channel identification. */
    using DSI_GVCIDR_VCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host mode configuration register */
    using DSI_MCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command mode This bit configures the DSI Host in either video or command mode. */
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
    /** @brief Video mode type This field configures the video mode transmission type : 1x: Burst mode */
    using DSI_VMCR_VMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-burst with sync pulses. (value: 0)
     *          - B_0x1: Non-burst with sync events. (value: 1)
     */
        /** @brief Non-burst with sync pulses. */
    constexpr std::uint32_t DSI_VMCR_VMT_B_0x0 = 0;
        /** @brief Non-burst with sync events. */
    constexpr std::uint32_t DSI_VMCR_VMT_B_0x1 = 1;

    /** @brief Low-power vertical sync active enable This bit enables to return to low-power inside the vertical sync time (VSA) period when timing allows. */
    using DSI_VMCR_LPVSAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VSA is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VSA is enabled (value: 1)
     */
        /** @brief Return to low-power inside the VSA is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPVSAE_B_0x0 = 0;
        /** @brief Return to low-power inside the VSA is enabled */
    constexpr std::uint32_t DSI_VMCR_LPVSAE_B_0x1 = 1;

    /** @brief Low-power vertical back-porch enable This bit enables to return to low-power inside the vertical back-porch (VBP) period when timing allows. */
    using DSI_VMCR_LPVBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VBP is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VBP is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VBP is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPVBPE_B_0x0 = 0;
        /** @brief Return to low-power inside the VBP is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPVBPE_B_0x1 = 1;

    /** @brief Low-power vertical front-porch enable This bit enables to return to low-power inside the vertical front-porch (VFP) period when timing allows. */
    using DSI_VMCR_LPVFPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VFP is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VFP is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VFP is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPVFPE_B_0x0 = 0;
        /** @brief Return to low-power inside the VFP is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPVFPE_B_0x1 = 1;

    /** @brief Low-power vertical active enable This bit enables to return to low-power inside the vertical active (VACT) period when timing allows. */
    using DSI_VMCR_LPVAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VACT is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VACT is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VACT is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPVAE_B_0x0 = 0;
        /** @brief Return to low-power inside the VACT is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPVAE_B_0x1 = 1;

    /** @brief Low-power horizontal back-porch enable This bit enables the return to low-power inside the horizontal back-porch (HBP) period when timing allows. */
    using DSI_VMCR_LPHBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the HBP period is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the HBP period is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the HBP period is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPHBPE_B_0x0 = 0;
        /** @brief Return to low-power inside the HBP period is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPHBPE_B_0x1 = 1;

    /** @brief Low-power horizontal front-porch enable This bit enables the return to low-power inside the horizontal front-porch (HFP) period when timing allows. */
    using DSI_VMCR_LPHFPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the HFP period is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the HFP period is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the HFP period is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPHFPE_B_0x0 = 0;
        /** @brief Return to low-power inside the HFP period is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPHFPE_B_0x1 = 1;

    /** @brief Frame bus-turn-around acknowledge enable This bit enables the request for an acknowledge response at the end of a frame. */
    using DSI_VMCR_FBTAAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acknowledge response at the end of a frame is disabled. (value: 0)
     *          - B_0x1: Acknowledge response at the end of a frame is enabled. (value: 1)
     */
        /** @brief Acknowledge response at the end of a frame is disabled. */
    constexpr std::uint32_t DSI_VMCR_FBTAAE_B_0x0 = 0;
        /** @brief Acknowledge response at the end of a frame is enabled. */
    constexpr std::uint32_t DSI_VMCR_FBTAAE_B_0x1 = 1;

    /** @brief Low-power command enable This bit enables the command transmission only in low-power mode. */
    using DSI_VMCR_LPCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command transmission in low-power mode is disabled. (value: 0)
     *          - B_0x1: Command transmission in low-power mode is enabled. (value: 1)
     */
        /** @brief Command transmission in low-power mode is disabled. */
    constexpr std::uint32_t DSI_VMCR_LPCE_B_0x0 = 0;
        /** @brief Command transmission in low-power mode is enabled. */
    constexpr std::uint32_t DSI_VMCR_LPCE_B_0x1 = 1;

    /** @brief Pattern generator enable This bit enables the video mode pattern generator. */
    using DSI_VMCR_PGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pattern generator is disabled. (value: 0)
     *          - B_0x1: Pattern generator is enabled. (value: 1)
     */
        /** @brief Pattern generator is disabled. */
    constexpr std::uint32_t DSI_VMCR_PGE_B_0x0 = 0;
        /** @brief Pattern generator is enabled. */
    constexpr std::uint32_t DSI_VMCR_PGE_B_0x1 = 1;

    /** @brief Pattern generator mode This bit configures the pattern generator mode. */
    using DSI_VMCR_PGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Color bars (horizontal or vertical). (value: 0)
     *          - B_0x1: BER pattern (vertical only). (value: 1)
     */
        /** @brief Color bars (horizontal or vertical). */
    constexpr std::uint32_t DSI_VMCR_PGM_B_0x0 = 0;
        /** @brief BER pattern (vertical only). */
    constexpr std::uint32_t DSI_VMCR_PGM_B_0x1 = 1;

    /** @brief Pattern generator orientation This bit configures the color bar orientation. */
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
    /** @brief Video packet size This field configures the number of pixels in a single video packet. For 18-bit not loosely packed data types, this number must be a multiple of 4. For YCbCr data types, it must be a multiple of 2 as described in the DSI specification. */
    using DSI_VPCR_VPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video chunks configuration register */
    using DSI_VCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of chunks This register configures the number of chunks to be transmitted during a line period (a chunk consists of a video packet and a null packet). If set to 0 or 1, the video line is transmitted in a single packet. If set to 1, the packet is part of a chunk, so a null packet follows it if NPSIZE > 0. Otherwise, multiple chunks are used to transmit each video line. */
    using DSI_VCCR_NUMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video null packet configuration register */
    using DSI_VNPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Null packet size This field configures the number of bytes inside a null packet. Setting to 0 disables the null packets. */
    using DSI_VNPCR_NPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video HSA configuration register */
    using DSI_VHSACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal synchronism active duration This fields configures the horizontal synchronism active period in lane byte clock cycles. */
    using DSI_VHSACR_HSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video HBP configuration register */
    using DSI_VHBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal back-porch duration This fields configures the horizontal back-porch period in lane byte clock cycles. */
    using DSI_VHBPCR_HBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video line configuration register */
    using DSI_VLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal line duration This fields configures the total of the horizontal line period (HSA+HBP+HACT+HFP) counted in lane byte clock cycles. */
    using DSI_VLCR_HLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VSA configuration register */
    using DSI_VVSACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronism active duration This fields configures the vertical synchronism active period measured in number of horizontal lines. */
    using DSI_VVSACR_VSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VBP configuration register */
    using DSI_VVBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical back-porch duration This fields configures the vertical back-porch period measured in number of horizontal lines. */
    using DSI_VVBPCR_VBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VFP configuration register */
    using DSI_VVFPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical front-porch duration This fields configures the vertical front-porch period measured in number of horizontal lines. */
    using DSI_VVFPCR_VFP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VA configuration register */
    using DSI_VVACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical active duration This fields configures the vertical active period measured in number of horizontal lines. */
    using DSI_VVACR_VA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host LTDC command configuration register */
    using DSI_LCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command size This field configures the maximum allowed size for an LTDC write memory command, measured in pixels. Automatic partitioning of data obtained from LTDC is permanently enabled. */
    using DSI_LCCR_CMDSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host command mode configuration register */
    using DSI_CMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tearing effect acknowledge request enable This bit enables the tearing effect acknowledge request: */
    using DSI_CMCR_TEARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tearing effect acknowledge request is disabled. (value: 0)
     *          - B_0x1: Tearing effect acknowledge request is enabled. (value: 1)
     */
        /** @brief Tearing effect acknowledge request is disabled. */
    constexpr std::uint32_t DSI_CMCR_TEARE_B_0x0 = 0;
        /** @brief Tearing effect acknowledge request is enabled. */
    constexpr std::uint32_t DSI_CMCR_TEARE_B_0x1 = 1;

    /** @brief Acknowledge request enable This bit enables the acknowledge request after each packet transmission: */
    using DSI_CMCR_ARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acknowledge request is disabled. (value: 0)
     *          - B_0x1: Acknowledge request is enabled. (value: 1)
     */
        /** @brief Acknowledge request is disabled. */
    constexpr std::uint32_t DSI_CMCR_ARE_B_0x0 = 0;
        /** @brief Acknowledge request is enabled. */
    constexpr std::uint32_t DSI_CMCR_ARE_B_0x1 = 1;

    /** @brief Generic short write zero parameters transmission This bit configures the generic short write packet with zero parameters command transmission type: */
    using DSI_CMCR_GSW0TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSW0TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSW0TX_B_0x1 = 1;

    /** @brief Generic short write one parameters transmission This bit configures the generic short write packet with one parameters command transmission type: */
    using DSI_CMCR_GSW1TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSW1TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSW1TX_B_0x1 = 1;

    /** @brief Generic short write two parameters transmission This bit configures the generic short write packet with two parameters command transmission type: */
    using DSI_CMCR_GSW2TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSW2TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSW2TX_B_0x1 = 1;

    /** @brief Generic short read zero parameters transmission This bit configures the generic short read packet with zero parameters command transmission type: */
    using DSI_CMCR_GSR0TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSR0TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSR0TX_B_0x1 = 1;

    /** @brief Generic short read one parameters transmission This bit configures the generic short read packet with one parameters command transmission type: */
    using DSI_CMCR_GSR1TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSR1TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSR1TX_B_0x1 = 1;

    /** @brief Generic short read two parameters transmission This bit configures the generic short read packet with two parameters command transmission type: */
    using DSI_CMCR_GSR2TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GSR2TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GSR2TX_B_0x1 = 1;

    /** @brief Generic long write transmission This bit configures the generic long write packet command transmission type : */
    using DSI_CMCR_GLWTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_GLWTX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_GLWTX_B_0x1 = 1;

    /** @brief DCS short write zero parameter transmission This bit configures the DCS short write packet with zero parameter command transmission type: */
    using DSI_CMCR_DSW0TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_DSW0TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_DSW0TX_B_0x1 = 1;

    /** @brief DCS short read one parameter transmission This bit configures the DCS short read packet with one parameter command transmission type: */
    using DSI_CMCR_DSW1TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_DSW1TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_DSW1TX_B_0x1 = 1;

    /** @brief DCS short read zero parameter transmission This bit configures the DCS short read packet with zero parameter command transmission type: */
    using DSI_CMCR_DSR0TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_DSR0TX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_DSR0TX_B_0x1 = 1;

    /** @brief DCS long write transmission This bit configures the DCS long write packet command transmission type: */
    using DSI_CMCR_DLWTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High-speed (value: 0)
     *          - B_0x1: Low-power (value: 1)
     */
        /** @brief High-speed */
    constexpr std::uint32_t DSI_CMCR_DLWTX_B_0x0 = 0;
        /** @brief Low-power */
    constexpr std::uint32_t DSI_CMCR_DLWTX_B_0x1 = 1;

    /** @brief Maximum read packet size This bit configures the maximum read packet size command transmission type: */
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
    /** @brief Type This field configures the packet data type of the header packet. */
    using DSI_GHCR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel This field configures the virtual channel ID of the header packet. */
    using DSI_GHCR_VCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WordCount LSB This field configures the less significant byte of the header packet word count for long packets, or data 0 for short packets. */
    using DSI_GHCR_WCLSB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WordCount MSB This field configures the most significant byte of the header packet word count for long packets, or data 1 for short packets. */
    using DSI_GHCR_WCMSB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host generic payload data register */
    using DSI_GPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload byte 1 This field indicates the byte 1 of the packet payload. */
    using DSI_GPDR_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload byte 2 This field indicates the byte 2 of the packet payload. */
    using DSI_GPDR_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload byte 3 This field indicates the byte 3 of the packet payload. */
    using DSI_GPDR_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload byte 4 This field indicates the byte 4 of the packet payload. */
    using DSI_GPDR_DATA4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host generic packet status register */
    using DSI_GPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command FIFO empty This bit indicates the empty status of the generic command FIFO: */
    using DSI_GPSR_CMDFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not empty (value: 0)
     *          - B_0x1: Write payload FIFO empty (value: 1)
     */
        /** @brief Write payload FIFO not empty */
    constexpr std::uint32_t DSI_GPSR_CMDFE_B_0x0 = 0;
        /** @brief Write payload FIFO empty */
    constexpr std::uint32_t DSI_GPSR_CMDFE_B_0x1 = 1;

    /** @brief Command FIFO full This bit indicates the full status of the generic command FIFO: */
    using DSI_GPSR_CMDFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not full (value: 0)
     *          - B_0x1: Write payload FIFO full (value: 1)
     */
        /** @brief Write payload FIFO not full */
    constexpr std::uint32_t DSI_GPSR_CMDFF_B_0x0 = 0;
        /** @brief Write payload FIFO full */
    constexpr std::uint32_t DSI_GPSR_CMDFF_B_0x1 = 1;

    /** @brief Payload write FIFO empty This bit indicates the empty status of the generic write payload FIFO: */
    using DSI_GPSR_PWRFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not empty (value: 0)
     *          - B_0x1: Write payload FIFO empty (value: 1)
     */
        /** @brief Write payload FIFO not empty */
    constexpr std::uint32_t DSI_GPSR_PWRFE_B_0x0 = 0;
        /** @brief Write payload FIFO empty */
    constexpr std::uint32_t DSI_GPSR_PWRFE_B_0x1 = 1;

    /** @brief Payload write FIFO full This bit indicates the full status of the generic write payload FIFO: */
    using DSI_GPSR_PWRFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write payload FIFO not full (value: 0)
     *          - B_0x1: Write payload FIFO full (value: 1)
     */
        /** @brief Write payload FIFO not full */
    constexpr std::uint32_t DSI_GPSR_PWRFF_B_0x0 = 0;
        /** @brief Write payload FIFO full */
    constexpr std::uint32_t DSI_GPSR_PWRFF_B_0x1 = 1;

    /** @brief Payload read FIFO empty This bit indicates the empty status of the generic read payload FIFO: */
    using DSI_GPSR_PRDFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read payload FIFO not empty (value: 0)
     *          - B_0x1: Read payload FIFO empty (value: 1)
     */
        /** @brief Read payload FIFO not empty */
    constexpr std::uint32_t DSI_GPSR_PRDFE_B_0x0 = 0;
        /** @brief Read payload FIFO empty */
    constexpr std::uint32_t DSI_GPSR_PRDFE_B_0x1 = 1;

    /** @brief Payload read FIFO full This bit indicates the full status of the generic read payload FIFO: */
    using DSI_GPSR_PRDFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read payload FIFO not full (value: 0)
     *          - B_0x1: Read payload FIFO ful. (value: 1)
     */
        /** @brief Read payload FIFO not full */
    constexpr std::uint32_t DSI_GPSR_PRDFF_B_0x0 = 0;
        /** @brief Read payload FIFO ful. */
    constexpr std::uint32_t DSI_GPSR_PRDFF_B_0x1 = 1;

    /** @brief Read command busy This bit is set when a read command is issued and cleared when the entire response is stored in the FIFO: */
    using DSI_GPSR_RCB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No read command on going (value: 0)
     *          - B_0x1: Read command on going (value: 1)
     */
        /** @brief No read command on going */
    constexpr std::uint32_t DSI_GPSR_RCB_B_0x0 = 0;
        /** @brief Read command on going */
    constexpr std::uint32_t DSI_GPSR_RCB_B_0x1 = 1;

    /** @brief DSI Host timeout counter configuration register 0 */
    using DSI_TCCR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power reception timeout counter This field configures the timeout counter that triggers a low-power reception timeout contention detection (measured in TOCKDIV cycles). */
    using DSI_TCCR0_LPRX_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed transmission timeout counter This field configures the timeout counter that triggers a high-speed transmission timeout contention detection (measured in TOCKDIV cycles). */
    using DSI_TCCR0_HSTX_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 1 */
    using DSI_TCCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed read timeout counter This field sets a period for which the DSI Host keeps the link still, after sending a high-speed read operation. This period is measured in cycles of lanebyteclk. The counting starts when the D-PHY enters the Stop state and causes no interrupts. */
    using DSI_TCCR1_HSRD_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 2 */
    using DSI_TCCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power read timeout counter This field sets a period for which the DSI Host keeps the link still, after sending a low-power read operation. This period is measured in cycles of lanebyteclk. The counting starts when the D-PHY enters the Stop state and causes no interrupts. */
    using DSI_TCCR2_LPRD_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 3 */
    using DSI_TCCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed write timeout counter This field sets a period for which the DSI Host keeps the link inactive after sending a high-speed write operation. This period is measured in cycles of lanebyteclk. The counting starts when the D-PHY enters the Stop state and causes no interrupts. */
    using DSI_TCCR3_HSWR_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Presp mode When set to 1, this bit ensures that the peripheral response timeout caused by HSWR_TOCNT is used only once per LTDC frame in command mode, when both the following conditions are met: dpivsync_edpiwms has risen and fallen. Packets originated from LTDC in command mode have been transmitted and its FIFO is empty again. In this scenario no non-LTDC command requests are sent to the D-PHY, even if there is traffic from generic interface ready to be sent, making it return to stop state. When it does so, PRESP_TO counter is activated and only when it finishes does the controller send any other traffic that is ready. */
    using DSI_TCCR3_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 4 */
    using DSI_TCCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power write timeout counter This field sets a period for which the DSI Host keeps the link still, after sending a low-power write operation. This period is measured in cycles of lanebyteclk. The counting starts when the D-PHY enters the Stop state and causes no interrupts. */
    using DSI_TCCR4_LPWR_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host timeout counter configuration register 5 */
    using DSI_TCCR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus-turn-around timeout counter This field sets a period for which the DSI Host keeps the link still, after completing a bus-turn-around. This period is measured in cycles of lanebyteclk. The counting starts when the D PHY enters the Stop state and causes no interrupts. */
    using DSI_TCCR5_BTA_TOCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host clock lane configuration register */
    using DSI_CLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D-PHY clock control This bit controls the D-PHY clock state: */
    using DSI_CLCR_DPCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock lane is in low-power mode. (value: 0)
     *          - B_0x1: Clock lane runs in high-speed mode. (value: 1)
     */
        /** @brief Clock lane is in low-power mode. */
    constexpr std::uint32_t DSI_CLCR_DPCC_B_0x0 = 0;
        /** @brief Clock lane runs in high-speed mode. */
    constexpr std::uint32_t DSI_CLCR_DPCC_B_0x1 = 1;

    /** @brief Automatic clock lane control This bit enables the automatic mechanism to stop providing clock in the clock lane when time allows. */
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
    /** @brief Low-power to high-speed time This field configures the maximum time that the D-PHY clock lane takes to go from low power to high-speed transmission measured in lane byte clock cycles. */
    using DSI_CLTCR_LP2HS_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed to low-power time This field configures the maximum time that the D-PHY clock lane takes to go from high speed to low-power transmission measured in lane byte clock cycles. */
    using DSI_CLTCR_HS2LP_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host data lane timer configuration register */
    using DSI_DLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum read time This field configures the maximum time required to perform a read command in lane byte clock cycles. This register can only be modified when no read command is in progress. */
    using DSI_DLTCR_MRD_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power to high-speed time This field configures the maximum time that the D-PHY data lanes take to go from low-power to high-speed transmission measured in lane byte clock cycles. */
    using DSI_DLTCR_LP2HS_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed to low-power time This field configures the maximum time that the D-PHY data lanes take to go from high-speed to low-power transmission measured in lane byte clock cycles. */
    using DSI_DLTCR_HS2LP_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host PHY control register */
    using DSI_PCTLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital enable When set to 0, this bit places the digital section of the D-PHY in the reset state */
    using DSI_PCTLR_DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The digital section of the D-PHY is in the reset state. (value: 0)
     *          - B_0x1: The digital section of the D-PHY is enabled. (value: 1)
     */
        /** @brief The digital section of the D-PHY is in the reset state. */
    constexpr std::uint32_t DSI_PCTLR_DEN_B_0x0 = 0;
        /** @brief The digital section of the D-PHY is enabled. */
    constexpr std::uint32_t DSI_PCTLR_DEN_B_0x1 = 1;

    /** @brief Clock enable This bit enables the D-PHY clock lane module: */
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
    /** @brief Number of lanes This field configures the number of active data lanes: Others: Reserved */
    using DSI_PCONFR_NL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One data lane (lane 0) (value: 0)
     *          - B_0x1: Two data lanes (lanes 0 and 1) - Reset value (value: 1)
     */
        /** @brief One data lane (lane 0) */
    constexpr std::uint32_t DSI_PCONFR_NL_B_0x0 = 0;
        /** @brief Two data lanes (lanes 0 and 1) - Reset value */
    constexpr std::uint32_t DSI_PCONFR_NL_B_0x1 = 1;

    /** @brief Stop wait time This field configures the minimum wait period to request a high-speed transmission after the Stop state. */
    using DSI_PCONFR_SW_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host PHY ULPS control register */
    using DSI_PUCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPS request on clock lane ULPS mode request on clock lane. */
    using DSI_PUCR_URCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ULPS request (value: 0)
     *          - B_0x1: Request ULPS mode on clock lane (value: 1)
     */
        /** @brief No ULPS request */
    constexpr std::uint32_t DSI_PUCR_URCL_B_0x0 = 0;
        /** @brief Request ULPS mode on clock lane */
    constexpr std::uint32_t DSI_PUCR_URCL_B_0x1 = 1;

    /** @brief ULPS exit on clock lane ULPS mode exit on clock lane. */
    using DSI_PUCR_UECL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No exit request (value: 0)
     *          - B_0x1: Exit ULPS mode on clock lane (value: 1)
     */
        /** @brief No exit request */
    constexpr std::uint32_t DSI_PUCR_UECL_B_0x0 = 0;
        /** @brief Exit ULPS mode on clock lane */
    constexpr std::uint32_t DSI_PUCR_UECL_B_0x1 = 1;

    /** @brief ULPS request on data lane ULPS mode request on all active data lanes. */
    using DSI_PUCR_URDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ULPS request (value: 0)
     *          - B_0x1: Request ULPS mode on all active data lane UECL (value: 1)
     */
        /** @brief No ULPS request */
    constexpr std::uint32_t DSI_PUCR_URDL_B_0x0 = 0;
        /** @brief Request ULPS mode on all active data lane UECL */
    constexpr std::uint32_t DSI_PUCR_URDL_B_0x1 = 1;

    /** @brief ULPS exit on data lane ULPS mode exit on all active data lanes. */
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
    /** @brief Transmission trigger Escape mode transmit trigger 0-3. Only one bit of TX_TRIG is asserted at any given time. */
    using DSI_PTTCR_TX_TRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host PHY status register */
    using DSI_PSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY direction This bit indicates the status of phydirection D-PHY signal. */
    using DSI_PSR_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY stop state clock lane This bit indicates the status of phystopstateclklane D-PHY signal. */
    using DSI_PSR_PSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPS active not clock lane This bit indicates the status of ulpsactivenotclklane D-PHY signal. */
    using DSI_PSR_UANC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY stop state lane 0 This bit indicates the status of phystopstate0lane D-PHY signal. */
    using DSI_PSR_PSS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPS active not lane 1 This bit indicates the status of ulpsactivenot0lane D-PHY signal. */
    using DSI_PSR_UAN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX ULPS escape lane 0 This bit indicates the status of rxulpsesc0lane D-PHY signal. */
    using DSI_PSR_RUE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY stop state lane 1 This bit indicates the status of phystopstate1lane D-PHY signal. */
    using DSI_PSR_PSS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPS active not lane 1 This bit indicates the status of ulpsactivenot1lane D-PHY signal. */
    using DSI_PSR_UAN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host interrupt and status register 0 */
    using DSI_ISR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 0 This bit retrieves the SoT error from the acknowledge error report. */
    using DSI_ISR0_AE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 1 This bit retrieves the SoT sync error from the acknowledge error report. */
    using DSI_ISR0_AE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 2 This bit retrieves the EoT sync error from the acknowledge error report. */
    using DSI_ISR0_AE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 3 This bit retrieves the escape mode entry command error from the acknowledge error report. */
    using DSI_ISR0_AE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 4 This bit retrieves the LP transmit sync error from the acknowledge error report. */
    using DSI_ISR0_AE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 5 This bit retrieves the peripheral timeout error from the acknowledge error report. */
    using DSI_ISR0_AE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 6 This bit retrieves the false control error from the acknowledge error report. */
    using DSI_ISR0_AE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 7 This bit retrieves the reserved (specific to the device) from the acknowledge error report. */
    using DSI_ISR0_AE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 8 This bit retrieves the ECC error, single-bit (detected and corrected) from the acknowledge error report. */
    using DSI_ISR0_AE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 9 This bit retrieves the ECC error, multi-bit (detected, not corrected) from the acknowledge error report. */
    using DSI_ISR0_AE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 10 This bit retrieves the checksum error (long packet only) from the acknowledge error report. */
    using DSI_ISR0_AE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 11 This bit retrieves the not recognized DSI data type from the acknowledge error report. */
    using DSI_ISR0_AE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 12 This bit retrieves the DSI VC ID Invalid from the acknowledge error report. */
    using DSI_ISR0_AE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 13 This bit retrieves the invalid transmission length from the acknowledge error report. */
    using DSI_ISR0_AE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 14 This bit retrieves the reserved (specific to the device) from the acknowledge error report. */
    using DSI_ISR0_AE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 15 This bit retrieves the DSI protocol violation from the acknowledge error report. */
    using DSI_ISR0_AE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 0 This bit indicates the ErrEsc escape entry error from lane 0. */
    using DSI_ISR0_PE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 1 This bit indicates the ErrSyncEsc low-power transmission synchronization error from lane 0. */
    using DSI_ISR0_PE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 2 This bit indicates the ErrControl error from lane 0. */
    using DSI_ISR0_PE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 3 This bit indicates the LP0 contention error ErrContentionLP0 from lane 0. */
    using DSI_ISR0_PE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY error 4 This bit indicates the LP1 contention error ErrContentionLP1 from lane 0. */
    using DSI_ISR0_PE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host interrupt and status register 1 */
    using DSI_ISR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout high-speed transmission This bit indicates that the high-speed transmission timeout counter reached the end and contention is detected. */
    using DSI_ISR1_TOHSTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout low-power reception This bit indicates that the low-power reception timeout counter reached the end and contention is detected. */
    using DSI_ISR1_TOLPRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single-bit error This bit indicates that the ECC single error is detected and corrected in a received packet. */
    using DSI_ISR1_ECCSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC multi-bit error This bit indicates that the ECC multiple error is detected in a received packet. */
    using DSI_ISR1_ECCME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC error This bit indicates that the CRC error is detected in the received packet payload. */
    using DSI_ISR1_CRCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet size error This bit indicates that the packet size error is detected during the packet reception. */
    using DSI_ISR1_PSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EoTp error This bit indicates that the EoTp packet is not received at the end of the incoming peripheral transmission. */
    using DSI_ISR1_EOTPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC payload write error This bit indicates that during a DPI pixel line storage, the payload FIFO becomes full and the data stored is corrupted. */
    using DSI_ISR1_LPWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic command write error This bit indicates that the system tried to write a command through the generic interface and the FIFO is full. Therefore, the command is not written. */
    using DSI_ISR1_GCWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic payload write error This bit indicates that the system tried to write a payload data through the generic interface and the FIFO is full. Therefore, the payload is not written. */
    using DSI_ISR1_GPWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic payload transmit error This bit indicates that during a generic interface packet build, the payload FIFO becomes empty and corrupt data is sent. */
    using DSI_ISR1_GPTXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic payload read error This bit indicates that during a DCS read data, the payload FIFO becomes empty and the data sent to the interface is corrupted. */
    using DSI_ISR1_GPRDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Generic payload receive error This bit indicates that during a generic interface packet read back, the payload FIFO becomes full and the received data is corrupted. */
    using DSI_ISR1_GPRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host interrupt enable register 0 */
    using DSI_IER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Acknowledge error 0 interrupt enable This bit enables the interrupt generation on acknowledge error 0. */
    using DSI_IER0_AE0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 0 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 0 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 0 disabled */
    constexpr std::uint32_t DSI_IER0_AE0IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 0 enabled */
    constexpr std::uint32_t DSI_IER0_AE0IE_B_0x1 = 1;

    /** @brief Acknowledge error 1 interrupt enable This bit enables the interrupt generation on acknowledge error 1. */
    using DSI_IER0_AE1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 1 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 1 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 1 disabled */
    constexpr std::uint32_t DSI_IER0_AE1IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 1 enabled */
    constexpr std::uint32_t DSI_IER0_AE1IE_B_0x1 = 1;

    /** @brief Acknowledge error 2 interrupt enable This bit enables the interrupt generation on acknowledge error 2. */
    using DSI_IER0_AE2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 2 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 2 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 2 disabled */
    constexpr std::uint32_t DSI_IER0_AE2IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 2 enabled */
    constexpr std::uint32_t DSI_IER0_AE2IE_B_0x1 = 1;

    /** @brief Acknowledge error 3 interrupt enable This bit enables the interrupt generation on acknowledge error 3. */
    using DSI_IER0_AE3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 3 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 3 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 3 disabled */
    constexpr std::uint32_t DSI_IER0_AE3IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 3 enabled */
    constexpr std::uint32_t DSI_IER0_AE3IE_B_0x1 = 1;

    /** @brief Acknowledge error 4 interrupt enable This bit enables the interrupt generation on acknowledge error 4. */
    using DSI_IER0_AE4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 4 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 4 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 4 disabled */
    constexpr std::uint32_t DSI_IER0_AE4IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 4 enabled */
    constexpr std::uint32_t DSI_IER0_AE4IE_B_0x1 = 1;

    /** @brief Acknowledge error 5 interrupt enable This bit enables the interrupt generation on acknowledge error 5. */
    using DSI_IER0_AE5IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 5 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 5 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 5 disabled */
    constexpr std::uint32_t DSI_IER0_AE5IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 5 enabled */
    constexpr std::uint32_t DSI_IER0_AE5IE_B_0x1 = 1;

    /** @brief Acknowledge error 6 interrupt enable This bit enables the interrupt generation on acknowledge error 6. */
    using DSI_IER0_AE6IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 6 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 6 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 6 disabled */
    constexpr std::uint32_t DSI_IER0_AE6IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 6 enabled */
    constexpr std::uint32_t DSI_IER0_AE6IE_B_0x1 = 1;

    /** @brief Acknowledge error 7 interrupt enable This bit enables the interrupt generation on acknowledge error 7. */
    using DSI_IER0_AE7IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 7 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 7 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 7 disabled */
    constexpr std::uint32_t DSI_IER0_AE7IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 7 enabled */
    constexpr std::uint32_t DSI_IER0_AE7IE_B_0x1 = 1;

    /** @brief Acknowledge error 8 interrupt enable This bit enables the interrupt generation on acknowledge error 8. */
    using DSI_IER0_AE8IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 8 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 8 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 8 disabled */
    constexpr std::uint32_t DSI_IER0_AE8IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 8 enabled */
    constexpr std::uint32_t DSI_IER0_AE8IE_B_0x1 = 1;

    /** @brief Acknowledge error 9 interrupt enable This bit enables the interrupt generation on acknowledge error 9. */
    using DSI_IER0_AE9IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 9 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 9 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 9 disabled */
    constexpr std::uint32_t DSI_IER0_AE9IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 9 enabled */
    constexpr std::uint32_t DSI_IER0_AE9IE_B_0x1 = 1;

    /** @brief Acknowledge error 10 interrupt enable This bit enables the interrupt generation on acknowledge error 10. */
    using DSI_IER0_AE10IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 10 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 10 enable. (value: 1)
     */
        /** @brief Interrupt on acknowledge error 10 disabled */
    constexpr std::uint32_t DSI_IER0_AE10IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 10 enable. */
    constexpr std::uint32_t DSI_IER0_AE10IE_B_0x1 = 1;

    /** @brief Acknowledge error 11 interrupt enable This bit enables the interrupt generation on acknowledge error 11. */
    using DSI_IER0_AE11IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 11 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 11 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 11 disabled */
    constexpr std::uint32_t DSI_IER0_AE11IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 11 enabled */
    constexpr std::uint32_t DSI_IER0_AE11IE_B_0x1 = 1;

    /** @brief Acknowledge error 12 interrupt enable This bit enables the interrupt generation on acknowledge error 12. */
    using DSI_IER0_AE12IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 12 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 12 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 12 disabled */
    constexpr std::uint32_t DSI_IER0_AE12IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 12 enabled */
    constexpr std::uint32_t DSI_IER0_AE12IE_B_0x1 = 1;

    /** @brief Acknowledge error 13 interrupt enable This bit enables the interrupt generation on acknowledge error 13. */
    using DSI_IER0_AE13IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 13 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 13 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 13 disabled */
    constexpr std::uint32_t DSI_IER0_AE13IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 13 enabled */
    constexpr std::uint32_t DSI_IER0_AE13IE_B_0x1 = 1;

    /** @brief Acknowledge error 14 interrupt enable This bit enables the interrupt generation on acknowledge error 14. */
    using DSI_IER0_AE14IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 14 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 14 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 14 disabled */
    constexpr std::uint32_t DSI_IER0_AE14IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 14 enabled */
    constexpr std::uint32_t DSI_IER0_AE14IE_B_0x1 = 1;

    /** @brief Acknowledge error 15 interrupt enable This bit enables the interrupt generation on acknowledge error 15. */
    using DSI_IER0_AE15IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on acknowledge error 15 disabled (value: 0)
     *          - B_0x1: Interrupt on acknowledge error 15 enabled (value: 1)
     */
        /** @brief Interrupt on acknowledge error 15 disabled */
    constexpr std::uint32_t DSI_IER0_AE15IE_B_0x0 = 0;
        /** @brief Interrupt on acknowledge error 15 enabled */
    constexpr std::uint32_t DSI_IER0_AE15IE_B_0x1 = 1;

    /** @brief PHY error 0 interrupt enable This bit enables the interrupt generation on PHY error 0. */
    using DSI_IER0_PE0IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 0 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 0 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 0 disabled */
    constexpr std::uint32_t DSI_IER0_PE0IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 0 enabled */
    constexpr std::uint32_t DSI_IER0_PE0IE_B_0x1 = 1;

    /** @brief PHY error 1 interrupt enable This bit enables the interrupt generation on PHY error 1. */
    using DSI_IER0_PE1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 1 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 1 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 1 disabled */
    constexpr std::uint32_t DSI_IER0_PE1IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 1 enabled */
    constexpr std::uint32_t DSI_IER0_PE1IE_B_0x1 = 1;

    /** @brief PHY error 2 interrupt enable This bit enables the interrupt generation on PHY error 2. */
    using DSI_IER0_PE2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 2 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 2 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 2 disabled */
    constexpr std::uint32_t DSI_IER0_PE2IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 2 enabled */
    constexpr std::uint32_t DSI_IER0_PE2IE_B_0x1 = 1;

    /** @brief PHY error 3 interrupt enable This bit enables the interrupt generation on PHY error 4. */
    using DSI_IER0_PE3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on PHY error 3 disabled (value: 0)
     *          - B_0x1: Interrupt on PHY error 3 enabled (value: 1)
     */
        /** @brief Interrupt on PHY error 3 disabled */
    constexpr std::uint32_t DSI_IER0_PE3IE_B_0x0 = 0;
        /** @brief Interrupt on PHY error 3 enabled */
    constexpr std::uint32_t DSI_IER0_PE3IE_B_0x1 = 1;

    /** @brief PHY error 4 interrupt enable This bit enables the interrupt generation on PHY error 4. */
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
    /** @brief Timeout high-speed transmission interrupt enable This bit enables the interrupt generation on timeout high-speed transmission . */
    using DSI_IER1_TOHSTXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on timeout high-speed transmission disabled (value: 0)
     *          - B_0x1: Interrupt on timeout high-speed transmission enabled (value: 1)
     */
        /** @brief Interrupt on timeout high-speed transmission disabled */
    constexpr std::uint32_t DSI_IER1_TOHSTXIE_B_0x0 = 0;
        /** @brief Interrupt on timeout high-speed transmission enabled */
    constexpr std::uint32_t DSI_IER1_TOHSTXIE_B_0x1 = 1;

    /** @brief Timeout low-power reception interrupt enable This bit enables the interrupt generation on timeout low-power reception. */
    using DSI_IER1_TOLPRXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on timeout low-power reception disabled (value: 0)
     *          - B_0x1: Interrupt on timeout low-power reception enabled (value: 1)
     */
        /** @brief Interrupt on timeout low-power reception disabled */
    constexpr std::uint32_t DSI_IER1_TOLPRXIE_B_0x0 = 0;
        /** @brief Interrupt on timeout low-power reception enabled */
    constexpr std::uint32_t DSI_IER1_TOLPRXIE_B_0x1 = 1;

    /** @brief ECC single-bit error interrupt enable This bit enables the interrupt generation on ECC single-bit error. */
    using DSI_IER1_ECCSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on ECC single-bit error disabled (value: 0)
     *          - B_0x1: Interrupt on ECC single-bit error enabled (value: 1)
     */
        /** @brief Interrupt on ECC single-bit error disabled */
    constexpr std::uint32_t DSI_IER1_ECCSEIE_B_0x0 = 0;
        /** @brief Interrupt on ECC single-bit error enabled */
    constexpr std::uint32_t DSI_IER1_ECCSEIE_B_0x1 = 1;

    /** @brief ECC multi-bit error interrupt enable This bit enables the interrupt generation on ECC multi-bit error. */
    using DSI_IER1_ECCMEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on ECC multi-bit error disabled (value: 0)
     *          - B_0x1: Interrupt on ECC multi-bit error enabled (value: 1)
     */
        /** @brief Interrupt on ECC multi-bit error disabled */
    constexpr std::uint32_t DSI_IER1_ECCMEIE_B_0x0 = 0;
        /** @brief Interrupt on ECC multi-bit error enabled */
    constexpr std::uint32_t DSI_IER1_ECCMEIE_B_0x1 = 1;

    /** @brief CRC error interrupt enable This bit enables the interrupt generation on CRC error. */
    using DSI_IER1_CRCEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on CRC error disabled (value: 0)
     *          - B_0x1: Interrupt on CRC error enabled (value: 1)
     */
        /** @brief Interrupt on CRC error disabled */
    constexpr std::uint32_t DSI_IER1_CRCEIE_B_0x0 = 0;
        /** @brief Interrupt on CRC error enabled */
    constexpr std::uint32_t DSI_IER1_CRCEIE_B_0x1 = 1;

    /** @brief Packet size error interrupt enable This bit enables the interrupt generation on packet size error. */
    using DSI_IER1_PSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on packet size error disabled (value: 0)
     *          - B_0x1: Interrupt on packet size error enabled (value: 1)
     */
        /** @brief Interrupt on packet size error disabled */
    constexpr std::uint32_t DSI_IER1_PSEIE_B_0x0 = 0;
        /** @brief Interrupt on packet size error enabled */
    constexpr std::uint32_t DSI_IER1_PSEIE_B_0x1 = 1;

    /** @brief EoTp error interrupt enable This bit enables the interrupt generation on EoTp error. */
    using DSI_IER1_EOTPEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on EoTp error disabled (value: 0)
     *          - B_0x1: Interrupt on EoTp error enabled (value: 1)
     */
        /** @brief Interrupt on EoTp error disabled */
    constexpr std::uint32_t DSI_IER1_EOTPEIE_B_0x0 = 0;
        /** @brief Interrupt on EoTp error enabled */
    constexpr std::uint32_t DSI_IER1_EOTPEIE_B_0x1 = 1;

    /** @brief LTDC payload write error interrupt enable This bit enables the interrupt generation on LTDC payload write error. */
    using DSI_IER1_LPWREIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on LTDC payload write error disabled (value: 0)
     *          - B_0x1: Interrupt on LTDC payload write error enabled (value: 1)
     */
        /** @brief Interrupt on LTDC payload write error disabled */
    constexpr std::uint32_t DSI_IER1_LPWREIE_B_0x0 = 0;
        /** @brief Interrupt on LTDC payload write error enabled */
    constexpr std::uint32_t DSI_IER1_LPWREIE_B_0x1 = 1;

    /** @brief Generic command write error interrupt enable This bit enables the interrupt generation on generic command write error. */
    using DSI_IER1_GCWREIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic command write error disabled (value: 0)
     *          - B_0x1: Interrupt on generic command write error enabled (value: 1)
     */
        /** @brief Interrupt on generic command write error disabled */
    constexpr std::uint32_t DSI_IER1_GCWREIE_B_0x0 = 0;
        /** @brief Interrupt on generic command write error enabled */
    constexpr std::uint32_t DSI_IER1_GCWREIE_B_0x1 = 1;

    /** @brief Generic payload write error interrupt enable This bit enables the interrupt generation on generic payload write error. */
    using DSI_IER1_GPWREIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic payload write error disabled (value: 0)
     *          - B_0x1: Interrupt on generic payload write error enabled (value: 1)
     */
        /** @brief Interrupt on generic payload write error disabled */
    constexpr std::uint32_t DSI_IER1_GPWREIE_B_0x0 = 0;
        /** @brief Interrupt on generic payload write error enabled */
    constexpr std::uint32_t DSI_IER1_GPWREIE_B_0x1 = 1;

    /** @brief Generic payload transmit error interrupt enable This bit enables the interrupt generation on generic payload transmit error. */
    using DSI_IER1_GPTXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic payload transmit error disabled (value: 0)
     *          - B_0x1: Interrupt on generic payload transmit error enabled (value: 1)
     */
        /** @brief Interrupt on generic payload transmit error disabled */
    constexpr std::uint32_t DSI_IER1_GPTXEIE_B_0x0 = 0;
        /** @brief Interrupt on generic payload transmit error enabled */
    constexpr std::uint32_t DSI_IER1_GPTXEIE_B_0x1 = 1;

    /** @brief Generic payload read error interrupt enable This bit enables the interrupt generation on generic payload read error. */
    using DSI_IER1_GPRDEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic payload read error disabled (value: 0)
     *          - B_0x1: Interrupt on generic payload read error enabled (value: 1)
     */
        /** @brief Interrupt on generic payload read error disabled */
    constexpr std::uint32_t DSI_IER1_GPRDEIE_B_0x0 = 0;
        /** @brief Interrupt on generic payload read error enabled */
    constexpr std::uint32_t DSI_IER1_GPRDEIE_B_0x1 = 1;

    /** @brief Generic payload receive error interrupt enable This bit enables the interrupt generation on generic payload receive error. */
    using DSI_IER1_GPRXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on generic payload receive error disabled (value: 0)
     *          - B_0x1: Interrupt on generic payload receive error enabled (value: 1)
     */
        /** @brief Interrupt on generic payload receive error disabled */
    constexpr std::uint32_t DSI_IER1_GPRXEIE_B_0x0 = 0;
        /** @brief Interrupt on generic payload receive error enabled */
    constexpr std::uint32_t DSI_IER1_GPRXEIE_B_0x1 = 1;

    /** @brief DSI Host force interrupt register 0 */
    using DSI_FIR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 0 Writing one to this bit forces an acknowledge error 0. */
    using DSI_FIR0_FAE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 1 Writing one to this bit forces an acknowledge error 1. */
    using DSI_FIR0_FAE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 2 Writing one to this bit forces an acknowledge error 2. */
    using DSI_FIR0_FAE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 3 Writing one to this bit forces an acknowledge error 3. */
    using DSI_FIR0_FAE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 4 Writing one to this bit forces an acknowledge error 4. */
    using DSI_FIR0_FAE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 5 Writing one to this bit forces an acknowledge error 5. */
    using DSI_FIR0_FAE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 6 Writing one to this bit forces an acknowledge error 6. */
    using DSI_FIR0_FAE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 7 Writing one to this bit forces an acknowledge error 7. */
    using DSI_FIR0_FAE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 8 Writing one to this bit forces an acknowledge error 8. */
    using DSI_FIR0_FAE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 9 Writing one to this bit forces an acknowledge error 9. */
    using DSI_FIR0_FAE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 10 Writing one to this bit forces an acknowledge error 10. */
    using DSI_FIR0_FAE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 11 Writing one to this bit forces an acknowledge error 11. */
    using DSI_FIR0_FAE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 12 Writing one to this bit forces an acknowledge error 12. */
    using DSI_FIR0_FAE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 13 Writing one to this bit forces an acknowledge error 13. */
    using DSI_FIR0_FAE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 14 Writing one to this bit forces an acknowledge error 14. */
    using DSI_FIR0_FAE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force acknowledge error 15 Writing one to this bit forces an acknowledge error 15. */
    using DSI_FIR0_FAE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 0 Writing one to this bit forces a PHY error 0. */
    using DSI_FIR0_FPE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 1 Writing one to this bit forces a PHY error 1. */
    using DSI_FIR0_FPE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 2 Writing one to this bit forces a PHY error 2. */
    using DSI_FIR0_FPE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 3 Writing one to this bit forces a PHY error 3. */
    using DSI_FIR0_FPE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force PHY error 4 Writing one to this bit forces a PHY error 4. */
    using DSI_FIR0_FPE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host force interrupt register 1 */
    using DSI_FIR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force timeout high-speed transmission Writing one to this bit forces a timeout high-speed transmission. */
    using DSI_FIR1_FTOHSTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force timeout low-power reception Writing one to this bit forces a timeout low-power reception. */
    using DSI_FIR1_FTOLPRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force ECC single-bit error Writing one to this bit forces a ECC single-bit error. */
    using DSI_FIR1_FECCSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force ECC multi-bit error Writing one to this bit forces a ECC multi-bit error. */
    using DSI_FIR1_FECCME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force CRC error Writing one to this bit forces a CRC error. */
    using DSI_FIR1_FCRCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force packet size error Writing one to this bit forces a packet size error. */
    using DSI_FIR1_FPSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force EoTp error Writing one to this bit forces a EoTp error. */
    using DSI_FIR1_FEOTPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force LTDC payload write error Writing one to this bit forces a LTDC payload write error. */
    using DSI_FIR1_FLPWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic command write error Writing one to this bit forces a generic command write error. */
    using DSI_FIR1_FGCWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic payload write error Writing one to this bit forces a generic payload write error. */
    using DSI_FIR1_FGPWRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic payload transmit error Writing one to this bit forces a generic payload transmit error. */
    using DSI_FIR1_FGPTXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic payload read error Writing one to this bit forces a generic payload read error. */
    using DSI_FIR1_FGPRDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force generic payload receive error Writing one to this bit forces a generic payload receive error. */
    using DSI_FIR1_FGPRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video shadow control register */
    using DSI_VSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable When set to 1, DSI Host LTDC interface receives the active configuration from the auxiliary registers. When this bit is set along with the UR bit, the auxiliary registers are automatically updated. */
    using DSI_VSCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Register update is disabled. (value: 0)
     *          - B_0x1: Register update is enabled. (value: 1)
     */
        /** @brief Register update is disabled. */
    constexpr std::uint32_t DSI_VSCR_EN_B_0x0 = 0;
        /** @brief Register update is enabled. */
    constexpr std::uint32_t DSI_VSCR_EN_B_0x1 = 1;

    /** @brief Update register When set to 1, the LTDC registers are copied to the auxiliary registers. After copying, this bit is auto cleared. */
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
    /** @brief Virtual channel ID This field returns the virtual channel ID for the LTDC interface. */
    using DSI_LCVCIDR_VCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host LTDC current color coding register */
    using DSI_LCCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color coding This field returns the current LTDC interface color coding. If LTDC interface in command mode is chosen and currently works in the command mode (CMDM=1), then 0110-1111: 24-bit */
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

    /** @brief Loosely packed enable This bit returns the current state of the loosely packed variant to 18-bit configurations. */
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
    /** @brief VACT largest packet size This field returns the current size, in bytes, of the largest packet that can fit in a line during VACT regions, for the transmission of commands in low-power mode. */
    using DSI_LPMCCR_VLPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Largest packet size This field is returns the current size, in bytes, of the largest packet that can fit in a line during VSA, VBP and VFP regions, for the transmission of commands in low-power mode. */
    using DSI_LPMCCR_LPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video mode current configuration register */
    using DSI_VMCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Video mode type This field returns the current video mode transmission type: 1x: Burst mode */
    using DSI_VMCCR_VMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-burst with sync pulses (value: 0)
     *          - B_0x1: Non-burst with sync events (value: 1)
     */
        /** @brief Non-burst with sync pulses */
    constexpr std::uint32_t DSI_VMCCR_VMT_B_0x0 = 0;
        /** @brief Non-burst with sync events */
    constexpr std::uint32_t DSI_VMCCR_VMT_B_0x1 = 1;

    /** @brief Low-power vertical sync time enable This bit returns the current state of return to low-power inside the vertical sync time (VSA) period when timing allows. */
    using DSI_VMCCR_LPVSAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VSA is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VSA is enabled (value: 1)
     */
        /** @brief Return to low-power inside the VSA is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVSAE_B_0x0 = 0;
        /** @brief Return to low-power inside the VSA is enabled */
    constexpr std::uint32_t DSI_VMCCR_LPVSAE_B_0x1 = 1;

    /** @brief Low-power vertical back-porch enable This bit returns the current state of return to low-power inside the vertical back-porch (VBP) period when timing allows. */
    using DSI_VMCCR_LPVBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VBP is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VBP is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VBP is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVBPE_B_0x0 = 0;
        /** @brief Return to low-power inside the VBP is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVBPE_B_0x1 = 1;

    /** @brief Low-power vertical front-porch enable This bit returns the current state of return to low-power inside the vertical front-porch (VFP) period when timing allows. */
    using DSI_VMCCR_LPVFPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VFP is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VFP is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VFP is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVFPE_B_0x0 = 0;
        /** @brief Return to low-power inside the VFP is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVFPE_B_0x1 = 1;

    /** @brief Low-power vertical active enable This bit returns the current state of return to low-power inside the vertical active (VACT) period when timing allows. */
    using DSI_VMCCR_LPVAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the VACT is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the VACT is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the VACT is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVAE_B_0x0 = 0;
        /** @brief Return to low-power inside the VACT is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPVAE_B_0x1 = 1;

    /** @brief Low-power horizontal back-porch enable This bit returns the current state of return to low-power inside the horizontal back-porch (HBP) period when timing allows. */
    using DSI_VMCCR_LPHBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the HBP period is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the HBP period is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the HBP period is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPHBPE_B_0x0 = 0;
        /** @brief Return to low-power inside the HBP period is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPHBPE_B_0x1 = 1;

    /** @brief Low-power horizontal front-porch enable This bit returns the current state of return to low-power inside the horizontal front-porch (HFP) period when timing allows. */
    using DSI_VMCCR_LPHFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Return to low-power inside the HFP period is disabled. (value: 0)
     *          - B_0x1: Return to low-power inside the HFP period is enabled. (value: 1)
     */
        /** @brief Return to low-power inside the HFP period is disabled. */
    constexpr std::uint32_t DSI_VMCCR_LPHFE_B_0x0 = 0;
        /** @brief Return to low-power inside the HFP period is enabled. */
    constexpr std::uint32_t DSI_VMCCR_LPHFE_B_0x1 = 1;

    /** @brief Frame BTA acknowledge enable This bit returns the current state of request for an acknowledge response at the end of a frame. */
    using DSI_VMCCR_FBTAAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acknowledge response at the end of a frame is disabled. (value: 0)
     *          - B_0x1: Acknowledge response at the end of a frame is enabled. (value: 1)
     */
        /** @brief Acknowledge response at the end of a frame is disabled. */
    constexpr std::uint32_t DSI_VMCCR_FBTAAE_B_0x0 = 0;
        /** @brief Acknowledge response at the end of a frame is enabled. */
    constexpr std::uint32_t DSI_VMCCR_FBTAAE_B_0x1 = 1;

    /** @brief Low-power command enable This bit returns the current command transmission state in low-power mode. */
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
    /** @brief Video packet size This field returns the number of pixels in a single video packet. */
    using DSI_VPCCR_VPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video chunks current configuration register */
    using DSI_VCCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of chunks This field returns the number of chunks being transmitted during a line period. */
    using DSI_VCCCR_NUMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video null packet current configuration register */
    using DSI_VNPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Null packet size This field returns the number of bytes inside a null packet. */
    using DSI_VNPCCR_NPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video HSA current configuration register */
    using DSI_VHSACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal synchronism active duration This fields returns the horizontal synchronism active period in lane byte clock cycles. */
    using DSI_VHSACCR_HSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video HBP current configuration register */
    using DSI_VHBPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal back-porch duration This field returns the horizontal back-porch period in lane byte clock cycles. */
    using DSI_VHBPCCR_HBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video line current configuration register */
    using DSI_VLCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal line duration This field returns the current total of the horizontal line period (HSA+HBP+HACT+HFP) counted in lane byte clock cycles. */
    using DSI_VLCCR_HLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VSA current configuration register */
    using DSI_VVSACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronism active duration This field returns the current vertical synchronism active period measured in number of horizontal lines. */
    using DSI_VVSACCR_VSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VBP current configuration register */
    using DSI_VVBPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical back-porch duration This field returns the current vertical back-porch period measured in number of horizontal lines. */
    using DSI_VVBPCCR_VBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VFP current configuration register */
    using DSI_VVFPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical front-porch duration This field returns the current vertical front-porch period measured in number of horizontal lines. */
    using DSI_VVFPCCR_VFP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Host video VA current configuration register */
    using DSI_VVACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical active duration This field returns the current vertical active period measured in number of horizontal lines. */
    using DSI_VVACCR_VA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Wrapper configuration register */
    using DSI_WCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI mode This bit selects the mode for the video transmission. This bit must only be changed when DSI Host is stopped (DSI_CR.EN = 0). */
    using DSI_WCFGR_DSIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Video mode (value: 0)
     *          - B_0x1: Adapted command mode (value: 1)
     */
        /** @brief Video mode */
    constexpr std::uint32_t DSI_WCFGR_DSIM_B_0x0 = 0;
        /** @brief Adapted command mode */
    constexpr std::uint32_t DSI_WCFGR_DSIM_B_0x1 = 1;

    /** @brief Color multiplexing This bit selects the color multiplexing used by DSI Host. This field must only be changed when DSI is stopped (DSI_WCR.DSIEN = 0 and DSI_CR.EN=0). */
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

    /** @brief TE source This bit selects the tearing effect (TE) source. This bit must only be changed when DSI Host is stopped (DSI_CR.EN = 0). */
    using DSI_WCFGR_TESRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI Link (value: 0)
     *          - B_0x1: External pin (value: 1)
     */
        /** @brief DSI Link */
    constexpr std::uint32_t DSI_WCFGR_TESRC_B_0x0 = 0;
        /** @brief External pin */
    constexpr std::uint32_t DSI_WCFGR_TESRC_B_0x1 = 1;

    /** @brief TE polarity This bit selects the polarity of the external pin tearing effect (TE) source. This bit must only be changed when DSI Host is stopped (DSI_CR.EN = 0). */
    using DSI_WCFGR_TEPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rising edge. (value: 0)
     *          - B_0x1: falling edge. (value: 1)
     */
        /** @brief rising edge. */
    constexpr std::uint32_t DSI_WCFGR_TEPOL_B_0x0 = 0;
        /** @brief falling edge. */
    constexpr std::uint32_t DSI_WCFGR_TEPOL_B_0x1 = 1;

    /** @brief Automatic refresh This bit selects the refresh mode in DBI mode. This bit must only be changed when DSI Host is stopped (DSI_CR.EN = 0). */
    using DSI_WCFGR_AR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: automatic refresh mode disabled (value: 0)
     *          - B_0x1: automatic refresh mode enabled (value: 1)
     */
        /** @brief automatic refresh mode disabled */
    constexpr std::uint32_t DSI_WCFGR_AR_B_0x0 = 0;
        /** @brief automatic refresh mode enabled */
    constexpr std::uint32_t DSI_WCFGR_AR_B_0x1 = 1;

    /** @brief VSync polarity This bit selects the VSync edge on which the LTDC is halted. This bit must only be changed when DSI is stopped (DSI_WCR.DSIEN = 0 and DSI_CR.EN=0). */
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
    /** @brief Color mode This bit controls the display color mode in video mode. */
    using DSI_WCR_COLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full color mode (value: 0)
     *          - B_0x1: Eight color mode (value: 1)
     */
        /** @brief Full color mode */
    constexpr std::uint32_t DSI_WCR_COLM_B_0x0 = 0;
        /** @brief Eight color mode */
    constexpr std::uint32_t DSI_WCR_COLM_B_0x1 = 1;

    /** @brief Shutdown This bit controls the display shutdown in video mode. */
    using DSI_WCR_SHTDN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: display ON (value: 0)
     *          - B_0x1: display OFF (value: 1)
     */
        /** @brief display ON */
    constexpr std::uint32_t DSI_WCR_SHTDN_B_0x0 = 0;
        /** @brief display OFF */
    constexpr std::uint32_t DSI_WCR_SHTDN_B_0x1 = 1;

    /** @brief LTDC enable This bit enables the LTDC for a frame transfer in adapted command mode. */
    using DSI_WCR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC disabled (value: 0)
     *          - B_0x1: LTDC enabled (value: 1)
     */
        /** @brief LTDC disabled */
    constexpr std::uint32_t DSI_WCR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC enabled */
    constexpr std::uint32_t DSI_WCR_LTDCEN_B_0x1 = 1;

    /** @brief DSI enable This bit enables the DSI Wrapper. */
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
    /** @brief Tearing effect interrupt enable This bit enables the tearing effect interrupt. */
    using DSI_WIER_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tearing effect interrupt disabled (value: 0)
     *          - B_0x1: Tearing effect interrupt enabled (value: 1)
     */
        /** @brief Tearing effect interrupt disabled */
    constexpr std::uint32_t DSI_WIER_TEIE_B_0x0 = 0;
        /** @brief Tearing effect interrupt enabled */
    constexpr std::uint32_t DSI_WIER_TEIE_B_0x1 = 1;

    /** @brief End of refresh interrupt enable This bit enables the end of refresh interrupt. */
    using DSI_WIER_ERIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of refresh interrupt disabled (value: 0)
     *          - B_0x1: End of refresh interrupt enabled (value: 1)
     */
        /** @brief End of refresh interrupt disabled */
    constexpr std::uint32_t DSI_WIER_ERIE_B_0x0 = 0;
        /** @brief End of refresh interrupt enabled */
    constexpr std::uint32_t DSI_WIER_ERIE_B_0x1 = 1;

    /** @brief PLL lock interrupt enable This bit enables the PLL lock interrupt. */
    using DSI_WIER_PLLLIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL lock interrupt disabled (value: 0)
     *          - B_0x1: PLL lock interrupt enabled (value: 1)
     */
        /** @brief PLL lock interrupt disabled */
    constexpr std::uint32_t DSI_WIER_PLLLIE_B_0x0 = 0;
        /** @brief PLL lock interrupt enabled */
    constexpr std::uint32_t DSI_WIER_PLLLIE_B_0x1 = 1;

    /** @brief PLL unlock interrupt enable This bit enables the PLL unlock interrupt. */
    using DSI_WIER_PLLUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL unlock interrupt disabled (value: 0)
     *          - B_0x1: PLL unlock interrupt enabled (value: 1)
     */
        /** @brief PLL unlock interrupt disabled */
    constexpr std::uint32_t DSI_WIER_PLLUIE_B_0x0 = 0;
        /** @brief PLL unlock interrupt enabled */
    constexpr std::uint32_t DSI_WIER_PLLUIE_B_0x1 = 1;

    /** @brief Regulator ready interrupt enable This bit enables the regulator ready interrupt. */
    using DSI_WIER_RRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regulator ready interrupt disabled (value: 0)
     *          - B_0x1: Regulator ready interrupt enabled (value: 1)
     */
        /** @brief Regulator ready interrupt disabled */
    constexpr std::uint32_t DSI_WIER_RRIE_B_0x0 = 0;
        /** @brief Regulator ready interrupt enabled */
    constexpr std::uint32_t DSI_WIER_RRIE_B_0x1 = 1;

    /** @brief DSI Wrapper interrupt and status register */
    using DSI_WISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tearing effect interrupt flag This bit is set when a tearing effect event occurs. */
    using DSI_WISR_TEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No tearing effect event occurred (value: 0)
     *          - B_0x1: Tearing effect event occurred (value: 1)
     */
        /** @brief No tearing effect event occurred */
    constexpr std::uint32_t DSI_WISR_TEIF_B_0x0 = 0;
        /** @brief Tearing effect event occurred */
    constexpr std::uint32_t DSI_WISR_TEIF_B_0x1 = 1;

    /** @brief End of refresh interrupt flag This bit is set when the transfer of a frame in adapted command mode is finished. */
    using DSI_WISR_ERIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of refresh event occurred (value: 0)
     *          - B_0x1: End of refresh event occurred (value: 1)
     */
        /** @brief No end of refresh event occurred */
    constexpr std::uint32_t DSI_WISR_ERIF_B_0x0 = 0;
        /** @brief End of refresh event occurred */
    constexpr std::uint32_t DSI_WISR_ERIF_B_0x1 = 1;

    /** @brief Busy flag This bit is set when the transfer of a frame in adapted command mode is ongoing. */
    using DSI_WISR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transfer on going (value: 0)
     *          - B_0x1: Transfer on going (value: 1)
     */
        /** @brief No transfer on going */
    constexpr std::uint32_t DSI_WISR_BUSY_B_0x0 = 0;
        /** @brief Transfer on going */
    constexpr std::uint32_t DSI_WISR_BUSY_B_0x1 = 1;

    /** @brief PLL lock status This bit is set when the PLL is locked and cleared when it is unlocked. */
    using DSI_WISR_PLLLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL is unlocked. (value: 0)
     *          - B_0x1: PLL is locked. (value: 1)
     */
        /** @brief PLL is unlocked. */
    constexpr std::uint32_t DSI_WISR_PLLLS_B_0x0 = 0;
        /** @brief PLL is locked. */
    constexpr std::uint32_t DSI_WISR_PLLLS_B_0x1 = 1;

    /** @brief PLL lock interrupt flag This bit is set when the PLL becomes locked. */
    using DSI_WISR_PLLLIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No PLL lock event occurred (value: 0)
     *          - B_0x1: PLL lock event occurred (value: 1)
     */
        /** @brief No PLL lock event occurred */
    constexpr std::uint32_t DSI_WISR_PLLLIF_B_0x0 = 0;
        /** @brief PLL lock event occurred */
    constexpr std::uint32_t DSI_WISR_PLLLIF_B_0x1 = 1;

    /** @brief PLL unlock interrupt flag This bit is set when the PLL becomes unlocked. */
    using DSI_WISR_PLLUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No PLL unlock event occurred (value: 0)
     *          - B_0x1: PLL unlock event occurred (value: 1)
     */
        /** @brief No PLL unlock event occurred */
    constexpr std::uint32_t DSI_WISR_PLLUIF_B_0x0 = 0;
        /** @brief PLL unlock event occurred */
    constexpr std::uint32_t DSI_WISR_PLLUIF_B_0x1 = 1;

    /** @brief Regulator ready status This bit gives the status of the regulator. */
    using DSI_WISR_RRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regulator is not ready. (value: 0)
     *          - B_0x1: Regulator is ready. (value: 1)
     */
        /** @brief Regulator is not ready. */
    constexpr std::uint32_t DSI_WISR_RRS_B_0x0 = 0;
        /** @brief Regulator is ready. */
    constexpr std::uint32_t DSI_WISR_RRS_B_0x1 = 1;

    /** @brief Regulator ready interrupt flag This bit is set when the regulator becomes ready. */
    using DSI_WISR_RRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regulator ready event occurred (value: 0)
     *          - B_0x1: Regulator ready event occurred (value: 1)
     */
        /** @brief No regulator ready event occurred */
    constexpr std::uint32_t DSI_WISR_RRIF_B_0x0 = 0;
        /** @brief Regulator ready event occurred */
    constexpr std::uint32_t DSI_WISR_RRIF_B_0x1 = 1;

    /** @brief DSI Wrapper interrupt flag clear register */
    using DSI_WIFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear tearing effect interrupt flag Write 1 clears the TEIF flag in the DSI_WSR register. */
    using DSI_WIFCR_CTEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear end of refresh interrupt flag Write 1 clears the ERIF flag in the DSI_WSR register. */
    using DSI_WIFCR_CERIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear PLL lock interrupt flag Write 1 clears the PLLLIF flag in the DSI_WSR register. */
    using DSI_WIFCR_CPLLLIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear PLL unlock interrupt flag Write 1 clears the PLLUIF flag in the DSI_WSR register. */
    using DSI_WIFCR_CPLLUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear regulator ready interrupt flag Write 1 clears the RRIF flag in the DSI_WSR register. */
    using DSI_WIFCR_CRRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Wrapper PHY configuration register 0 */
    using DSI_WPCR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unit interval multiplied by 4 This field defines the bit period in high-speed mode in unit of 0.25 ns. As an example, if the unit interval is 3 ns, a value of twelve (0x0C) must be driven to this input. This value is used to generate delays. If the period is not a multiple of 0.25 ns, the value driven must be rounded down. For example, a 600 Mbit/s link uses a unit interval of 1.667 ns, which, multiplied by four gives 6.667 ns. In this case a value of 6 (not 7) must be driven onto the ui_x4 input. */
    using DSI_WPCR0_UIX4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Swap clock lane pins This bit swaps the pins on clock lane. */
    using DSI_WPCR0_SWCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular clock lane pin configuration (value: 0)
     *          - B_0x1: Swapped clock lane pin (value: 1)
     */
        /** @brief Regular clock lane pin configuration */
    constexpr std::uint32_t DSI_WPCR0_SWCL_B_0x0 = 0;
        /** @brief Swapped clock lane pin */
    constexpr std::uint32_t DSI_WPCR0_SWCL_B_0x1 = 1;

    /** @brief Swap data lane 0 pins This bit swaps the pins on data lane 0. */
    using DSI_WPCR0_SWDL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular clock lane pin configuration (value: 0)
     *          - B_0x1: Swapped clock lane pin (value: 1)
     */
        /** @brief Regular clock lane pin configuration */
    constexpr std::uint32_t DSI_WPCR0_SWDL0_B_0x0 = 0;
        /** @brief Swapped clock lane pin */
    constexpr std::uint32_t DSI_WPCR0_SWDL0_B_0x1 = 1;

    /** @brief Swap data lane 1 pins This bit swaps the pins on clock lane. */
    using DSI_WPCR0_SWDL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular clock lane pin configuration (value: 0)
     *          - B_0x1: Swapped clock lane pin (value: 1)
     */
        /** @brief Regular clock lane pin configuration */
    constexpr std::uint32_t DSI_WPCR0_SWDL1_B_0x0 = 0;
        /** @brief Swapped clock lane pin */
    constexpr std::uint32_t DSI_WPCR0_SWDL1_B_0x1 = 1;

    /** @brief Invert high-speed data signal on clock lane This bit inverts the high-speed data signal on clock lane. */
    using DSI_WPCR0_HSICL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal data configuration (value: 0)
     *          - B_0x1: Inverted data configuration (value: 1)
     */
        /** @brief Normal data configuration */
    constexpr std::uint32_t DSI_WPCR0_HSICL_B_0x0 = 0;
        /** @brief Inverted data configuration */
    constexpr std::uint32_t DSI_WPCR0_HSICL_B_0x1 = 1;

    /** @brief Invert the high-speed data signal on data lane 0 This bit inverts the high-speed data signal on clock lane. */
    using DSI_WPCR0_HSIDL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal data signal configuration (value: 0)
     *          - B_0x1: Inverted data signal configuration (value: 1)
     */
        /** @brief Normal data signal configuration */
    constexpr std::uint32_t DSI_WPCR0_HSIDL0_B_0x0 = 0;
        /** @brief Inverted data signal configuration */
    constexpr std::uint32_t DSI_WPCR0_HSIDL0_B_0x1 = 1;

    /** @brief Invert the high-speed data signal on data lane 1 This bit inverts the high-speed data signal on data lane 1. */
    using DSI_WPCR0_HSIDL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal data signal configuration (value: 0)
     *          - B_0x1: Inverted data signal configuration (value: 1)
     */
        /** @brief Normal data signal configuration */
    constexpr std::uint32_t DSI_WPCR0_HSIDL1_B_0x0 = 0;
        /** @brief Inverted data signal configuration */
    constexpr std::uint32_t DSI_WPCR0_HSIDL1_B_0x1 = 1;

    /** @brief Force in TX Stop mode the clock lane This bit forces the clock lane in TX stop mode. It is used to initialize a lane module in transmit mode. It causes the lane module to immediately jump to transmit control mode and to begin transmitting a stop state (LP-11). It can be used to go back in TX mode after a wrong BTA sequence. */
    using DSI_WPCR0_FTXSMCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Force the clock lane in TX Stop mode (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t DSI_WPCR0_FTXSMCL_B_0x0 = 0;
        /** @brief Force the clock lane in TX Stop mode */
    constexpr std::uint32_t DSI_WPCR0_FTXSMCL_B_0x1 = 1;

    /** @brief Force in TX Stop mode the data lanes This bit forces the data lanes in TX stop mode. It is used to initialize a lane module in transmit mode. It causes the lane module to immediately jump to transmit control mode and to begin transmitting a stop state (LP-11). It can be used to go back in TX mode after a wrong BTA sequence. */
    using DSI_WPCR0_FTXSMDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Force the data lanes in TX Stop mode (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t DSI_WPCR0_FTXSMDL_B_0x0 = 0;
        /** @brief Force the data lanes in TX Stop mode */
    constexpr std::uint32_t DSI_WPCR0_FTXSMDL_B_0x1 = 1;

    /** @brief Contention detection OFF on data lanes When only forward escape mode is used, this signal can be made high to switch off the contention detector and reduce static power consumption. */
    using DSI_WPCR0_CDOFFDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Contention detection on data lane ON (value: 0)
     *          - B_0x1: Contention detection on data lane OFF (value: 1)
     */
        /** @brief Contention detection on data lane ON */
    constexpr std::uint32_t DSI_WPCR0_CDOFFDL_B_0x0 = 0;
        /** @brief Contention detection on data lane OFF */
    constexpr std::uint32_t DSI_WPCR0_CDOFFDL_B_0x1 = 1;

    /** @brief Turn disable data lanes This bit forces the data lane to remain in RX event if it receives a bus-turn-around request from the other side. */
    using DSI_WPCR0_TDDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Force data lanes in RX mode after a BTA (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t DSI_WPCR0_TDDL_B_0x0 = 0;
        /** @brief Force data lanes in RX mode after a BTA */
    constexpr std::uint32_t DSI_WPCR0_TDDL_B_0x1 = 1;

    /** @brief Pull-down enable This bit enables a pull-down on the lane to prevent from floating states when unused. */
    using DSI_WPCR0_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pull-down on lanes disabled (value: 0)
     *          - B_0x1: Pull-down on lanes enabled (value: 1)
     */
        /** @brief Pull-down on lanes disabled */
    constexpr std::uint32_t DSI_WPCR0_PDEN_B_0x0 = 0;
        /** @brief Pull-down on lanes enabled */
    constexpr std::uint32_t DSI_WPCR0_PDEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>CLK-PREPARE</sub> enable This bit enables the manual programming of t<sub>CLK-PREPARE </sub>duration in the D-PHY. The desired value must be programmed in the TLKCPREP field of the DSI_WPCR2 register. */
    using DSI_WPCR0_TCLKPREPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for t<sub>CLK-PREPARE</sub> (value: 0)
     *          - B_0x1: Programmable value is used for t<sub>CLK-PREPARE</sub> (value: 1)
     */
        /** @brief Default value is used for t<sub>CLK-PREPARE</sub> */
    constexpr std::uint32_t DSI_WPCR0_TCLKPREPEN_B_0x0 = 0;
        /** @brief Programmable value is used for t<sub>CLK-PREPARE</sub> */
    constexpr std::uint32_t DSI_WPCR0_TCLKPREPEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>CLK-ZERO</sub> enable This bit enables the manual programming of t<sub>CLK-ZERO </sub>duration in the D-PHY. The desired value must be programmed in the TCLKZERO field of the DSI_WPCR2 register. */
    using DSI_WPCR0_TCLKZEROEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for t<sub>CLK-ZERO</sub>. (value: 0)
     *          - B_0x1: Programmable value is used for t<sub>CLK-ZERO</sub>. (value: 1)
     */
        /** @brief Default value is used for t<sub>CLK-ZERO</sub>. */
    constexpr std::uint32_t DSI_WPCR0_TCLKZEROEN_B_0x0 = 0;
        /** @brief Programmable value is used for t<sub>CLK-ZERO</sub>. */
    constexpr std::uint32_t DSI_WPCR0_TCLKZEROEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>HS-PREPARE</sub> enable This bit enables the manual programming of t<sub>HS-PREPARE </sub>duration in the D-PHY. The desired value must be programmed in the THSPREP field of the DSI_WPCR2 register. */
    using DSI_WPCR0_THSPREPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for t<sub>HS-PREPARE</sub>. (value: 0)
     *          - B_0x1: Programmable value is used for t<sub>HS-PREPARE</sub>. (value: 1)
     */
        /** @brief Default value is used for t<sub>HS-PREPARE</sub>. */
    constexpr std::uint32_t DSI_WPCR0_THSPREPEN_B_0x0 = 0;
        /** @brief Programmable value is used for t<sub>HS-PREPARE</sub>. */
    constexpr std::uint32_t DSI_WPCR0_THSPREPEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>HS-TRAIL</sub> enable This bit enables the manual programming of T<sub>HS-TRAIL </sub>duration in the D-PHY. The desired value must be programmed in the THSRAIL field of the DSI_WPCR2 register. */
    using DSI_WPCR0_THSTRAILEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for T<sub>HS-TRAIL</sub>. (value: 0)
     *          - B_0x1: Programmable value is used for T<sub>HS-TRAIL</sub>. (value: 1)
     */
        /** @brief Default value is used for T<sub>HS-TRAIL</sub>. */
    constexpr std::uint32_t DSI_WPCR0_THSTRAILEN_B_0x0 = 0;
        /** @brief Programmable value is used for T<sub>HS-TRAIL</sub>. */
    constexpr std::uint32_t DSI_WPCR0_THSTRAILEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>HS-ZERO</sub> enable This bit enables the manual programming of t<sub>HS-ZERO </sub>duration in the D-PHY. The desired value must be programmed in the THSZERO field of the DSI_WPCR3 register. */
    using DSI_WPCR0_THSZEROEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for t<sub>HS-ZERO</sub>. (value: 0)
     *          - B_0x1: Programmable value is used for t<sub>HS-ZERO</sub>. (value: 1)
     */
        /** @brief Default value is used for t<sub>HS-ZERO</sub>. */
    constexpr std::uint32_t DSI_WPCR0_THSZEROEN_B_0x0 = 0;
        /** @brief Programmable value is used for t<sub>HS-ZERO</sub>. */
    constexpr std::uint32_t DSI_WPCR0_THSZEROEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>LPX</sub> for data lanes enable This bit enables the manual programming of T<sub>LPX </sub>duration for the data lanes in the D-PHY. The desired value must be programmed in the TLPXD field of the DSI_WPCR3 register. */
    using DSI_WPCR0_TLPXDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for T<sub>LPX</sub> for the data lanes. (value: 0)
     *          - B_0x1: Programmable value is used for T<sub>LPX</sub> for the data lanes. (value: 1)
     */
        /** @brief Default value is used for T<sub>LPX</sub> for the data lanes. */
    constexpr std::uint32_t DSI_WPCR0_TLPXDEN_B_0x0 = 0;
        /** @brief Programmable value is used for T<sub>LPX</sub> for the data lanes. */
    constexpr std::uint32_t DSI_WPCR0_TLPXDEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>HS-EXIT</sub> enable This bit enables the manual programming of t<sub>HS-EXIT </sub>duration in the D-PHY. The desired value must be programmed in the THSEXIT field of the DSI_WPCR3 register. */
    using DSI_WPCR0_THSEXITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for t<sub>HS-EXIT</sub>. (value: 0)
     *          - B_0x1: Programmable value is used for t<sub>HS-EXIT</sub>. (value: 1)
     */
        /** @brief Default value is used for t<sub>HS-EXIT</sub>. */
    constexpr std::uint32_t DSI_WPCR0_THSEXITEN_B_0x0 = 0;
        /** @brief Programmable value is used for t<sub>HS-EXIT</sub>. */
    constexpr std::uint32_t DSI_WPCR0_THSEXITEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>LPX</sub> for clock lane enable This bit enables the manual programming of t<sub>LPX</sub> duration for the clock lane in the D-PHY. The desired value must be programmed in the TLPXC field of the DSI_WPCR3 register. */
    using DSI_WPCR0_TLPXCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for t<sub>LPX</sub> for the clock lane. (value: 0)
     *          - B_0x1: Programmable value is used for t<sub>LPX</sub> for the clock lane. (value: 1)
     */
        /** @brief Default value is used for t<sub>LPX</sub> for the clock lane. */
    constexpr std::uint32_t DSI_WPCR0_TLPXCEN_B_0x0 = 0;
        /** @brief Programmable value is used for t<sub>LPX</sub> for the clock lane. */
    constexpr std::uint32_t DSI_WPCR0_TLPXCEN_B_0x1 = 1;

    /** @brief Custom time for t<sub>CLK-POST</sub> enable This bit enables the manual programming of t<sub>CLK-POST </sub>duration in the D-PHY. The desired value must be programmed in the TCLKPOST field of the DSI_WPCR4 register. */
    using DSI_WPCR0_TCLKPOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default value is used for t<sub>CLKPOST</sub>. (value: 0)
     *          - B_0x1: Programmable value is used for t<sub>CLKPOST</sub>. (value: 1)
     */
        /** @brief Default value is used for t<sub>CLKPOST</sub>. */
    constexpr std::uint32_t DSI_WPCR0_TCLKPOSTEN_B_0x0 = 0;
        /** @brief Programmable value is used for t<sub>CLKPOST</sub>. */
    constexpr std::uint32_t DSI_WPCR0_TCLKPOSTEN_B_0x1 = 1;

    /** @brief DSI Wrapper PHY configuration register 1 */
    using DSI_WPCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed transmission delay on clock lane Delay tuner control to change delay (up to DP/DN) in clock path. Can be used to change clock edge position with respect to data bit transitions on DP/DN. Default value = 00. */
    using DSI_WPCR1_HSTXDCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed transmission delay on data lanes Delay tuner control to change delay (up to DP/DN) in data path. Can be used to change data edge transition positions with respect to clock edge on DP/DN. Default value = 00. */
    using DSI_WPCR1_HSTXDDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power transmission slew-rate compensation on clock lane Can be used to change slew-rate of clock lane LP transitions. Default value = 00. */
    using DSI_WPCR1_LPSRCCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power transmission slew-rate compensation on data lanes Can be used to change slew-rate of data lane LP transitions. Default value = 00. */
    using DSI_WPCR1_LPSRCDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDD control This bit switches on the additional current path to meet the SDDTx parameter defined by MIPI<sup></sup> D-PHY Specification on both clock and data lanes. */
    using DSI_WPCR1_SDDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Activate additional current path on all lanes (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t DSI_WPCR1_SDDC_B_0x0 = 0;
        /** @brief Activate additional current path on all lanes */
    constexpr std::uint32_t DSI_WPCR1_SDDC_B_0x1 = 1;

    /** @brief High-speed transmission slew-rate control on clock lane Slew-rate control for high-speed transmitter output. It can be used to change slew-rate of clock lane HS transitions. Default value = 00. */
    using DSI_WPCR1_HSTXSRCCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed transmission slew-rate control on data lanes Slew-rate control for high-speed transmitter output. It can be used to change slew-rate of data lane HS transitions. Default value = 00. */
    using DSI_WPCR1_HSTXSRCDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Forces LP receiver in low-power mode This bit enables the low-power mode of LP receiver (LPRX). When set, the LPRX operates in low-power mode all the time (when this is not activated, LPRX operates in low power mode during ULPS only). */
    using DSI_WPCR1_FLPRXLPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: LPRX is forced in low-power mode. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t DSI_WPCR1_FLPRXLPM_B_0x0 = 0;
        /** @brief LPRX is forced in low-power mode. */
    constexpr std::uint32_t DSI_WPCR1_FLPRXLPM_B_0x1 = 1;

    /** @brief Low-power RX low-pass filtering tuning This signal can be used to tune the cutoff frequency of low-pass filter at the input of LPRX. */
    using DSI_WPCR1_LPRXFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Wrapper PHY configuration register 2 */
    using DSI_WPCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>CLK-PREPARE</sub> This field defines the t<sub>CLK-PREPARE</sub> has specified in the MIPI<sup></sup> D-PHY specification. This value is used by the D-PHY when the TCLKPREPEN bit of the DSI_WPCR0 is set. TCLKPREP = 2 x t<sub>CLK-PREPARE</sub> expressed in ns.The default value used by the D-PHY when TCLKPREPEN bit of the DSI_WPCR0 is reset is 120 (60ns + 20*UI). */
    using DSI_WPCR2_TCLKPREP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>CLK-ZERO</sub> This field defines the t<sub>CLK-ZERO</sub> has specified in the MIPI<sup></sup> D-PHY specification. This value is used by the D-PHY when the TCLKZEROEN bit of the DSI_WPCR0 is set. TCLKZERO = t<sub>CLK-ZERO</sub> / 2 expressed in ns.The default value used by the D-PHY when TCLKZEROEN bit of the DSI_WPCR0 is reset is 195 (390ns). */
    using DSI_WPCR2_TCLKZERO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>HS-PREPARE</sub> This field defines the t<sub>HS-PREPARE</sub> has specified in the MIPI<sup></sup> D-PHY specification. This value is used by the D-PHY when the THSPREPEN bit of the DSI_WPCR0 is set. THSPREP = 2 x t<sub>HS-PREPARE</sub> expressed in ns.The default value used by the D-PHY when THSPREPEN bit of the DSI_WPCR0 is reset is 126 (63ns + 12*UI). */
    using DSI_WPCR2_THSPREP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>HSTRAIL</sub> This field defines the t<sub>HS-TRAIL</sub> has specified in the MIPI<sup></sup> D-PHY specification. This value is used by the D-PHY when the THSTRAILEN bit of the DSI_WPCR0 is set. THSTRAIL = 2 x t<sub>HS-TRAIL</sub> expressed in ns.The default value used by the D-PHY when THSTRAILEN bit of the DSI_WPCR0 is reset is 140 (70ns+8*UI). */
    using DSI_WPCR2_THSTRAIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Wrapper PHY configuration register 3 */
    using DSI_WPCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x424, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>HS-ZERO</sub> This field defines the t<sub>HS-ZERO</sub> has specified in the MIPI<sup></sup> D-PHY specification. This value is used by the D-PHY when the THSZEROEN bit of the DSI_WPCR1 is set. THSZERO = t<sub>HS-ZERO</sub> expressed in ns.The default value used by the D-PHY when THSZEROEN bit of the DSI_WPCR1 is reset is 175, (175ns). */
    using DSI_WPCR3_THSZERO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>LPX</sub> for data lanes This field defines the t<sub>LPX</sub> has specified in the MIPI<sup></sup> D-PHY specification for the data lanes. This value is used by the D-PHY when the TLPXDEN bit of the DSI_WPCR1 is set. TLPXD = 2 x t<sub>LPX</sub> expressed in ns.The default value used by the D-PHY when TLPXDEN bit of the DSI_WPCR1 is reset is 100 (50ns). */
    using DSI_WPCR3_TLPXD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>HSEXIT</sub> This field defines the t<sub>HS-EXHigh-SpeedIT</sub> has specified in the MIPI<sup></sup> D-PHY specification. This value is used by the D-PHY when the THSEXITEN bit of the DSI_WPCR1 is set. THSEXIT = t<sub>HS-ZERO</sub> expressed in ns.The default value used by the D-PHY when THSEXITEN bit of the DSI_WPCR1 is reset is 100 (100ns). */
    using DSI_WPCR3_THSEXIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>LPXC</sub> for clock lane This field defines the t<sub>LPX</sub> has specified in the MIPI<sup></sup> D-PHY specification for the clock lane. This value is used by the D-PHY when the TLPXCEN bit of the DSI_WPCR1 is set. TLPXC = 2 x t<sub>LPX</sub> expressed in ns.The default value used by the D-PHY when TLPXCEN bit of the DSI_WPCR1 is reset is 100 (50ns). */
    using DSI_WPCR3_TLPXC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Wrapper PHY configuration register 4 */
    using DSI_WPCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief t<sub>CLK-POST</sub> This field defines the t<sub>CLK-POST</sub> has specified in the MIPI<sup></sup> D-PHY specification. This value is used by the D-PHY when the TCLKPOSTEN bit of the DSI_WPCR0 is set. TCLKPOST = 2 x t<sub>CLK-POST</sub> expressed in ns.The default value used by the D-PHY when TCLKPOSTEN bit of the DSI_WPCR0 is reset is 200 (100ns + 120*UI). */
    using DSI_WPCR4_TCLKPOST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSI Wrapper regulator and PLL control register */
    using DSI_WRPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL enable This bit enables the D-PHY PLL. */
    using DSI_WRPCR_PLLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL disabled (value: 0)
     *          - B_0x1: PLL enabled (value: 1)
     */
        /** @brief PLL disabled */
    constexpr std::uint32_t DSI_WRPCR_PLLEN_B_0x0 = 0;
        /** @brief PLL enabled */
    constexpr std::uint32_t DSI_WRPCR_PLLEN_B_0x1 = 1;

    /** @brief PLL loop division factor This field configures the PLL loop division factor. 10 to 125: Allowed loop division factor values Others: Reserved */
    using DSI_WRPCR_NDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL input division factor This field configures the PLL input division factor. */
    using DSI_WRPCR_IDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL input divided by 1 (value: 0)
     *          - B_0x1: PLL input divided by 1 (value: 1)
     *          - B_0x2: PLL input divided by 2 (value: 2)
     *          - B_0x3: PLL input divided by 3 (value: 3)
     *          - B_0x4: PLL input divided by 4 (value: 4)
     *          - B_0x5: PLL input divided by 5 (value: 5)
     *          - B_0x6: PLL input divided by 6 (value: 6)
     *          - B_0x7: PLL input divided by 7 (value: 7)
     */
        /** @brief PLL input divided by 1 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x0 = 0;
        /** @brief PLL input divided by 1 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x1 = 1;
        /** @brief PLL input divided by 2 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x2 = 2;
        /** @brief PLL input divided by 3 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x3 = 3;
        /** @brief PLL input divided by 4 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x4 = 4;
        /** @brief PLL input divided by 5 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x5 = 5;
        /** @brief PLL input divided by 6 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x6 = 6;
        /** @brief PLL input divided by 7 */
    constexpr std::uint32_t DSI_WRPCR_IDF_B_0x7 = 7;

    /** @brief PLL output division factor This field configures the PLL output division factor. */
    using DSI_WRPCR_ODF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL output divided by 1 (value: 0)
     *          - B_0x1: PLL output divided by 2 (value: 1)
     *          - B_0x2: PLL output divided by 4 (value: 2)
     *          - B_0x3: PLL output divided by 8 (value: 3)
     */
        /** @brief PLL output divided by 1 */
    constexpr std::uint32_t DSI_WRPCR_ODF_B_0x0 = 0;
        /** @brief PLL output divided by 2 */
    constexpr std::uint32_t DSI_WRPCR_ODF_B_0x1 = 1;
        /** @brief PLL output divided by 4 */
    constexpr std::uint32_t DSI_WRPCR_ODF_B_0x2 = 2;
        /** @brief PLL output divided by 8 */
    constexpr std::uint32_t DSI_WRPCR_ODF_B_0x3 = 3;

    /** @brief Regulator enable This bit enables the DPHY regulator. */
    using DSI_WRPCR_REGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: regulator disabled (value: 0)
     *          - B_0x1: regulator enabled (value: 1)
     */
        /** @brief regulator disabled */
    constexpr std::uint32_t DSI_WRPCR_REGEN_B_0x0 = 0;
        /** @brief regulator enabled */
    constexpr std::uint32_t DSI_WRPCR_REGEN_B_0x1 = 1;

}

#endif
