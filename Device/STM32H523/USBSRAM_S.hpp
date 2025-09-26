/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H523_USBSRAM_S_HPP
#define EMBEDDED_PP_STM32H523_USBSRAM_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USBSRAM address block description */
namespace STM32H523::USBSRAM_S {

    /** @brief Channel/endpoint transmit buffer descriptor 0 */
    using USBSRAM_CHEP_TXRXBD_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_TXRXBD_0_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_TXRXBD_0_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 0 */
    using USBSRAM_CHEP_TXRXBD_0_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_TXRXBD_0_ALTERNATE1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_TXRXBD_0_ALTERNATE1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_TXRXBD_0_ALTERNATE1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_TXRXBD_0_ALTERNATE1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 0 */
    using USBSRAM_CHEP_RXTXBD_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_RXTXBD_0_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_RXTXBD_0_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_RXTXBD_0_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_RXTXBD_0_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 0 */
    using USBSRAM_CHEP_RXTXBD_0_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_RXTXBD_0_ALTERNATE1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_RXTXBD_0_ALTERNATE1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 1 */
    using USBSRAM_CHEP_TXRXBD_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_TXRXBD_1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_TXRXBD_1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 1 */
    using USBSRAM_CHEP_TXRXBD_1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_TXRXBD_1_ALTERNATE1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_TXRXBD_1_ALTERNATE1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_TXRXBD_1_ALTERNATE1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_TXRXBD_1_ALTERNATE1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 1 */
    using USBSRAM_CHEP_RXTXBD_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_RXTXBD_1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_RXTXBD_1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_RXTXBD_1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_RXTXBD_1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 1 */
    using USBSRAM_CHEP_RXTXBD_1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_RXTXBD_1_ALTERNATE1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_RXTXBD_1_ALTERNATE1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 2 */
    using USBSRAM_CHEP_TXRXBD_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_TXRXBD_2_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_TXRXBD_2_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 2 */
    using USBSRAM_CHEP_TXRXBD_2_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_TXRXBD_2_ALTERNATE1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_TXRXBD_2_ALTERNATE1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_TXRXBD_2_ALTERNATE1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_TXRXBD_2_ALTERNATE1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 2 */
    using USBSRAM_CHEP_RXTXBD_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_RXTXBD_2_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_RXTXBD_2_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_RXTXBD_2_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_RXTXBD_2_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 2 */
    using USBSRAM_CHEP_RXTXBD_2_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_RXTXBD_2_ALTERNATE1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_RXTXBD_2_ALTERNATE1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 3 */
    using USBSRAM_CHEP_TXRXBD_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_TXRXBD_3_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_TXRXBD_3_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 3 */
    using USBSRAM_CHEP_TXRXBD_3_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_TXRXBD_3_ALTERNATE1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_TXRXBD_3_ALTERNATE1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_TXRXBD_3_ALTERNATE1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_TXRXBD_3_ALTERNATE1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 3 */
    using USBSRAM_CHEP_RXTXBD_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_RXTXBD_3_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_RXTXBD_3_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_RXTXBD_3_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_RXTXBD_3_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 3 */
    using USBSRAM_CHEP_RXTXBD_3_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_RXTXBD_3_ALTERNATE1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_RXTXBD_3_ALTERNATE1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 4 */
    using USBSRAM_CHEP_TXRXBD_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_TXRXBD_4_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_TXRXBD_4_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 4 */
    using USBSRAM_CHEP_TXRXBD_4_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_TXRXBD_4_ALTERNATE1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_TXRXBD_4_ALTERNATE1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_TXRXBD_4_ALTERNATE1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_TXRXBD_4_ALTERNATE1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 4 */
    using USBSRAM_CHEP_RXTXBD_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_RXTXBD_4_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_RXTXBD_4_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_RXTXBD_4_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_RXTXBD_4_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 4 */
    using USBSRAM_CHEP_RXTXBD_4_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_RXTXBD_4_ALTERNATE1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_RXTXBD_4_ALTERNATE1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 5 */
    using USBSRAM_CHEP_TXRXBD_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_TXRXBD_5_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_TXRXBD_5_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 5 */
    using USBSRAM_CHEP_TXRXBD_5_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_TXRXBD_5_ALTERNATE1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_TXRXBD_5_ALTERNATE1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_TXRXBD_5_ALTERNATE1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_TXRXBD_5_ALTERNATE1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 5 */
    using USBSRAM_CHEP_RXTXBD_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_RXTXBD_5_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_RXTXBD_5_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_RXTXBD_5_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_RXTXBD_5_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 5 */
    using USBSRAM_CHEP_RXTXBD_5_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_RXTXBD_5_ALTERNATE1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_RXTXBD_5_ALTERNATE1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 6 */
    using USBSRAM_CHEP_TXRXBD_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_TXRXBD_6_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_TXRXBD_6_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 6 */
    using USBSRAM_CHEP_TXRXBD_6_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_TXRXBD_6_ALTERNATE1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_TXRXBD_6_ALTERNATE1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_TXRXBD_6_ALTERNATE1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_TXRXBD_6_ALTERNATE1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 6 */
    using USBSRAM_CHEP_RXTXBD_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_RXTXBD_6_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_RXTXBD_6_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_RXTXBD_6_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_RXTXBD_6_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 6 */
    using USBSRAM_CHEP_RXTXBD_6_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_RXTXBD_6_ALTERNATE1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_RXTXBD_6_ALTERNATE1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 7 */
    using USBSRAM_CHEP_TXRXBD_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_TXRXBD_7_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_TXRXBD_7_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 7 */
    using USBSRAM_CHEP_TXRXBD_7_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_TXRXBD_7_ALTERNATE1_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_TXRXBD_7_ALTERNATE1_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_TXRXBD_7_ALTERNATE1_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_TXRXBD_7_ALTERNATE1_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint receive buffer descriptor 7 */
    using USBSRAM_CHEP_RXTXBD_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception buffer address */
    using USBSRAM_CHEP_RXTXBD_7_ADDR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception byte count */
    using USBSRAM_CHEP_RXTXBD_7_COUNT_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of blocks */
    using USBSRAM_CHEP_RXTXBD_7_NUM_BLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size */
    using USBSRAM_CHEP_RXTXBD_7_BLSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel/endpoint transmit buffer descriptor 7 */
    using USBSRAM_CHEP_RXTXBD_7_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission buffer address */
    using USBSRAM_CHEP_RXTXBD_7_ALTERNATE1_ADDR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission byte count */
    using USBSRAM_CHEP_RXTXBD_7_ALTERNATE1_COUNT_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
