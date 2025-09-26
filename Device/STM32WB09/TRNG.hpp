/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB09_TRNG_HPP
#define EMBEDDED_PP_STM32WB09_TRNG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief TRNG peripheral */
namespace STM32WB09::TRNG {

    /** @brief TRNG_CR register */
    using TRNG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Bit DISABLE can be used for reading or setting the state of the TRNG core. The value read is always the one available at the rng core clock domain. When changing the value, the change is effective when the value read is the same as the one written. */
    using TRNG_CR_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The RNG core is enabled (value: 0)
     *          - B_0x1: The RNG core is disabled (value: 1)
     */
        /** @brief The RNG core is enabled */
    constexpr std::uint32_t TRNG_CR_DISABLE_B_0x0 = 0;
        /** @brief The RNG core is disabled */
    constexpr std::uint32_t TRNG_CR_DISABLE_B_0x1 = 1;

    /** @brief Reset reveal clock error flags when writing a '1' without resetting the whole TRNG. When writing a 1, the value remains until it is seen by RNG core clock domain after resynchronization. Then it is automatically reset. */
    using TRNG_CR_CLR_REVCLK_FLAG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset (value: 0)
     *          - B_0x1: reset revclk flag (value: 1)
     */
        /** @brief no reset */
    constexpr std::uint32_t TRNG_CR_CLR_REVCLK_FLAG_B_0x0 = 0;
        /** @brief reset revclk flag */
    constexpr std::uint32_t TRNG_CR_CLR_REVCLK_FLAG_B_0x1 = 1;

    /** @brief Reset Health error flags when writing a '1' without resetting the whole TRNG. When writing a 1, the value remains until it is seen by RNG core clock domain after resynchronization. Then it is automatically reset. */
    using TRNG_CR_RST_HEALTH_FLAGS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset (value: 0)
     *          - B_0x1: reset health flag (value: 1)
     */
        /** @brief no reset */
    constexpr std::uint32_t TRNG_CR_RST_HEALTH_FLAGS_B_0x0 = 0;
        /** @brief reset health flag */
    constexpr std::uint32_t TRNG_CR_RST_HEALTH_FLAGS_B_0x1 = 1;

    /** @brief Sampling Clock Enable Divider. CLKDIV[15:0] control the sampling clock enable divider, dividing by a factor equal to CLKDIV[15:0] + 1, values being in the range of 1 to 65536. */
    using TRNG_CR_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_SR register */
    using TRNG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG is disabled. */
    using TRNG_SR_TRNG_DISABLED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: RNG is disabled. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t TRNG_SR_TRNG_DISABLED_B_0x0 = 0;
        /** @brief RNG is disabled. */
    constexpr std::uint32_t TRNG_SR_TRNG_DISABLED_B_0x1 = 1;

    /** @brief All oscillators of the random source noise have been powered down. This can cause the rising of OEC3 flag. */
    using TRNG_SR_ALL_OSCS_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At least one oscillator is ON (value: 0)
     *          - B_0x1: All oscillators are down (value: 1)
     */
        /** @brief At least one oscillator is ON */
    constexpr std::uint32_t TRNG_SR_ALL_OSCS_DOWN_B_0x0 = 0;
        /** @brief All oscillators are down */
    constexpr std::uint32_t TRNG_SR_ALL_OSCS_DOWN_B_0x1 = 1;

    /** @brief The internal clock for the RNG core is not revealed. */
    using TRNG_SR_REVEAL_CLK_ERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal clock for RNG clock is present. (value: 0)
     *          - B_0x1: Internal RNG clock is not present. (value: 1)
     */
        /** @brief Internal clock for RNG clock is present. */
    constexpr std::uint32_t TRNG_SR_REVEAL_CLK_ERR_B_0x0 = 0;
        /** @brief Internal RNG clock is not present. */
    constexpr std::uint32_t TRNG_SR_REVEAL_CLK_ERR_B_0x1 = 1;

