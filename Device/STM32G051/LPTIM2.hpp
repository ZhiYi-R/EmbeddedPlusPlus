/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G051_LPTIM2_HPP
#define EMBEDDED_PP_STM32G051_LPTIM2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Low power timer */
namespace STM32G051::LPTIM2 {

    /** @brief Interrupt and Status Register */
    using LPTIM_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare match The CMPM bit is set by hardware to inform application that LPTIM_CNT register value reached the LPTIM_CMP register's value. */
    using LPTIM_ISR_CMPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match ARRM is set by hardware to inform application that LPTIM_CNT register's value reached the LPTIM_ARR register's value. ARRM flag can be cleared by writing 1 to the ARRMCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_ARRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger edge event EXTTRIG is set by hardware to inform application that a valid edge on the selected external trigger input has occurred. If the trigger is ignored because the timer has already started, then this flag is not set. EXTTRIG flag can be cleared by writing 1 to the EXTTRIGCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_EXTTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register update OK CMPOK is set by hardware to inform application that the APB bus write operation to the LPTIM_CMP register has been successfully completed. */
    using LPTIM_ISR_CMPOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK ARROK is set by hardware to inform application that the APB bus write operation to the LPTIM_ARR register has been successfully completed. ARROK flag can be cleared by writing 1 to the ARROKCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_ARROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change down to up In Encoder mode, UP bit is set by hardware to inform application that the counter direction has changed from down to up. UP flag can be cleared by writing 1 to the UPCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ISR_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change up to down In Encoder mode, DOWN bit is set by hardware to inform application that the counter direction has changed from up to down. DOWN flag can be cleared by writing 1 to the DOWNCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ISR_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear Register */
    using LPTIM_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare match clear flag Writing 1 to this bit clears the CMP flag in the LPTIM_ISR register */
    using LPTIM_ICR_CMPMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match clear flag Writing 1 to this bit clears the ARRM flag in the LPTIM_ISR register */
    using LPTIM_ICR_ARRMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger valid edge clear flag Writing 1 to this bit clears the EXTTRIG flag in the LPTIM_ISR register */
    using LPTIM_ICR_EXTTRIGCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register update OK clear flag Writing 1 to this bit clears the CMPOK flag in the LPTIM_ISR register */
    using LPTIM_ICR_CMPOKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK clear flag Writing 1 to this bit clears the ARROK flag in the LPTIM_ISR register */
    using LPTIM_ICR_ARROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to UP clear flag Writing 1 to this bit clear the UP flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ICR_UPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to down clear flag Writing 1 to this bit clear the DOWN flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ICR_DOWNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Enable Register */
    using LPTIM_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare match Interrupt Enable */
    using LPTIM_IER_CMPMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMPM interrupt disabled (value: 0)
     *          - B_0x1: CMPM interrupt enabled (value: 1)
     */
        /** @brief CMPM interrupt disabled */
    constexpr std::uint32_t LPTIM_IER_CMPMIE_B_0x0 = 0;
        /** @brief CMPM interrupt enabled */
    constexpr std::uint32_t LPTIM_IER_CMPMIE_B_0x1 = 1;

    /** @brief Autoreload match Interrupt Enable */
    using LPTIM_IER_ARRMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARRM interrupt disabled (value: 0)
     *          - B_0x1: ARRM interrupt enabled (value: 1)
     */
        /** @brief ARRM interrupt disabled */
    constexpr std::uint32_t LPTIM_IER_ARRMIE_B_0x0 = 0;
        /** @brief ARRM interrupt enabled */
    constexpr std::uint32_t LPTIM_IER_ARRMIE_B_0x1 = 1;

