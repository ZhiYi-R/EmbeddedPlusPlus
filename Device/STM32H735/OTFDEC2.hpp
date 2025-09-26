/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H735_OTFDEC2_HPP
#define EMBEDDED_PP_STM32H735_OTFDEC2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief OTFDEC address block description */
namespace STM32H735::OTFDEC2 {

    /** @brief OTFDEC region 1 configuration register */
    using OTFDEC_R1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region on-the-fly decryption enable Note: When this bit is set region context (version, key, nonce) must be valid or garbage will be decrypted. */
    using OTFDEC_R1CFGR_REG_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On-the-fly decryption is disabled for this region. (value: 0)
     *          - B_0x1: On-the-fly decryption is enabled for this region. Data are XORed with the corresponding keystream. (value: 1)
     */
        /** @brief On-the-fly decryption is disabled for this region. */
    constexpr std::uint32_t OTFDEC_R1CFGR_REG_EN_B_0x0 = 0;
        /** @brief On-the-fly decryption is enabled for this region. Data are XORed with the corresponding keystream. */
    constexpr std::uint32_t OTFDEC_R1CFGR_REG_EN_B_0x1 = 1;

    /** @brief region config lock This bit-field is set once, i.e. if this bit is set it can only be reset to '0' if OTFDEC is reset. Setting this bit forces KEYLOCK bit to '1'. */
    using OTFDEC_R1CFGR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R1CFGR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R1CFGR_CONFIGLOCK_B_0x1 = 1;

    /** @brief region key lock This bitfield is set once, i.e. if this bit is set it can only be reset to '0' if the OTFDEC is reset. */
    using OTFDEC_R1CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region KEYRx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region KEYRx registers are ignored until next OTFDEC reset. KEYCRC bitfield is locked. (value: 1)
     */
        /** @brief Writes to this region KEYRx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R1CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to this region KEYRx registers are ignored until next OTFDEC reset. KEYCRC bitfield is locked. */
    constexpr std::uint32_t OTFDEC_R1CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief operating mode This bitfield selects the OTFDEC operating mode for this region: When MODE is not equal to 11 the standard AES encryption mode is activated. When either of the MODE bits are changed the region's key and associated CRC are zeroed. */
    using OTFDEC_R1CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only instruction accesses are decrypted. (value: 0)
     *          - B_0x1: Only data accesses are decrypted. (value: 1)
     *          - B_0x2: All read accesses are decrypted (instruction or data). (value: 2)
     *          - B_0x3: Only instruction accesses are decrypted, and enhanced encryption mode is activated. (value: 3)
     */
        /** @brief Only instruction accesses are decrypted. */
    constexpr std::uint32_t OTFDEC_R1CFGR_MODE_B_0x0 = 0;
        /** @brief Only data accesses are decrypted. */
    constexpr std::uint32_t OTFDEC_R1CFGR_MODE_B_0x1 = 1;
        /** @brief All read accesses are decrypted (instruction or data). */
    constexpr std::uint32_t OTFDEC_R1CFGR_MODE_B_0x2 = 2;
        /** @brief Only instruction accesses are decrypted, and enhanced encryption mode is activated. */
    constexpr std::uint32_t OTFDEC_R1CFGR_MODE_B_0x3 = 3;

