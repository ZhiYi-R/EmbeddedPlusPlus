/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5F9_SEC_GFXTIM_HPP
#define EMBEDDED_PP_STM32U5F9_SEC_GFXTIM_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GFXTIM register block */
namespace STM32U5F9::SEC_GFXTIM {

    /** @brief GFXTIM configuration register */
    using GFXTIM_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tearing source */
    using GFXTIM_CR_TES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TE input pad selected (value: 0)
     *          - B_0x1: gfxtim_ite selected (value: 1)
     *          - B_0x2: HSYNC input selected by SYNCS[1:0] (value: 2)
     *          - B_0x3: VSYNC input selected by SYNCS[1:0] (value: 3)
     */
        /** @brief TE input pad selected */
    constexpr std::uint32_t GFXTIM_CR_TES_B_0x0 = 0;
        /** @brief gfxtim_ite selected */
    constexpr std::uint32_t GFXTIM_CR_TES_B_0x1 = 1;
        /** @brief HSYNC input selected by SYNCS[1:0] */
    constexpr std::uint32_t GFXTIM_CR_TES_B_0x2 = 2;
        /** @brief VSYNC input selected by SYNCS[1:0] */
    constexpr std::uint32_t GFXTIM_CR_TES_B_0x3 = 3;

    /** @brief tearing--effect polarity */
    using GFXTIM_CR_TEPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tearing effect active on rising edge (value: 0)
     *          - B_0x1: tearing effect active on falling edge (value: 1)
     */
        /** @brief tearing effect active on rising edge */
    constexpr std::uint32_t GFXTIM_CR_TEPOL_B_0x0 = 0;
        /** @brief tearing effect active on falling edge */
    constexpr std::uint32_t GFXTIM_CR_TEPOL_B_0x1 = 1;

    /** @brief synchronization source */
    using GFXTIM_CR_SYNCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: gfxtim_hsync[0] and gfxtim_vsync[0] selected (value: 0)
     *          - B_0x1: gfxtim_hsync[1] and gfxtim_vsync[1] selected (value: 1)
     *          - B_0x2: gfxtim_hsync[2] and gfxtim_vsync[2] selected (value: 2)
     *          - B_0x3: gfxtim_hsync[3] and gfxtim_vsync[3] selected (value: 3)
     */
        /** @brief gfxtim_hsync[0] and gfxtim_vsync[0] selected */
    constexpr std::uint32_t GFXTIM_CR_SYNCS_B_0x0 = 0;
        /** @brief gfxtim_hsync[1] and gfxtim_vsync[1] selected */
    constexpr std::uint32_t GFXTIM_CR_SYNCS_B_0x1 = 1;
        /** @brief gfxtim_hsync[2] and gfxtim_vsync[2] selected */
    constexpr std::uint32_t GFXTIM_CR_SYNCS_B_0x2 = 2;
        /** @brief gfxtim_hsync[3] and gfxtim_vsync[3] selected */
    constexpr std::uint32_t GFXTIM_CR_SYNCS_B_0x3 = 3;

    /** @brief frame-clock calibration output enable */
    using GFXTIM_CR_FCCOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: frame-clock output disabled (value: 0)
     *          - B_0x1: frame-clock output enabled (value: 1)
     */
        /** @brief frame-clock output disabled */
    constexpr std::uint32_t GFXTIM_CR_FCCOE_B_0x0 = 0;
        /** @brief frame-clock output enabled */
    constexpr std::uint32_t GFXTIM_CR_FCCOE_B_0x1 = 1;

    /** @brief line-clock calibration output enable */
    using GFXTIM_CR_LCCOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: line-clock output disabled (value: 0)
     *          - B_0x1: line-clock output enabled (value: 1)
     */
        /** @brief line-clock output disabled */
    constexpr std::uint32_t GFXTIM_CR_LCCOE_B_0x0 = 0;
        /** @brief line-clock output enabled */
    constexpr std::uint32_t GFXTIM_CR_LCCOE_B_0x1 = 1;

    /** @brief GFXTIM clock generator configuration register */
    using GFXTIM_CGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line clock source */
    using GFXTIM_CGCR_LCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: line clock counter underflow (value: 0)
     *          - B_0x1: frame clock counter underflow (value: 1)
     *          - B_0x2: HSYNC rising edge (value: 2)
     *          - B_0x3: HSYNC falling edge (value: 3)
     *          - B_0x4: VSYNC rising edge (value: 4)
     *          - B_0x5: VSYNC falling edge (value: 5)
     *          - B_0x6: TE rising edge (value: 6)
     *          - B_0x7: TE falling edge (value: 7)
     */
        /** @brief line clock counter underflow */
    constexpr std::uint32_t GFXTIM_CGCR_LCS_B_0x0 = 0;
        /** @brief frame clock counter underflow */
    constexpr std::uint32_t GFXTIM_CGCR_LCS_B_0x1 = 1;
        /** @brief HSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCS_B_0x2 = 2;
        /** @brief HSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCS_B_0x3 = 3;
        /** @brief VSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCS_B_0x4 = 4;
        /** @brief VSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCS_B_0x5 = 5;
        /** @brief TE rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCS_B_0x6 = 6;
        /** @brief TE falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCS_B_0x7 = 7;

    /** @brief line clock counter clock source */
    using GFXTIM_CGCR_LCCCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: line clock counter disabled (value: 0)
     *          - B_0x1: system clock selected (value: 1)
     */
        /** @brief line clock counter disabled */
    constexpr std::uint32_t GFXTIM_CGCR_LCCCS_B_0x0 = 0;
        /** @brief system clock selected */
    constexpr std::uint32_t GFXTIM_CGCR_LCCCS_B_0x1 = 1;