    /** @brief External trigger valid edge Interrupt Enable */
    using LPTIM_IER_EXTTRIGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EXTTRIG interrupt disabled (value: 0)
     *          - B_0x1: EXTTRIG interrupt enabled (value: 1)
     */
        /** @brief EXTTRIG interrupt disabled */
    constexpr std::uint32_t LPTIM_IER_EXTTRIGIE_B_0x0 = 0;
        /** @brief EXTTRIG interrupt enabled */
    constexpr std::uint32_t LPTIM_IER_EXTTRIGIE_B_0x1 = 1;

    /** @brief Compare register update OK Interrupt Enable */
    using LPTIM_IER_CMPOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMPOK interrupt disabled (value: 0)
     *          - B_0x1: CMPOK interrupt enabled (value: 1)
     */
        /** @brief CMPOK interrupt disabled */
    constexpr std::uint32_t LPTIM_IER_CMPOKIE_B_0x0 = 0;
        /** @brief CMPOK interrupt enabled */
    constexpr std::uint32_t LPTIM_IER_CMPOKIE_B_0x1 = 1;

    /** @brief Autoreload register update OK Interrupt Enable */
    using LPTIM_IER_ARROKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARROK interrupt disabled (value: 0)
     *          - B_0x1: ARROK interrupt enabled (value: 1)
     */
        /** @brief ARROK interrupt disabled */
    constexpr std::uint32_t LPTIM_IER_ARROKIE_B_0x0 = 0;
        /** @brief ARROK interrupt enabled */
    constexpr std::uint32_t LPTIM_IER_ARROKIE_B_0x1 = 1;

    /** @brief Direction change to UP Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_IER_UPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UP interrupt disabled (value: 0)
     *          - B_0x1: UP interrupt enabled (value: 1)
     */
        /** @brief UP interrupt disabled */
    constexpr std::uint32_t LPTIM_IER_UPIE_B_0x0 = 0;
        /** @brief UP interrupt enabled */
    constexpr std::uint32_t LPTIM_IER_UPIE_B_0x1 = 1;

    /** @brief Direction change to down Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_IER_DOWNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOWN interrupt disabled (value: 0)
     *          - B_0x1: DOWN interrupt enabled (value: 1)
     */
        /** @brief DOWN interrupt disabled */
    constexpr std::uint32_t LPTIM_IER_DOWNIE_B_0x0 = 0;
        /** @brief DOWN interrupt enabled */
    constexpr std::uint32_t LPTIM_IER_DOWNIE_B_0x1 = 1;

    /** @brief Configuration Register */
    using LPTIM_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock selector The CKSEL bit selects which clock source the LPTIM will use: */
    using LPTIM_CFGR_CKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM is clocked by internal clock source (APB clock or any of the embedded oscillators) (value: 0)
     *          - B_0x1: LPTIM is clocked by an external clock source through the LPTIM external Input1 (value: 1)
     */
        /** @brief LPTIM is clocked by internal clock source (APB clock or any of the embedded oscillators) */
    constexpr std::uint32_t LPTIM_CFGR_CKSEL_B_0x0 = 0;
        /** @brief LPTIM is clocked by an external clock source through the LPTIM external Input1 */
    constexpr std::uint32_t LPTIM_CFGR_CKSEL_B_0x1 = 1;

    /** @brief Clock Polarity If LPTIM is clocked by an external clock source: When the LPTIM is clocked by an external clock source, CKPOL bits is used to configure the active edge or edges used by the counter: If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 1 is active. If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 2 is active. Refer to for more details about Encoder mode sub-modes. */
    using LPTIM_CFGR_CKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the rising edge is the active edge used for counting. (value: 0)
     *          - B_0x1: the falling edge is the active edge used for counting (value: 1)
     *          - B_0x2: both edges are active edges. When both external clock signal edges are considered active ones, the LPTIM must also be clocked by an internal clock source with a frequency equal to at least four times the external clock frequency.If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 3 is active. (value: 2)
     *          - B_0x3: not allowed (value: 3)
     */
        /** @brief the rising edge is the active edge used for counting. */
    constexpr std::uint32_t LPTIM_CFGR_CKPOL_B_0x0 = 0;
        /** @brief the falling edge is the active edge used for counting */
    constexpr std::uint32_t LPTIM_CFGR_CKPOL_B_0x1 = 1;
        /** @brief both edges are active edges. When both external clock signal edges are considered active ones, the LPTIM must also be clocked by an internal clock source with a frequency equal to at least four times the external clock frequency.If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 3 is active. */
    constexpr std::uint32_t LPTIM_CFGR_CKPOL_B_0x2 = 2;
        /** @brief not allowed */
    constexpr std::uint32_t LPTIM_CFGR_CKPOL_B_0x3 = 3;

