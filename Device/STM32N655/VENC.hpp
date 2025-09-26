/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_VENC_HPP
#define EMBEDDED_PP_STM32N655_VENC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Video encoder */
namespace STM32N655::VENC {

    /** @brief VENC ID register */
    using VENC_SWREG0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt register (all format mode) */
    using VENC_SWREG0_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC interrupt register */
    using VENC_SWREG1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt register (all format mode) */
    using VENC_SWREG1_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC bus interface configuration register */
    using VENC_SWREG2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus interface configuration register (all format mode) */
    using VENC_SWREG2_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC device configuration register */
    using VENC_SWREG3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device configuration register (all format mode) */
    using VENC_SWREG3_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for output stream data register */
    using VENC_SWREG5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for output stream data (all format mode) */
    using VENC_SWREG5_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for output control data register */
    using VENC_SWREG6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for output control data (all format mode) */
    using VENC_SWREG6_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reference luma register */
    using VENC_SWREG7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for reference luma (all format mode) */
    using VENC_SWREG7_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reference chroma register */
    using VENC_SWREG8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for reference chroma (all format mode) */
    using VENC_SWREG8_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reconstructed luma register */
    using VENC_SWREG9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for reconstructed luma (all format mode) */
    using VENC_SWREG9_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reconstructed chroma register */
    using VENC_SWREG10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for reconstructed chroma (all format mode) */
    using VENC_SWREG10_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for input picture luma register */
    using VENC_SWREG11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for input picture luma (all format mode) */
    using VENC_SWREG11_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for input picture cb register */
    using VENC_SWREG12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for input picture cb (all format mode) */
    using VENC_SWREG12_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for input picture cr register */
    using VENC_SWREG13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for input picture cr (all format mode) */
    using VENC_SWREG13_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 0 */
    using VENC_SWREG14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encoder control register 0 (such as picture information or encoding mode) (all format mode) */
    using VENC_SWREG14_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 1 */
    using VENC_SWREG15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encoder control register 1 (such as preprocessing control, crop, rotate, input format) (all format mode) */
    using VENC_SWREG15_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 2 */
    using VENC_SWREG16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for second reference luma (H264 control) (all format mode) */
    using VENC_SWREG16_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 3 */
    using VENC_SWREG17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for second reference chroma (H264 control) (all format mode) */
    using VENC_SWREG17_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 4 */
    using VENC_SWREG18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encoder control register 4 (deblock filter mode, H264 control) (all format mode) */
    using VENC_SWREG18_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 5 */
    using VENC_SWREG19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encoder control register 5 (input format, motion vector etc) (all format mode) */
    using VENC_SWREG19_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 6 */
    using VENC_SWREG20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control of data JPEG (all format mode) */
    using VENC_SWREG20_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 7 */
    using VENC_SWREG21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control of H264 (all format mode) */
    using VENC_SWREG21_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stream header remainder MSB bits register */
    using VENC_SWREG22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream header remainder bits MSB (MSB aligned) (all format mode) */
    using VENC_SWREG22_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stream header remainder LSB bits register */
    using VENC_SWREG23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream header remainder bits LSB (MSB aligned) (all format mode) */
    using VENC_SWREG23_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stream buffer limit/output stream size register */
    using VENC_SWREG24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream buffer limit (64-bit addresses)/output stream size (bits) (all format mode) */
    using VENC_SWREG24_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 8 */
    using VENC_SWREG25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control of MAD control and QP sum output (all format mode) */
    using VENC_SWREG25_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC intra-slice bitmap	register */
    using VENC_SWREG26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief intra-slice bitmap for probability updates (all format mode) */
    using VENC_SWREG26_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 9 */
    using VENC_SWREG27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control of H264 QP (all format mode) */
    using VENC_SWREG27_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 10 */
    using VENC_SWREG28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H264 checkpoint 1-2 (all format mode) */
    using VENC_SWREG28_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 11 */
    using VENC_SWREG29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H.264 Checkpoint 3 -4 (all format mode) */
    using VENC_SWREG29_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 12 */
    using VENC_SWREG30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H.264 checkpoint 5 -6 (all format mode) */
    using VENC_SWREG30_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 13 */
    using VENC_SWREG31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H.264 checkpoint 7 -8 (all format mode) */
    using VENC_SWREG31_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 14 */
    using VENC_SWREG32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H.264 Checkpoint 8 -10 / Encoder control register 14 (all format mode) */
    using VENC_SWREG32_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 15 */
    using VENC_SWREG33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H.264 Checkpoint word error 1-2 (all format mode) */
    using VENC_SWREG33_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 16 */
    using VENC_SWREG34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H.264 checkpoint word error 3-4 and the second reference frame control (all format mode) */
    using VENC_SWREG34_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC H.264 checkpoint word error 5-6/encoder control register 17 */
    using VENC_SWREG35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H.264 Checkpoint word error 5-6 / Encoder control register 17 (all format mode) */
    using VENC_SWREG35_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC H.264 checkpoint delta QP 1-8/encoder control register 18 */
    using VENC_SWREG36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief H.264 Checkpoint delta QP 1-8 / Encoder control register 18 (all format mode) */
    using VENC_SWREG36_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder control register 19, stream start offset */
    using VENC_SWREG37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encoder control register 19 (all format mode) */
    using VENC_SWREG37_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC macroblock count output register */
    using VENC_SWREG38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Macroblock count output (all format mode) */
    using VENC_SWREG38_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for next pic luminance register */
    using VENC_SWREG39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for next pic luminance (all format mode) */
    using VENC_SWREG39_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization mode control register */
    using VENC_SWREG40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization mode control (all format mode) */
    using VENC_SWREG40_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization motion sum div8 output register */
    using VENC_SWREG41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization motion sum div8 output (all format mode) */
    using VENC_SWREG41_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization GMV output, matrix 1, up-left position	output register */
    using VENC_SWREG42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization GMV output, matrix 1 (up-left position) output (all format mode) */
    using VENC_SWREG42_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization GMV output, matrix 2, up position	output register */
    using VENC_SWREG43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization GMV output, matrix 2 (up position) output (all format mode) */
    using VENC_SWREG43_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization matrix 3, up-right position	output register */
    using VENC_SWREG44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization matrix 3 (up-right position) output (all format mode) */
    using VENC_SWREG44_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization matrix 4, left position	output register */
    using VENC_SWREG45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization matrix 4 (left position) output (all format mode) */
    using VENC_SWREG45_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization matrix 5, GMV position	output register */
    using VENC_SWREG46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization matrix 5 (GMV position) output (all format mode) */
    using VENC_SWREG46_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization matrix 6, right position	output register */
    using VENC_SWREG47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization matrix 6 (right position) output (all format mode) */
    using VENC_SWREG47_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization matrix 7, down-left position	output register */
    using VENC_SWREG48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization matrix 7 (down-left position) output (all format mode) */
    using VENC_SWREG48_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization matrix 8, down position	output register */
    using VENC_SWREG49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization matrix 8 (down position) output (all format mode) */
    using VENC_SWREG49_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC stabilization matrix 9, down-right position	output register */
    using VENC_SWREG50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stabilization matrix 9 (down-right position) output (all format mode) */
    using VENC_SWREG50_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for cabac context tables H264	 register */
    using VENC_SWREG51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for cabac context tables (H264) or probability tables (all format mode) */
    using VENC_SWREG51_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for MV output writing	register */
    using VENC_SWREG52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for MV output writing (all format mode) */
    using VENC_SWREG52_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC RGB to YUV conversion coefficient A - B	register */
    using VENC_SWREG53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RGB to YUV conversion coefficient A - B (all format mode) */
    using VENC_SWREG53_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC RGB to YUV conversion coefficient C - E	register */
    using VENC_SWREG54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RGB to YUV conversion coefficient C - E (all format mode) */
    using VENC_SWREG54_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC RGB to YUV conversion coefficient F, RGB mask	MSB bit position register */
    using VENC_SWREG55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RGB to YUV conversion coefficient F, RGB mask MSB bit position (all format mode) */
    using VENC_SWREG55_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC intra area register */
    using VENC_SWREG56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief intra area (all format mode) */
    using VENC_SWREG56_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC CIR intra mb position register */
    using VENC_SWREG57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CIR intra mb position (all format mode) */
    using VENC_SWREG57_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC intra slice bitmap for slices 0..31/base address for 	1st DCT partition register */
    using VENC_SWREG58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief intra slice bitmap for slices 0..31 / Base address for 1st DCT partition (all format mode) */
    using VENC_SWREG58_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC intra slice bitmap for slices 32..63/base address for 	2nd DCT partition register */
    using VENC_SWREG59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief intra slice bitmap for slices 32..63 / Base address for 2nd DCT partition (all format mode) */
    using VENC_SWREG59_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC 1st ROI area register */
    using VENC_SWREG60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1st ROI area (all format mode) */
    using VENC_SWREG60_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC 2nd ROI area register */
    using VENC_SWREG61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2nd ROI area (all format mode) */
    using VENC_SWREG61_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC ROI area delta QP, MV register */
    using VENC_SWREG62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ROI area delta QP, MV (all format mode) */
    using VENC_SWREG62_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC synthesis configuration register encoder 0	register */
    using VENC_SWREG63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synthesis configuration register encoder 0 (read only) (all format mode) */
    using VENC_SWREG63_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 1/intra 16x16 mode 0-1	penalty register */
    using VENC_SWREG64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 1 / intra 16x16 mode 0-1 penalty (all format mode) */
    using VENC_SWREG64_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 2/intra 16x16 mode 2-3	penalty register */
    using VENC_SWREG65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 2 / intra 16x16 mode 2-3 penalty (all format mode) */
    using VENC_SWREG65_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 3/intra 4x4 mode 0-1	penalty register */
    using VENC_SWREG66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 3 / intra 4x4 mode 0-1 penalty (all format mode) */
    using VENC_SWREG66_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 4/intra 4x4 mode 2-3	penalty register */
    using VENC_SWREG67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 4 / intra 4x4 mode 2-3 penalty (all format mode) */
    using VENC_SWREG67_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 5/intra 4x4 mode 4-5	penalty register */
    using VENC_SWREG68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 5 / intra 4x4 mode 4-5 penalty (all format mode) */
    using VENC_SWREG68_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 6/intra 4x4 mode 6-7	penalty register */
    using VENC_SWREG69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 6 / intra 4x4 mode 6-7 penalty (all format mode) */
    using VENC_SWREG69_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 7/intra 4x4 mode 8-9	penalty register */
    using VENC_SWREG70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 7 / intra 4x4 mode 8-9 penalty (all format mode) */
    using VENC_SWREG70_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 8/base address for 	segmentation map register */
    using VENC_SWREG71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 8 / Base address for segmentation map (all format mode) */
    using VENC_SWREG71_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 9/segment1	parameter register */
    using VENC_SWREG72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 9 / segment1 parameter (all format mode) */
    using VENC_SWREG72_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 10/segment1	parameter register */
    using VENC_SWREG73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 10 / segment1 parameter (all format mode) */
    using VENC_SWREG73_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 11/segment1 	parameter register */
    using VENC_SWREG74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 11 / segment1 parameter (all format mode) */
    using VENC_SWREG74_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 12/segment1 	parameter register */
    using VENC_SWREG75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 12 / segment1 parameter (all format mode) */
    using VENC_SWREG75_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 13/segment1	parameter register */
    using VENC_SWREG76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 13 / segment1 parameter (all format mode) */
    using VENC_SWREG76_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 14/segment1	parameter register */
    using VENC_SWREG77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 14 / segment1 parameter (all format mode) */
    using VENC_SWREG77_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 15/segment1	parameter register */
    using VENC_SWREG78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 15 / segment1 parameter (all format mode) */
    using VENC_SWREG78_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG luma quantization 16/segment2	parameter register */
    using VENC_SWREG79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG luma quantization 16 / segment2 parameter (all format mode) */
    using VENC_SWREG79_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 1/segment2	parameter register */
    using VENC_SWREG80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 1 / segment2 parameter (all format mode) */
    using VENC_SWREG80_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 2/segment2	parameter register */
    using VENC_SWREG81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 2 / segment2 parameter (all format mode) */
    using VENC_SWREG81_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 3/segment2	parameter register */
    using VENC_SWREG82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 3 / segment2 parameter (all format mode) */
    using VENC_SWREG82_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 4/segment2	parameter register */
    using VENC_SWREG83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 4 / segment2 parameter (all format mode) */
    using VENC_SWREG83_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 5/segment2	parameter register */
    using VENC_SWREG84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 5 / segment2 parameter (all format mode) */
    using VENC_SWREG84_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 6/segment2	parameter register */
    using VENC_SWREG85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 6 / segment2 parameter (all format mode) */
    using VENC_SWREG85_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 7/segment2	parameter register */
    using VENC_SWREG86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 7 / segment2 parameter (all format mode) */
    using VENC_SWREG86_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 8/segment2	parameter register */
    using VENC_SWREG87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 8 / segment2 parameter (all format mode) */
    using VENC_SWREG87_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 9/segment3	parameter register */
    using VENC_SWREG88 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 9 / segment3 parameter (all format mode) */
    using VENC_SWREG88_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 10/segment3	parameter register */
    using VENC_SWREG89 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 10 / segment3 parameter (all format mode) */
    using VENC_SWREG89_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 11/segment3	parameter register */
    using VENC_SWREG90 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 11 / segment3 parameter (all format mode) */
    using VENC_SWREG90_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 12/segment3	parameter register */
    using VENC_SWREG91 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 12 / segment3 parameter (all format mode) */
    using VENC_SWREG91_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 13/segment3	parameter register */
    using VENC_SWREG92 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 13 / segment3 parameter (all format mode) */
    using VENC_SWREG92_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 14/segment3	parameter register */
    using VENC_SWREG93 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 14 / segment3 parameter (all format mode) */
    using VENC_SWREG93_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 15/segment3	parameter register */
    using VENC_SWREG94 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 15 / segment3 parameter (all format mode) */
    using VENC_SWREG94_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC JPEG chroma quantization 16/segment3	parameter register */
    using VENC_SWREG95 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG chroma quantization 16 / segment3 parameter (all format mode) */
    using VENC_SWREG95_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values 0-3 register */
    using VENC_SWREG96 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values 0-3 (all format mode) */
    using VENC_SWREG96_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values 4-7 register */
    using VENC_SWREG97 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values 4-7 (all format mode) */
    using VENC_SWREG97_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG98 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG98_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG99 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG99_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG100 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG100_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG101 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG101_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG102 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG102_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG103 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG103_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG104 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG104_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG105 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG105_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG106 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG106_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG107 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG107_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG108 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG108_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG109 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG109_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG110 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG110_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG111 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG111_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG112 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG112_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG113 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG113_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG114 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG114_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG115 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG115_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG116 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG116_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG117 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG117_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG118 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG118_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG119 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG119_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG120 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG120_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG121 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG121_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG122 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG122_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG123 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG123_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG124 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG124_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG125 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG125_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values register */
    using VENC_SWREG126 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values (all format mode) */
    using VENC_SWREG126_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV 4p/1p penalty values 124-127	register */
    using VENC_SWREG127 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV 4p/1p penalty values 124-127 (all format mode) */
    using VENC_SWREG127_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values 0-3	register */
    using VENC_SWREG128 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values 0-3 (all format mode) */
    using VENC_SWREG128_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values 4-7	register */
    using VENC_SWREG129 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values 4-7 (all format mode) */
    using VENC_SWREG129_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG130 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG130_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG131 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG131_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG132 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG132_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG133 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG133_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG134 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG134_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG135 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG135_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG136 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG136_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG137 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG137_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG138 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG138_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG139 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG139_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG140 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG140_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG141 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG141_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG142 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG142_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG143 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG143_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG144 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG144_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG145 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG145_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG146 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG146_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG147 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG147_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG148 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG148_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG149 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG149_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG150 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG150_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG151 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG151_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG152 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG152_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG153 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG153_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG154 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG154_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG155 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG155_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG156 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG156_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG157 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG157_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values register */
    using VENC_SWREG158 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values (all format mode) */
    using VENC_SWREG158_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC DMV qpel penalty values 124-127 register */
    using VENC_SWREG159 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMV qpel penalty values 124-127 (all format mode) */
    using VENC_SWREG159_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for output of down-scaled encoder image	in YUYV 4:2:2 format register */
    using VENC_SWREG231 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for output of down-scaled encoder image in YUYV 4:2:2 format (all format mode) */
    using VENC_SWREG231_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC scaling control register */
    using VENC_SWREG232 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scaling control (all format mode) */
    using VENC_SWREG232_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC scaling control register */
    using VENC_SWREG233 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scaling control (all format mode) */
    using VENC_SWREG233_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC squared error output calculated for 13x13 pixels	per macroblock register */
    using VENC_SWREG236 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Squared error output calculated for 13x13 pixels per macroblock (all format mode) */
    using VENC_SWREG236_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC MAD 2 control and output register */
    using VENC_SWREG237 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAD 2 control and output (all format mode) */
    using VENC_SWREG237_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC MAD 3 control and output register */
    using VENC_SWREG238 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAD 3 control and output (all format mode) */
    using VENC_SWREG238_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: intra 16x16 mode 0-2 penalty	register */
    using VENC_SWREG256 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: intra 16x16 mode 0-2 penalty (all format mode) */
    using VENC_SWREG256_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: intra 16x16 mode 3, intra 4x4 0-1	penalty register */
    using VENC_SWREG257 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: intra 16x16 mode 3 and intra 4x4 0-1 penalty (all format mode) */
    using VENC_SWREG257_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: intra 4x4 mode 2-4 penalty	register */
    using VENC_SWREG258 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: intra 4x4 mode 2-4 penalty (all format mode) */
    using VENC_SWREG258_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: intra 4x4 mode 5-7 penalty	register */
    using VENC_SWREG259 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: intra 4x4 mode 5-7 penalty (all format mode) */
    using VENC_SWREG259_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: intra 4x4 mode 8-9 penalty, previous	mode favor for H.264 register */
    using VENC_SWREG260 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: intra 4x4 mode 8-9 penalty, previous mode favor for H.264 (all format mode) */
    using VENC_SWREG260_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: bit cost of inter type, intra 16x16 mode	favor register */
    using VENC_SWREG261 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: Bit cost of inter type, intra 16x16 mode favor (all format mode) */
    using VENC_SWREG261_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: inter MB mode favor, skip mode penalty, 	penalty value for 2nd reference frame register */
    using VENC_SWREG262 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: inter MB mode favor, skip mode penalty, penalty value for second reference frame (all format mode) */
    using VENC_SWREG262_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: penalty value register */
    using VENC_SWREG263 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: penalty value (all format mode) */
    using VENC_SWREG263_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: penalty value register */
    using VENC_SWREG264 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: penalty value (all format mode) */
    using VENC_SWREG264_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: deadzone rate multiplier for plane 0-1	register */
    using VENC_SWREG265 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x424, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: Deadzone rate multiplier for plane 0-1 (all format mode) */
    using VENC_SWREG265_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: deadzone rate multiplier for plane 2-3	register */
    using VENC_SWREG266 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: Deadzone rate multiplier for plane 2-3 (all format mode) */
    using VENC_SWREG266_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 1: deadzone rate for macroblock skip token 0-1,	dmv penalty coefficient register */
    using VENC_SWREG267 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 1: Deadzone rate for macroblock skip token 0-1, dmv penalty coefficient (all format mode) */
    using VENC_SWREG267_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: intra 16x16 mode 0-2 penalty	register */
    using VENC_SWREG268 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: intra 16x16 mode 0-2 penalty (all format mode) */
    using VENC_SWREG268_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: intra 16x16 mode 3 penalty, intra 4x4 mode 0-1	penalty register */
    using VENC_SWREG269 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x434, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: intra 16x16 mode 3 penalty, intra 4x4 mode 0-1 penalty (all format mode) */
    using VENC_SWREG269_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: intra 4x4 mode 2-4 penalty	register */
    using VENC_SWREG270 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x438, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: intra 4x4 mode 2-4 penalty (all format mode) */
    using VENC_SWREG270_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: intra 4x4 mode 5-7 penalty	register */
    using VENC_SWREG271 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: intra 4x4 mode 5-7 penalty (all format mode) */
    using VENC_SWREG271_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: intra 4x4 mode 8-9 penalty, intra 4x4 previous	mode favor for H.264 register */
    using VENC_SWREG272 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x440, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: intra 4x4 mode 8-9 penalty, intra 4x4 previous mode favor for H.264 (all format mode) */
    using VENC_SWREG272_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: bit cost of inter type, intra 16x16	mode favor register */
    using VENC_SWREG273 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x444, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: Bit cost of inter type, intra 16x16 mode favor (all format mode) */
    using VENC_SWREG273_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: inter MB mode favor, skip mode penalty, 	penalty value register */
    using VENC_SWREG274 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x448, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: inter MB mode favor, skip mode penalty, panelty value (all format mode) */
    using VENC_SWREG274_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: penalty value register */
    using VENC_SWREG275 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: penalty value (all format mode) */
    using VENC_SWREG275_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: penalty value register */
    using VENC_SWREG276 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: penalty value (all format mode) */
    using VENC_SWREG276_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: deadzone rate multiplier for plane 0-1	register */
    using VENC_SWREG277 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x454, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: Deadzone rate multiplier for plane 0-1 (all format mode) */
    using VENC_SWREG277_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: deadzone rate multiplier for plane 2-3	register */
    using VENC_SWREG278 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x458, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: Deadzone rate multiplier for plane 2-3 (all format mode) */
    using VENC_SWREG278_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 2: deadzone rate for macroblock skip token 0-1,	dmv penalty coefficient register */
    using VENC_SWREG279 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 2: Deadzone rate for macroblock skip token 0-1, dmv penalty coefficient (all format mode) */
    using VENC_SWREG279_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: intra 16x16 mode 0-2 penalty	register */
    using VENC_SWREG280 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: intra 16x16 mode 0-2 penalty (all format mode) */
    using VENC_SWREG280_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: intra 16x16 mode 3 penalty, intra 4x4 mode 0-1	penalty register */
    using VENC_SWREG281 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: intra 16x16 mode 3 penalty, intra 4x4 mode 0-1 penalty (all format mode) */
    using VENC_SWREG281_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: intra 4x4 mode 2-4 penalty	register */
    using VENC_SWREG282 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x468, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: intra 4x4 mode 2-4 penalty (all format mode) */
    using VENC_SWREG282_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: intra 4x4 mode 5-7 penalty	register */
    using VENC_SWREG283 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: intra 4x4 mode 5-7 penalty (all format mode) */
    using VENC_SWREG283_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: intra 4x4 mode 8-9 penalty, intra 4x4	previous mode favor for H.264 register */
    using VENC_SWREG284 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x470, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: intra 4x4 mode 8-9 penalty, intra 4x4 previous mode favor for H.264 (all format mode) */
    using VENC_SWREG284_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: bit cost of inter type, intra 16x16 	mode favor register */
    using VENC_SWREG285 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x474, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: Bit cost of inter type, intra 16x16 mode favor (all format mode) */
    using VENC_SWREG285_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: inter MB mode favor in intra/inter selection,	inter MB mode favor, penalty value for second reference frame	register */
    using VENC_SWREG286 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x478, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: inter MB mode favor in intra/inter selection, inter MB mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG286_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: penalty value register */
    using VENC_SWREG287 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: penalty value (all format mode) */
    using VENC_SWREG287_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: penalty value register */
    using VENC_SWREG288 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x480, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: penalty value (all format mode) */
    using VENC_SWREG288_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: deadzone rate multiplier for plane 0-1	register */
    using VENC_SWREG289 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x484, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: Deadzone rate multiplier for plane 0-1 (all format mode) */
    using VENC_SWREG289_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: deadzone rate multiplier for plane 2-3	register */
    using VENC_SWREG290 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x488, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: Deadzone rate multiplier for plane 2-3 (all format mode) */
    using VENC_SWREG290_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 3: deadzone rate for macroblock skip token 0-1,	dmv penalty coefficient register */
    using VENC_SWREG291 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 3: Deadzone rate for macroblock skip token 0-1, dmv penalty coefficient (all format mode) */
    using VENC_SWREG291_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC Mb boost register */
    using VENC_SWREG294 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mb boost (all format mode) */
    using VENC_SWREG294_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC variance control, Pskop conding mode	register */
    using VENC_SWREG295 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Variance control, Pskop conding mode (all format mode) */
    using VENC_SWREG295_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC synthesis configuration register encoder 1	read only register */
    using VENC_SWREG296 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synthesis configuration register encoder 1 (read only) (all format mode) */
    using VENC_SWREG296_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC MBRC control register */
    using VENC_SWREG297 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MBRC control (all format mode) */
    using VENC_SWREG297_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 4: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame	register */
    using VENC_SWREG298 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 4: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG298_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 4: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG299 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 4: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG299_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 4: penalty value register */
    using VENC_SWREG300 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 4: penalty value (all format mode) */
    using VENC_SWREG300_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 4: penalty value register */
    using VENC_SWREG301 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 4: penalty value (all format mode) */
    using VENC_SWREG301_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 5: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG302 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 5: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG302_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 5: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG303 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 5: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG303_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 5: penalty value register */
    using VENC_SWREG304 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 5: penalty value (all format mode) */
    using VENC_SWREG304_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 5: penalty value register */
    using VENC_SWREG305 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 5: penalty value (all format mode) */
    using VENC_SWREG305_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 6: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG306 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 6: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG306_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 6: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG307 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 6: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG307_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 6: penalty value register */
    using VENC_SWREG308 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 6: penalty value (all format mode) */
    using VENC_SWREG308_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 6: penalty value register */
    using VENC_SWREG309 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 6: penalty value (all format mode) */
    using VENC_SWREG309_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 7: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG310 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 7: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG310_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 7: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG311 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 7: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG311_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 7: penalty value register */
    using VENC_SWREG312 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 7: penalty value (all format mode) */
    using VENC_SWREG312_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 7: penalty value register */
    using VENC_SWREG313 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 7: penalty value (all format mode) */
    using VENC_SWREG313_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 8: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG314 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 8: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG314_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 8: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG315 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 8: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG315_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 8: penalty value register */
    using VENC_SWREG316 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 8: penalty value (all format mode) */
    using VENC_SWREG316_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 8: penalty value register */
    using VENC_SWREG317 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 8: penalty value (all format mode) */
    using VENC_SWREG317_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 9: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG318 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 9: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG318_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 9: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG319 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 9: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG319_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 9: penalty value register */
    using VENC_SWREG320 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x500, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 9: penalty value (all format mode) */
    using VENC_SWREG320_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 9: penalty value register */
    using VENC_SWREG321 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x504, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 9: penalty value (all format mode) */
    using VENC_SWREG321_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 10: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG322 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x508, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 10: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG322_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 10: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG323 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 10: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG323_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 10: penalty value register */
    using VENC_SWREG324 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x510, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 10: penalty value (all format mode) */
    using VENC_SWREG324_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 10: penalty value register */
    using VENC_SWREG325 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 10: penalty value (all format mode) */
    using VENC_SWREG325_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 11: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG326 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x518, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 11: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG326_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 11: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG327 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x51C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 11: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG327_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 11: penalty value register */
    using VENC_SWREG328 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 11: penalty value (all format mode) */
    using VENC_SWREG328_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 11: penalty value register */
    using VENC_SWREG329 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x524, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 11: penalty value (all format mode) */
    using VENC_SWREG329_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 12: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame register */
    using VENC_SWREG330 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x528, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 12: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG330_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 12: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG331 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x52C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 12: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG331_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 12: penalty value register */
    using VENC_SWREG332 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x530, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 12: penalty value (all format mode) */
    using VENC_SWREG332_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 12: penalty value register */
    using VENC_SWREG333 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x534, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 12: penalty value (all format mode) */
    using VENC_SWREG333_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 13: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame 	register */
    using VENC_SWREG334 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x538, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 13: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG334_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 13: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG335 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x53C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 13: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG335_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 13: penalty value register */
    using VENC_SWREG336 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x540, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 13: penalty value (all format mode) */
    using VENC_SWREG336_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 13: penalty value register */
    using VENC_SWREG337 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x544, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 13: penalty value (all format mode) */
    using VENC_SWREG337_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 14: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG338 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x548, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 14: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG338_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 14: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG339 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 14: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG339_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 14: penalty value register */
    using VENC_SWREG340 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 14: penalty value (all format mode) */
    using VENC_SWREG340_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 14: penalty value register */
    using VENC_SWREG341 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x554, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 14: penalty value (all format mode) */
    using VENC_SWREG341_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 15: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG342 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x558, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 15: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG342_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 15: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG343 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x55C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 15: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG343_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 15: penalty value register */
    using VENC_SWREG344 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 15: penalty value (all format mode) */
    using VENC_SWREG344_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 15: penalty value register */
    using VENC_SWREG345 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 15: penalty value (all format mode) */
    using VENC_SWREG345_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 16: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame	register */
    using VENC_SWREG346 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x568, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 16: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG346_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 16: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG347 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x56C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 16: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG347_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 16: penalty value register */
    using VENC_SWREG348 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x570, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 16: penalty value (all format mode) */
    using VENC_SWREG348_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 16: penalty value register */
    using VENC_SWREG349 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x574, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 16: penalty value (all format mode) */
    using VENC_SWREG349_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 17: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame register */
    using VENC_SWREG350 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x578, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 17: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG350_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 17: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG351 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x57C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 17: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG351_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 17: penalty value register */
    using VENC_SWREG352 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x580, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 17: penalty value (all format mode) */
    using VENC_SWREG352_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 17: penalty value register */
    using VENC_SWREG353 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x584, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 17: penalty value (all format mode) */
    using VENC_SWREG353_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 18: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame register */
    using VENC_SWREG354 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x588, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 18: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG354_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 18: skip mode penalty, inter MB mode 	favor register */
    using VENC_SWREG355 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 18: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG355_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 18: penalty value register */
    using VENC_SWREG356 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x590, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 18: penalty value (all format mode) */
    using VENC_SWREG356_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 18: penalty value register */
    using VENC_SWREG357 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 18: penalty value (all format mode) */
    using VENC_SWREG357_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 19: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame register */
    using VENC_SWREG358 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x598, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 19: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG358_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 19: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG359 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x59C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 19: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG359_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 19: penalty value register */
    using VENC_SWREG360 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 19: penalty value (all format mode) */
    using VENC_SWREG360_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 19: penalty value register */
    using VENC_SWREG361 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 19: penalty value (all format mode) */
    using VENC_SWREG361_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 20: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame register */
    using VENC_SWREG362 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 20: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG362_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 20: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG363 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 20: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG363_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 20: penalty value register */
    using VENC_SWREG364 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 20: penalty value (all format mode) */
    using VENC_SWREG364_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 20: penalty value register */
    using VENC_SWREG365 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 20: penalty value (all format mode) */
    using VENC_SWREG365_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 21: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame register */
    using VENC_SWREG366 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 21: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG366_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 21: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG367 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 21: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG367_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 21: penalty value register */
    using VENC_SWREG368 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 21: penalty value (all format mode) */
    using VENC_SWREG368_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 21: penalty value register */
    using VENC_SWREG369 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 21: penalty value (all format mode) */
    using VENC_SWREG369_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 22: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame	register */
    using VENC_SWREG370 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 22: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG370_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 22: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG371 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 22: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG371_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 22: penalty value register */
    using VENC_SWREG372 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 22: penalty value (all format mode) */
    using VENC_SWREG372_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 22: penalty value register */
    using VENC_SWREG373 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 22: penalty value (all format mode) */
    using VENC_SWREG373_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 23: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame	register */
    using VENC_SWREG374 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 23: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG374_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 23: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG375 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 23: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG375_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 23: penalty value register */
    using VENC_SWREG376 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 23: penalty value (all format mode) */
    using VENC_SWREG376_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 23: penalty value register */
    using VENC_SWREG377 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 23: penalty value (all format mode) */
    using VENC_SWREG377_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 24: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame	register */
    using VENC_SWREG378 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 24: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG378_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 24: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG379 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 24: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG379_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 24: penalty value register */
    using VENC_SWREG380 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 24: penalty value (all format mode) */
    using VENC_SWREG380_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 24: penalty value register */
    using VENC_SWREG381 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 24: penalty value (all format mode) */
    using VENC_SWREG381_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 25: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame	register */
    using VENC_SWREG382 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 25: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG382_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 25: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG383 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 25: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG383_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 25: penalty value register */
    using VENC_SWREG384 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x600, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 25: penalty value (all format mode) */
    using VENC_SWREG384_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 25: penalty value register */
    using VENC_SWREG385 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x604, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 25: penalty value (all format mode) */
    using VENC_SWREG385_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 26: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame	register */
    using VENC_SWREG386 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x608, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 26: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG386_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 26: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG387 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 26: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG387_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 26: penalty value register */
    using VENC_SWREG388 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 26: penalty value (all format mode) */
    using VENC_SWREG388_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 26: penalty value register */
    using VENC_SWREG389 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 26: penalty value (all format mode) */
    using VENC_SWREG389_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 27: intra 4x4 previous mode favor, intra 16x16mode favor, penalty value for second reference frame	register */
    using VENC_SWREG390 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x618, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 27: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG390_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 27: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG391 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x61C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 27: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG391_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 27: penalty value register */
    using VENC_SWREG392 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 27: penalty value (all format mode) */
    using VENC_SWREG392_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 27: penalty value register */
    using VENC_SWREG393 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x624, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 27: penalty value (all format mode) */
    using VENC_SWREG393_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 28: intra 4x4 previous mode favor, intra 16x16mode favor, penalty value for second reference frame	register */
    using VENC_SWREG394 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x628, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 28: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG394_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 28: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG395 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x62C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 28: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG395_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 28: penalty value register */
    using VENC_SWREG396 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x630, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 28: penalty value (all format mode) */
    using VENC_SWREG396_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 28: penalty value register */
    using VENC_SWREG397 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x634, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 28: penalty value (all format mode) */
    using VENC_SWREG397_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 29: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame	register */
    using VENC_SWREG398 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x638, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 29: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG398_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 29: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG399 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x63C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 29: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG399_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 29: penalty value register */
    using VENC_SWREG400 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x640, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 29: penalty value (all format mode) */
    using VENC_SWREG400_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 29: penalty value register */
    using VENC_SWREG401 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x644, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 29: penalty value (all format mode) */
    using VENC_SWREG401_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 30: intra 4x4 previous mode favor, intra 16x16	mode favor, penalty value for second reference frame	register */
    using VENC_SWREG402 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x648, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 30: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG402_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 30: skip mode penalty, inter MB mode	favor register */
    using VENC_SWREG403 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 30: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG403_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 30: penalty value register */
    using VENC_SWREG404 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 30: penalty value (all format mode) */
    using VENC_SWREG404_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 30: penalty value register */
    using VENC_SWREG405 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x654, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 30: penalty value (all format mode) */
    using VENC_SWREG405_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 31: intra 4x4 previous mode favor, intra 16x16 mode	favor, penalty value for second reference frame 	register */
    using VENC_SWREG406 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x658, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 31: intra 4x4 previous mode favor, intra 16x16 mode favor, penalty value for second reference frame (all format mode) */
    using VENC_SWREG406_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 31: skip mode penalty, inter MB mode favor	register */
    using VENC_SWREG407 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x65C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 31: skip mode penalty, inter MB mode favor (all format mode) */
    using VENC_SWREG407_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 31: penalty value register */
    using VENC_SWREG408 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x660, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 31: penalty value (all format mode) */
    using VENC_SWREG408_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC segment 31: penalty value register */
    using VENC_SWREG409 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x664, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief segment 31: penalty value (all format mode) */
    using VENC_SWREG409_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC MBRC control, QP, offset, enable	register */
    using VENC_SWREG410 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x668, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MBRC control (QP, offset, enable) (all format mode) */
    using VENC_SWREG410_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC gain of MB QP delta. 8.8 format register */
    using VENC_SWREG411 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x66C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief gain of MB QPdelta. 8.8 format (all format mode) */
    using VENC_SWREG411_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC average of MB complexity register */
    using VENC_SWREG412 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x670, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG412_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC reference compression control	register */
    using VENC_SWREG413 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x674, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG413_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reference luma register */
    using VENC_SWREG414 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x678, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG414_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reference chroma register */
    using VENC_SWREG415 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x67C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG415_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reconstructed luma register */
    using VENC_SWREG416 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x680, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG416_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reconstructed chroma register */
    using VENC_SWREG417 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x684, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG417_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for second reference luma register */
    using VENC_SWREG418 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x688, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG418_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for second reference chroma register */
    using VENC_SWREG419 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG419_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC limit of chroma RFC buffer register */
    using VENC_SWREG420 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x690, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average of MB complexity (all format mode) */
    using VENC_SWREG420_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC reorder control register */
    using VENC_SWREG421 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x694, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reorder control (all format mode) */
    using VENC_SWREG421_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC AXI read ID register */
    using VENC_SWREG422 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x698, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Read ID (all format mode) */
    using VENC_SWREG422_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address MSB for reference luma compression table	register */
    using VENC_SWREG423 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x69C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Read ID (all format mode) */
    using VENC_SWREG423_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address MSB for reference chroma compression table	register */
    using VENC_SWREG424 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Read ID (all format mode) */
    using VENC_SWREG424_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address MSB for reconstructed luma compression	table register */
    using VENC_SWREG425 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Read ID (all format mode) */
    using VENC_SWREG425_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address for reconstructed chroma compression	table register */
    using VENC_SWREG426 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address for reconstructed chroma compression table (all format mode) */
    using VENC_SWREG426_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address MSB for second reference luma compression	table register */
    using VENC_SWREG427 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address MSB for second reference luma compression table (all format mode) */
    using VENC_SWREG427_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC base address MSB for second reference chroma compression	table register */
    using VENC_SWREG428 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address MSB for second reference chroma compression table (all format mode) */
    using VENC_SWREG428_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for output stream	data register */
    using VENC_SWREG429 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for output stream data (all format mode) */
    using VENC_SWREG429_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for output control	data register */
    using VENC_SWREG430 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for output control data (all format mode) */
    using VENC_SWREG430_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for reference luma	register */
    using VENC_SWREG431 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for reference luma (all format mode) */
    using VENC_SWREG431_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for reference chroma	register */
    using VENC_SWREG432 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for reference chroma (all format mode) */
    using VENC_SWREG432_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for reconstructed luma	register */
    using VENC_SWREG433 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for reconstructed luma (all format mode) */
    using VENC_SWREG433_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for reconstructed chroma	register */
    using VENC_SWREG434 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for reconstructed chroma (all format mode) */
    using VENC_SWREG434_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for input picture luma	register */
    using VENC_SWREG435 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for input picture luma (all format mode) */
    using VENC_SWREG435_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for input picture cb register */
    using VENC_SWREG436 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for input picture cb (all format mode) */
    using VENC_SWREG436_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for input picture cr	register */
    using VENC_SWREG437 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for input picture cr (all format mode) */
    using VENC_SWREG437_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for second reference	luma register */
    using VENC_SWREG438 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for second reference luma (all format mode) */
    using VENC_SWREG438_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for second reference	chroma register */
    using VENC_SWREG439 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for second reference chroma (all format mode) */
    using VENC_SWREG439_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of H264 secondary ref pic base	register */
    using VENC_SWREG440 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of H264 secondary ref pic base (all format mode) */
    using VENC_SWREG440_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of H264 secondary ref pic base	register */
    using VENC_SWREG441 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of H264 secondary ref pic base (all format mode) */
    using VENC_SWREG441_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for next pic luminance	register */
    using VENC_SWREG442 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for next pic luminance (all format mode) */
    using VENC_SWREG442_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for cabac context tables H264	register */
    using VENC_SWREG443 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for cabac context tables (H264) or probability tables (all format mode) */
    using VENC_SWREG443_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for MV output writing	register */
    using VENC_SWREG444 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for MV output writing (all format mode) */
    using VENC_SWREG444_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC high 32 bits of base address for output of down-scaled	encoder image in YUYV 4:2:2 format register */
    using VENC_SWREG449 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x704, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief high 32 bits of Base address for output of down-scaled encoder image in YUYV 4:2:2 format (all format mode) */
    using VENC_SWREG449_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC low-latency control register */
    using VENC_SWREG497 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low latency control (all format mode) */
    using VENC_SWREG497_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC encoder line buffer offset	register */
    using VENC_SWREG498 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low latency control (all format mode) */
    using VENC_SWREG498_SWREG_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
