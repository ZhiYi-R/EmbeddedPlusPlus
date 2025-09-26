/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H533_OTFDEC_S_HPP
#define EMBEDDED_PP_STM32H533_OTFDEC_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief OTFDEC register bank */
namespace STM32H533::OTFDEC_S {

    /** @brief OTFDEC control register */
    using OTFDEC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encryption mode bit */
    using OTFDEC_CR_ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC working in decryption mode (value: 0)
     *          - B_0x1: OTFDEC working in encryption mode (value: 1)
     */
        /** @brief OTFDEC working in decryption mode */
    constexpr std::uint32_t OTFDEC_CR_ENC_B_0x0 = 0;
        /** @brief OTFDEC working in encryption mode */
    constexpr std::uint32_t OTFDEC_CR_ENC_B_0x1 = 1;

    /** @brief OTFDEC privileged access control configuration register */
    using OTFDEC_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged access protection. */
    using OTFDEC_PRIVCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No additional protection is added on OTFDEC register accesses. (value: 0)
     *          - B_0x1: An additional protection is added when accessing all registers except OTFDEC_PRIVCFGR: (value: 1)
     */
        /** @brief No additional protection is added on OTFDEC register accesses. */
    constexpr std::uint32_t OTFDEC_PRIVCFGR_PRIV_B_0x0 = 0;
        /** @brief An additional protection is added when accessing all registers except OTFDEC_PRIVCFGR: */
    constexpr std::uint32_t OTFDEC_PRIVCFGR_PRIV_B_0x1 = 1;

    /** @brief OTFDEC region 1 configuration register */
    using OTFDEC_R1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region on-the-fly decryption enable */
    using OTFDEC_R1CFGR_REG_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On-the-fly decryption is disabled for this region. (value: 0)
     *          - B_0x1: On-the-fly decryption is enabled for this region. (value: 1)
     */
        /** @brief On-the-fly decryption is disabled for this region. */
    constexpr std::uint32_t OTFDEC_R1CFGR_REG_EN_B_0x0 = 0;
        /** @brief On-the-fly decryption is enabled for this region. */
    constexpr std::uint32_t OTFDEC_R1CFGR_REG_EN_B_0x1 = 1;

    /** @brief region config lock */
    using OTFDEC_R1CFGR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are allowed. */
    constexpr std::uint32_t OTFDEC_R1CFGR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R1CFGR_CONFIGLOCK_B_0x1 = 1;

    /** @brief region key lock */
    using OTFDEC_R1CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region KEYRx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region KEYRx registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region KEYRx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R1CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to this region KEYRx registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R1CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief operating mode */
    using OTFDEC_R1CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: All read accesses are decrypted (instruction or data). (value: 2)
     *          - B_0x3: Enhanced encryption mode is activated, and only instruction accesses are decrypted (value: 3)
     */
        /** @brief All read accesses are decrypted (instruction or data). */
    constexpr std::uint32_t OTFDEC_R1CFGR_MODE_B_0x2 = 2;
        /** @brief Enhanced encryption mode is activated, and only instruction accesses are decrypted */
    constexpr std::uint32_t OTFDEC_R1CFGR_MODE_B_0x3 = 3;

    /** @brief region key 8-bit CRC */
    using OTFDEC_R1CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region firmware version */
    using OTFDEC_R1CFGR_REG_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 start address register */
    using OTFDEC_R1STARTADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AHB start address */
    using OTFDEC_R1STARTADDR_REG_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 end address register */
    using OTFDEC_R1ENDADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AHB end address */
    using OTFDEC_R1ENDADDR_REG_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 nonce register 0 */
    using OTFDEC_R1NONCER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [31:0] */
    using OTFDEC_R1NONCER0_REG_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 nonce register 1 */
    using OTFDEC_R1NONCER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [63:32] */
    using OTFDEC_R1NONCER1_REG_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 key register 0 */
    using OTFDEC_R1KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [31:0] */
    using OTFDEC_R1KEYR0_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 key register 1 */
    using OTFDEC_R1KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [63:32] */
    using OTFDEC_R1KEYR1_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 key register 2 */
    using OTFDEC_R1KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [95:64] */
    using OTFDEC_R1KEYR2_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 1 key register 3 */
    using OTFDEC_R1KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [127:96] */
    using OTFDEC_R1KEYR3_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 configuration register */
    using OTFDEC_R2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region on-the-fly decryption enable */
    using OTFDEC_R2CFGR_REG_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On-the-fly decryption is disabled for this region. (value: 0)
     *          - B_0x1: On-the-fly decryption is enabled for this region. (value: 1)
     */
        /** @brief On-the-fly decryption is disabled for this region. */
    constexpr std::uint32_t OTFDEC_R2CFGR_REG_EN_B_0x0 = 0;
        /** @brief On-the-fly decryption is enabled for this region. */
    constexpr std::uint32_t OTFDEC_R2CFGR_REG_EN_B_0x1 = 1;