    /** @brief Configurable digital filter for external clock The CKFLT value sets the number of consecutive equal samples that should be detected when a level change occurs on an external clock signal before it is considered as a valid level transition. An internal clock source must be present to use this feature */
    using LPTIM_CFGR_CKFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any external clock signal level change is considered as a valid transition (value: 0)
     *          - B_0x1: external clock signal level change must be stable for at least 2 clock periods before it is considered as valid transition. (value: 1)
     *          - B_0x2: external clock signal level change must be stable for at least 4 clock periods before it is considered as valid transition. (value: 2)
     *          - B_0x3: external clock signal level change must be stable for at least 8 clock periods before it is considered as valid transition. (value: 3)
     */
        /** @brief any external clock signal level change is considered as a valid transition */
    constexpr std::uint32_t LPTIM_CFGR_CKFLT_B_0x0 = 0;
        /** @brief external clock signal level change must be stable for at least 2 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CFGR_CKFLT_B_0x1 = 1;
        /** @brief external clock signal level change must be stable for at least 4 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CFGR_CKFLT_B_0x2 = 2;
        /** @brief external clock signal level change must be stable for at least 8 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CFGR_CKFLT_B_0x3 = 3;

    /** @brief Configurable digital filter for trigger The TRGFLT value sets the number of consecutive equal samples that should be detected when a level change occurs on an internal trigger before it is considered as a valid level transition. An internal clock source must be present to use this feature */
    using LPTIM_CFGR_TRGFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any trigger active level change is considered as a valid trigger (value: 0)
     *          - B_0x1: trigger active level change must be stable for at least 2 clock periods before it is considered as valid trigger. (value: 1)
     *          - B_0x2: trigger active level change must be stable for at least 4 clock periods before it is considered as valid trigger. (value: 2)
     *          - B_0x3: trigger active level change must be stable for at least 8 clock periods before it is considered as valid trigger. (value: 3)
     */
        /** @brief any trigger active level change is considered as a valid trigger */
    constexpr std::uint32_t LPTIM_CFGR_TRGFLT_B_0x0 = 0;
        /** @brief trigger active level change must be stable for at least 2 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM_CFGR_TRGFLT_B_0x1 = 1;
        /** @brief trigger active level change must be stable for at least 4 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM_CFGR_TRGFLT_B_0x2 = 2;
        /** @brief trigger active level change must be stable for at least 8 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM_CFGR_TRGFLT_B_0x3 = 3;

    /** @brief Clock prescaler The PRESC bits configure the prescaler division factor. It can be one among the following division factors: */
    using LPTIM_CFGR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: /1 (value: 0)
     *          - B_0x1: /2 (value: 1)
     *          - B_0x2: /4 (value: 2)
     *          - B_0x3: /8 (value: 3)
     *          - B_0x4: /16 (value: 4)
     *          - B_0x5: /32 (value: 5)
     *          - B_0x6: /64 (value: 6)
     *          - B_0x7: /128 (value: 7)
     */
        /** @brief /1 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x0 = 0;
        /** @brief /2 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x1 = 1;
        /** @brief /4 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x2 = 2;
        /** @brief /8 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x3 = 3;
        /** @brief /16 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x4 = 4;
        /** @brief /32 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x5 = 5;
        /** @brief /64 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x6 = 6;
        /** @brief /128 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x7 = 7;

    /** @brief Trigger selector The TRIGSEL bits select the trigger source that will serve as a trigger event for the LPTIM among the below 8 available sources: See for details. */
    using LPTIM_CFGR_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_ext_trig0 (value: 0)
     *          - B_0x1: lptim_ext_trig1 (value: 1)
     *          - B_0x2: lptim_ext_trig2 (value: 2)
     *          - B_0x3: lptim_ext_trig3 (value: 3)
     *          - B_0x4: lptim_ext_trig4 (value: 4)
     *          - B_0x5: lptim_ext_trig5 (value: 5)
     *          - B_0x6: lptim_ext_trig6 (value: 6)
     *          - B_0x7: lptim_ext_trig7 (value: 7)
     */
        /** @brief lptim_ext_trig0 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x0 = 0;
        /** @brief lptim_ext_trig1 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x1 = 1;
        /** @brief lptim_ext_trig2 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x2 = 2;
        /** @brief lptim_ext_trig3 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x3 = 3;
        /** @brief lptim_ext_trig4 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x4 = 4;
        /** @brief lptim_ext_trig5 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x5 = 5;
        /** @brief lptim_ext_trig6 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x6 = 6;
        /** @brief lptim_ext_trig7 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x7 = 7;

    /** @brief Trigger enable and polarity The TRIGEN bits controls whether the LPTIM counter is started by an external trigger or not. If the external trigger option is selected, three configurations are possible for the trigger active edge: */
    using LPTIM_CFGR_TRIGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: software trigger (counting start is initiated by software) (value: 0)
     *          - B_0x1: rising edge is the active edge (value: 1)
     *          - B_0x2: falling edge is the active edge (value: 2)
     *          - B_0x3: both edges are active edges (value: 3)
     */
        /** @brief software trigger (counting start is initiated by software) */
    constexpr std::uint32_t LPTIM_CFGR_TRIGEN_B_0x0 = 0;
        /** @brief rising edge is the active edge */
    constexpr std::uint32_t LPTIM_CFGR_TRIGEN_B_0x1 = 1;
        /** @brief falling edge is the active edge */
    constexpr std::uint32_t LPTIM_CFGR_TRIGEN_B_0x2 = 2;
        /** @brief both edges are active edges */
    constexpr std::uint32_t LPTIM_CFGR_TRIGEN_B_0x3 = 3;