    /** @brief region key 8-bit CRC When KEYLOCK=0, KEYCRC bitfield is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new computation starts as soon as a new valid sequence is initiated, and KEYCRC is read as zero until a valid sequence is completed. When KEYLOCK=1, KEYCRC remains unchanged until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Source code is available in this manual. This field is read only. Note: CRC information is updated only after the last bit of the key has been written. */
    using OTFDEC_R1CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region firmware version This 16-bit bitfield must be correctly initialized before the region corresponding REG_EN bit is set in the RxCFGR register. */
    using OTFDEC_R1CFGR_REGx_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 start address register */
    using OTFDEC_R1STARTADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AXI start address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits and the 12 LSB bits return zero. */
    using OTFDEC_R1STARTADDR_REGx_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 end address register */
    using OTFDEC_R1ENDADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AXI end address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set, and RxENDADDR must be strictly greater than RxSTARTADDR to be valid. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits returns zeros and the 12 LSB bits return ones. */
    using OTFDEC_R1ENDADDR_REGx_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 nonce register 0 */
    using OTFDEC_R1NONCER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. */
    using OTFDEC_R1NONCER0_REGx_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 nonce register 1 */
    using OTFDEC_R1NONCER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [63:32] Refer to the OTFDEC_RxNONCER0 register for description of the NONCE[63:0] bitfield. */
    using OTFDEC_R1NONCER1_REGx_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 key register 0 */
    using OTFDEC_R1KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Reading this register returns a zero value. Writing this register while the region CONFIGLOCK or KEYLOCK bit is set in the RxCFGR register will be discarded. Note: When application successfully changes MODE bits in RxCFGR register RxKEYR registers and associated KEYCRC are erased. */
    using OTFDEC_R1KEYR0_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 key register 1 */
    using OTFDEC_R1KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [63:32] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R1KEYR1_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 key register 2 */
    using OTFDEC_R1KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [95:64] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R1KEYR2_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 key register 3 */
    using OTFDEC_R1KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [127:96] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R1KEYR3_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 configuration register */
    using OTFDEC_R2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region on-the-fly decryption enable Note: When this bit is set region context (version, key, nonce) must be valid or garbage will be decrypted. */
    using OTFDEC_R2CFGR_REG_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On-the-fly decryption is disabled for this region. (value: 0)
     *          - B_0x1: On-the-fly decryption is enabled for this region. Data are XORed with the corresponding keystream. (value: 1)
     */
        /** @brief On-the-fly decryption is disabled for this region. */
    constexpr std::uint32_t OTFDEC_R2CFGR_REG_EN_B_0x0 = 0;
        /** @brief On-the-fly decryption is enabled for this region. Data are XORed with the corresponding keystream. */
    constexpr std::uint32_t OTFDEC_R2CFGR_REG_EN_B_0x1 = 1;

    /** @brief region config lock This bit-field is set once, i.e. if this bit is set it can only be reset to '0' if OTFDEC is reset. Setting this bit forces KEYLOCK bit to '1'. */
    using OTFDEC_R2CFGR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R2CFGR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R2CFGR_CONFIGLOCK_B_0x1 = 1;

    /** @brief region key lock This bitfield is set once, i.e. if this bit is set it can only be reset to '0' if the OTFDEC is reset. */
    using OTFDEC_R2CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region KEYRx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region KEYRx registers are ignored until next OTFDEC reset. KEYCRC bitfield is locked. (value: 1)
     */
        /** @brief Writes to this region KEYRx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R2CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to this region KEYRx registers are ignored until next OTFDEC reset. KEYCRC bitfield is locked. */
    constexpr std::uint32_t OTFDEC_R2CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief operating mode This bitfield selects the OTFDEC operating mode for this region: When MODE is not equal to 11 the standard AES encryption mode is activated. When either of the MODE bits are changed the region's key and associated CRC are zeroed. */
    using OTFDEC_R2CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only instruction accesses are decrypted. (value: 0)
     *          - B_0x1: Only data accesses are decrypted. (value: 1)
     *          - B_0x2: All read accesses are decrypted (instruction or data). (value: 2)
     *          - B_0x3: Only instruction accesses are decrypted, and enhanced encryption mode is activated. (value: 3)
     */
        /** @brief Only instruction accesses are decrypted. */
    constexpr std::uint32_t OTFDEC_R2CFGR_MODE_B_0x0 = 0;
        /** @brief Only data accesses are decrypted. */
    constexpr std::uint32_t OTFDEC_R2CFGR_MODE_B_0x1 = 1;
        /** @brief All read accesses are decrypted (instruction or data). */
    constexpr std::uint32_t OTFDEC_R2CFGR_MODE_B_0x2 = 2;
        /** @brief Only instruction accesses are decrypted, and enhanced encryption mode is activated. */
    constexpr std::uint32_t OTFDEC_R2CFGR_MODE_B_0x3 = 3;