    /** @brief The error refers to a fault in the bit sequence detected by the Entropy Monitor. Failed test is given by REPET_ERROR, and ADAPT_ERROR, OSCS_REPET_ERROR and OSCS_ADAPT_ERROR status flags. */
    using TRNG_SR_ENTROPY_ERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No fault detected (value: 0)
     *          - B_0x1: Embedded heath monitor detects an error in bit stream quality (value: 1)
     */
        /** @brief No fault detected */
    constexpr std::uint32_t TRNG_SR_ENTROPY_ERR_B_0x0 = 0;
        /** @brief Embedded heath monitor detects an error in bit stream quality */
    constexpr std::uint32_t TRNG_SR_ENTROPY_ERR_B_0x1 = 1;

    /** @brief TRNG Value ready At least one 32-bit random value is available in the data FIFO. Note that application must ensure that a random is available in internal FIFO before starting a read otherwise a bus error will be generated. */
    using TRNG_SR_VAL_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No value is ready in FIFO. (value: 0)
     *          - B_0x1: A 32-bit value is available in the internal FIFO (value: 1)
     */
        /** @brief No value is ready in FIFO. */
    constexpr std::uint32_t TRNG_SR_VAL_READY_B_0x0 = 0;
        /** @brief A 32-bit value is available in the internal FIFO */
    constexpr std::uint32_t TRNG_SR_VAL_READY_B_0x1 = 1;

    /** @brief Indicates whether random data FIFO is full. */
    using TRNG_SR_FIFO_FULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO is not full. (value: 0)
     *          - B_0x1: The internal data FIFO is full and four 32-bit random values can be read. (value: 1)
     */
        /** @brief FIFO is not full. */
    constexpr std::uint32_t TRNG_SR_FIFO_FULL_B_0x0 = 0;
        /** @brief The internal data FIFO is full and four 32-bit random values can be read. */
    constexpr std::uint32_t TRNG_SR_FIFO_FULL_B_0x1 = 1;