    /** @brief Timeout enable The TIMOUT bit controls the Timeout feature */
    using LPTIM_CFGR_TIMOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A trigger event arriving when the timer is already started will be ignored (value: 0)
     *          - B_0x1: A trigger event arriving when the timer is already started will reset and restart the counter (value: 1)
     */
        /** @brief A trigger event arriving when the timer is already started will be ignored */
    constexpr std::uint32_t LPTIM_CFGR_TIMOUT_B_0x0 = 0;
        /** @brief A trigger event arriving when the timer is already started will reset and restart the counter */
    constexpr std::uint32_t LPTIM_CFGR_TIMOUT_B_0x1 = 1;

    /** @brief Waveform shape The WAVE bit controls the output shape */
    using LPTIM_CFGR_WAVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deactivate Set-once mode, PWM or One Pulse waveform depending on how the timer was started, CNTSTRT for PWM or SNGSTRT for One Pulse waveform. (value: 0)
     *          - B_0x1: Activate the Set-once mode (value: 1)
     */
        /** @brief Deactivate Set-once mode, PWM or One Pulse waveform depending on how the timer was started, CNTSTRT for PWM or SNGSTRT for One Pulse waveform. */
    constexpr std::uint32_t LPTIM_CFGR_WAVE_B_0x0 = 0;
        /** @brief Activate the Set-once mode */
    constexpr std::uint32_t LPTIM_CFGR_WAVE_B_0x1 = 1;

