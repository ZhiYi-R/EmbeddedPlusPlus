/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H753_DFSDM_HPP
#define EMBEDDED_PP_STM32H753_DFSDM_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital filter for sigma delta modulators */
namespace STM32H753::DFSDM {

    /** @brief channel configuration y register */
    using CH0CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDMEN */
    using CH0CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKOUTSRC */
    using CH0CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKOUTDIV */
    using CH0CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATPACK */
    using CH0CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATMPX */
    using CH0CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHINSEL */
    using CH0CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHEN */
    using CH0CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKABEN */
    using CH0CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDEN */
    using CH0CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPICKSEL */
    using CH0CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SITP */
    using CH0CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel configuration y register */
    using CH0CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OFFSET */
    using CH0CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTRBS */
    using CH0CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog and short-circuit detector register */
    using CH0AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFORD */
    using CH0AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFOSR */
    using CH0AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKSCD */
    using CH0AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDT */
    using CH0AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel watchdog filter data register */
    using CH0WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDATA */
    using CH0WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel data input register */
    using CH0DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT1 */
    using CH0DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT0 */
    using CH0DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel y delay register */
    using CH0DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSSKP */
    using CH0DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH1CFGR1 */
    using CH1CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATPACK */
    using CH1CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATMPX */
    using CH1CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHINSEL */
    using CH1CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHEN */
    using CH1CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKABEN */
    using CH1CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDEN */
    using CH1CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPICKSEL */
    using CH1CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SITP */
    using CH1CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH1CFGR2 */
    using CH1CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OFFSET */
    using CH1CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTRBS */
    using CH1CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH1AWSCDR */
    using CH1AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFORD */
    using CH1AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFOSR */
    using CH1AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKSCD */
    using CH1AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDT */
    using CH1AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH1WDATR */
    using CH1WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDATA */
    using CH1WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH1DATINR */
    using CH1DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT1 */
    using CH1DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT0 */
    using CH1DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel y delay register */
    using CH1DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSSKP */
    using CH1DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH2CFGR1 */
    using CH2CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATPACK */
    using CH2CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATMPX */
    using CH2CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHINSEL */
    using CH2CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHEN */
    using CH2CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKABEN */
    using CH2CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDEN */
    using CH2CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPICKSEL */
    using CH2CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SITP */
    using CH2CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH2CFGR2 */
    using CH2CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OFFSET */
    using CH2CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTRBS */
    using CH2CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH2AWSCDR */
    using CH2AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFORD */
    using CH2AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFOSR */
    using CH2AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKSCD */
    using CH2AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDT */
    using CH2AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH2WDATR */
    using CH2WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDATA */
    using CH2WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH2DATINR */
    using CH2DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT1 */
    using CH2DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT0 */
    using CH2DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel y delay register */
    using CH2DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSSKP */
    using CH2DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH3CFGR1 */
    using CH3CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATPACK */
    using CH3CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATMPX */
    using CH3CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHINSEL */
    using CH3CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHEN */
    using CH3CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKABEN */
    using CH3CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDEN */
    using CH3CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPICKSEL */
    using CH3CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SITP */
    using CH3CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH3CFGR2 */
    using CH3CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OFFSET */
    using CH3CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTRBS */
    using CH3CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH3AWSCDR */
    using CH3AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFORD */
    using CH3AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFOSR */
    using CH3AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKSCD */
    using CH3AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDT */
    using CH3AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH3WDATR */
    using CH3WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDATA */
    using CH3WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH3DATINR */
    using CH3DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT1 */
    using CH3DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT0 */
    using CH3DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel y delay register */
    using CH3DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSSKP */
    using CH3DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH4CFGR1 */
    using CH4CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATPACK */
    using CH4CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATMPX */
    using CH4CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHINSEL */
    using CH4CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHEN */
    using CH4CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKABEN */
    using CH4CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDEN */
    using CH4CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPICKSEL */
    using CH4CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SITP */
    using CH4CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH4CFGR2 */
    using CH4CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OFFSET */
    using CH4CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTRBS */
    using CH4CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH4AWSCDR */
    using CH4AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFORD */
    using CH4AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFOSR */
    using CH4AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKSCD */
    using CH4AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDT */
    using CH4AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH4WDATR */
    using CH4WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDATA */
    using CH4WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH4DATINR */
    using CH4DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT1 */
    using CH4DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT0 */
    using CH4DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel y delay register */
    using CH4DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSSKP */
    using CH4DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH5CFGR1 */
    using CH5CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATPACK */
    using CH5CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATMPX */
    using CH5CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHINSEL */
    using CH5CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHEN */
    using CH5CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKABEN */
    using CH5CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDEN */
    using CH5CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPICKSEL */
    using CH5CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SITP */
    using CH5CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH5CFGR2 */
    using CH5CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OFFSET */
    using CH5CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTRBS */
    using CH5CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH5AWSCDR */
    using CH5AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFORD */
    using CH5AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFOSR */
    using CH5AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKSCD */
    using CH5AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDT */
    using CH5AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH5WDATR */
    using CH5WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDATA */
    using CH5WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH5DATINR */
    using CH5DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT1 */
    using CH5DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT0 */
    using CH5DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel y delay register */
    using CH5DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSSKP */
    using CH5DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH6CFGR1 */
    using CH6CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATPACK */
    using CH6CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATMPX */
    using CH6CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHINSEL */
    using CH6CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHEN */
    using CH6CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKABEN */
    using CH6CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDEN */
    using CH6CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPICKSEL */
    using CH6CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SITP */
    using CH6CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH6CFGR2 */
    using CH6CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OFFSET */
    using CH6CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTRBS */
    using CH6CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH6AWSCDR */
    using CH6AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFORD */
    using CH6AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFOSR */
    using CH6AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKSCD */
    using CH6AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDT */
    using CH6AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH6WDATR */
    using CH6WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDATA */
    using CH6WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH6DATINR */
    using CH6DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT1 */
    using CH6DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT0 */
    using CH6DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel y delay register */
    using CH6DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSSKP */
    using CH6DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH7CFGR1 */
    using CH7CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATPACK */
    using CH7CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATMPX */
    using CH7CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHINSEL */
    using CH7CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHEN */
    using CH7CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKABEN */
    using CH7CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDEN */
    using CH7CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPICKSEL */
    using CH7CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SITP */
    using CH7CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH7CFGR2 */
    using CH7CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OFFSET */
    using CH7CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTRBS */
    using CH7CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH7AWSCDR */
    using CH7AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFORD */
    using CH7AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AWFOSR */
    using CH7AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKSCD */
    using CH7AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDT */
    using CH7AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH7WDATR */
    using CH7WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDATA */
    using CH7WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CH7DATINR */
    using CH7DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT1 */
    using CH7DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INDAT0 */
    using CH7DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel y delay register */
    using CH7DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSSKP */
    using CH7DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 1 */
    using DFSDM_FLT0CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT0CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast conversion mode selection for regular conversions */
    using DFSDM_FLT0CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel selection */
    using DFSDM_FLT0CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the regular conversion */
    using DFSDM_FLT0CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch regular conversion synchronously with DFSDM0 */
    using DFSDM_FLT0CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous mode selection for regular conversions */
    using DFSDM_FLT0CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software start of a conversion on the regular channel */
    using DFSDM_FLT0CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions */
    using DFSDM_FLT0CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger signal selection for launching injected conversions */
    using DFSDM_FLT0CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the injected channel group */
    using DFSDM_FLT0CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scanning conversion mode for injected conversions */
    using DFSDM_FLT0CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger */
    using DFSDM_FLT0CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start a conversion of the injected group of channels */
    using DFSDM_FLT0CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM enable */
    using DFSDM_FLT0CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 2 */
    using DFSDM_FLT0CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection */
    using DFSDM_FLT0CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector channel selection */
    using DFSDM_FLT0CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence interrupt enable */
    using DFSDM_FLT0CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector interrupt enable */
    using DFSDM_FLT0CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog interrupt enable */
    using DFSDM_FLT0CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data overrun interrupt enable */
    using DFSDM_FLT0CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data overrun interrupt enable */
    using DFSDM_FLT0CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular end of conversion interrupt enable */
    using DFSDM_FLT0CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable */
    using DFSDM_FLT0CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt and status register */
    using DFSDM_FLT0ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag */
    using DFSDM_FLT0ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence flag */
    using DFSDM_FLT0ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion in progress status */
    using DFSDM_FLT0ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion in progress status */
    using DFSDM_FLT0ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog */
    using DFSDM_FLT0ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion overrun flag */
    using DFSDM_FLT0ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion overrun flag */
    using DFSDM_FLT0ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion flag */
    using DFSDM_FLT0ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag */
    using DFSDM_FLT0ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt flag clear register */
    using DFSDM_FLT0ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag */
    using DFSDM_FLT0ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the clock absence flag */
    using DFSDM_FLT0ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT0ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT0ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief injected channel group selection register */
    using DFSDM_FLT0JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection */
    using DFSDM_FLT0JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief filter control register */
    using DFSDM_FLT0FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order */
    using DFSDM_FLT0FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) */
    using DFSDM_FLT0FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) */
    using DFSDM_FLT0FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data register for injected group */
    using DFSDM_FLT0JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data */
    using DFSDM_FLT0JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted */
    using DFSDM_FLT0JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data register for the regular channel */
    using DFSDM_FLT0RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data */
    using DFSDM_FLT0RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data */
    using DFSDM_FLT0RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted */
    using DFSDM_FLT0RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog high threshold register */
    using DFSDM_FLT0AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold */
    using DFSDM_FLT0AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event */
    using DFSDM_FLT0AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog low threshold register */
    using DFSDM_FLT0AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold */
    using DFSDM_FLT0AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event */
    using DFSDM_FLT0AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog status register */
    using DFSDM_FLT0AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag */
    using DFSDM_FLT0AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag */
    using DFSDM_FLT0AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog clear flag register */
    using DFSDM_FLT0AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag */
    using DFSDM_FLT0AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag */
    using DFSDM_FLT0AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum register */
    using DFSDM_FLT0EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value */
    using DFSDM_FLT0EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel */
    using DFSDM_FLT0EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum register */
    using DFSDM_FLT0EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXMIN */
    using DFSDM_FLT0EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel */
    using DFSDM_FLT0EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief conversion timer register */
    using DFSDM_FLT0CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN */
    using DFSDM_FLT0CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 1 */
    using DFSDM_FLT1CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT1CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast conversion mode selection for regular conversions */
    using DFSDM_FLT1CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel selection */
    using DFSDM_FLT1CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the regular conversion */
    using DFSDM_FLT1CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch regular conversion synchronously with DFSDM0 */
    using DFSDM_FLT1CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous mode selection for regular conversions */
    using DFSDM_FLT1CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software start of a conversion on the regular channel */
    using DFSDM_FLT1CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions */
    using DFSDM_FLT1CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger signal selection for launching injected conversions */
    using DFSDM_FLT1CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the injected channel group */
    using DFSDM_FLT1CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scanning conversion mode for injected conversions */
    using DFSDM_FLT1CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger */
    using DFSDM_FLT1CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start a conversion of the injected group of channels */
    using DFSDM_FLT1CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM enable */
    using DFSDM_FLT1CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 2 */
    using DFSDM_FLT1CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection */
    using DFSDM_FLT1CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector channel selection */
    using DFSDM_FLT1CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence interrupt enable */
    using DFSDM_FLT1CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector interrupt enable */
    using DFSDM_FLT1CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog interrupt enable */
    using DFSDM_FLT1CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data overrun interrupt enable */
    using DFSDM_FLT1CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data overrun interrupt enable */
    using DFSDM_FLT1CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular end of conversion interrupt enable */
    using DFSDM_FLT1CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable */
    using DFSDM_FLT1CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt and status register */
    using DFSDM_FLT1ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag */
    using DFSDM_FLT1ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence flag */
    using DFSDM_FLT1ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion in progress status */
    using DFSDM_FLT1ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion in progress status */
    using DFSDM_FLT1ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog */
    using DFSDM_FLT1ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion overrun flag */
    using DFSDM_FLT1ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion overrun flag */
    using DFSDM_FLT1ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion flag */
    using DFSDM_FLT1ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag */
    using DFSDM_FLT1ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt flag clear register */
    using DFSDM_FLT1ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag */
    using DFSDM_FLT1ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the clock absence flag */
    using DFSDM_FLT1ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT1ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT1ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief injected channel group selection register */
    using DFSDM_FLT1CHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection */
    using DFSDM_FLT1CHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief filter control register */
    using DFSDM_FLT1FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order */
    using DFSDM_FLT1FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) */
    using DFSDM_FLT1FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) */
    using DFSDM_FLT1FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data register for injected group */
    using DFSDM_FLT1JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data */
    using DFSDM_FLT1JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted */
    using DFSDM_FLT1JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data register for the regular channel */
    using DFSDM_FLT1RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data */
    using DFSDM_FLT1RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data */
    using DFSDM_FLT1RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted */
    using DFSDM_FLT1RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog high threshold register */
    using DFSDM_FLT1AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold */
    using DFSDM_FLT1AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event */
    using DFSDM_FLT1AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog low threshold register */
    using DFSDM_FLT1AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold */
    using DFSDM_FLT1AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event */
    using DFSDM_FLT1AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog status register */
    using DFSDM_FLT1AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag */
    using DFSDM_FLT1AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag */
    using DFSDM_FLT1AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog clear flag register */
    using DFSDM_FLT1AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag */
    using DFSDM_FLT1AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag */
    using DFSDM_FLT1AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum register */
    using DFSDM_FLT1EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value */
    using DFSDM_FLT1EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel */
    using DFSDM_FLT1EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum register */
    using DFSDM_FLT1EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXMIN */
    using DFSDM_FLT1EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel */
    using DFSDM_FLT1EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief conversion timer register */
    using DFSDM_FLT1CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN */
    using DFSDM_FLT1CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 1 */
    using DFSDM_FLT2CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT2CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast conversion mode selection for regular conversions */
    using DFSDM_FLT2CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel selection */
    using DFSDM_FLT2CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the regular conversion */
    using DFSDM_FLT2CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch regular conversion synchronously with DFSDM0 */
    using DFSDM_FLT2CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous mode selection for regular conversions */
    using DFSDM_FLT2CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software start of a conversion on the regular channel */
    using DFSDM_FLT2CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions */
    using DFSDM_FLT2CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger signal selection for launching injected conversions */
    using DFSDM_FLT2CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the injected channel group */
    using DFSDM_FLT2CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scanning conversion mode for injected conversions */
    using DFSDM_FLT2CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger */
    using DFSDM_FLT2CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start a conversion of the injected group of channels */
    using DFSDM_FLT2CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM enable */
    using DFSDM_FLT2CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 2 */
    using DFSDM_FLT2CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection */
    using DFSDM_FLT2CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector channel selection */
    using DFSDM_FLT2CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence interrupt enable */
    using DFSDM_FLT2CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector interrupt enable */
    using DFSDM_FLT2CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog interrupt enable */
    using DFSDM_FLT2CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data overrun interrupt enable */
    using DFSDM_FLT2CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data overrun interrupt enable */
    using DFSDM_FLT2CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular end of conversion interrupt enable */
    using DFSDM_FLT2CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable */
    using DFSDM_FLT2CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt and status register */
    using DFSDM_FLT2ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag */
    using DFSDM_FLT2ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence flag */
    using DFSDM_FLT2ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion in progress status */
    using DFSDM_FLT2ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion in progress status */
    using DFSDM_FLT2ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog */
    using DFSDM_FLT2ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion overrun flag */
    using DFSDM_FLT2ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion overrun flag */
    using DFSDM_FLT2ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion flag */
    using DFSDM_FLT2ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag */
    using DFSDM_FLT2ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt flag clear register */
    using DFSDM_FLT2ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag */
    using DFSDM_FLT2ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the clock absence flag */
    using DFSDM_FLT2ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT2ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT2ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief injected channel group selection register */
    using DFSDM_FLT2JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection */
    using DFSDM_FLT2JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief filter control register */
    using DFSDM_FLT2FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order */
    using DFSDM_FLT2FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) */
    using DFSDM_FLT2FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) */
    using DFSDM_FLT2FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data register for injected group */
    using DFSDM_FLT2JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data */
    using DFSDM_FLT2JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted */
    using DFSDM_FLT2JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data register for the regular channel */
    using DFSDM_FLT2RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data */
    using DFSDM_FLT2RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data */
    using DFSDM_FLT2RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted */
    using DFSDM_FLT2RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog high threshold register */
    using DFSDM_FLT2AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold */
    using DFSDM_FLT2AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event */
    using DFSDM_FLT2AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog low threshold register */
    using DFSDM_FLT2AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold */
    using DFSDM_FLT2AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event */
    using DFSDM_FLT2AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog status register */
    using DFSDM_FLT2AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag */
    using DFSDM_FLT2AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag */
    using DFSDM_FLT2AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog clear flag register */
    using DFSDM_FLT2AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag */
    using DFSDM_FLT2AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag */
    using DFSDM_FLT2AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum register */
    using DFSDM_FLT2EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value */
    using DFSDM_FLT2EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel */
    using DFSDM_FLT2EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum register */
    using DFSDM_FLT2EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXMIN */
    using DFSDM_FLT2EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel */
    using DFSDM_FLT2EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief conversion timer register */
    using DFSDM_FLT2CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN */
    using DFSDM_FLT2CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 1 */
    using DFSDM_FLT3CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT3CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast conversion mode selection for regular conversions */
    using DFSDM_FLT3CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel selection */
    using DFSDM_FLT3CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the regular conversion */
    using DFSDM_FLT3CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch regular conversion synchronously with DFSDM0 */
    using DFSDM_FLT3CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous mode selection for regular conversions */
    using DFSDM_FLT3CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software start of a conversion on the regular channel */
    using DFSDM_FLT3CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions */
    using DFSDM_FLT3CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger signal selection for launching injected conversions */
    using DFSDM_FLT3CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel enabled to read data for the injected channel group */
    using DFSDM_FLT3CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scanning conversion mode for injected conversions */
    using DFSDM_FLT3CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger */
    using DFSDM_FLT3CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start a conversion of the injected group of channels */
    using DFSDM_FLT3CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM enable */
    using DFSDM_FLT3CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 2 */
    using DFSDM_FLT3CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection */
    using DFSDM_FLT3CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector channel selection */
    using DFSDM_FLT3CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence interrupt enable */
    using DFSDM_FLT3CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short-circuit detector interrupt enable */
    using DFSDM_FLT3CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog interrupt enable */
    using DFSDM_FLT3CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data overrun interrupt enable */
    using DFSDM_FLT3CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data overrun interrupt enable */
    using DFSDM_FLT3CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular end of conversion interrupt enable */
    using DFSDM_FLT3CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable */
    using DFSDM_FLT3CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt and status register */
    using DFSDM_FLT3ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag */
    using DFSDM_FLT3ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock absence flag */
    using DFSDM_FLT3ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion in progress status */
    using DFSDM_FLT3ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion in progress status */
    using DFSDM_FLT3ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog */
    using DFSDM_FLT3ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular conversion overrun flag */
    using DFSDM_FLT3ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected conversion overrun flag */
    using DFSDM_FLT3ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion flag */
    using DFSDM_FLT3ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag */
    using DFSDM_FLT3ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt flag clear register */
    using DFSDM_FLT3ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag */
    using DFSDM_FLT3ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the clock absence flag */
    using DFSDM_FLT3ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT3ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT3ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief injected channel group selection register */
    using DFSDM_FLT3JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection */
    using DFSDM_FLT3JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief filter control register */
    using DFSDM_FLT3FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order */
    using DFSDM_FLT3FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) */
    using DFSDM_FLT3FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) */
    using DFSDM_FLT3FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data register for injected group */
    using DFSDM_FLT3JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data */
    using DFSDM_FLT3JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted */
    using DFSDM_FLT3JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data register for the regular channel */
    using DFSDM_FLT3RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data */
    using DFSDM_FLT3RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data */
    using DFSDM_FLT3RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted */
    using DFSDM_FLT3RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog high threshold register */
    using DFSDM_FLT3AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold */
    using DFSDM_FLT3AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event */
    using DFSDM_FLT3AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog low threshold register */
    using DFSDM_FLT3AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold */
    using DFSDM_FLT3AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event */
    using DFSDM_FLT3AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog status register */
    using DFSDM_FLT3AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag */
    using DFSDM_FLT3AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag */
    using DFSDM_FLT3AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog watchdog clear flag register */
    using DFSDM_FLT3AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag */
    using DFSDM_FLT3AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag */
    using DFSDM_FLT3AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum register */
    using DFSDM_FLT3EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value */
    using DFSDM_FLT3EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel */
    using DFSDM_FLT3EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum register */
    using DFSDM_FLT3EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXMIN */
    using DFSDM_FLT3EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel */
    using DFSDM_FLT3EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief conversion timer register */
    using DFSDM_FLT3CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN */
    using DFSDM_FLT3CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