    /** @brief region key 8-bit CRC When KEYLOCK=0, KEYCRC bitfield is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new computation starts as soon as a new valid sequence is initiated, and KEYCRC is read as zero until a valid sequence is completed. When KEYLOCK=1, KEYCRC remains unchanged until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Source code is available in this manual. This field is read only. Note: CRC information is updated only after the last bit of the key has been written. */
    using OTFDEC_R2CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region firmware version This 16-bit bitfield must be correctly initialized before the region corresponding REG_EN bit is set in the RxCFGR register. */
    using OTFDEC_R2CFGR_REGx_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 start address register */
    using OTFDEC_R2STARTADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AXI start address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits and the 12 LSB bits return zero. */
    using OTFDEC_R2STARTADDR_REGx_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 end address register */
    using OTFDEC_R2ENDADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AXI end address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set, and RxENDADDR must be strictly greater than RxSTARTADDR to be valid. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits returns zeros and the 12 LSB bits return ones. */
    using OTFDEC_R2ENDADDR_REGx_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 nonce register 0 */
    using OTFDEC_R2NONCER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. */
    using OTFDEC_R2NONCER0_REGx_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 nonce register 1 */
    using OTFDEC_R2NONCER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [63:32] Refer to the OTFDEC_RxNONCER0 register for description of the NONCE[63:0] bitfield. */
    using OTFDEC_R2NONCER1_REGx_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 key register 0 */
    using OTFDEC_R2KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Reading this register returns a zero value. Writing this register while the region CONFIGLOCK or KEYLOCK bit is set in the RxCFGR register will be discarded. Note: When application successfully changes MODE bits in RxCFGR register RxKEYR registers and associated KEYCRC are erased. */
    using OTFDEC_R2KEYR0_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 key register 1 */
    using OTFDEC_R2KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [63:32] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R2KEYR1_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 key register 2 */
    using OTFDEC_R2KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [95:64] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R2KEYR2_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 key register 3 */
    using OTFDEC_R2KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [127:96] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R2KEYR3_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 configuration register */
    using OTFDEC_R3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region on-the-fly decryption enable Note: When this bit is set region context (version, key, nonce) must be valid or garbage will be decrypted. */
    using OTFDEC_R3CFGR_REG_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On-the-fly decryption is disabled for this region. (value: 0)
     *          - B_0x1: On-the-fly decryption is enabled for this region. Data are XORed with the corresponding keystream. (value: 1)
     */
        /** @brief On-the-fly decryption is disabled for this region. */
    constexpr std::uint32_t OTFDEC_R3CFGR_REG_EN_B_0x0 = 0;
        /** @brief On-the-fly decryption is enabled for this region. Data are XORed with the corresponding keystream. */
    constexpr std::uint32_t OTFDEC_R3CFGR_REG_EN_B_0x1 = 1;

    /** @brief region config lock This bit-field is set once, i.e. if this bit is set it can only be reset to '0' if OTFDEC is reset. Setting this bit forces KEYLOCK bit to '1'. */
    using OTFDEC_R3CFGR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R3CFGR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R3CFGR_CONFIGLOCK_B_0x1 = 1;