    /** @brief line clock counter force reload */
    using GFXTIM_CGCR_LCCFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: line clock counter reload forced (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_CGCR_LCCFR_B_0x0 = 0;
        /** @brief line clock counter reload forced */
    constexpr std::uint32_t GFXTIM_CGCR_LCCFR_B_0x1 = 1;

    /** @brief line clock counter hardware reload source */
    using GFXTIM_CGCR_LCCHRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no hardware reload (value: 0)
     *          - B_0x1: frame clock counter underflow (value: 1)
     *          - B_0x2: HSYNC rising edge (value: 2)
     *          - B_0x3: HSYNC falling edge (value: 3)
     *          - B_0x4: VSYNC rising edge (value: 4)
     *          - B_0x5: VSYNC falling edge (value: 5)
     *          - B_0x6: TE rising edge (value: 6)
     *          - B_0x7: TE falling edge (value: 7)
     */
        /** @brief no hardware reload */
    constexpr std::uint32_t GFXTIM_CGCR_LCCHRS_B_0x0 = 0;
        /** @brief frame clock counter underflow */
    constexpr std::uint32_t GFXTIM_CGCR_LCCHRS_B_0x1 = 1;
        /** @brief HSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCCHRS_B_0x2 = 2;
        /** @brief HSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCCHRS_B_0x3 = 3;
        /** @brief VSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCCHRS_B_0x4 = 4;
        /** @brief VSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCCHRS_B_0x5 = 5;
        /** @brief TE rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCCHRS_B_0x6 = 6;
        /** @brief TE falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_LCCHRS_B_0x7 = 7;

    /** @brief frame clock source */
    using GFXTIM_CGCR_FCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: line clock counter underflow (value: 0)
     *          - B_0x1: frame clock counter underflow (value: 1)
     *          - B_0x2: HSYNC rising edge (value: 2)
     *          - B_0x3: HSYNC falling edge (value: 3)
     *          - B_0x4: VSYNC rising edge (value: 4)
     *          - B_0x5: VSYNC falling edge (value: 5)
     *          - B_0x6: TE rising edge (value: 6)
     *          - B_0x7: TE falling edge (value: 7)
     */
        /** @brief line clock counter underflow */
    constexpr std::uint32_t GFXTIM_CGCR_FCS_B_0x0 = 0;
        /** @brief frame clock counter underflow */
    constexpr std::uint32_t GFXTIM_CGCR_FCS_B_0x1 = 1;
        /** @brief HSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCS_B_0x2 = 2;
        /** @brief HSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCS_B_0x3 = 3;
        /** @brief VSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCS_B_0x4 = 4;
        /** @brief VSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCS_B_0x5 = 5;
        /** @brief TE rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCS_B_0x6 = 6;
        /** @brief TE falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCS_B_0x7 = 7;

    /** @brief frame clock counter clock source */
    using GFXTIM_CGCR_FCCCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: frame clock counter disabled (value: 0)
     *          - B_0x1: line clock counter underflow (value: 1)
     *          - B_0x2: HSYNC rising edge (value: 2)
     *          - B_0x3: HSYNC falling edge (value: 3)
     *          - B_0x4: VSYNC rising edge (value: 4)
     *          - B_0x5: VSYNC falling edge (value: 5)
     *          - B_0x6: TE rising edge (value: 6)
     *          - B_0x7: TE falling edge (value: 7)
     */
        /** @brief frame clock counter disabled */
    constexpr std::uint32_t GFXTIM_CGCR_FCCCS_B_0x0 = 0;
        /** @brief line clock counter underflow */
    constexpr std::uint32_t GFXTIM_CGCR_FCCCS_B_0x1 = 1;
        /** @brief HSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCCS_B_0x2 = 2;
        /** @brief HSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCCS_B_0x3 = 3;
        /** @brief VSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCCS_B_0x4 = 4;
        /** @brief VSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCCS_B_0x5 = 5;
        /** @brief TE rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCCS_B_0x6 = 6;
        /** @brief TE falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCCS_B_0x7 = 7;

    /** @brief frame clock counter force reload */
    using GFXTIM_CGCR_FCCFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: frame clock counter reload forced (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t GFXTIM_CGCR_FCCFR_B_0x0 = 0;
        /** @brief frame clock counter reload forced */
    constexpr std::uint32_t GFXTIM_CGCR_FCCFR_B_0x1 = 1;

    /** @brief frame- -clock counter hardware reload source */
    using GFXTIM_CGCR_FCCHRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no hardware reload (value: 0)
     *          - B_0x1: line- -clock counter underflow (value: 1)
     *          - B_0x2: HSYNC rising edge (value: 2)
     *          - B_0x3: HSYNC falling edge (value: 3)
     *          - B_0x4: VSYNC rising edge (value: 4)
     *          - B_0x5: VSYNC falling edge (value: 5)
     *          - B_0x6: TE rising edge (value: 6)
     *          - B_0x7: TE falling edge (value: 7)
     */
        /** @brief no hardware reload */
    constexpr std::uint32_t GFXTIM_CGCR_FCCHRS_B_0x0 = 0;
        /** @brief line- -clock counter underflow */
    constexpr std::uint32_t GFXTIM_CGCR_FCCHRS_B_0x1 = 1;
        /** @brief HSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCHRS_B_0x2 = 2;
        /** @brief HSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCHRS_B_0x3 = 3;
        /** @brief VSYNC rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCHRS_B_0x4 = 4;
        /** @brief VSYNC falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCHRS_B_0x5 = 5;
        /** @brief TE rising edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCHRS_B_0x6 = 6;
        /** @brief TE falling edge */
    constexpr std::uint32_t GFXTIM_CGCR_FCCHRS_B_0x7 = 7;

    /** @brief GFXTIM timers configuration register */
    using GFXTIM_TCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief absolute frame counter enable */
    using GFXTIM_TCR_AFCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: absolute frame counter enabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TCR_AFCEN_B_0x0 = 0;
        /** @brief absolute frame counter enabled */
    constexpr std::uint32_t GFXTIM_TCR_AFCEN_B_0x1 = 1;

    /** @brief force absolute frame counter reset */
    using GFXTIM_TCR_FAFCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: absolute frame counter reset forced (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TCR_FAFCR_B_0x0 = 0;
        /** @brief absolute frame counter reset forced */
    constexpr std::uint32_t GFXTIM_TCR_FAFCR_B_0x1 = 1;

    /** @brief absolute line counter enable */
    using GFXTIM_TCR_ALCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: absolute line counter enabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TCR_ALCEN_B_0x0 = 0;
        /** @brief absolute line counter enabled */
    constexpr std::uint32_t GFXTIM_TCR_ALCEN_B_0x1 = 1;

    /** @brief force absolute line counter reset */
    using GFXTIM_TCR_FALCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: absolute line counter reset forced (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TCR_FALCR_B_0x0 = 0;
        /** @brief absolute line counter reset forced */
    constexpr std::uint32_t GFXTIM_TCR_FALCR_B_0x1 = 1;

    /** @brief relative frame counter 1 enable */
    using GFXTIM_TCR_RFC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: relative frame counter enabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TCR_RFC1EN_B_0x0 = 0;
        /** @brief relative frame counter enabled */
    constexpr std::uint32_t GFXTIM_TCR_RFC1EN_B_0x1 = 1;

    /** @brief relative frame counter 1 continuous mode */
    using GFXTIM_TCR_RFC1CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: relative frame counter 1 is one shot. (value: 0)
     *          - B_0x1: relative frame counter 1 is in continuous mode. (value: 1)
     */
        /** @brief relative frame counter 1 is one shot. */
    constexpr std::uint32_t GFXTIM_TCR_RFC1CM_B_0x0 = 0;
        /** @brief relative frame counter 1 is in continuous mode. */
    constexpr std::uint32_t GFXTIM_TCR_RFC1CM_B_0x1 = 1;

    /** @brief force relative frame counter 1 reload */
    using GFXTIM_TCR_FRFC1R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: relative frame counter 1 reload forced (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TCR_FRFC1R_B_0x0 = 0;
        /** @brief relative frame counter 1 reload forced */
    constexpr std::uint32_t GFXTIM_TCR_FRFC1R_B_0x1 = 1;

    /** @brief relative frame counter 2 enable */
    using GFXTIM_TCR_RFC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: relative frame counter 2 enabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TCR_RFC2EN_B_0x0 = 0;
        /** @brief relative frame counter 2 enabled */
    constexpr std::uint32_t GFXTIM_TCR_RFC2EN_B_0x1 = 1;

    /** @brief relative frame counter 2 continuous mode */
    using GFXTIM_TCR_RFC2CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: relative frame counter 2 is one shot. (value: 0)
     *          - B_0x1: relative frame counter 2 is in continuous mode. (value: 1)
     */
        /** @brief relative frame counter 2 is one shot. */
    constexpr std::uint32_t GFXTIM_TCR_RFC2CM_B_0x0 = 0;
        /** @brief relative frame counter 2 is in continuous mode. */
    constexpr std::uint32_t GFXTIM_TCR_RFC2CM_B_0x1 = 1;

    /** @brief force relative frame counter 2 reload */
    using GFXTIM_TCR_FRFC2R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: relative frame counter 2 reload forced (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TCR_FRFC2R_B_0x0 = 0;
        /** @brief relative frame counter 2 reload forced */
    constexpr std::uint32_t GFXTIM_TCR_FRFC2R_B_0x1 = 1;

    /** @brief GFXTIM timers disable register */
    using GFXTIM_TDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief absolute frame counter disable */
    using GFXTIM_TDR_AFCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: absolute frame counter disabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TDR_AFCDIS_B_0x0 = 0;
        /** @brief absolute frame counter disabled */
    constexpr std::uint32_t GFXTIM_TDR_AFCDIS_B_0x1 = 1;

    /** @brief absolute line counter disable */
    using GFXTIM_TDR_ALCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: absolute line counter disabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TDR_ALCDIS_B_0x0 = 0;
        /** @brief absolute line counter disabled */
    constexpr std::uint32_t GFXTIM_TDR_ALCDIS_B_0x1 = 1;

    /** @brief relative frame counter 1 disable */
    using GFXTIM_TDR_RFC1DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: relative frame counter 1 disabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TDR_RFC1DIS_B_0x0 = 0;
        /** @brief relative frame counter 1 disabled */
    constexpr std::uint32_t GFXTIM_TDR_RFC1DIS_B_0x1 = 1;

    /** @brief relative frame counter 2 disable */
    using GFXTIM_TDR_RFC2DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: relative frame counter 2 disabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_TDR_RFC2DIS_B_0x0 = 0;
        /** @brief relative frame counter 2 disabled */
    constexpr std::uint32_t GFXTIM_TDR_RFC2DIS_B_0x1 = 1;

    /** @brief GFXTIM events control register */
    using GFXTIM_EVCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief event 1 enable */
    using GFXTIM_EVCR_EV1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: event 1 generation disabled (value: 0)
     *          - B_0x1: event 1 generation enabled (value: 1)
     */
        /** @brief event 1 generation disabled */
    constexpr std::uint32_t GFXTIM_EVCR_EV1EN_B_0x0 = 0;
        /** @brief event 1 generation enabled */
    constexpr std::uint32_t GFXTIM_EVCR_EV1EN_B_0x1 = 1;

    /** @brief event 2 enable */
    using GFXTIM_EVCR_EV2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: event 2 generation disabled (value: 0)
     *          - B_0x1: event 2 generation enabled (value: 1)
     */
        /** @brief event 2 generation disabled */
    constexpr std::uint32_t GFXTIM_EVCR_EV2EN_B_0x0 = 0;
        /** @brief event 2 generation enabled */
    constexpr std::uint32_t GFXTIM_EVCR_EV2EN_B_0x1 = 1;

    /** @brief event 3 enable */
    using GFXTIM_EVCR_EV3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: event 3 generation disabled (value: 0)
     *          - B_0x1: event 3 generation enabled (value: 1)
     */
        /** @brief event 3 generation disabled */
    constexpr std::uint32_t GFXTIM_EVCR_EV3EN_B_0x0 = 0;
        /** @brief event 3 generation enabled */
    constexpr std::uint32_t GFXTIM_EVCR_EV3EN_B_0x1 = 1;

    /** @brief event 4 enable */
    using GFXTIM_EVCR_EV4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: event 4 generation disabled (value: 0)
     *          - B_0x1: event 4 generation enabled (value: 1)
     */
        /** @brief event 4 generation disabled */
    constexpr std::uint32_t GFXTIM_EVCR_EV4EN_B_0x0 = 0;
        /** @brief event 4 generation enabled */
    constexpr std::uint32_t GFXTIM_EVCR_EV4EN_B_0x1 = 1;

    /** @brief GFXTIM events selection register */
    using GFXTIM_EVSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line-event selection 1 */
    using GFXTIM_EVSR_LES1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no line event (value: 0)
     *          - B_0x1: absolute line counter overflow (value: 1)
     *          - B_0x2: tearing effect (value: 2)
     *          - B_0x4: absolute line counter 1 compare (value: 4)
     *          - B_0x5: absolute line counter 2 compare (value: 5)
     */
        /** @brief no line event */
    constexpr std::uint32_t GFXTIM_EVSR_LES1_B_0x0 = 0;
        /** @brief absolute line counter overflow */
    constexpr std::uint32_t GFXTIM_EVSR_LES1_B_0x1 = 1;
        /** @brief tearing effect */
    constexpr std::uint32_t GFXTIM_EVSR_LES1_B_0x2 = 2;
        /** @brief absolute line counter 1 compare */
    constexpr std::uint32_t GFXTIM_EVSR_LES1_B_0x4 = 4;
        /** @brief absolute line counter 2 compare */
    constexpr std::uint32_t GFXTIM_EVSR_LES1_B_0x5 = 5;

    /** @brief frame-event selection 1 */
    using GFXTIM_EVSR_FES1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no frame event (value: 0)
     *          - B_0x1: absolute frame counter overflow (value: 1)
     *          - B_0x2: absolute frame counter compare (value: 2)
     *          - B_0x4: relative frame counter 1 reload (value: 4)
     *          - B_0x5: relative frame counter 2 reload (value: 5)
     */
        /** @brief no frame event */
    constexpr std::uint32_t GFXTIM_EVSR_FES1_B_0x0 = 0;
        /** @brief absolute frame counter overflow */
    constexpr std::uint32_t GFXTIM_EVSR_FES1_B_0x1 = 1;
        /** @brief absolute frame counter compare */
    constexpr std::uint32_t GFXTIM_EVSR_FES1_B_0x2 = 2;
        /** @brief relative frame counter 1 reload */
    constexpr std::uint32_t GFXTIM_EVSR_FES1_B_0x4 = 4;
        /** @brief relative frame counter 2 reload */
    constexpr std::uint32_t GFXTIM_EVSR_FES1_B_0x5 = 5;

    /** @brief line-event selection 2 */
    using GFXTIM_EVSR_LES2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no line event (value: 0)
     *          - B_0x1: absolute line counter overflow (value: 1)
     *          - B_0x2: tearing effect (value: 2)
     *          - B_0x4: absolute line counter 1 compare (value: 4)
     *          - B_0x5: absolute line counter 2 compare (value: 5)
     */
        /** @brief no line event */
    constexpr std::uint32_t GFXTIM_EVSR_LES2_B_0x0 = 0;
        /** @brief absolute line counter overflow */
    constexpr std::uint32_t GFXTIM_EVSR_LES2_B_0x1 = 1;
        /** @brief tearing effect */
    constexpr std::uint32_t GFXTIM_EVSR_LES2_B_0x2 = 2;
        /** @brief absolute line counter 1 compare */
    constexpr std::uint32_t GFXTIM_EVSR_LES2_B_0x4 = 4;
        /** @brief absolute line counter 2 compare */
    constexpr std::uint32_t GFXTIM_EVSR_LES2_B_0x5 = 5;

    /** @brief frame-event selection 2 */
    using GFXTIM_EVSR_FES2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no frame event (value: 0)
     *          - B_0x1: absolute frame counter overflow (value: 1)
     *          - B_0x2: absolute frame counter compare (value: 2)
     *          - B_0x4: relative frame counter 1 reload (value: 4)
     *          - B_0x5: relative frame counter 2 reload (value: 5)
     */
        /** @brief no frame event */
    constexpr std::uint32_t GFXTIM_EVSR_FES2_B_0x0 = 0;
        /** @brief absolute frame counter overflow */
    constexpr std::uint32_t GFXTIM_EVSR_FES2_B_0x1 = 1;
        /** @brief absolute frame counter compare */
    constexpr std::uint32_t GFXTIM_EVSR_FES2_B_0x2 = 2;
        /** @brief relative frame counter 1 reload */
    constexpr std::uint32_t GFXTIM_EVSR_FES2_B_0x4 = 4;
        /** @brief relative frame counter 2 reload */
    constexpr std::uint32_t GFXTIM_EVSR_FES2_B_0x5 = 5;

    /** @brief line-event selection 3 */
    using GFXTIM_EVSR_LES3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no line event (value: 0)
     *          - B_0x1: absolute line counter overflow (value: 1)
     *          - B_0x2: tearing effect (value: 2)
     *          - B_0x4: absolute line counter 1 compare (value: 4)
     *          - B_0x5: absolute line counter 2 compare (value: 5)
     */
        /** @brief no line event */
    constexpr std::uint32_t GFXTIM_EVSR_LES3_B_0x0 = 0;
        /** @brief absolute line counter overflow */
    constexpr std::uint32_t GFXTIM_EVSR_LES3_B_0x1 = 1;
        /** @brief tearing effect */
    constexpr std::uint32_t GFXTIM_EVSR_LES3_B_0x2 = 2;
        /** @brief absolute line counter 1 compare */
    constexpr std::uint32_t GFXTIM_EVSR_LES3_B_0x4 = 4;
        /** @brief absolute line counter 2 compare */
    constexpr std::uint32_t GFXTIM_EVSR_LES3_B_0x5 = 5;

    /** @brief frame-event selection 3 */
    using GFXTIM_EVSR_FES3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no frame event (value: 0)
     *          - B_0x1: absolute frame counter overflow (value: 1)
     *          - B_0x2: absolute frame counter compare (value: 2)
     *          - B_0x4: relative frame counter 1 reload (value: 4)
     *          - B_0x5: relative frame counter 2 reload (value: 5)
     */
        /** @brief no frame event */
    constexpr std::uint32_t GFXTIM_EVSR_FES3_B_0x0 = 0;
        /** @brief absolute frame counter overflow */
    constexpr std::uint32_t GFXTIM_EVSR_FES3_B_0x1 = 1;
        /** @brief absolute frame counter compare */
    constexpr std::uint32_t GFXTIM_EVSR_FES3_B_0x2 = 2;
        /** @brief relative frame counter 1 reload */
    constexpr std::uint32_t GFXTIM_EVSR_FES3_B_0x4 = 4;
        /** @brief relative frame counter 2 reload */
    constexpr std::uint32_t GFXTIM_EVSR_FES3_B_0x5 = 5;

    /** @brief line-event selection 4 */
    using GFXTIM_EVSR_LES4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no line event (value: 0)
     *          - B_0x1: absolute line counter overflow (value: 1)
     *          - B_0x2: tearing effect (value: 2)
     *          - B_0x4: absolute line counter 1 compare (value: 4)
     *          - B_0x5: absolute line counter 2 compare (value: 5)
     */
        /** @brief no line event */
    constexpr std::uint32_t GFXTIM_EVSR_LES4_B_0x0 = 0;
        /** @brief absolute line counter overflow */
    constexpr std::uint32_t GFXTIM_EVSR_LES4_B_0x1 = 1;
        /** @brief tearing effect */
    constexpr std::uint32_t GFXTIM_EVSR_LES4_B_0x2 = 2;
        /** @brief absolute line counter 1 compare */
    constexpr std::uint32_t GFXTIM_EVSR_LES4_B_0x4 = 4;
        /** @brief absolute line counter 2 compare */
    constexpr std::uint32_t GFXTIM_EVSR_LES4_B_0x5 = 5;

    /** @brief frame-event selection 4 */
    using GFXTIM_EVSR_FES4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no frame event (value: 0)
     *          - B_0x1: absolute frame counter overflow (value: 1)
     *          - B_0x2: absolute frame counter compare (value: 2)
     *          - B_0x4: relative frame counter 1 reload (value: 4)
     *          - B_0x5: relative frame counter 2 reload (value: 5)
     */
        /** @brief no frame event */
    constexpr std::uint32_t GFXTIM_EVSR_FES4_B_0x0 = 0;
        /** @brief absolute frame counter overflow */
    constexpr std::uint32_t GFXTIM_EVSR_FES4_B_0x1 = 1;
        /** @brief absolute frame counter compare */
    constexpr std::uint32_t GFXTIM_EVSR_FES4_B_0x2 = 2;
        /** @brief relative frame counter 1 reload */
    constexpr std::uint32_t GFXTIM_EVSR_FES4_B_0x4 = 4;
        /** @brief relative frame counter 2 reload */
    constexpr std::uint32_t GFXTIM_EVSR_FES4_B_0x5 = 5;

    /** @brief GFXTIM watchdog timer configuration register */
    using GFXTIM_WDGTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief watchdog enable */
    using GFXTIM_WDGTCR_WDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: graphic watchdog enabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGEN_B_0x0 = 0;
        /** @brief graphic watchdog enabled */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGEN_B_0x1 = 1;

    /** @brief watchdog disable */
    using GFXTIM_WDGTCR_WDGDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: graphic watchdog disabled (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGDIS_B_0x0 = 0;
        /** @brief graphic watchdog disabled */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGDIS_B_0x1 = 1;

    /** @brief watchdog status */
    using GFXTIM_WDGTCR_WDGS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: graphic watchdog disabled (value: 0)
     *          - B_0x1: graphic watchdog enabled (value: 1)
     */
        /** @brief graphic watchdog disabled */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGS_B_0x0 = 0;
        /** @brief graphic watchdog enabled */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGS_B_0x1 = 1;

    /** @brief watchdog hardware reload configuration */
    using GFXTIM_WDGTCR_WDGHRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: watchdog hardware reload disabled (value: 0)
     *          - B_0x1: watchdog reloaded a rising edge of gfxtim_wrld (value: 1)
     *          - B_0x2: watchdog reloaded a falling edge of gfxtim_wrld (value: 2)
     */
        /** @brief watchdog hardware reload disabled */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGHRC_B_0x0 = 0;
        /** @brief watchdog reloaded a rising edge of gfxtim_wrld */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGHRC_B_0x1 = 1;
        /** @brief watchdog reloaded a falling edge of gfxtim_wrld */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGHRC_B_0x2 = 2;

    /** @brief watchdog clock source */
    using GFXTIM_WDGTCR_WDGCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: line clock (value: 0)
     *          - B_0x1: frame clock (value: 1)
     *          - B_0x2: HSYNC rising edge (value: 2)
     *          - B_0x3: HSYNC falling edge (value: 3)
     *          - B_0x4: VSYNC rising edge (value: 4)
     *          - B_0x5: VSYNC falling edge (value: 5)
     *          - B_0x6: TE rising edge (value: 6)
     *          - B_0x7: TE falling edge (value: 7)
     *          - B_0x8: event 1 (value: 8)
     *          - B_0x9: event 2 (value: 9)
     *          - B_0xA: event 3 (value: 10)
     *          - B_0xB: event 4 (value: 11)
     */
        /** @brief line clock */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x0 = 0;
        /** @brief frame clock */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x1 = 1;
        /** @brief HSYNC rising edge */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x2 = 2;
        /** @brief HSYNC falling edge */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x3 = 3;
        /** @brief VSYNC rising edge */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x4 = 4;
        /** @brief VSYNC falling edge */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x5 = 5;
        /** @brief TE rising edge */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x6 = 6;
        /** @brief TE falling edge */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x7 = 7;
        /** @brief event 1 */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x8 = 8;
        /** @brief event 2 */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0x9 = 9;
        /** @brief event 3 */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0xA = 10;
        /** @brief event 4 */
    constexpr std::uint32_t GFXTIM_WDGTCR_WDGCS_B_0xB = 11;

    /** @brief force watchdog reload */
    using GFXTIM_WDGTCR_FWDGR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: graphic watchdog reload forced (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_WDGTCR_FWDGR_B_0x0 = 0;
        /** @brief graphic watchdog reload forced */
    constexpr std::uint32_t GFXTIM_WDGTCR_FWDGR_B_0x1 = 1;

    /** @brief GFXTIM interrupt status register */
    using GFXTIM_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief absolute frame counter overflow flag */
    using GFXTIM_ISR_AFCOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no overflow occurred on the absolute frame counter. (value: 0)
     *          - B_0x1: a overflow on the absolute frame counter occurred. (value: 1)
     */
        /** @brief no overflow occurred on the absolute frame counter. */
    constexpr std::uint32_t GFXTIM_ISR_AFCOF_B_0x0 = 0;
        /** @brief a overflow on the absolute frame counter occurred. */
    constexpr std::uint32_t GFXTIM_ISR_AFCOF_B_0x1 = 1;

    /** @brief absolute line counter overflow flag */
    using GFXTIM_ISR_ALCOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no overflow occurred on the absolute line counter. (value: 0)
     *          - B_0x1: a overflow on the absolute line counter occurred. (value: 1)
     */
        /** @brief no overflow occurred on the absolute line counter. */
    constexpr std::uint32_t GFXTIM_ISR_ALCOF_B_0x0 = 0;
        /** @brief a overflow on the absolute line counter occurred. */
    constexpr std::uint32_t GFXTIM_ISR_ALCOF_B_0x1 = 1;

    /** @brief tearing-effect flag */
    using GFXTIM_ISR_TEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no tearing effect occurred. (value: 0)
     *          - B_0x1: a tearing effect occurred. (value: 1)
     */
        /** @brief no tearing effect occurred. */
    constexpr std::uint32_t GFXTIM_ISR_TEF_B_0x0 = 0;
        /** @brief a tearing effect occurred. */
    constexpr std::uint32_t GFXTIM_ISR_TEF_B_0x1 = 1;

    /** @brief absolute frame counter compare 1 flag */
    using GFXTIM_ISR_AFCC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no match occurred on compare 1 of the absolute frame counter. (value: 0)
     *          - B_0x1: a match on compare 1 of the absolute frame counter occurred. (value: 1)
     */
        /** @brief no match occurred on compare 1 of the absolute frame counter. */
    constexpr std::uint32_t GFXTIM_ISR_AFCC1F_B_0x0 = 0;
        /** @brief a match on compare 1 of the absolute frame counter occurred. */
    constexpr std::uint32_t GFXTIM_ISR_AFCC1F_B_0x1 = 1;

    /** @brief absolute line counter compare 1 flag */
    using GFXTIM_ISR_ALCC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no match occurred on compare 1 of the absolute line counter. (value: 0)
     *          - B_0x1: a match on compare 1 of the absolute line counter occurred. (value: 1)
     */
        /** @brief no match occurred on compare 1 of the absolute line counter. */
    constexpr std::uint32_t GFXTIM_ISR_ALCC1F_B_0x0 = 0;
        /** @brief a match on compare 1 of the absolute line counter occurred. */
    constexpr std::uint32_t GFXTIM_ISR_ALCC1F_B_0x1 = 1;

    /** @brief absolute line counter compare 2 flag */
    using GFXTIM_ISR_ALCC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no match occurred on compare 2 of the absolute line counter. (value: 0)
     *          - B_0x1: a match on compare 2 of the absolute line counter occurred. (value: 1)
     */
        /** @brief no match occurred on compare 2 of the absolute line counter. */
    constexpr std::uint32_t GFXTIM_ISR_ALCC2F_B_0x0 = 0;
        /** @brief a match on compare 2 of the absolute line counter occurred. */
    constexpr std::uint32_t GFXTIM_ISR_ALCC2F_B_0x1 = 1;

    /** @brief relative frame counter 1 reload flag */
    using GFXTIM_ISR_RFC1RF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reload occurred on relative frame counter 1. (value: 0)
     *          - B_0x1: a reload on relative frame counter 1 occurred. (value: 1)
     */
        /** @brief no reload occurred on relative frame counter 1. */
    constexpr std::uint32_t GFXTIM_ISR_RFC1RF_B_0x0 = 0;
        /** @brief a reload on relative frame counter 1 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_RFC1RF_B_0x1 = 1;

    /** @brief relative frame counter 2 reload flag */
    using GFXTIM_ISR_RFC2RF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reload occurred on relative frame counter 2. (value: 0)
     *          - B_0x1: a reload on relative frame counter 2 occurred. (value: 1)
     */
        /** @brief no reload occurred on relative frame counter 2. */
    constexpr std::uint32_t GFXTIM_ISR_RFC2RF_B_0x0 = 0;
        /** @brief a reload on relative frame counter 2 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_RFC2RF_B_0x1 = 1;

    /** @brief event 1 flag */
    using GFXTIM_ISR_EV1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No complex event 1 occurred. (value: 0)
     *          - B_0x1: Complex event 1 occurred. (value: 1)
     */
        /** @brief No complex event 1 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_EV1F_B_0x0 = 0;
        /** @brief Complex event 1 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_EV1F_B_0x1 = 1;

    /** @brief event 2 flag */
    using GFXTIM_ISR_EV2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no complex event 2 occurred. (value: 0)
     *          - B_0x1: a complex event 2 occurred. (value: 1)
     */
        /** @brief no complex event 2 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_EV2F_B_0x0 = 0;
        /** @brief a complex event 2 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_EV2F_B_0x1 = 1;

    /** @brief event 3 flag */
    using GFXTIM_ISR_EV3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no complex event 3 occurred. (value: 0)
     *          - B_0x1: a complex event 3 occurred. (value: 1)
     */
        /** @brief no complex event 3 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_EV3F_B_0x0 = 0;
        /** @brief a complex event 3 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_EV3F_B_0x1 = 1;

    /** @brief event 4 flag */
    using GFXTIM_ISR_EV4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no complex event 4 occurred. (value: 0)
     *          - B_0x1: a complex event 4 occurred. (value: 1)
     */
        /** @brief no complex event 4 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_EV4F_B_0x0 = 0;
        /** @brief a complex event 4 occurred. */
    constexpr std::uint32_t GFXTIM_ISR_EV4F_B_0x1 = 1;

    /** @brief watchdog alarm flag */
    using GFXTIM_ISR_WDGAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no graphic watchdog alarm occurred. (value: 0)
     *          - B_0x1: a graphic watchdog alarm occurred. (value: 1)
     */
        /** @brief no graphic watchdog alarm occurred. */
    constexpr std::uint32_t GFXTIM_ISR_WDGAF_B_0x0 = 0;
        /** @brief a graphic watchdog alarm occurred. */
    constexpr std::uint32_t GFXTIM_ISR_WDGAF_B_0x1 = 1;

    /** @brief watchdog pre-alarm flag */
    using GFXTIM_ISR_WDGPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no graphic watchdog pre-alarm occurred. (value: 0)
     *          - B_0x1: a graphic watchdog pre-alarm occurred. (value: 1)
     */
        /** @brief no graphic watchdog pre-alarm occurred. */
    constexpr std::uint32_t GFXTIM_ISR_WDGPF_B_0x0 = 0;
        /** @brief a graphic watchdog pre-alarm occurred. */
    constexpr std::uint32_t GFXTIM_ISR_WDGPF_B_0x1 = 1;

    /** @brief GFXTIM interrupt clear register */
    using GFXTIM_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear absolute frame counter overflow flag */
    using GFXTIM_ICR_CAFCOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: AFCOF cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CAFCOF_B_0x0 = 0;
        /** @brief AFCOF cleared */
    constexpr std::uint32_t GFXTIM_ICR_CAFCOF_B_0x1 = 1;

    /** @brief clear absolute line counter overflow flag */
    using GFXTIM_ICR_CALCOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: ALCOF cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CALCOF_B_0x0 = 0;
        /** @brief ALCOF cleared */
    constexpr std::uint32_t GFXTIM_ICR_CALCOF_B_0x1 = 1;

    /** @brief clear tearing-effect flag */
    using GFXTIM_ICR_CTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: TEF cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CTEF_B_0x0 = 0;
        /** @brief TEF cleared */
    constexpr std::uint32_t GFXTIM_ICR_CTEF_B_0x1 = 1;

    /** @brief clear absolute frame counter compare 1 flag */
    using GFXTIM_ICR_CAFCC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: AFCC1F cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CAFCC1F_B_0x0 = 0;
        /** @brief AFCC1F cleared */
    constexpr std::uint32_t GFXTIM_ICR_CAFCC1F_B_0x1 = 1;

    /** @brief clear absolute line counter compare 1 flag */
    using GFXTIM_ICR_CALCC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: ALCC1F cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CALCC1F_B_0x0 = 0;
        /** @brief ALCC1F cleared */
    constexpr std::uint32_t GFXTIM_ICR_CALCC1F_B_0x1 = 1;

    /** @brief clear absolute line counter compare 2 flag */
    using GFXTIM_ICR_CALCC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: ALCC2F cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CALCC2F_B_0x0 = 0;
        /** @brief ALCC2F cleared */
    constexpr std::uint32_t GFXTIM_ICR_CALCC2F_B_0x1 = 1;

    /** @brief clear relative frame counter 1 reload flag */
    using GFXTIM_ICR_CRFC1RF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: RFC1RF cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CRFC1RF_B_0x0 = 0;
        /** @brief RFC1RF cleared */
    constexpr std::uint32_t GFXTIM_ICR_CRFC1RF_B_0x1 = 1;

    /** @brief clear relative frame counter 2 reload flag */
    using GFXTIM_ICR_CRFC2RF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: RFC2RF cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CRFC2RF_B_0x0 = 0;
        /** @brief RFC2RF cleared */
    constexpr std::uint32_t GFXTIM_ICR_CRFC2RF_B_0x1 = 1;

    /** @brief clear event 1 flag */
    using GFXTIM_ICR_CEV1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: EV1F cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CEV1F_B_0x0 = 0;
        /** @brief EV1F cleared */
    constexpr std::uint32_t GFXTIM_ICR_CEV1F_B_0x1 = 1;

    /** @brief clear event 2 flag */
    using GFXTIM_ICR_CEV2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: EV2F cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CEV2F_B_0x0 = 0;
        /** @brief EV2F cleared */
    constexpr std::uint32_t GFXTIM_ICR_CEV2F_B_0x1 = 1;

    /** @brief clear event 3 flag */
    using GFXTIM_ICR_CEV3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: EV3F cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CEV3F_B_0x0 = 0;
        /** @brief EV3F cleared */
    constexpr std::uint32_t GFXTIM_ICR_CEV3F_B_0x1 = 1;

    /** @brief clear event 4 flag */
    using GFXTIM_ICR_CEV4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: EV4F cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CEV4F_B_0x0 = 0;
        /** @brief EV4F cleared */
    constexpr std::uint32_t GFXTIM_ICR_CEV4F_B_0x1 = 1;

    /** @brief clear watchdog alarm flag */
    using GFXTIM_ICR_CWDGAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: WDGAF cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CWDGAF_B_0x0 = 0;
        /** @brief WDGAF cleared */
    constexpr std::uint32_t GFXTIM_ICR_CWDGAF_B_0x1 = 1;

    /** @brief clear watchdog pre-alarm flag */
    using GFXTIM_ICR_CWDGPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: WDGPF cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GFXTIM_ICR_CWDGPF_B_0x0 = 0;
        /** @brief WDGPF cleared */
    constexpr std::uint32_t GFXTIM_ICR_CWDGPF_B_0x1 = 1;

    /** @brief GFXTIM interrupt enable register */
    using GFXTIM_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief absolute frame counter overflow interrupt enable */
    using GFXTIM_IER_AFCOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: absolute frame counter overflow interrupt disabled (value: 0)
     *          - B_0x1: absolute frame counter overflow interrupt enabled (value: 1)
     */
        /** @brief absolute frame counter overflow interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_AFCOIE_B_0x0 = 0;
        /** @brief absolute frame counter overflow interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_AFCOIE_B_0x1 = 1;

    /** @brief absolute line counter overflow interrupt enable */
    using GFXTIM_IER_ALCOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: absolute line counter overflow interrupt disabled (value: 0)
     *          - B_0x1: absolute line counter overflow interrupt enabled (value: 1)
     */
        /** @brief absolute line counter overflow interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_ALCOIE_B_0x0 = 0;
        /** @brief absolute line counter overflow interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_ALCOIE_B_0x1 = 1;

    /** @brief tearing-effect interrupt enable */
    using GFXTIM_IER_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tearing-effect interrupt disabled (value: 0)
     *          - B_0x1: tearing-effect interrupt enabled (value: 1)
     */
        /** @brief tearing-effect interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_TEIE_B_0x0 = 0;
        /** @brief tearing-effect interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_TEIE_B_0x1 = 1;

    /** @brief absolute frame counter compare 1 interrupt enable */
    using GFXTIM_IER_AFCC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: absolute frame counter compare 1 interrupt disabled (value: 0)
     *          - B_0x1: absolute frame counter compare 1 interrupt enabled (value: 1)
     */
        /** @brief absolute frame counter compare 1 interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_AFCC1IE_B_0x0 = 0;
        /** @brief absolute frame counter compare 1 interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_AFCC1IE_B_0x1 = 1;

    /** @brief absolute line counter compare 1 interrupt enable */
    using GFXTIM_IER_ALCC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: absolute line counter compare 1 interrupt disabled (value: 0)
     *          - B_0x1: absolute line counter compare 1 interrupt enabled (value: 1)
     */
        /** @brief absolute line counter compare 1 interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_ALCC1IE_B_0x0 = 0;
        /** @brief absolute line counter compare 1 interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_ALCC1IE_B_0x1 = 1;

    /** @brief absolute line counter compare 2 interrupt enable */
    using GFXTIM_IER_ALCC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: absolute line counter compare 2 interrupt disabled (value: 0)
     *          - B_0x1: absolute line counter compare 2 interrupt enabled (value: 1)
     */
        /** @brief absolute line counter compare 2 interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_ALCC2IE_B_0x0 = 0;
        /** @brief absolute line counter compare 2 interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_ALCC2IE_B_0x1 = 1;

    /** @brief relative frame counter 1 reload interrupt enable */
    using GFXTIM_IER_RFC1RIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: relative frame counter 1 reload interrupt disabled (value: 0)
     *          - B_0x1: relative frame counter 1 reload interrupt enabled (value: 1)
     */
        /** @brief relative frame counter 1 reload interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_RFC1RIE_B_0x0 = 0;
        /** @brief relative frame counter 1 reload interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_RFC1RIE_B_0x1 = 1;

    /** @brief relative frame counter 2 reload interrupt enable */
    using GFXTIM_IER_RFC2RIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: relative frame counter 2 reload interrupt disabled (value: 0)
     *          - B_0x1: relative frame counter 2 reload interrupt enabled (value: 1)
     */
        /** @brief relative frame counter 2 reload interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_RFC2RIE_B_0x0 = 0;
        /** @brief relative frame counter 2 reload interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_RFC2RIE_B_0x1 = 1;

    /** @brief event 1 interrupt enable */
    using GFXTIM_IER_EV1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: event 1 interrupt disabled (value: 0)
     *          - B_0x1: event 1 interrupt enabled (value: 1)
     */
        /** @brief event 1 interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_EV1IE_B_0x0 = 0;
        /** @brief event 1 interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_EV1IE_B_0x1 = 1;

    /** @brief event 2 interrupt enable */
    using GFXTIM_IER_EV2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: event 2 interrupt disabled (value: 0)
     *          - B_0x1: event 2 interrupt enabled (value: 1)
     */
        /** @brief event 2 interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_EV2IE_B_0x0 = 0;
        /** @brief event 2 interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_EV2IE_B_0x1 = 1;

    /** @brief event 3 interrupt enable */
    using GFXTIM_IER_EV3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: event 3 interrupt disabled (value: 0)
     *          - B_0x1: event 3 interrupt enabled (value: 1)
     */
        /** @brief event 3 interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_EV3IE_B_0x0 = 0;
        /** @brief event 3 interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_EV3IE_B_0x1 = 1;

    /** @brief event 4 interrupt enable */
    using GFXTIM_IER_EV4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: event 4 interrupt disabled (value: 0)
     *          - B_0x1: event 4 interrupt enabled (value: 1)
     */
        /** @brief event 4 interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_EV4IE_B_0x0 = 0;
        /** @brief event 4 interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_EV4IE_B_0x1 = 1;

    /** @brief watchdog alarm interrupt enable */
    using GFXTIM_IER_WDGAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: watchdog alarm interrupt disabled (value: 0)
     *          - B_0x1: watchdog alarm interrupt enabled (value: 1)
     */
        /** @brief watchdog alarm interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_WDGAIE_B_0x0 = 0;
        /** @brief watchdog alarm interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_WDGAIE_B_0x1 = 1;

    /** @brief watchdog pre-alarm interrupt enable */
    using GFXTIM_IER_WDGPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: watchdog pre-alarm interrupt disabled (value: 0)
     *          - B_0x1: watchdog pre-alarm interrupt enabled (value: 1)
     */
        /** @brief watchdog pre-alarm interrupt disabled */
    constexpr std::uint32_t GFXTIM_IER_WDGPIE_B_0x0 = 0;
        /** @brief watchdog pre-alarm interrupt enabled */
    constexpr std::uint32_t GFXTIM_IER_WDGPIE_B_0x1 = 1;

    /** @brief GFXTIM timers status register */
    using GFXTIM_TSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief absolute frame counter status */
    using GFXTIM_TSR_AFCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: absolute frame counter disabled (value: 0)
     *          - B_0x1: absolute frame counter enabled (value: 1)
     */
        /** @brief absolute frame counter disabled */
    constexpr std::uint32_t GFXTIM_TSR_AFCS_B_0x0 = 0;
        /** @brief absolute frame counter enabled */
    constexpr std::uint32_t GFXTIM_TSR_AFCS_B_0x1 = 1;

    /** @brief absolute line counter status */
    using GFXTIM_TSR_ALCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: absolute line counter disabled (value: 0)
     *          - B_0x1: absolute line counter enabled (value: 1)
     */
        /** @brief absolute line counter disabled */
    constexpr std::uint32_t GFXTIM_TSR_ALCS_B_0x0 = 0;
        /** @brief absolute line counter enabled */
    constexpr std::uint32_t GFXTIM_TSR_ALCS_B_0x1 = 1;

    /** @brief relative frame counter 1 status */
    using GFXTIM_TSR_RFC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: relative frame counter 1 disabled (value: 0)
     *          - B_0x1: relative frame counter 1 enabled (value: 1)
     */
        /** @brief relative frame counter 1 disabled */
    constexpr std::uint32_t GFXTIM_TSR_RFC1S_B_0x0 = 0;
        /** @brief relative frame counter 1 enabled */
    constexpr std::uint32_t GFXTIM_TSR_RFC1S_B_0x1 = 1;

    /** @brief relative frame counter 2 status */
    using GFXTIM_TSR_RFC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: relative frame counter 2 disabled (value: 0)
     *          - B_0x1: relative frame counter 2 enabled (value: 1)
     */
        /** @brief relative frame counter 2 disabled */
    constexpr std::uint32_t GFXTIM_TSR_RFC2S_B_0x0 = 0;
        /** @brief relative frame counter 2 enabled */
    constexpr std::uint32_t GFXTIM_TSR_RFC2S_B_0x1 = 1;

    /** @brief GFXTIM line clock counter reload register */
    using GFXTIM_LCCRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reload value */
    using GFXTIM_LCCRR_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 22, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM frame clock counter reload register */
    using GFXTIM_FCCRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reload value */
    using GFXTIM_FCCRR_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM absolute time register */
    using GFXTIM_ATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line number */
    using GFXTIM_ATR_LINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fame number */
    using GFXTIM_ATR_FRAME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM absolute frame counter register */
    using GFXTIM_AFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame number */
    using GFXTIM_AFCR_FRAME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM absolute line counter register */
    using GFXTIM_ALCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line number */
    using GFXTIM_ALCR_LINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM absolute frame counter compare 1 register */
    using GFXTIM_AFCC1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame number */
    using GFXTIM_AFCC1R_FRAME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM absolute line counter compare 1 register */
    using GFXTIM_ALCC1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line number */
    using GFXTIM_ALCC1R_LINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM absolute line counter compare 2 register */
    using GFXTIM_ALCC2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line number */
    using GFXTIM_ALCC2R_LINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM relative frame counter 1 register */
    using GFXTIM_RFC1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame number */
    using GFXTIM_RFC1R_FRAME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM relative frame counter 1 reload register */
    using GFXTIM_RFC1RR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame reload value */
    using GFXTIM_RFC1RR_FRAME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM relative frame counter 2 register */
    using GFXTIM_RFC2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame number */
    using GFXTIM_RFC2R_FRAME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM relative frame counter 2 reload register */
    using GFXTIM_RFC2RR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame reload value */
    using GFXTIM_RFC2RR_FRAME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM watchdog counter register */
    using GFXTIM_WDGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief value */
    using GFXTIM_WDGCR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM watchdog reload register */
    using GFXTIM_WDGRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reload value */
    using GFXTIM_WDGRR_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM watchdog pre-alarm register */
    using GFXTIM_WDGPAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pre-alarm value */
    using GFXTIM_WDGPAR_PREALARM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
