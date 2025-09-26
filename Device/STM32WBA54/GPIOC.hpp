/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA54_GPIOC_HPP
#define EMBEDDED_PP_STM32WBA54_GPIOC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief General-purpose I/Os */
namespace STM32WBA54::GPIOC {

    /** @brief GPIO port C mode register */
    using GPIOC_MODER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 13 */
    using GPIOC_MODER_MODE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 14 */
    using GPIOC_MODER_MODE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 15 These bits are written by software to configure the I/O mode. Access can be protected by GPIOC SEC15. */
    using GPIOC_MODER_MODE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIOC_MODER_MODE15_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIOC_MODER_MODE15_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIOC_MODER_MODE15_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOC_MODER_MODE15_B_0x3 = 3;

    /** @brief GPIO port C output type register */
    using GPIOC_OTYPER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin y These bits are written by software to configure the I/O output type. Access can be protected by GPIOC SECy. */
    using GPIOC_OTYPER_OT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOC_OTYPER_OT13_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOC_OTYPER_OT13_B_0x1 = 1;

    /** @brief Port C configuration I/O pin y These bits are written by software to configure the I/O output type. Access can be protected by GPIOC SECy. */
    using GPIOC_OTYPER_OT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOC_OTYPER_OT14_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOC_OTYPER_OT14_B_0x1 = 1;

    /** @brief Port C configuration I/O pin y These bits are written by software to configure the I/O output type. Access can be protected by GPIOC SECy. */
    using GPIOC_OTYPER_OT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOC_OTYPER_OT15_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOC_OTYPER_OT15_B_0x1 = 1;

    /** @brief GPIOC port output speed register */
    using GPIOC_OSPEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 13 */
    using GPIOC_OSPEEDR_OSPEED13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 14 */
    using GPIOC_OSPEEDR_OSPEED14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 15 These bits are written by software to configure the I/O output speed. Access can be protected by GPIOC SEC15. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed. */
    using GPIOC_OSPEEDR_OSPEED15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOC_OSPEEDR_OSPEED15_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOC_OSPEEDR_OSPEED15_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOC_OSPEEDR_OSPEED15_B_0x2 = 2;

    /** @brief GPIO port C pull-up/pull-down register */
    using GPIOC_PUPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 13 */
    using GPIOC_PUPDR_PUPD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 14 */
    using GPIOC_PUPDR_PUPD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C configuration I/O pin 15 These bits are written by software to configure the I/O pull-up or pull-down Access can be protected by GPIOC SEC15. */
    using GPIOC_PUPDR_PUPD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOC_PUPDR_PUPD15_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOC_PUPDR_PUPD15_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOC_PUPDR_PUPD15_B_0x2 = 2;

    /** @brief GPIO port C input data register */
    using GPIOC_IDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C input data I/O pin y These bits are read-only. They contain the input value of the corresponding I/O port. Access can be protected by GPIOC SECy. */
    using GPIOC_IDR_ID13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C input data I/O pin y These bits are read-only. They contain the input value of the corresponding I/O port. Access can be protected by GPIOC SECy. */
    using GPIOC_IDR_ID14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C input data I/O pin y These bits are read-only. They contain the input value of the corresponding I/O port. Access can be protected by GPIOC SECy. */
    using GPIOC_IDR_ID15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port C output data register */
    using GPIOC_ODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C output data I/O pin y These bits can be read and written by software. Access can be protected by GPIOC SECy. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOC_BSRR or GPIOC_BRR registers. */
    using GPIOC_ODR_OD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C output data I/O pin y These bits can be read and written by software. Access can be protected by GPIOC SECy. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOC_BSRR or GPIOC_BRR registers. */
    using GPIOC_ODR_OD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C output data I/O pin y These bits can be read and written by software. Access can be protected by GPIOC SECy. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOC_BSRR or GPIOC_BRR registers. */
    using GPIOC_ODR_OD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port C bit set/reset register */
    using GPIOC_BSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C set I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. */
    using GPIOC_BSRR_BS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BS13_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BS13_B_0x1 = 1;

    /** @brief Port C set I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. */
    using GPIOC_BSRR_BS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BS14_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BS14_B_0x1 = 1;

    /** @brief Port C set I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. */
    using GPIOC_BSRR_BS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BS15_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BS15_B_0x1 = 1;

    /** @brief Port C reset I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. Note: If both BSy and BRy are set, BSy has priority. */
    using GPIOC_BSRR_BR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BR13_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BR13_B_0x1 = 1;

    /** @brief Port C reset I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. Note: If both BSy and BRy are set, BSy has priority. */
    using GPIOC_BSRR_BR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BR14_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BR14_B_0x1 = 1;