    /** @brief region key lock This bitfield is set once, i.e. if this bit is set it can only be reset to '0' if the OTFDEC is reset. */
    using OTFDEC_R3CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region KEYRx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region KEYRx registers are ignored until next OTFDEC reset. KEYCRC bitfield is locked. (value: 1)
     */
        /** @brief Writes to this region KEYRx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R3CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to this region KEYRx registers are ignored until next OTFDEC reset. KEYCRC bitfield is locked. */
    constexpr std::uint32_t OTFDEC_R3CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief operating mode This bitfield selects the OTFDEC operating mode for this region: When MODE is not equal to 11 the standard AES encryption mode is activated. When either of the MODE bits are changed the region's key and associated CRC are zeroed. */
    using OTFDEC_R3CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only instruction accesses are decrypted. (value: 0)
     *          - B_0x1: Only data accesses are decrypted. (value: 1)
     *          - B_0x2: All read accesses are decrypted (instruction or data). (value: 2)
     *          - B_0x3: Only instruction accesses are decrypted, and enhanced encryption mode is activated. (value: 3)
     */
        /** @brief Only instruction accesses are decrypted. */
    constexpr std::uint32_t OTFDEC_R3CFGR_MODE_B_0x0 = 0;
        /** @brief Only data accesses are decrypted. */
    constexpr std::uint32_t OTFDEC_R3CFGR_MODE_B_0x1 = 1;
        /** @brief All read accesses are decrypted (instruction or data). */
    constexpr std::uint32_t OTFDEC_R3CFGR_MODE_B_0x2 = 2;
        /** @brief Only instruction accesses are decrypted, and enhanced encryption mode is activated. */
    constexpr std::uint32_t OTFDEC_R3CFGR_MODE_B_0x3 = 3;

    /** @brief region key 8-bit CRC When KEYLOCK=0, KEYCRC bitfield is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new computation starts as soon as a new valid sequence is initiated, and KEYCRC is read as zero until a valid sequence is completed. When KEYLOCK=1, KEYCRC remains unchanged until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Source code is available in this manual. This field is read only. Note: CRC information is updated only after the last bit of the key has been written. */
    using OTFDEC_R3CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region firmware version This 16-bit bitfield must be correctly initialized before the region corresponding REG_EN bit is set in the RxCFGR register. */
    using OTFDEC_R3CFGR_REGx_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 start address register */
    using OTFDEC_R3STARTADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AXI start address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits and the 12 LSB bits return zero. */
    using OTFDEC_R3STARTADDR_REGx_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 end address register */
    using OTFDEC_R3ENDADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AXI end address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set, and RxENDADDR must be strictly greater than RxSTARTADDR to be valid. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits returns zeros and the 12 LSB bits return ones. */
    using OTFDEC_R3ENDADDR_REGx_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 nonce register 0 */
    using OTFDEC_R3NONCER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. */
    using OTFDEC_R3NONCER0_REGx_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 nonce register 1 */
    using OTFDEC_R3NONCER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [63:32] Refer to the OTFDEC_RxNONCER0 register for description of the NONCE[63:0] bitfield. */
    using OTFDEC_R3NONCER1_REGx_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 key register 0 */
    using OTFDEC_R3KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Reading this register returns a zero value. Writing this register while the region CONFIGLOCK or KEYLOCK bit is set in the RxCFGR register will be discarded. Note: When application successfully changes MODE bits in RxCFGR register RxKEYR registers and associated KEYCRC are erased. */
    using OTFDEC_R3KEYR0_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 key register 1 */
    using OTFDEC_R3KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [63:32] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R3KEYR1_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 key register 2 */
    using OTFDEC_R3KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [95:64] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R3KEYR2_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 key register 3 */
    using OTFDEC_R3KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [127:96] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R3KEYR3_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 configuration register */
    using OTFDEC_R4CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region on-the-fly decryption enable Note: When this bit is set region context (version, key, nonce) must be valid or garbage will be decrypted. */
    using OTFDEC_R4CFGR_REG_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On-the-fly decryption is disabled for this region. (value: 0)
     *          - B_0x1: On-the-fly decryption is enabled for this region. Data are XORed with the corresponding keystream. (value: 1)
     */
        /** @brief On-the-fly decryption is disabled for this region. */
    constexpr std::uint32_t OTFDEC_R4CFGR_REG_EN_B_0x0 = 0;
        /** @brief On-the-fly decryption is enabled for this region. Data are XORed with the corresponding keystream. */
    constexpr std::uint32_t OTFDEC_R4CFGR_REG_EN_B_0x1 = 1;

    /** @brief region config lock This bit-field is set once, i.e. if this bit is set it can only be reset to '0' if OTFDEC is reset. Setting this bit forces KEYLOCK bit to '1'. */
    using OTFDEC_R4CFGR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R4CFGR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to this region CFGR1, STARTADDR, ENDADDR and NONCERx registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R4CFGR_CONFIGLOCK_B_0x1 = 1;