    /** @brief First run of noise source health test is completed */
    using TRNG_SR_SRC_HEALTH_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Noise source Repetition health test error */
    using TRNG_SR_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Noise source Adaptive 1024 health test error */
    using TRNG_SR_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief First run of source health tests of individual oscillators composing the noise source are completed.Reserved */
    using TRNG_SR_OSCS_HEALTH_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Logical OR of repetition health test errors of individual oscillators composing the noise source. */
    using TRNG_SR_OSCS_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Logical OR of adaptive health test errors of individual oscillators composing the noise source. */
    using TRNG_SR_OSCS_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_VAL register */
    using TRNG_VAL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RND_VAL is a 32-bit Random Value. This is the output of the internal four-word FIFO. Note that application must ensure that a random is available in FIFO by ready VAL_READY flag before starting a read otherwise a null value will be returned. */
    using TRNG_VAL_RND_VAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_OSCS_CR register */
    using TRNG_OSCS_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power down of individual oscillators in triple-oscillator block number 1 */
    using TRNG_OSCS_CR_PWRD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power down of individual oscillators in triple-oscillator block number 2 */
    using TRNG_OSCS_CR_PWRD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power down of individual oscillators in triple-oscillator block number 3 */
    using TRNG_OSCS_CR_PWRD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief When set, selection of resynchronized output of oscillators. */
    using TRNG_OSCS_CR_SYNC_OSCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_POSTP_CR register */
    using TRNG_POSTP_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset AES post processing. When writing a 1, the AES post processing is reinitialized, resulting in a new key and new state generation before 128-bit random words generation. The '1' written is frozen until it is seen by RNG core clock domain after resynchronization. Then it is automatically reset. It also reruns analog source health tests. */
    using TRNG_POSTP_CR_AES_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset AES core (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t TRNG_POSTP_CR_AES_RESET_B_0x0 = 0;
        /** @brief Reset AES core */
    constexpr std::uint32_t TRNG_POSTP_CR_AES_RESET_B_0x1 = 1;

    /** @brief NB_LOOP_AES is the number of 128-bit words got from the noise source that have to be processed by AES for generating a single 128-bit random word. By default, this value is set to 2 (128 bits generated before an AES processing). 0 value means 16 loops. A new AES processing is started only when the previous one is completed. */
    using TRNG_POSTP_CR_NB_LOOP_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of 128-bit random words generated before AES automatically resets. This number is in the range of 1 to 65535 words. Value 0x0000 means that AES is never reinitialized. */
    using TRNG_POSTP_CR_NB_RND_REINIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_POSTP_SR register */
    using TRNG_POSTP_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Post processing has been fully initialized (key and state) and is ready for generating 128-bit random words. */
    using TRNG_POSTP_SR_AES_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES core is not initialized (no key or state set). (value: 0)
     *          - B_0x1: AES core is fully initialized. (value: 1)
     */
        /** @brief AES core is not initialized (no key or state set). */
    constexpr std::uint32_t TRNG_POSTP_SR_AES_INIT_B_0x0 = 0;
        /** @brief AES core is fully initialized. */
    constexpr std::uint32_t TRNG_POSTP_SR_AES_INIT_B_0x1 = 1;

    /** @brief AES random key has been generated and loaded in AES key register. */
    using TRNG_POSTP_SR_AES_KEY_LD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES core is waiting for 128 random bits from the entropy sources for generating its key (value: 0)
     *          - B_0x1: AES key register has been loaded with a random key. (value: 1)
     */
        /** @brief AES core is waiting for 128 random bits from the entropy sources for generating its key */
    constexpr std::uint32_t TRNG_POSTP_SR_AES_KEY_LD_B_0x0 = 0;
        /** @brief AES key register has been loaded with a random key. */
    constexpr std::uint32_t TRNG_POSTP_SR_AES_KEY_LD_B_0x1 = 1;

    /** @brief AES core is busy, generating a random value. */
    using TRNG_POSTP_SR_AES_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES core is idle (value: 0)
     *          - B_0x1: AES core is busy. (value: 1)
     */
        /** @brief AES core is idle */
    constexpr std::uint32_t TRNG_POSTP_SR_AES_BUSY_B_0x0 = 0;
        /** @brief AES core is busy. */
    constexpr std::uint32_t TRNG_POSTP_SR_AES_BUSY_B_0x1 = 1;

    /** @brief AES-CMAC health test is completed */
    using TRNG_POSTP_SR_AES_HEALTH_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Health test error on AES-CMAC sub-keys generation */
    using TRNG_POSTP_SR_AES_K12_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Health test error on AES-CMAC output generation */
    using TRNG_POSTP_SR_AES_DOUT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_DEFKEY0 register */
    using TRNG_DEFKEY0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bits 31 to 0 of AES 128-bit Default Key. */
    using TRNG_DEFKEY0_RNG_DEFKEY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_DEFKEY1 register */
    using TRNG_DEFKEY1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bits 63 to 31 of AES 128-bit Default Key. */
    using TRNG_DEFKEY1_RNG_DEFKEY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_DEFKEY2 register */
    using TRNG_DEFKEY2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bits 95 to 64 of AES 128-bit Default Key. */
    using TRNG_DEFKEY2_RNG_DEFKEY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_DEFKEY3 register */
    using TRNG_DEFKEY3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bits 127 to 96 of AES 128-bit Default Key. */
    using TRNG_DEFKEY3_RNG_DEFKEY3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_HEALTH_CR register */
    using TRNG_HEALTH_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cutoff value of Repetition Test. The default value is set to 51. Caution: To be handled with care as any change can lead to misbehavior of TRNG. */
    using TRNG_HEALTH_CR_REPET_CUTOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cutoff value of Adaptive Test. The default value is set to 699. Caution: To be handled with care as any change can lead to misbehavior of TRNG. */
    using TRNG_HEALTH_CR_ADAP_CUTOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of iterations minus 1 of Adaptive test during initialization phase. Default value is set to 0 i.e. 1 iteration. */
    using TRNG_HEALTH_CR_ITER_ADAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_HEALTH_OSC1_CR register */
    using TRNG_HEALTH_OSC1_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cutoff value of Repetition Test. The default value is set to 51. Caution: To be handled with care as any change can lead to misbehavior of TRNG. */
    using TRNG_HEALTH_OSC1_CR_REPET_CUTOFF_OSC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cutoff value of Adaptive Test. The default value is set to 699. Caution: To be handled with care as any change can lead to misbehavior of TRNG. */
    using TRNG_HEALTH_OSC1_CR_ADAP_CUTOFF_OSC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_HEALTH_OSC2_CR register */
    using TRNG_HEALTH_OSC2_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cutoff value of Repetition Test. The default value is set to 51. Caution: To be handled with care as any change can lead to misbehavior of TRNG. */
    using TRNG_HEALTH_OSC2_CR_REPET_CUTOFF_OSC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cutoff value of Adaptive Test. The default value is set to 699. Caution: To be handled with care as any change can lead to misbehavior of TRNG. */
    using TRNG_HEALTH_OSC2_CR_ADAP_CUTOFF_OSC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_HEALTH_OSC3_CR register */
    using TRNG_HEALTH_OSC3_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cutoff value of Repetition Test. The default value is set to 51. Caution: To be handled with care as any change can lead to misbehavior of TRNG. */
    using TRNG_HEALTH_OSC3_CR_REPET_CUTOFF_OSC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cutoff value of Adaptive Test. The default value is set to 699. Caution: To be handled with care as any change can lead to misbehavior of TRNG. */
    using TRNG_HEALTH_OSC3_CR_ADAP_CUTOFF_OSC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_HEALTH_OSC1_SR register */
    using TRNG_HEALTH_OSC1_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of first oscillator of first triple-oscillator cell. */
    using TRNG_HEALTH_OSC1_SR_TO1_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of first triple-oscillator cell. */
    using TRNG_HEALTH_OSC1_SR_TO1_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of first oscillator of second triple-oscillator cell. */
    using TRNG_HEALTH_OSC1_SR_TO2_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of second triple-oscillator cell. */
    using TRNG_HEALTH_OSC1_SR_TO2_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of first oscillator of third triple-oscillator cell. */
    using TRNG_HEALTH_OSC1_SR_TO3_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of third triple-oscillator cell. */
    using TRNG_HEALTH_OSC1_SR_TO3_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_HEALTH_OSC2_SR register */
    using TRNG_HEALTH_OSC2_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of first oscillator of first triple-oscillator cell. */
    using TRNG_HEALTH_OSC2_SR_TO1_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of first triple-oscillator cell. */
    using TRNG_HEALTH_OSC2_SR_TO1_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of first oscillator of second triple-oscillator cell. */
    using TRNG_HEALTH_OSC2_SR_TO2_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of second triple-oscillator cell. */
    using TRNG_HEALTH_OSC2_SR_TO2_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of first oscillator of third triple-oscillator cell. */
    using TRNG_HEALTH_OSC2_SR_TO3_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of third triple-oscillator cell. */
    using TRNG_HEALTH_OSC2_SR_TO3_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_HEALTH_OSC3_SR register */
    using TRNG_HEALTH_OSC3_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of third oscillator of first triple-oscillator cell. */
    using TRNG_HEALTH_OSC3_SR_TO1_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of first triple-oscillator cell. */
    using TRNG_HEALTH_OSC3_SR_TO1_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of first oscillator of second triple-oscillator cell. */
    using TRNG_HEALTH_OSC3_SR_TO2_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of second triple-oscillator cell. */
    using TRNG_HEALTH_OSC3_SR_TO2_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition error flag of first oscillator of third triple-oscillator cell. */
    using TRNG_HEALTH_OSC3_SR_TO3_REPET_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Adaptive error flag of first oscillator of third triple-oscillator cell. */
    using TRNG_HEALTH_OSC3_SR_TO3_ADAPT_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_IRQ_CR register */
    using TRNG_IRQ_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the interrupt when the output fifo is full of new random. */
    using TRNG_IRQ_CR_EN_FF_FULL_IRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the interrupt when an error is reported by the health tests. */
    using TRNG_IRQ_CR_EN_ERROR_IRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRNG_IRQ_SR register */
    using TRNG_IRQ_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set to 1 when the output fifo is full of new random. Flag is cleared by writing a 1. */
    using TRNG_IRQ_SR_FF_FULL_IRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set to 1 when an error is reported by the health tests. Flag is cleared by writing a 1. */
    using TRNG_IRQ_SR_ERROR_IRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