    /** @brief Waveform shape polarity The WAVEPOL bit controls the output polarity */
    using LPTIM_CFGR_WAVPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The LPTIM output reflects the compare results between LPTIM_CNT and LPTIM_CMP registers (value: 0)
     *          - B_0x1: The LPTIM output reflects the inverse of the compare results between LPTIM_CNT and LPTIM_CMP registers (value: 1)
     */
        /** @brief The LPTIM output reflects the compare results between LPTIM_CNT and LPTIM_CMP registers */
    constexpr std::uint32_t LPTIM_CFGR_WAVPOL_B_0x0 = 0;
        /** @brief The LPTIM output reflects the inverse of the compare results between LPTIM_CNT and LPTIM_CMP registers */
    constexpr std::uint32_t LPTIM_CFGR_WAVPOL_B_0x1 = 1;

    /** @brief Registers update mode The PRELOAD bit controls the LPTIM_ARR and the LPTIM_CMP registers update modality */
    using LPTIM_CFGR_PRELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Registers are updated after each APB bus write access (value: 0)
     *          - B_0x1: Registers are updated at the end of the current LPTIM period (value: 1)
     */
        /** @brief Registers are updated after each APB bus write access */
    constexpr std::uint32_t LPTIM_CFGR_PRELOAD_B_0x0 = 0;
        /** @brief Registers are updated at the end of the current LPTIM period */
    constexpr std::uint32_t LPTIM_CFGR_PRELOAD_B_0x1 = 1;

    /** @brief counter mode enabled The COUNTMODE bit selects which clock source is used by the LPTIM to clock the counter: */
    using LPTIM_CFGR_COUNTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the counter is incremented following each internal clock pulse (value: 0)
     *          - B_0x1: the counter is incremented following each valid clock pulse on the LPTIM external Input1 (value: 1)
     */
        /** @brief the counter is incremented following each internal clock pulse */
    constexpr std::uint32_t LPTIM_CFGR_COUNTMODE_B_0x0 = 0;
        /** @brief the counter is incremented following each valid clock pulse on the LPTIM external Input1 */
    constexpr std::uint32_t LPTIM_CFGR_COUNTMODE_B_0x1 = 1;

    /** @brief Encoder mode enable The ENC bit controls the Encoder mode Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_CFGR_ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Encoder mode disabled (value: 0)
     *          - B_0x1: Encoder mode enabled (value: 1)
     */
        /** @brief Encoder mode disabled */
    constexpr std::uint32_t LPTIM_CFGR_ENC_B_0x0 = 0;
        /** @brief Encoder mode enabled */
    constexpr std::uint32_t LPTIM_CFGR_ENC_B_0x1 = 1;

    /** @brief Control Register */
    using LPTIM_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM enable The ENABLE bit is set and cleared by software. */
    using LPTIM_CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM is disabled (value: 0)
     *          - B_0x1: LPTIM is enabled (value: 1)
     */
        /** @brief LPTIM is disabled */
    constexpr std::uint32_t LPTIM_CR_ENABLE_B_0x0 = 0;
        /** @brief LPTIM is enabled */
    constexpr std::uint32_t LPTIM_CR_ENABLE_B_0x1 = 1;