    /** @brief region key lock This bitfield is set once, i.e. if this bit is set it can only be reset to '0' if the OTFDEC is reset. */
    using OTFDEC_R4CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region KEYRx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region KEYRx registers are ignored until next OTFDEC reset. KEYCRC bitfield is locked. (value: 1)
     */
        /** @brief Writes to this region KEYRx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R4CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to this region KEYRx registers are ignored until next OTFDEC reset. KEYCRC bitfield is locked. */
    constexpr std::uint32_t OTFDEC_R4CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief operating mode This bitfield selects the OTFDEC operating mode for this region: When MODE is not equal to 11 the standard AES encryption mode is activated. When either of the MODE bits are changed the region's key and associated CRC are zeroed. */
    using OTFDEC_R4CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only instruction accesses are decrypted. (value: 0)
     *          - B_0x1: Only data accesses are decrypted. (value: 1)
     *          - B_0x2: All read accesses are decrypted (instruction or data). (value: 2)
     *          - B_0x3: Only instruction accesses are decrypted, and enhanced encryption mode is activated. (value: 3)
     */
        /** @brief Only instruction accesses are decrypted. */
    constexpr std::uint32_t OTFDEC_R4CFGR_MODE_B_0x0 = 0;
        /** @brief Only data accesses are decrypted. */
    constexpr std::uint32_t OTFDEC_R4CFGR_MODE_B_0x1 = 1;
        /** @brief All read accesses are decrypted (instruction or data). */
    constexpr std::uint32_t OTFDEC_R4CFGR_MODE_B_0x2 = 2;
        /** @brief Only instruction accesses are decrypted, and enhanced encryption mode is activated. */
    constexpr std::uint32_t OTFDEC_R4CFGR_MODE_B_0x3 = 3;

    /** @brief region key 8-bit CRC When KEYLOCK=0, KEYCRC bitfield is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new computation starts as soon as a new valid sequence is initiated, and KEYCRC is read as zero until a valid sequence is completed. When KEYLOCK=1, KEYCRC remains unchanged until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Source code is available in this manual. This field is read only. Note: CRC information is updated only after the last bit of the key has been written. */
    using OTFDEC_R4CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region firmware version This 16-bit bitfield must be correctly initialized before the region corresponding REG_EN bit is set in the RxCFGR register. */
    using OTFDEC_R4CFGR_REGx_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 start address register */
    using OTFDEC_R4STARTADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AXI start address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits and the 12 LSB bits return zero. */
    using OTFDEC_R4STARTADDR_REGx_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 end address register */
    using OTFDEC_R4ENDADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AXI end address This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set, and RxENDADDR must be strictly greater than RxSTARTADDR to be valid. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. Note: When determining the region the first 12 bits (LSB) and the last 4 bits (MSB) are ignored. When this register is accessed in read the 4 MSB bits returns zeros and the 12 LSB bits return ones. */
    using OTFDEC_R4ENDADDR_REGx_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 nonce register 0 */
    using OTFDEC_R4NONCER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Writing this register while the region CONFIGLOCK bit in the RxCFGR register is set will be discarded. */
    using OTFDEC_R4NONCER0_REGx_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 nonce register 1 */
    using OTFDEC_R4NONCER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [63:32] Refer to the OTFDEC_RxNONCER0 register for description of the NONCE[63:0] bitfield. */
    using OTFDEC_R4NONCER1_REGx_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 key register 0 */
    using OTFDEC_R4KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [31:0] This register must be written before the region corresponding REG_EN bit in the RxCFGR register is set. Reading this register returns a zero value. Writing this register while the region CONFIGLOCK or KEYLOCK bit is set in the RxCFGR register will be discarded. Note: When application successfully changes MODE bits in RxCFGR register RxKEYR registers and associated KEYCRC are erased. */
    using OTFDEC_R4KEYR0_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 key register 1 */
    using OTFDEC_R4KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [63:32] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R4KEYR1_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 key register 2 */
    using OTFDEC_R4KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [95:64] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R4KEYR2_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 key register 3 */
    using OTFDEC_R4KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [127:96] Refer to the OTFDEC_RxKEYR0 register for description of the KEY[127:0] bitfield. */
    using OTFDEC_R4KEYR3_REGx_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC interrupt status register */
    using OTFDEC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security Error Interrupt Flag status This bit is set by hardware and read only by application. Bit is set when at least one security error has been detected (illegal access to keys, illegal write on locked configuration). Bit is cleared when application sets in OTFDEC_ICR the corresponding bit to '1'. */
    using OTFDEC_ISR_SEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No security error status. No interrupt pending. (value: 0)
     *          - B_0x1: Security error flag status, with interrupt pending. Actual interrupt generation is dependent on OTFDEC_IER corresponding bit SEIE. (value: 1)
     */
        /** @brief No security error status. No interrupt pending. */
    constexpr std::uint32_t OTFDEC_ISR_SEIF_B_0x0 = 0;
        /** @brief Security error flag status, with interrupt pending. Actual interrupt generation is dependent on OTFDEC_IER corresponding bit SEIE. */
    constexpr std::uint32_t OTFDEC_ISR_SEIF_B_0x1 = 1;

