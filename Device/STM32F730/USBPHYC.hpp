/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F730_USBPHYC_HPP
#define EMBEDDED_PP_STM32F730_USBPHYC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USBPHYC register interface */
namespace STM32F730::USBPHYC {

    /** @brief USBPHYC PLL1 control register */
    using PLL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the PLL1 inside PHY */
    using PLL1_PLL1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief : Controls the PHY PLL1 input clock frequency selection */
    using PLL1_PLL1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBPHYC tuning control register */
    using TUNE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controls the current boosting function */
    using TUNE_INCURREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controls PHY current boosting */
    using TUNE_INCURRINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief : Enables the Low Full Speed feedback capacitor */
    using TUNE_LFSCAPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controls the HS driver slew rate */
    using TUNE_HSDRVSLEW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decreases the HS driver DC level */
    using TUNE_HSDRVDCCUR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Increases the HS Driver DC level. Not applicable during the HS Test J and Test K data transfer */
    using TUNE_HSDRVDCLEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the HS driver current increase feature */
    using TUNE_HSDRVCURINCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tuning pin to adjust the full speed rise/fall time */
    using TUNE_FSDRVRFADJ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High Speed rise-fall reduction enable */
    using TUNE_HSDRVRFRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HS Driver current trimming pins for choke compensation */
    using TUNE_HSDRVCHKITRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controls the PHY bus HS driver impedance tuning for choke compensation */
    using TUNE_HSDRVCHKZTRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adjust the squelch DC threshold value */
    using TUNE_SQLCHCTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the HS Rx Gain Equalizer */
    using TUNE_HDRXGNEQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HS Tx staggering enable */
    using TUNE_STAGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HS Fall time control of single ended signals during pre-emphasis */
    using TUNE_HSFALLPREEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief : HS Receiver Offset adjustment */
    using TUNE_HSRXOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the short circuit protection circuitry in LS/FS driver */
    using TUNE_SHTCCTCTLPROT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This pin is used to bypass the squelch inter-locking circuitry */
    using TUNE_SQLBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBPHYC LDO control and status register */
    using LDO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicates the presence of the LDO in the chip */
    using LDO_LDO_USED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Monitors the status of the PHY's LDO */
    using LDO_LDO_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controls disable of the High Speed PHY's LDO */
    using LDO_LDO_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