    /** @brief region config lock */
    using OTFDEC_R2CFGR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are allowed. */
    constexpr std::uint32_t OTFDEC_R2CFGR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R2CFGR_CONFIGLOCK_B_0x1 = 1;

    /** @brief region key lock */
    using OTFDEC_R2CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region KEYRx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region KEYRx registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region KEYRx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R2CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to this region KEYRx registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R2CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief operating mode */
    using OTFDEC_R2CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: All read accesses are decrypted (instruction or data). (value: 2)
     *          - B_0x3: Enhanced encryption mode is activated, and only instruction accesses are decrypted (value: 3)
     */
        /** @brief All read accesses are decrypted (instruction or data). */
    constexpr std::uint32_t OTFDEC_R2CFGR_MODE_B_0x2 = 2;
        /** @brief Enhanced encryption mode is activated, and only instruction accesses are decrypted */
    constexpr std::uint32_t OTFDEC_R2CFGR_MODE_B_0x3 = 3;

    /** @brief region key 8-bit CRC */
    using OTFDEC_R2CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region firmware version */
    using OTFDEC_R2CFGR_REG_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 start address register */
    using OTFDEC_R2STARTADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AHB start address */
    using OTFDEC_R2STARTADDR_REG_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 end address register */
    using OTFDEC_R2ENDADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AHB end address */
    using OTFDEC_R2ENDADDR_REG_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 nonce register 0 */
    using OTFDEC_R2NONCER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [31:0] */
    using OTFDEC_R2NONCER0_REG_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 nonce register 1 */
    using OTFDEC_R2NONCER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [63:32] */
    using OTFDEC_R2NONCER1_REG_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 key register 0 */
    using OTFDEC_R2KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [31:0] */
    using OTFDEC_R2KEYR0_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 key register 1 */
    using OTFDEC_R2KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [63:32] */
    using OTFDEC_R2KEYR1_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 key register 2 */
    using OTFDEC_R2KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [95:64] */
    using OTFDEC_R2KEYR2_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 2 key register 3 */
    using OTFDEC_R2KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [127:96] */
    using OTFDEC_R2KEYR3_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 configuration register */
    using OTFDEC_R3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region on-the-fly decryption enable */
    using OTFDEC_R3CFGR_REG_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On-the-fly decryption is disabled for this region. (value: 0)
     *          - B_0x1: On-the-fly decryption is enabled for this region. (value: 1)
     */
        /** @brief On-the-fly decryption is disabled for this region. */
    constexpr std::uint32_t OTFDEC_R3CFGR_REG_EN_B_0x0 = 0;
        /** @brief On-the-fly decryption is enabled for this region. */
    constexpr std::uint32_t OTFDEC_R3CFGR_REG_EN_B_0x1 = 1;

    /** @brief region config lock */
    using OTFDEC_R3CFGR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are allowed. */
    constexpr std::uint32_t OTFDEC_R3CFGR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R3CFGR_CONFIGLOCK_B_0x1 = 1;

    /** @brief region key lock */
    using OTFDEC_R3CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region KEYRx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region KEYRx registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region KEYRx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R3CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to this region KEYRx registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R3CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief operating mode */
    using OTFDEC_R3CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: All read accesses are decrypted (instruction or data). (value: 2)
     *          - B_0x3: Enhanced encryption mode is activated, and only instruction accesses are decrypted (value: 3)
     */
        /** @brief All read accesses are decrypted (instruction or data). */
    constexpr std::uint32_t OTFDEC_R3CFGR_MODE_B_0x2 = 2;
        /** @brief Enhanced encryption mode is activated, and only instruction accesses are decrypted */
    constexpr std::uint32_t OTFDEC_R3CFGR_MODE_B_0x3 = 3;