    /** @brief Execute-only execute-Never Error Interrupt Flag status This bit is set by hardware and read only by application. Bit is set when a read access and not an instruction fetch is detected on any encrypted region with MODE bits set to 00 or 11. It is also set when an instruction fetch and not a read access is detected on any encrypted region with MODE bits set to 01. Bit is cleared when application sets in OTFDEC_ICR the corresponding bit to '1'. */
    using OTFDEC_ISR_XONEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No execute-only error status. No interrupt pending. (value: 0)
     *          - B_0x1: Read access detected on one region with MODE bits set to 00 or 11, or execute access detected on one region with MODE bits set to 01. OTFDEC returns a zeroed value for the illegal access, and an optional interrupt is generated if bit XONEIE is set to '1' in OTFDEC_IER register. (value: 1)
     */
        /** @brief No execute-only error status. No interrupt pending. */
    constexpr std::uint32_t OTFDEC_ISR_XONEIF_B_0x0 = 0;
        /** @brief Read access detected on one region with MODE bits set to 00 or 11, or execute access detected on one region with MODE bits set to 01. OTFDEC returns a zeroed value for the illegal access, and an optional interrupt is generated if bit XONEIE is set to '1' in OTFDEC_IER register. */
    constexpr std::uint32_t OTFDEC_ISR_XONEIF_B_0x1 = 1;

    /** @brief Key Error Interrupt Flag status This bit is set by hardware and read only by application. Bit is set when a read access occurs on any encrypted region following the reset of the key registers by an abort event (tamper detection, unauthorized debugger connection, untrusted boot, RDP level regression). Bit is cleared when application sets in OTFDEC_ICR the corresponding bit to '1'. After KEIF is set any subsequent read to any enabled encrypted region returns a zeroed value. This state remains until OTFDEC keys are initialized again. */
    using OTFDEC_ISR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC is operating properly. (value: 0)
     *          - B_0x1: Read access detected on an enabled encrypted region following an abort event. OTFDEC returns a zeroed value for the read, and an optional interrupt is generated if bit KEIE is set to '1' in OTFDEC_IER register. (value: 1)
     */
        /** @brief OTFDEC is operating properly. */
    constexpr std::uint32_t OTFDEC_ISR_KEIF_B_0x0 = 0;
        /** @brief Read access detected on an enabled encrypted region following an abort event. OTFDEC returns a zeroed value for the read, and an optional interrupt is generated if bit KEIE is set to '1' in OTFDEC_IER register. */
    constexpr std::uint32_t OTFDEC_ISR_KEIF_B_0x1 = 1;