    /** @brief Port C reset I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. Note: If both BSy and BRy are set, BSy has priority. */
    using GPIOC_BSRR_BR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BR15_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BSRR_BR15_B_0x1 = 1;

    /** @brief GPIO port C configuration lock register */
    using GPIOC_LCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C lock I/O pin y These bits are read/write but can only be written when the LCKK bit is 0 Access can be protected by GPIOC SECy. */
    using GPIOC_LCKR_LCK13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOC_LCKR_LCK13_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOC_LCKR_LCK13_B_0x1 = 1;

    /** @brief Port C lock I/O pin y These bits are read/write but can only be written when the LCKK bit is 0 Access can be protected by GPIOC SECy. */
    using GPIOC_LCKR_LCK14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOC_LCKR_LCK14_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOC_LCKR_LCK14_B_0x1 = 1;

    /** @brief Port C lock I/O pin y These bits are read/write but can only be written when the LCKK bit is 0 Access can be protected by GPIOC SECy. */
    using GPIOC_LCKR_LCK15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOC_LCKR_LCK15_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOC_LCKR_LCK15_B_0x1 = 1;

    /** @brief Lock key This bit can be read any time. It can only be modified using the lock key write sequence. Access is protected by any GPIOC SECy. - LOCK key write sequence: WR LCKR[16] = 1 + LCKR[15:13] WR LCKR[16] = 0 + LCKR[15:13] WR LCKR[16] = 1 + LCKR[15:13] - LOCK key read RD LCKR[16] = 1 (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:13] must not change. Note: Any error in the lock sequence aborts the LOCK. Note: After the first LOCK sequence on any bit of the port, any read access on the LCKK bit returns 1 until the next MCU reset or peripheral reset. */
    using GPIOC_LCKR_LCKK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration lock key not active (value: 0)
     *          - B_0x1: Port configuration lock key active. The GPIOC_LCKR register is locked until the next MCU reset or peripheral reset. (value: 1)
     */
        /** @brief Port configuration lock key not active */
    constexpr std::uint32_t GPIOC_LCKR_LCKK_B_0x0 = 0;
        /** @brief Port configuration lock key active. The GPIOC_LCKR register is locked until the next MCU reset or peripheral reset. */
    constexpr std::uint32_t GPIOC_LCKR_LCKK_B_0x1 = 1;

    /** @brief GPIO port C alternate function high register */
    using GPIOC_AFRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port C I/O pin 13 */
    using GPIOC_AFRH_AFSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port C I/O pin 14 */
    using GPIOC_AFRH_AFSEL14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port C I/O pin 15 These bits are written by software to configure alternate function I/Os. Access can be protected by GPIOC SEC15. */
    using GPIOC_AFRH_AFSEL15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOC_AFRH_AFSEL15_B_0xF = 15;

    /** @brief GPIO port C bit reset register */
    using GPIOC_BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port reset I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. */
    using GPIOC_BRR_BR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BRR_BR13_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BRR_BR13_B_0x1 = 1;

    /** @brief Port reset I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. */
    using GPIOC_BRR_BR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BRR_BR14_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BRR_BR14_B_0x1 = 1;

    /** @brief Port reset I/O pin y These bits are write-only. A read to these bits returns the value 0. Access can be protected by GPIOC SECy. */
    using GPIOC_BRR_BR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BRR_BR15_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIOC_BRR_BR15_B_0x1 = 1;

    /** @brief GPIO port C secure configuration register */
    using GPIOC_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O pin of port C secure bit enable y These bits are written by software to enabled the security I/O port pin. */
    using GPIOC_SECCFGR_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 112 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIOC_SECCFGR_SEC13_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 112 for all corresponding secured bits. */
    constexpr std::uint32_t GPIOC_SECCFGR_SEC13_B_0x1 = 1;

    /** @brief I/O pin of port C secure bit enable y These bits are written by software to enabled the security I/O port pin. */
    using GPIOC_SECCFGR_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 112 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIOC_SECCFGR_SEC14_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 112 for all corresponding secured bits. */
    constexpr std::uint32_t GPIOC_SECCFGR_SEC14_B_0x1 = 1;

    /** @brief I/O pin of port C secure bit enable y These bits are written by software to enabled the security I/O port pin. */
    using GPIOC_SECCFGR_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 112 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIOC_SECCFGR_SEC15_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 112 for all corresponding secured bits. */
    constexpr std::uint32_t GPIOC_SECCFGR_SEC15_B_0x1 = 1;

}

#endif