    /** @brief region key 8-bit CRC */
    using OTFDEC_R3CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region firmware version */
    using OTFDEC_R3CFGR_REG_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 start address register */
    using OTFDEC_R3STARTADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AHB start address */
    using OTFDEC_R3STARTADDR_REG_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 end address register */
    using OTFDEC_R3ENDADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AHB end address */
    using OTFDEC_R3ENDADDR_REG_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 nonce register 0 */
    using OTFDEC_R3NONCER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [31:0] */
    using OTFDEC_R3NONCER0_REG_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 nonce register 1 */
    using OTFDEC_R3NONCER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [63:32] */
    using OTFDEC_R3NONCER1_REG_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 key register 0 */
    using OTFDEC_R3KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [31:0] */
    using OTFDEC_R3KEYR0_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 key register 1 */
    using OTFDEC_R3KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [63:32] */
    using OTFDEC_R3KEYR1_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 key register 2 */
    using OTFDEC_R3KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [95:64] */
    using OTFDEC_R3KEYR2_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 3 key register 3 */
    using OTFDEC_R3KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [127:96] */
    using OTFDEC_R3KEYR3_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 configuration register */
    using OTFDEC_R4CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region on-the-fly decryption enable */
    using OTFDEC_R4CFGR_REG_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: On-the-fly decryption is disabled for this region. (value: 0)
     *          - B_0x1: On-the-fly decryption is enabled for this region. (value: 1)
     */
        /** @brief On-the-fly decryption is disabled for this region. */
    constexpr std::uint32_t OTFDEC_R4CFGR_REG_EN_B_0x0 = 0;
        /** @brief On-the-fly decryption is enabled for this region. */
    constexpr std::uint32_t OTFDEC_R4CFGR_REG_EN_B_0x1 = 1;

    /** @brief region config lock */
    using OTFDEC_R4CFGR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are allowed. */
    constexpr std::uint32_t OTFDEC_R4CFGR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to this region OTFDEC_RxCFGR, OTFDEC_RxSTARTADDR, OTFDEC_RxENDADDR and OTFDEC_RxNONCERy registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R4CFGR_CONFIGLOCK_B_0x1 = 1;

    /** @brief region key lock */
    using OTFDEC_R4CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to this region KEYRx registers are allowed. (value: 0)
     *          - B_0x1: Writes to this region KEYRx registers are ignored until next OTFDEC reset. (value: 1)
     */
        /** @brief Writes to this region KEYRx registers are allowed. */
    constexpr std::uint32_t OTFDEC_R4CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to this region KEYRx registers are ignored until next OTFDEC reset. */
    constexpr std::uint32_t OTFDEC_R4CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief operating mode */
    using OTFDEC_R4CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: All read accesses are decrypted (instruction or data). (value: 2)
     *          - B_0x3: Enhanced encryption mode is activated, and only instruction accesses are decrypted (value: 3)
     */
        /** @brief All read accesses are decrypted (instruction or data). */
    constexpr std::uint32_t OTFDEC_R4CFGR_MODE_B_0x2 = 2;
        /** @brief Enhanced encryption mode is activated, and only instruction accesses are decrypted */
    constexpr std::uint32_t OTFDEC_R4CFGR_MODE_B_0x3 = 3;

    /** @brief region key 8-bit CRC */
    using OTFDEC_R4CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief region firmware version */
    using OTFDEC_R4CFGR_REG_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 start address register */
    using OTFDEC_R4STARTADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AHB start address */
    using OTFDEC_R4STARTADDR_REG_START_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 end address register */
    using OTFDEC_R4ENDADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region AHB end address */
    using OTFDEC_R4ENDADDR_REG_END_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 nonce register 0 */
    using OTFDEC_R4NONCER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [31:0] */
    using OTFDEC_R4NONCER0_REG_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 nonce register 1 */
    using OTFDEC_R4NONCER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region nonce, bits [63:32] */
    using OTFDEC_R4NONCER1_REG_NONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 key register 0 */
    using OTFDEC_R4KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [31:0] */
    using OTFDEC_R4KEYR0_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 key register 1 */
    using OTFDEC_R4KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [63:32] */
    using OTFDEC_R4KEYR1_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 key register 2 */
    using OTFDEC_R4KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [95:64] */
    using OTFDEC_R4KEYR2_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC region 4 key register 3 */
    using OTFDEC_R4KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region key, bits [127:96] */
    using OTFDEC_R4KEYR3_REG_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC interrupt status register */
    using OTFDEC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security error interrupt flag status */
    using OTFDEC_ISR_SEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No security error status. (value: 0)
     *          - B_0x1: Security error flag status, with interrupt pending. (value: 1)
     */
        /** @brief No security error status. */
    constexpr std::uint32_t OTFDEC_ISR_SEIF_B_0x0 = 0;
        /** @brief Security error flag status, with interrupt pending. */
    constexpr std::uint32_t OTFDEC_ISR_SEIF_B_0x1 = 1;

    /** @brief Execute-only execute-never error interrupt flag status */
    using OTFDEC_ISR_XONEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No execute-only error status. (value: 0)
     *          - B_0x1: Read access detected on one region with MODE bits set to 11 or execute access detected while ENC = 1. (value: 1)
     */
        /** @brief No execute-only error status. */
    constexpr std::uint32_t OTFDEC_ISR_XONEIF_B_0x0 = 0;
        /** @brief Read access detected on one region with MODE bits set to 11 or execute access detected while ENC = 1. */
    constexpr std::uint32_t OTFDEC_ISR_XONEIF_B_0x1 = 1;