    /** @brief OTFDEC interrupt clear register */
    using OTFDEC_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security Error Interrupt Flag clear This bit is written by application, and always reads as 0. */
    using OTFDEC_ICR_SEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEIF flag status is not affected (value: 0)
     *          - B_0x1: SEIF flag status is cleared in OTFDEC_ISR register (value: 1)
     */
        /** @brief SEIF flag status is not affected */
    constexpr std::uint32_t OTFDEC_ICR_SEIF_B_0x0 = 0;
        /** @brief SEIF flag status is cleared in OTFDEC_ISR register */
    constexpr std::uint32_t OTFDEC_ICR_SEIF_B_0x1 = 1;

    /** @brief Execute-only execute-Never Error Interrupt Flag clear This bit is written by application, and always reads as 0. */
    using OTFDEC_ICR_XONEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XONEIF flag status is not affected (value: 0)
     *          - B_0x1: XONEIF flag status is cleared in OTFDEC_ISR register (value: 1)
     */
        /** @brief XONEIF flag status is not affected */
    constexpr std::uint32_t OTFDEC_ICR_XONEIF_B_0x0 = 0;
        /** @brief XONEIF flag status is cleared in OTFDEC_ISR register */
    constexpr std::uint32_t OTFDEC_ICR_XONEIF_B_0x1 = 1;

    /** @brief Key Error Interrupt Flag clear This bit is written by application, and always reads as 0. Note: Clearing KEIF does not solve the source of the problem (bad key registers). To be able to read or execute again any encrypted region, OTFDEC key registers must properly initialized, again. */
    using OTFDEC_ICR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: KEIF flag status is not affected (value: 0)
     *          - B_0x1: KEIF flag status is cleared in OTFDEC_ISR register (value: 1)
     */
        /** @brief KEIF flag status is not affected */
    constexpr std::uint32_t OTFDEC_ICR_KEIF_B_0x0 = 0;
        /** @brief KEIF flag status is cleared in OTFDEC_ISR register */
    constexpr std::uint32_t OTFDEC_ICR_KEIF_B_0x1 = 1;

    /** @brief OTFDEC interrupt enable register */
    using OTFDEC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security Error Interrupt Enable This bit is read and written by application. It controls the OTFDEC interrupt generation when SEIF flag status is set. */
    using OTFDEC_IER_SEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation on security error SEIF is disabled (masked) (value: 0)
     *          - B_0x1: Interrupt generation on security error SEIF is enabled (not masked) (value: 1)
     */
        /** @brief Interrupt generation on security error SEIF is disabled (masked) */
    constexpr std::uint32_t OTFDEC_IER_SEIE_B_0x0 = 0;
        /** @brief Interrupt generation on security error SEIF is enabled (not masked) */
    constexpr std::uint32_t OTFDEC_IER_SEIE_B_0x1 = 1;

    /** @brief Execute-only execute-Never Error Interrupt Enable This bit is read and written by application. It controls the OTFDEC interrupt generation when XONEIF flag status is set. */
    using OTFDEC_IER_XONEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation on execute-only error XONEIF is disabled (masked) (value: 0)
     *          - B_0x1: Interrupt generation on execute-only error XONEIF is enabled (not masked) (value: 1)
     */
        /** @brief Interrupt generation on execute-only error XONEIF is disabled (masked) */
    constexpr std::uint32_t OTFDEC_IER_XONEIE_B_0x0 = 0;
        /** @brief Interrupt generation on execute-only error XONEIF is enabled (not masked) */
    constexpr std::uint32_t OTFDEC_IER_XONEIE_B_0x1 = 1;

    /** @brief Key Error Interrupt Enable This bit is read and written by application. It controls the OTFDEC interrupt generation when KEIF flag status is set. */
    using OTFDEC_IER_KEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation on key error flag KEIF is disabled (masked) (value: 0)
     *          - B_0x1: Interrupt generation on key error flag KEIF is enabled (not masked) (value: 1)
     */
        /** @brief Interrupt generation on key error flag KEIF is disabled (masked) */
    constexpr std::uint32_t OTFDEC_IER_KEIE_B_0x0 = 0;
        /** @brief Interrupt generation on key error flag KEIF is enabled (not masked) */
    constexpr std::uint32_t OTFDEC_IER_KEIE_B_0x1 = 1;

}

#endif
