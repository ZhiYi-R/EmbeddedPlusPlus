/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA55_GPIOH_HPP
#define EMBEDDED_PP_STM32WBA55_GPIOH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief General-purpose I/Os */
namespace STM32WBA55::GPIOH {

    /** @brief GPIO port H mode register */
    using GPIOH_MODER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H configuration I/O pin 3 These bits are written by software to configure the I/O mode. Access can be protected by GPIOH SEC3. */
    using GPIOH_MODER_MODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIOH_MODER_MODE3_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIOH_MODER_MODE3_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIOH_MODER_MODE3_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOH_MODER_MODE3_B_0x3 = 3;

    /** @brief GPIO port H output type register */
    using GPIOH_OTYPER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H configuration I/O pin 3 This bit is written by software to configure the I/O output type. Access can be protected by GPIOH SEC3. */
    using GPIOH_OTYPER_OT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOH_OTYPER_OT3_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOH_OTYPER_OT3_B_0x1 = 1;

    /** @brief GPIO port H output speed register */
    using GPIOH_OSPEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H configuration I/O pin 3 These bits are written by software to configure the I/O output speed. Access can be protected by GPIOH SEC3. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed. */
    using GPIOH_OSPEEDR_OSPEED3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOH_OSPEEDR_OSPEED3_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOH_OSPEEDR_OSPEED3_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOH_OSPEEDR_OSPEED3_B_0x2 = 2;

    /** @brief GPIO port H pull-up/pull-down register */
    using GPIOH_PUPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H configuration I/O pin 3 These bits are written by software to configure the I/O pull-up or pull-down Access can be protected by GPIOH SEC3. */
    using GPIOH_PUPDR_PUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOH_PUPDR_PUPD3_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOH_PUPDR_PUPD3_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOH_PUPDR_PUPD3_B_0x2 = 2;

    /** @brief GPIO port H input data register */
    using GPIOH_IDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H input data I/O pin 3 This bit is read-only. It contain the input value of the corresponding I/O port. Access can be protected by GPIOH SEC3. */
    using GPIOH_IDR_ID3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port H output data register */
    using GPIOH_ODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H output data I/O pin 3 This bits can be read and written by software. Access can be protected by GPIOH SEC3. Note: For atomic bit set/reset, the OD bit can be individually set and/or reset by writing to the GPIOH_BSRR or GPIOH_BRR registers. */
    using GPIOH_ODR_OD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port H bit set/reset register */
    using GPIOH_BSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H set I/O pin 3 This bit is write-only. A read to this bit returns the value 0. Access can be protected by GPIOH SEC3. */
    using GPIOH_BSRR_BS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding OD3 bit (value: 0)
     *          - B_0x1: Sets the corresponding OD3 bit (value: 1)
     */
        /** @brief No action on the corresponding OD3 bit */
    constexpr std::uint32_t GPIOH_BSRR_BS3_B_0x0 = 0;
        /** @brief Sets the corresponding OD3 bit */
    constexpr std::uint32_t GPIOH_BSRR_BS3_B_0x1 = 1;

    /** @brief Port H reset I/O pin 3 This bit is write-only. A read to this bit returns the value 0. Access can be protected by GPIOH SEC3. Note: If both BS3 and BR3 are set, BS3 has priority. */
    using GPIOH_BSRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding OD3 bit (value: 0)
     *          - B_0x1: Resets the corresponding OD3 bit (value: 1)
     */
        /** @brief No action on the corresponding OD3 bit */
    constexpr std::uint32_t GPIOH_BSRR_BR3_B_0x0 = 0;
        /** @brief Resets the corresponding OD3 bit */
    constexpr std::uint32_t GPIOH_BSRR_BR3_B_0x1 = 1;

    /** @brief GPIO port H configuration lock register */
    using GPIOH_LCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H lock I/O pin 3 This bit is read/write but can only be written when the LCKK bit is 0 Access can be protected by GPIOH SEC3. */
    using GPIOH_LCKR_LCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOH_LCKR_LCK3_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOH_LCKR_LCK3_B_0x1 = 1;

    /** @brief Lock key This bit can be read any time. It can only be modified using the lock key write sequence. Access is protected by GPIOH SEC3. - LOCK key write sequence: WR LCKR[16] = 1 + LCKR[3] WR LCKR[16] = 0 + LCKR[3] WR LCKR[16] = 1 + LCKR[3] - LOCK key read RD LCKR[16] = 1 (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK3 must not change. Note: Any error in the lock sequence aborts the LOCK. Note: After the first LOCK sequence on any bit of the port, any read access on the LCKK bit returns 1 until the next MCU reset or peripheral reset. */
    using GPIOH_LCKR_LCKK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration lock key not active (value: 0)
     *          - B_0x1: Port configuration lock key active. The GPIOH_LCKR register is locked until the next MCU reset or peripheral reset. (value: 1)
     */
        /** @brief Port configuration lock key not active */
    constexpr std::uint32_t GPIOH_LCKR_LCKK_B_0x0 = 0;
        /** @brief Port configuration lock key active. The GPIOH_LCKR register is locked until the next MCU reset or peripheral reset. */
    constexpr std::uint32_t GPIOH_LCKR_LCKK_B_0x1 = 1;

    /** @brief GPIO port H alternate function low register */
    using GPIOH_AFRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port H I/O pin 3 These bits are written by software to configure alternate function I/Os. Access can be protected by GPIOH SEC3. */
    using GPIOH_AFRL_AFSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOH_AFRL_AFSEL3_B_0xF = 15;

    /** @brief GPIO port H bit reset register */
    using GPIOH_BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H reset I/O pin 3 This bit is write-only. A read to this bit returns the value 0. Access can be protected by GPIOH SEC3. */
    using GPIOH_BRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding OD3 bit (value: 0)
     *          - B_0x1: Reset the corresponding OD3 bit (value: 1)
     */
        /** @brief No action on the corresponding OD3 bit */
    constexpr std::uint32_t GPIOH_BRR_BR3_B_0x0 = 0;
        /** @brief Reset the corresponding OD3 bit */
    constexpr std::uint32_t GPIOH_BRR_BR3_B_0x1 = 1;

    /** @brief GPIO port H secure configuration register */
    using GPIOH_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O pin of port H secure bit enable 3 This bit is written by software to enabled the security I/O port pin. */
    using GPIOH_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 112 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIOH_SECCFGR_SEC3_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 112 for all corresponding secured bits. */
    constexpr std::uint32_t GPIOH_SECCFGR_SEC3_B_0x1 = 1;

}

#endif