    /** @brief LPTIM start in Single mode This bit is set by software and cleared by hardware. In case of software start (TRIGEN[1:0] = '00'), setting this bit starts the LPTIM in single pulse mode. If the software start is disabled (TRIGEN[1:0] different than '00'), setting this bit starts the LPTIM in single pulse mode as soon as an external trigger is detected. If this bit is set when the LPTIM is in continuous counting mode, then the LPTIM will stop at the following match between LPTIM_ARR and LPTIM_CNT registers. This bit can only be set when the LPTIM is enabled. It will be automatically reset by hardware. */
    using LPTIM_CR_SNGSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer start in Continuous mode This bit is set by software and cleared by hardware. In case of software start (TRIGEN[1:0] = '00'), setting this bit starts the LPTIM in Continuous mode. If the software start is disabled (TRIGEN[1:0] different than '00'), setting this bit starts the timer in Continuous mode as soon as an external trigger is detected. If this bit is set when a single pulse mode counting is ongoing, then the timer will not stop at the next match between the LPTIM_ARR and LPTIM_CNT registers and the LPTIM counter keeps counting in Continuous mode. This bit can be set only when the LPTIM is enabled. It will be automatically reset by hardware. */
    using LPTIM_CR_CNTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter reset This bit is set by software and cleared by hardware. When set to '1' this bit will trigger a synchronous reset of the LPTIM_CNT counter register. Due to the synchronous nature of this reset, it only takes place after a synchronization delay of 3 LPTimer core clock cycles (LPTimer core clock may be different from APB clock). COUNTRST must never be set to '1' by software before it is already cleared to '0' by hardware. Software should consequently check that COUNTRST bit is already cleared to '0' before attempting to set it to '1'. */
    using LPTIM_CR_COUNTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset after read enable This bit is set and cleared by software. When RSTARE is set to '1', any read access to LPTIM_CNT register will asynchronously reset LPTIM_CNT register content. */
    using LPTIM_CR_RSTARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare Register */
    using LPTIM_CMP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare value */
    using LPTIM_CMP_CMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload Register */
    using LPTIM_ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto reload value */
    using LPTIM_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter Register */
    using LPTIM_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using LPTIM_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM configuration register 2 */
    using LPTIM_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM input 1 selection The IN1SEL bits control the LPTIM Input 1 multiplexer, which connects LPTIM Input 1 to one of the available inputs. For connection details refer to . */
    using LPTIM_CFGR2_IN1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_in1_mux0 (value: 0)
     *          - B_0x1: lptim_in1_mux1 (value: 1)
     *          - B_0x2: lptim_in1_mux2 (value: 2)
     *          - B_0x3: lptim_in1_mux3 (value: 3)
     */
        /** @brief lptim_in1_mux0 */
    constexpr std::uint32_t LPTIM_CFGR2_IN1SEL_B_0x0 = 0;
        /** @brief lptim_in1_mux1 */
    constexpr std::uint32_t LPTIM_CFGR2_IN1SEL_B_0x1 = 1;
        /** @brief lptim_in1_mux2 */
    constexpr std::uint32_t LPTIM_CFGR2_IN1SEL_B_0x2 = 2;
        /** @brief lptim_in1_mux3 */
    constexpr std::uint32_t LPTIM_CFGR2_IN1SEL_B_0x3 = 3;

    /** @brief LPTIM input 2 selection The IN2SEL bits control the LPTIM Input 2 multiplexer, which connect LPTIM Input 2 to one of the available inputs. For connection details refer to . Note: If the LPTIM does not support encoder mode feature, these bits are reserved. Please refer to . */
    using LPTIM_CFGR2_IN2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_in2_mux0 (value: 0)
     *          - B_0x1: lptim_in2_mux1 (value: 1)
     *          - B_0x2: lptim_in2_mux2 (value: 2)
     *          - B_0x3: lptim_in2_mux3 (value: 3)
     */
        /** @brief lptim_in2_mux0 */
    constexpr std::uint32_t LPTIM_CFGR2_IN2SEL_B_0x0 = 0;
        /** @brief lptim_in2_mux1 */
    constexpr std::uint32_t LPTIM_CFGR2_IN2SEL_B_0x1 = 1;
        /** @brief lptim_in2_mux2 */
    constexpr std::uint32_t LPTIM_CFGR2_IN2SEL_B_0x2 = 2;
        /** @brief lptim_in2_mux3 */
    constexpr std::uint32_t LPTIM_CFGR2_IN2SEL_B_0x3 = 3;

}

#endif