    /** @brief Key error interrupt flag status */
    using OTFDEC_ISR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC operates properly. (value: 0)
     *          - B_0x1: Read access detected on an enabled encrypted region with its key registers null or not properly initialized (KEYCRC = 0x0). (value: 1)
     */
        /** @brief OTFDEC operates properly. */
    constexpr std::uint32_t OTFDEC_ISR_KEIF_B_0x0 = 0;
        /** @brief Read access detected on an enabled encrypted region with its key registers null or not properly initialized (KEYCRC = 0x0). */
    constexpr std::uint32_t OTFDEC_ISR_KEIF_B_0x1 = 1;

    /** @brief OTFDEC interrupt clear register */
    using OTFDEC_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security error interrupt flag clear */
    using OTFDEC_ICR_SEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEIF flag status is not affected. (value: 0)
     *          - B_0x1: SEIF flag status is cleared in OTFDEC_ISR. (value: 1)
     */
        /** @brief SEIF flag status is not affected. */
    constexpr std::uint32_t OTFDEC_ICR_SEIF_B_0x0 = 0;
        /** @brief SEIF flag status is cleared in OTFDEC_ISR. */
    constexpr std::uint32_t OTFDEC_ICR_SEIF_B_0x1 = 1;

    /** @brief Execute-only execute-never error interrupt flag clear */
    using OTFDEC_ICR_XONEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XONEIF flag status is not affected. (value: 0)
     *          - B_0x1: XONEIF flag status is cleared in OTFDEC_ISR. (value: 1)
     */
        /** @brief XONEIF flag status is not affected. */
    constexpr std::uint32_t OTFDEC_ICR_XONEIF_B_0x0 = 0;
        /** @brief XONEIF flag status is cleared in OTFDEC_ISR. */
    constexpr std::uint32_t OTFDEC_ICR_XONEIF_B_0x1 = 1;

    /** @brief Key error interrupt flag clear */
    using OTFDEC_ICR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: KEIF flag status is not affected. (value: 0)
     *          - B_0x1: KEIF flag status is cleared in OTFDEC_ISR. (value: 1)
     */
        /** @brief KEIF flag status is not affected. */
    constexpr std::uint32_t OTFDEC_ICR_KEIF_B_0x0 = 0;
        /** @brief KEIF flag status is cleared in OTFDEC_ISR. */
    constexpr std::uint32_t OTFDEC_ICR_KEIF_B_0x1 = 1;

    /** @brief OTFDEC interrupt enable register */
    using OTFDEC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security error interrupt enable */
    using OTFDEC_IER_SEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation on security error SEIF is disabled (masked). (value: 0)
     *          - B_0x1: Interrupt generation on security error SEIF is enabled (not masked). (value: 1)
     */
        /** @brief Interrupt generation on security error SEIF is disabled (masked). */
    constexpr std::uint32_t OTFDEC_IER_SEIE_B_0x0 = 0;
        /** @brief Interrupt generation on security error SEIF is enabled (not masked). */
    constexpr std::uint32_t OTFDEC_IER_SEIE_B_0x1 = 1;

    /** @brief Execute-only execute-never error interrupt enable */
    using OTFDEC_IER_XONEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation on execute-only error XONEIF is disabled (masked). (value: 0)
     *          - B_0x1: Interrupt generation on execute-only error XONEIF is enabled (not masked). (value: 1)
     */
        /** @brief Interrupt generation on execute-only error XONEIF is disabled (masked). */
    constexpr std::uint32_t OTFDEC_IER_XONEIE_B_0x0 = 0;
        /** @brief Interrupt generation on execute-only error XONEIF is enabled (not masked). */
    constexpr std::uint32_t OTFDEC_IER_XONEIE_B_0x1 = 1;

    /** @brief Key error interrupt enable */
    using OTFDEC_IER_KEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation on key error flag KEIF is disabled (masked). (value: 0)
     *          - B_0x1: Interrupt generation on key error flag KEIF is enabled (not masked). (value: 1)
     */
        /** @brief Interrupt generation on key error flag KEIF is disabled (masked). */
    constexpr std::uint32_t OTFDEC_IER_KEIE_B_0x0 = 0;
        /** @brief Interrupt generation on key error flag KEIF is enabled (not masked). */
    constexpr std::uint32_t OTFDEC_IER_KEIE_B_0x1 = 1;

}

#endif
