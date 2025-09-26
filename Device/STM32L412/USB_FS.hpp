/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L412_USB_FS_HPP
#define EMBEDDED_PP_STM32L412_USB_FS_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Universal serial bus full-speed device interface */
namespace STM32L412::USB_FS {

    /** @brief endpoint 0 register */
    using EP0R = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint address */
    using EP0R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using EP0R_STAT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for transmission transfers */
    using EP0R_DTOG_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct Transfer for transmission */
    using EP0R_CTR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint kind */
    using EP0R_EP_KIND = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using EP0R_EP_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using EP0R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using EP0R_STAT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using EP0R_DTOG_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer for reception */
    using EP0R_CTR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint 1 register */
    using EP1R = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint address */
    using EP1R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using EP1R_STAT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for transmission transfers */
    using EP1R_DTOG_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct Transfer for transmission */
    using EP1R_CTR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint kind */
    using EP1R_EP_KIND = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using EP1R_EP_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using EP1R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using EP1R_STAT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using EP1R_DTOG_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer for reception */
    using EP1R_CTR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint 2 register */
    using EP2R = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint address */
    using EP2R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using EP2R_STAT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for transmission transfers */
    using EP2R_DTOG_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct Transfer for transmission */
    using EP2R_CTR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint kind */
    using EP2R_EP_KIND = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using EP2R_EP_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using EP2R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using EP2R_STAT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using EP2R_DTOG_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer for reception */
    using EP2R_CTR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint 3 register */
    using EP3R = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint address */
    using EP3R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using EP3R_STAT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for transmission transfers */
    using EP3R_DTOG_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct Transfer for transmission */
    using EP3R_CTR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint kind */
    using EP3R_EP_KIND = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using EP3R_EP_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using EP3R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using EP3R_STAT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using EP3R_DTOG_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer for reception */
    using EP3R_CTR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint 4 register */
    using EP4R = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint address */
    using EP4R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using EP4R_STAT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for transmission transfers */
    using EP4R_DTOG_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct Transfer for transmission */
    using EP4R_CTR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint kind */
    using EP4R_EP_KIND = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using EP4R_EP_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using EP4R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using EP4R_STAT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using EP4R_DTOG_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer for reception */
    using EP4R_CTR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint 5 register */
    using EP5R = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint address */
    using EP5R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using EP5R_STAT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for transmission transfers */
    using EP5R_DTOG_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct Transfer for transmission */
    using EP5R_CTR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint kind */
    using EP5R_EP_KIND = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using EP5R_EP_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using EP5R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using EP5R_STAT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using EP5R_DTOG_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer for reception */
    using EP5R_CTR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint 6 register */
    using EP6R = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint address */
    using EP6R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using EP6R_STAT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for transmission transfers */
    using EP6R_DTOG_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct Transfer for transmission */
    using EP6R_CTR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint kind */
    using EP6R_EP_KIND = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using EP6R_EP_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using EP6R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using EP6R_STAT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using EP6R_DTOG_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer for reception */
    using EP6R_CTR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint 7 register */
    using EP7R = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint address */
    using EP7R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using EP7R_STAT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for transmission transfers */
    using EP7R_DTOG_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct Transfer for transmission */
    using EP7R_CTR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint kind */
    using EP7R_EP_KIND = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using EP7R_EP_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using EP7R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using EP7R_STAT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using EP7R_DTOG_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer for reception */
    using EP7R_CTR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register */
    using CNTR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force USB Reset */
    using CNTR_FRES = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power down */
    using CNTR_PDWN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode */
    using CNTR_LPMODE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force suspend */
    using CNTR_FSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume request */
    using CNTR_RESUME = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM L1 Resume request */
    using CNTR_L1RESUME = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM L1 state request interrupt mask */
    using CNTR_L1REQM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Expected start of frame interrupt mask */
    using CNTR_ESOFM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame interrupt mask */
    using CNTR_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset interrupt mask */
    using CNTR_RESETM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend mode interrupt mask */
    using CNTR_SUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup interrupt mask */
    using CNTR_WKUPM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error interrupt mask */
    using CNTR_ERRM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet memory area over / underrun interrupt mask */
    using CNTR_PMAOVRM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer interrupt mask */
    using CNTR_CTRM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt status register */
    using ISTR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint Identifier */
    using ISTR_EP_ID = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction of transaction */
    using ISTR_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM L1 state request */
    using ISTR_L1REQ = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Expected start frame */
    using ISTR_ESOF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief start of frame */
    using ISTR_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset request */
    using ISTR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend mode request */
    using ISTR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup */
    using ISTR_WKUP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error */
    using ISTR_ERR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet memory area over / underrun */
    using ISTR_PMAOVR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correct transfer */
    using ISTR_CTR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame number register */
    using FNR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using FNR_FN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lost SOF */
    using FNR_LSOF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Locked */
    using FNR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data - line status */
    using FNR_RXDM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data + line status */
    using FNR_RXDP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device address */
    using DADDR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using DADDR_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable function */
    using DADDR_EF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Buffer table address */
    using BTABLE = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Buffer table */
    using BTABLE_BTABLE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM control and status register */
    using LPMCSR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BESL value */
    using LPMCSR_BESL = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RemoteWake value */
    using LPMCSR_REMWAKE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM Token acknowledge enable */
    using LPMCSR_LPMACK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM support enable */
    using LPMCSR_LPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Battery charging detector */
    using BCDR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DP pull-up control */
    using BCDR_DPPU = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DM pull-up detection status */
    using BCDR_PS2DET = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secondary detection (SD) status */
    using BCDR_SDET = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Primary detection (PD) status */
    using BCDR_PDET = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data contact detection (DCD) status */
    using BCDR_DCDET = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secondary detection (SD) mode enable */
    using BCDR_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Primary detection (PD) mode enable */
    using BCDR_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data contact detection (DCD) mode enable */
    using BCDR_DCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Battery charging detector (BCD) enable */
    using BCDR_BCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count 0 */
    using COUNT0_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x52, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using COUNT0_TX_COUNT0_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count 0 */
    using COUNT1_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x5A, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using COUNT1_TX_COUNT1_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count 0 */
    using COUNT2_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x62, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using COUNT2_TX_COUNT2_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count 0 */
    using COUNT3_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x6A, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using COUNT3_TX_COUNT3_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count 0 */
    using COUNT4_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x72, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using COUNT4_TX_COUNT4_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count 0 */
    using COUNT5_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x7A, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using COUNT5_TX_COUNT5_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count 0 */
    using COUNT6_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x82, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using COUNT6_TX_COUNT6_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count 0 */
    using COUNT7_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x8A, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using COUNT7_TX_COUNT7_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address 2 */
    using ADDR2_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using ADDR2_TX_ADDR2_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address 3 */
    using ADDR3_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using ADDR3_TX_ADDR3_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address 0 */
    using ADDR4_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using ADDR4_TX_ADDR4_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address 0 */
    using ADDR5_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using ADDR5_TX_ADDR5_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address 0 */
    using ADDR6_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using ADDR6_TX_ADDR6_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address 0 */
    using ADDR7_TX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using ADDR7_TX_ADDR7_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address 0 */
    using ADDR0_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using ADDR0_RX_ADDR0_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address 0 */
    using ADDR1_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using ADDR1_RX_ADDR1_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address 0 */
    using ADDR2_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using ADDR2_RX_ADDR2_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address 0 */
    using ADDR3_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using ADDR3_RX_ADDR3_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address 0 */
    using ADDR4_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using ADDR4_RX_ADDR4_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address 0 */
    using ADDR5_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using ADDR5_RX_ADDR5_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address 0 */
    using ADDR6_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using ADDR6_RX_ADDR6_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address 0 */
    using ADDR7_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using ADDR7_RX_ADDR7_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count 0 */
    using COUNT0_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x56, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using COUNT0_RX_COUNT0_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using COUNT0_RX_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using COUNT0_RX_BL_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count 0 */
    using COUNT1_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x5E, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using COUNT1_RX_COUNT1_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using COUNT1_RX_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using COUNT1_RX_BL_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count 0 */
    using COUNT2_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x66, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using COUNT2_RX_COUNT2_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using COUNT2_RX_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using COUNT2_RX_BL_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count 0 */
    using COUNT3_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x6E, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using COUNT3_RX_COUNT3_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using COUNT3_RX_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using COUNT3_RX_BL_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count 0 */
    using COUNT4_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x76, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using COUNT4_RX_COUNT4_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using COUNT4_RX_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using COUNT4_RX_BL_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count 0 */
    using COUNT5_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x7E, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using COUNT5_RX_COUNT5_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using COUNT5_RX_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using COUNT5_RX_BL_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count 0 */
    using COUNT6_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x86, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using COUNT6_RX_COUNT6_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using COUNT6_RX_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using COUNT6_RX_BL_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count 0 */
    using COUNT7_RX = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x8E, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using COUNT7_RX_COUNT7_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using COUNT7_RX_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using COUNT7_RX_BL_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
